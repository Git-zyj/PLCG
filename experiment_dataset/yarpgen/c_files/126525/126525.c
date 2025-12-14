/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    arr_8 [i_0] [1] [i_0] = (((((-(arr_7 [i_1] [i_2 - 1] [i_0])))) ? (var_4 % var_18) : var_7));
                    var_20 = (min((arr_3 [i_2] [i_1]), (((arr_2 [i_1] [i_2 + 2]) ? (((arr_3 [i_1] [5]) ? var_19 : var_13)) : var_0))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] = var_6;
                                var_21 = (max(var_21, (((122 ? ((((arr_9 [i_2 - 2] [i_2 - 2] [i_2 - 2]) + var_9))) : (arr_10 [i_0] [i_2 - 1] [i_2 - 1] [i_3] [i_4]))))));
                                var_22 += var_12;
                            }
                        }
                    }
                    var_23 ^= ((max((arr_11 [i_2 - 1] [i_2 - 2] [i_2 + 2] [i_2 - 1] [i_2 - 2]), 1)));
                }
                var_24 = (max(var_24, ((min(4730344788343244114, -8615741969888563390)))));
            }
        }
    }
    var_25 = ((1 ? ((((!4730344788343244114) % 122))) : 13716399285366307501));
    #pragma endscop
}
