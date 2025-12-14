/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_17 [i_4] [i_0] [i_0] [i_0] = (((min((6187 * 0), ((min((arr_10 [i_4] [i_2] [i_2]), (arr_12 [i_4] [i_0] [i_1] [i_1] [i_0] [i_0])))))) == ((((166 && 9823317056597436428) && ((var_9 <= (arr_8 [i_0] [22] [i_4]))))))));
                                var_13 = (min((min((!var_11), (((var_6 + 2147483647) << (64451 - 64451))))), var_9));
                                arr_18 [i_0] = (-6188 & ((var_0 ? ((var_9 ? var_12 : -17927)) : ((((arr_15 [i_0] [i_0] [i_0]) & var_2))))));
                                var_14 *= 8623427017112115187;
                                arr_19 [i_4] [i_3] [i_0] [i_1] [i_0] = (((min((arr_9 [i_3] [i_0] [i_3 - 1] [i_3 + 1]), (arr_9 [i_3] [i_0] [i_3 - 1] [i_3 + 1]))) <= ((-(arr_9 [i_3] [i_0] [i_3 - 1] [i_3 + 1])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                arr_24 [i_6] [15] [i_0] [i_6] [13] = var_11;
                                var_15 = (min((((var_6 == (min(var_1, var_10))))), (arr_22 [i_0] [i_1] [i_2 + 2] [i_6] [i_0])));
                            }
                        }
                    }
                    arr_25 [10] [i_0] [i_2] = ((((((((arr_14 [i_0] [i_1]) / (arr_21 [i_2 + 1] [i_0] [i_0] [i_1] [i_0] [i_0]))) <= var_5))) <= -6187));
                }
            }
        }
    }
    var_16 = ((var_12 == (min((((var_2 ? var_1 : 0))), ((var_10 ? var_7 : var_7))))));
    #pragma endscop
}
