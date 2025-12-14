/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 6246;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = (((min(2147483647, 14425))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_17 -= var_5;
                                var_18 = 65535;
                                arr_15 [i_4] [i_4] [i_4] [i_0] [i_2] [i_1] [i_0] = (((var_11 + 2147483647) << (((!18446744073709551613) / (~var_7)))));
                                arr_16 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0] = (min(((var_10 ? (arr_3 [i_0] [i_1] [i_0 + 3]) : (arr_3 [i_0 + 2] [i_0 + 2] [i_0 + 3]))), ((min((arr_5 [i_0] [i_0] [i_0]), (arr_2 [i_0 - 2] [i_0 - 2]))))));
                            }
                        }
                    }
                }
                var_19 = (min(((-(min(2147483647, (arr_3 [i_0] [i_0 + 1] [i_0 + 1]))))), ((min(-2147483647, 0)))));
            }
        }
    }
    var_20 = var_4;
    #pragma endscop
}
