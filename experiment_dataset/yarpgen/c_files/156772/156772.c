/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_3, var_13));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_20 = ((((var_10 * (arr_8 [i_2] [i_1] [i_1 + 2] [i_1])))) * 0);
                            arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] = (((((!0) ? (((7505193372437201730 ? var_11 : var_7))) : -7505193372437201720)) >= (min((((arr_0 [i_0]) ? var_18 : var_17)), 1))));
                            var_21 = (arr_4 [i_1 + 2] [i_1 + 1]);
                        }
                    }
                }
                arr_11 [i_1] [i_0] [i_0] = (max(var_9, var_10));
                var_22 += ((-(((arr_0 [i_0]) ? (max(2701893251653631083, var_17)) : 54242))));
                var_23 -= (((arr_6 [i_0] [i_1 + 1] [i_1 + 1] [i_1]) <= -7181878249751798109));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                {
                    var_24 -= (((max(((var_16 << (((((((-2147483647 - 1) - -2147483627)) + 48)) - 19)))), (arr_16 [i_5 + 2]))) << ((var_2 ? (arr_12 [i_4] [i_5 + 1]) : ((-2701893251653631084 ? (arr_13 [i_4] [i_4]) : 4))))));
                    arr_20 [i_4] [i_4] [i_6] = ((((((var_15 ? -3233459522023826471 : 1463164474))) ? ((((arr_19 [i_4] [i_4] [i_4] [4]) <= 18446744073709551597))) : ((((arr_13 [i_4] [i_5 + 3]) > var_3))))));
                }
            }
        }
    }
    #pragma endscop
}
