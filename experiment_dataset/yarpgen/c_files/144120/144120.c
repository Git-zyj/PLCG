/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_12 [i_1] [i_3] [7] [i_3] [i_2 + 2] = -71;
                                arr_13 [i_3] [i_3] = (max(((max((var_10 || 76), (min(var_5, (arr_1 [i_1 + 1])))))), (min(1373700566, 0))));
                                var_16 = ((~(arr_7 [i_0])));
                            }
                        }
                    }
                }
                arr_14 [i_1 - 2] [i_0] = (((((14838638721212135189 ? 14838638721212135184 : 3132928275))) ? (min(14838638721212135189, var_2)) : 3608105352497416426));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 17;i_6 += 1)
        {
            {
                var_17 *= ((((((4095 ? 33 : -811749512)) >= ((min((arr_3 [i_5] [i_6 + 1]), 55))))) ? var_9 : ((var_9 ? 5291041452298547518 : var_0))));
                arr_21 [i_5] = (arr_0 [i_5] [i_5 + 2]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 17;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            {
                var_18 = (max(var_18, ((((~var_14) ? ((3608105352497416425 ? (!var_0) : var_12)) : (max(251619413, -124)))))));
                arr_26 [i_8] = (((((var_9 ? var_12 : 5900085705295762058))) - ((var_6 ? 3195404941 : var_6))));
            }
        }
    }
    var_19 = (max(var_19, var_6));
    #pragma endscop
}
