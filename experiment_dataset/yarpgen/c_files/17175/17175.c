/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= (min(-2143488318690291788, var_6));
    var_21 = 3968;
    var_22 = (min(((-(var_18 / 10405))), (((var_9 << (var_7 <= 3314896761))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] &= (max((((!((min(var_17, var_8)))))), (max(var_5, (((3217258608 ? var_1 : var_10)))))));
                var_23 = (((((0 | 980070548) ? ((6179 ? var_18 : (-2147483647 - 1))) : 0)) / (980070548 - -1921293721)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_11 [i_0 - 1] [i_3] [7] [i_0] = (-4294967295 % 3451377474399230122);
                            arr_12 [i_0] [i_1] [i_1] [i_1] [i_2] [i_3] = (min((((231912889988714593 - var_12) | ((max(var_15, var_19))))), ((min((var_0 | var_17), ((max(38537, var_13))))))));
                        }
                    }
                }
                arr_13 [1] = ((((((max(var_7, 0))) ? 30 : (1 / var_8))) | (var_18 && 980070534)));
                var_24 = ((~(max((~var_13), 0))));
            }
        }
    }
    #pragma endscop
}
