/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += var_15;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] = 6905208826724602007;
                arr_7 [i_0 - 4] [i_0 - 4] = var_15;
                var_18 = 6905208826724601988;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_19 = (max(var_19, 2726652490444266438));
                var_20 = 2726652490444266428;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_21 = min((((((~(arr_4 [i_2])))) ? -1 : -1652733757991163731)), ((max((arr_13 [i_3] [i_3]), (min((arr_14 [i_2] [i_3]), (arr_11 [i_2])))))));
                            var_22 = (min(-2726652490444266438, ((~(max(var_0, var_7))))));
                            var_23 = 1;
                        }
                    }
                }
            }
        }
    }
    var_24 += (((((((min(var_6, 6592864800014380224))) ? var_16 : (((max(var_12, var_12))))))) ? var_15 : 1));
    #pragma endscop
}
