/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;
    var_16 = (min(var_16, ((var_8 && ((min(var_4, 2076354399)))))));
    var_17 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_18 = (max(((((max(var_3, var_13))) + ((var_0 ? (arr_5 [i_0] [i_0] [i_1]) : var_11)))), ((min(((1 ? 1 : 1)), var_4)))));
                arr_6 [i_0 - 1] [i_1] [i_0 - 1] = ((((min((arr_5 [i_0] [i_0 + 4] [i_0 - 1]), var_3))) ? (max((arr_5 [1] [i_0 + 3] [i_0 + 2]), (arr_5 [i_0 + 3] [i_0 + 4] [i_0 + 1]))) : (min(var_11, (arr_5 [1] [i_0 + 2] [i_0 + 1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_19 = ((1 ? 3024692117 : 32668));
                            var_20 = (((4005970701328487004 != 1) != -0));
                            var_21 = (max(((min(((145 ? var_13 : var_9)), ((min(var_9, 1)))))), 2076354399));
                        }
                    }
                }
            }
        }
    }
    var_22 |= var_14;
    #pragma endscop
}
