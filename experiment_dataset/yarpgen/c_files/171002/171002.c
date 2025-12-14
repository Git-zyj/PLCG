/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_15 = (((((-(arr_5 [i_0 + 1] [i_0] [i_0])))) != (min(((~(arr_7 [i_0] [i_0] [i_0]))), (((1395110325 ? -1546827644 : -1)))))));
                                var_16 ^= 10142154987247036665;
                                var_17 = 4294967295;
                                arr_13 [i_0] [i_0] [0] [1] &= (var_10 ? (!13573) : (min(((max(1, 223))), (39 * 16719559036562863780))));
                            }
                        }
                    }
                    var_18 &= (((!var_4) ? 6983306736621694571 : (-9223372036854775807 - 1)));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                arr_21 [i_2] [i_6] = max(1727185037146687836, 831544203);
                                arr_22 [i_6] [i_2] [i_2] [i_2] [1] = max((((((arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]) / var_5)) / (-831544225 / var_10))), ((min(var_0, 14797786009017434035))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 1; i_7 < 23;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    var_19 += 831544225;
                    var_20 = (min(((((arr_24 [i_7]) != (arr_24 [i_7])))), ((-(arr_27 [i_7 - 1])))));
                }
            }
        }
    }
    var_21 = var_6;
    var_22 = (max(var_22, (((var_9 + (((var_12 ^ 140737488355327) ? ((var_6 ? 130862373 : 3648958064692117580)) : ((max(0, -353109353))))))))));
    #pragma endscop
}
