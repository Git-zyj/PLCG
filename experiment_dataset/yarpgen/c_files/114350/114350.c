/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_2] [i_2] = (((((~2) || (arr_1 [i_1 + 2] [i_1 + 1]))) ? ((((((arr_5 [i_2] [i_2]) | var_10))) ? (min(var_4, (arr_3 [i_0] [i_1]))) : (arr_1 [i_1] [i_2]))) : ((((arr_2 [i_1]) ? ((~(-127 - 1))) : var_3)))));
                    arr_7 [i_0] [i_0] [i_0] &= 2;
                    arr_8 [i_2] [i_2] [i_2] = (arr_5 [i_2] [i_2]);
                    var_14 = ((((max((max(2943159806, 11211235399099052657)), ((min((arr_2 [7]), (arr_3 [i_0] [i_1]))))))) ? (((-26567 ? ((268431360 ? -268431366 : 27)) : -268431347))) : (((arr_2 [i_0]) ? (-97 & 18) : (max((arr_5 [i_2] [i_2]), (arr_3 [i_0] [i_0])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_15 ^= (((((arr_1 [i_1 + 2] [i_4 - 3]) ? -7651797555817120458 : (arr_14 [4] [1] [i_0] [i_1 - 1] [i_0]))) < ((((((max(4657, -509574693))) || 2147483647))))));
                                var_16 = (!65535);
                                var_17 = (arr_10 [i_2] [i_2] [i_1] [i_2]);
                                var_18 = (max(var_18, ((((arr_13 [i_0] [i_1 + 2] [i_2] [i_3] [i_4 - 2] [i_3] [i_4 - 2]) && (-2147483647 - 1))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = var_4;
    #pragma endscop
}
