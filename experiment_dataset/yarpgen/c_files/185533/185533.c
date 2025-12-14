/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_14 = (((arr_0 [i_0]) ? (((((-1742947289 ? 76 : 1))) ? (2234777222 / var_12) : var_8)) : (!2234777195)));
                            var_15 = var_13;
                            var_16 = (min(var_16, ((((((var_9 ^ 1742947309) ? var_10 : var_13)) | (max(-1879174478, 1601727305)))))));
                        }
                    }
                }
                var_17 &= ((((458089066 ? ((var_6 ? (arr_0 [i_0]) : (arr_9 [i_1] [i_1] [i_1] [i_0]))) : var_1)) + var_4));
                var_18 = (((720904377 + 2147483647) >> (((((-2147483647 - 1) % -var_5)) + 596296261))));
            }
        }
    }
    var_19 &= (min((((~var_11) ? var_2 : var_8)), var_11));
    var_20 = var_6;
    #pragma endscop
}
