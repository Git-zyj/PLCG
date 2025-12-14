/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((var_16 ? var_16 : var_8)))));

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_19 = (max(137438937088, (((!((((arr_4 [i_0] [i_0]) ? (arr_2 [i_0]) : -24632))))))));
            var_20 ^= (((((((((arr_1 [i_1]) ? (arr_4 [i_0] [i_1]) : (arr_1 [i_1])))) ? (arr_4 [7] [7]) : 24619))) ? (min(((var_6 ? (arr_1 [i_0]) : (-2147483647 - 1))), (max((arr_3 [i_1] [5] [i_0]), (arr_1 [4]))))) : (arr_2 [6])));
        }
        for (int i_2 = 3; i_2 < 9;i_2 += 1)
        {
            var_21 = (max((arr_6 [i_0 - 1]), (max((arr_6 [i_0 - 2]), (arr_6 [i_0 + 1])))));
            var_22 = (min(var_22, ((((((-(arr_3 [i_0] [i_0] [i_0 + 1])))) ? (1073741824 / var_5) : ((+((max((arr_2 [i_2]), (arr_7 [i_0] [i_2])))))))))));
            var_23 *= (((!-937391888) ? var_1 : var_9));
        }
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 8;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    var_24 ^= 24632;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_25 &= ((((((-(-32767 - 1))))) ? ((((((arr_8 [i_5] [1]) ? 28929 : var_13))))) : ((var_11 ? ((var_3 ? var_7 : 28929)) : (((((arr_17 [i_0]) < (arr_15 [i_0] [i_3] [i_0] [9] [9] [7])))))))));
                                var_26 = (max(var_26, (((((-28929 && ((((arr_7 [i_0] [i_0]) ? var_1 : (arr_12 [i_0])))))) || ((!((max((arr_12 [i_0]), var_16))))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
