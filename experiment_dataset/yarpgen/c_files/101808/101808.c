/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 = var_1;
                                var_15 = ((+(((arr_4 [i_1 + 1] [i_1 - 1]) ? (arr_11 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_2 + 1]) : var_2))));
                                var_16 = (((((9223372036854775807 ? 57720 : 17453))) ? 18446744073709551615 : 14797));
                            }
                        }
                    }
                }
                var_17 = (arr_10 [i_0] [i_0] [i_0] [i_0]);
                arr_13 [i_0] [16] = 5037929841899603424;
            }
        }
    }
    var_18 = ((-(((var_5 + 2147483647) << (var_9 - 54442)))));
    #pragma endscop
}
