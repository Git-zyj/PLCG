/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_11, var_11));
    var_17 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_18 &= var_4;

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_19 = ((!214) > (min(((((arr_4 [i_2]) ? var_10 : (arr_13 [6] [i_1] [i_2] [i_2] [i_3 - 2] [i_3 - 2] [i_4])))), (min(var_3, (arr_15 [i_1] [i_1] [10] [i_3 - 1] [1] [10] [i_4]))))));
                                var_20 = ((!((min((((arr_1 [i_0] [i_1]) + var_13)), ((31 << (20583 - 20581))))))));
                                var_21 = (i_1 % 2 == zero) ? ((max(((min((arr_15 [i_1] [i_0 + 1] [i_3 + 3] [i_3 + 3] [i_0 + 1] [i_0 + 1] [i_3]), (arr_15 [i_1] [i_0 + 1] [i_3 + 3] [i_4] [i_4] [i_4] [i_4])))), ((-31697 / (max((arr_15 [i_1] [i_1] [i_2] [i_2] [i_1] [i_4] [i_3]), (arr_7 [i_1])))))))) : ((max(((min((arr_15 [i_1] [i_0 + 1] [i_3 + 3] [i_3 + 3] [i_0 + 1] [i_0 + 1] [i_3]), (arr_15 [i_1] [i_0 + 1] [i_3 + 3] [i_4] [i_4] [i_4] [i_4])))), ((-31697 * (max((arr_15 [i_1] [i_1] [i_2] [i_2] [i_1] [i_4] [i_3]), (arr_7 [i_1]))))))));
                            }
                        }
                    }
                    var_22 = ((-(arr_2 [i_0])));
                }
                var_23 = (min(var_23, ((((((var_1 ^ ((max((arr_15 [1] [1] [14] [i_1] [i_1] [i_1] [i_1]), var_13)))))) ? (min((~65504), var_13)) : ((max((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0 - 1] [8]), (arr_13 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0 + 1] [i_1])))))))));
                var_24 = (((!var_4) ^ (min((arr_6 [4]), (min((arr_6 [0]), (arr_0 [i_0])))))));
            }
        }
    }
    #pragma endscop
}
