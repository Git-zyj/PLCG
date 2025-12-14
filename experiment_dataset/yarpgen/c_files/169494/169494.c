/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= 60271;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [i_0] = ((((min((arr_5 [i_0] [i_2] [i_2 - 1]), (arr_5 [i_0] [i_0] [i_2 - 1])))) ? (arr_5 [i_0] [i_1] [i_2 - 1]) : (arr_5 [i_0] [i_1] [i_2 - 1])));
                    arr_9 [i_0] [i_1] [i_1] = (((((15928952220761869604 ? (arr_5 [i_0] [i_2 - 1] [i_2 - 1]) : 1))) ? -34 : var_9));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_19 = (min(var_19, (arr_2 [1])));
                    var_20 = 1;
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_21 = ((min(1, (max(4, (arr_14 [i_0] [i_1] [i_4] [i_4] [i_4] [i_5]))))));
                                arr_17 [i_0] [i_0] = -var_13;
                                var_22 = (max(var_22, (arr_4 [i_4 + 1] [i_4 - 3])));
                            }
                        }
                    }
                }
                var_23 ^= (arr_5 [16] [i_1] [16]);
            }
        }
    }
    #pragma endscop
}
