/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_9, (((~225) - 31))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [4] [i_1] = (arr_3 [20] [i_0] [i_0]);
                arr_6 [1] [i_0] = (((var_14 < (arr_4 [i_0] [i_1] [i_1]))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_12 [i_3] [i_2] [i_0] = ((var_1 | (arr_9 [i_2 - 1] [i_0])));
                            arr_13 [i_2] [1] [i_2] = ((((var_2 ^ var_0) | 18446744073709551615)));
                        }
                    }
                }
            }
        }
    }
    var_17 = ((((var_10 ^ var_7) | (((31 << (var_9 - 102)))))));
    var_18 &= var_1;
    var_19 = var_15;
    #pragma endscop
}
