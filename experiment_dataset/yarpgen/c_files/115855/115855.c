/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -var_7;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_21 = (!51071);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [16] [i_3] [i_0] = ((!(255 || 255)));
                            arr_12 [5] [i_3] [i_2 - 1] [i_1] [i_1] [i_0] = ((min(2803630665, 0)));
                        }
                    }
                }
            }
        }
    }
    var_22 = var_0;
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            {
                arr_17 [i_4] = (((~-9223372036854775802) - (min((min(262547383184219545, 2803630665)), 244))));
                arr_18 [i_5] [i_4] [2] = (((8550760310974161022 / 18184196690525332071) + (737815519060798245 - 5316663645187124770)));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        {
                            arr_25 [i_4] = ((!(1454781102 ^ 0)));
                            arr_26 [i_7] [i_4] [i_4] [5] = 9895983762735390584;
                            arr_27 [11] [i_4] [i_6] [i_7] [i_6] [2] = ((+((+(min((-9223372036854775807 - 1), -7158))))));
                        }
                    }
                }
                var_23 = (8550760310974161022 + 11020679066793952479);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 2; i_8 < 12;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 10;i_10 += 1)
            {
                {
                    var_24 += (5316663645187124745 && 5316663645187124770);
                    var_25 = ((-((((min(0, 18184196690525332071)) >= (!246))))));
                    arr_35 [i_8] [i_10] [i_8] [i_8] = ((((((~6) < 240))) == (!3032906953422040713)));
                }
            }
        }
    }
    #pragma endscop
}
