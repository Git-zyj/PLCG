/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = min(var_10, (min(59818, var_3)));
    var_12 = var_10;
    var_13 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((var_3 & var_3) < (var_3 | var_0)));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_14 = ((-(!55790)));
                            var_15 = (max((max(var_7, var_2)), (min(33068, var_3))));
                            var_16 = ((((max(var_6, 65268))) * var_3));
                            var_17 = ((~(~var_8)));
                            var_18 = 16445;
                        }
                    }
                }
                var_19 = ((((65535 ? 65535 : 0)) % (((((var_10 ? var_5 : 11)) >= ((2 ? 10981 : 896)))))));
            }
        }
    }
    #pragma endscop
}
