/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, var_10));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_14 [3] [i_1] [2] = ((((((((-9223372036854775807 - 1) || 255)) ? ((11969 / (arr_9 [i_0] [i_1] [i_0] [i_3] [i_4]))) : ((var_9 ? (arr_3 [i_0] [i_1]) : (arr_2 [i_1])))))) ? (min(7569383466447408497, ((-7569383466447408498 ^ (arr_3 [15] [15]))))) : ((((arr_3 [i_1] [i_2]) ? 328479621 : (arr_3 [i_3] [i_0]))))));
                                var_17 &= (11468 ? 11468 : 19685);
                            }
                        }
                    }
                    var_18 = (+((((arr_8 [i_0] [i_1] [i_1] [i_2] [i_2] [i_2]) <= 8388576))));
                }
            }
        }
    }
    var_19 = var_2;
    #pragma endscop
}
