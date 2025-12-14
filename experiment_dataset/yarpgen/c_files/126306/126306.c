/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_12;
    var_20 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = var_14;
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_21 = var_12;
                                arr_14 [i_0] [i_4] [1] [i_2] [4] [i_0] = ((+(((arr_13 [i_0] [i_2 - 1] [i_2 - 1] [i_2 - 1]) << (var_16 - 2483782940)))));
                                var_22 = ((((((63 | 18496) ? 659335243 : (~-2082751718)))) ? var_13 : -1));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = ((var_16 ? (var_18 > 137438953471) : (((18446743936270598145 == var_5) ? 137438953457 : (((min(var_1, var_14))))))));
    #pragma endscop
}
