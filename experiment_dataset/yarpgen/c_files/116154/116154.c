/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= (((~var_8) ? -var_7 : var_1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_12 &= ((+((((arr_7 [i_1 - 1] [i_1 - 1] [i_1 - 1]) != (arr_7 [i_1 + 1] [i_1 + 2] [i_1 + 2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_13 = ((-1947098490 != ((-(arr_12 [i_0] [i_0])))));
                                var_14 = (max(var_14, ((18446744073709551615 > ((((((18446744073709551598 != (arr_0 [i_0] [i_0]))))) & (max((arr_3 [i_1] [i_2] [8]), 2146435072))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = ((((max((min(-878267433, 2148532208)), (~var_2)))) ? (32768 + 2148532228) : ((((var_3 > 192) / (17221 << var_7))))));
    #pragma endscop
}
