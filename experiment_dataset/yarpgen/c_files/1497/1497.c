/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((min(var_12, var_3))) && -var_4)));
    var_14 = (((((min(var_10, var_12)))) ? var_5 : (((-(!var_12))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] [15] = ((!((((var_12 ? var_2 : var_9))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_15 = (((((arr_0 [14]) ? (arr_12 [14] [i_1] [1] [9]) : var_9))));
                            var_16 = (min(var_16, (((((var_5 << (var_6 - 14903959244713682420))))))));
                        }
                    }
                }
                var_17 *= ((~(arr_9 [14] [14] [10])));
                var_18 = min(((((max((arr_0 [7]), var_0))) ? ((((arr_7 [1]) ? (arr_8 [9] [i_0]) : (arr_10 [i_0] [i_0])))) : var_10)), var_0);
            }
        }
    }
    var_19 = var_8;
    #pragma endscop
}
