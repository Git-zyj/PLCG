/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    var_14 = ((((((((arr_4 [i_2 + 1] [i_2 + 1]) + 2147483647)) >> (((arr_4 [i_2 + 1] [i_2 + 1]) + 17194))))) ? var_5 : (((!1) ? 1 : 5599))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [6] [i_2] [i_0] = max(4932294195917012269, ((1 ? 22 : -235782822)));
                                var_15 = ((((((((1 ? (arr_3 [i_1] [i_2] [i_4 + 1]) : 102))) ? -3152851014711991410 : (((arr_8 [i_0]) ? var_3 : 8316570967510022496))))) || ((((arr_8 [10]) & (((arr_9 [i_0] [i_2 + 1] [i_4]) ? (arr_6 [i_0] [i_4]) : 7)))))));
                            }
                        }
                    }
                    arr_17 [i_2] = (861700240442187890 >= ((((((1 ? -1 : var_7))) ? 1 : ((31 & (arr_15 [13] [i_1])))))));
                }
                var_16 = (min(-235782822, (((max(1, -17)) + (arr_5 [1])))));
                arr_18 [i_0] [i_0] = ((1527171535 ? 1788789725 : ((-1442638004 ? (arr_0 [i_0]) : 2505849014))));
            }
        }
    }
    var_17 = var_5;
    #pragma endscop
}
