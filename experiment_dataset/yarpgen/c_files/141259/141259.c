/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (+(((var_3 - var_0) ? var_6 : 2092)));
    var_13 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_3] [i_2 - 1] [i_2 - 1] [i_3] = var_8;
                            arr_13 [i_3] [i_1] [i_1] [i_1] = (((((~(arr_8 [i_1] [i_1] [i_1])))) ? (((!(arr_0 [i_2 + 1])))) : (((((2091 ? 65532 : (arr_8 [3] [6] [6])))) ? ((max(var_7, 2092))) : var_4))));
                        }
                    }
                }
                arr_14 [i_0] [6] = ((1828502603838157143 ? ((4294967295 ? 6639899236636988034 : (((1828502603838157149 ? -3406804365826861233 : 85))))) : (~0)));
                var_14 = ((-(-13220 - -249)));
                arr_15 [i_0] = var_1;
            }
        }
    }
    #pragma endscop
}
