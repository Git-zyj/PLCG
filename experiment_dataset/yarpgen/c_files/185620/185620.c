/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max((max(var_3, var_9)), -35));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_14 = 14692;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_15 |= (min((max(((25818 ? -925658623 : -106)), ((3 ? -925658628 : -119)))), -7));
                                var_16 = (max(var_16, (59 && 34)));
                                var_17 = (max(((((65535 ? 32756 : 0)))), ((20 ? (-60 >= -4446879686979253185) : (arr_3 [i_3] [i_0 + 1])))));
                                var_18 = 7066210;
                            }
                        }
                    }
                    arr_13 [i_0] [i_0] [i_2] = 1;
                    var_19 ^= (~18);
                    var_20 |= 86;
                }
            }
        }
    }
    var_21 ^= (min(6, -18679));
    var_22 = (max(var_22, (50843 | 4294967275)));
    #pragma endscop
}
