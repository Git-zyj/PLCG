/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += ((((min(((var_5 ? var_4 : 40)), var_4))) ? ((~(max(17665317385091770918, 6979)))) : 1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_11 = ((!((max(4294967295, (arr_0 [i_0]))))));
                            arr_11 [i_1] [i_2] [i_0] = (~3);
                            var_12 = (((~1) ? (arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 1]) : (arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 1])));
                            var_13 = (1 - 71);
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    var_14 *= ((-((((max((arr_1 [i_4] [i_1 + 1]), (arr_7 [i_4] [0] [8])))) ? (max((arr_13 [i_0] [i_1 + 1] [i_4]), (arr_1 [i_4] [i_1]))) : (var_4 > var_2)))));
                    var_15 = 104;
                }
                var_16 |= (arr_10 [i_0] [i_1] [i_1 + 1] [i_1] [i_0] [i_1 + 1]);
            }
        }
    }
    var_17 = (max((max((-1 || 81), var_3)), var_0));
    #pragma endscop
}
