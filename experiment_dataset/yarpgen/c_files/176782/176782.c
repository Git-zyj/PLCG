/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!-1077906393);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    var_18 = ((~(arr_8 [i_0] [i_2] [i_2] [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 *= (arr_10 [i_0] [i_2 + 1] [3] [i_4 - 1]);
                                var_20 = (min(var_20, ((min((~18202034649799361782), (((arr_10 [i_0] [i_1] [i_3] [i_4]) ^ (arr_3 [i_0]))))))));
                            }
                        }
                    }
                    arr_13 [11] [i_2] = ((((((min((arr_1 [i_0] [i_0]), (arr_6 [i_0])))) ? -19683 : (((arr_11 [4] [i_1] [4] [17] [i_2 - 3]) ? var_16 : (arr_7 [i_0] [i_1] [i_2]))))) > ((((arr_0 [i_0 + 2] [i_0 - 1]) ? (((arr_11 [i_2 - 2] [i_1] [i_0] [i_1] [i_1]) ? (arr_6 [i_2 + 4]) : (arr_7 [i_2] [i_1] [i_2]))) : (arr_8 [i_0] [i_0] [i_2] [i_2 - 2]))))));
                    var_21 = (min(((((min((arr_5 [i_1] [i_2 - 3]), (arr_6 [i_1])))) ? (((max((arr_7 [i_2] [i_1] [i_2]), (arr_6 [i_0]))))) : (max((arr_11 [i_0 + 2] [i_0 + 2] [1] [i_0] [i_0]), 1590964602826479018)))), (-9223372036854775807 - 1)));
                }
            }
        }
    }
    #pragma endscop
}
