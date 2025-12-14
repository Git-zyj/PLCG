/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= (!var_13);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((((4951 ? var_4 : ((min((arr_2 [i_0]), 1))))) | (~var_5)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_1] [i_0] = (arr_8 [i_0] [i_1] [i_2] [i_2] [i_2] [14]);
                            arr_11 [i_0] [i_2] [i_1] [i_0] = ((((((~(arr_4 [i_0])))) ? (((arr_4 [i_0]) ^ var_2)) : 145)));
                            var_15 -= (((((var_1 ^ ((((arr_4 [12]) || var_0)))))) ? (((((arr_9 [i_2] [i_2] [1] [i_0]) ? 1 : var_13)))) : (max((var_13 % var_0), 1))));
                            arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (max((((~1) ? (((arr_8 [i_0] [i_3] [i_2] [i_1] [i_1] [i_0]) ? 1 : 1)) : 1)), (((arr_6 [i_0] [i_1] [6] [i_3 + 1]) | (((arr_2 [i_0]) ? 102 : 3402))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            arr_20 [11] [7] [i_0] [i_5] [i_0] = (arr_4 [i_0]);
                            arr_21 [i_0] [i_1] [i_1] [i_1] [i_0] [i_5] = var_4;
                            var_16 = (min(var_16, 18));
                        }
                    }
                }
                arr_22 [1] [i_0] [i_0] = ((+(((((arr_19 [i_0] [i_0]) ? 18446744073709551596 : (arr_8 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1])))))));
            }
        }
    }
    var_17 = (-var_0 <= var_4);
    #pragma endscop
}
