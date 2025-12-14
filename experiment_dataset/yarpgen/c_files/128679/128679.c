/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_1] |= 0;
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] [i_1] [0] [i_1] |= 87;
                            var_19 = (((((arr_9 [i_2 - 1] [i_2 - 1] [i_2 - 2] [i_2 - 2]) ? (arr_9 [i_2 + 1] [i_2 - 2] [i_2 - 1] [i_2 + 2]) : 28))) && (((175 << (((arr_9 [i_2 + 1] [i_2 - 2] [i_2 + 2] [i_2 - 2]) - 42))))));
                            var_20 = max(-8077231974493804191, 404793953);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 15;i_5 += 1)
        {
            {
                var_21 = min((-88 == 812574767), (23608 < -88));
                var_22 ^= 1374394665;
                arr_17 [i_5] = (((min((65535 - 30), (arr_14 [i_4] [i_5]))) / 27));
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 17;i_7 += 1)
                    {
                        {
                            arr_22 [i_5] [1] [i_7] = 650063846;
                            arr_23 [i_5] [i_5] [i_5 - 1] [6] = ((((-((((arr_15 [i_4]) <= -225565611))))) * (~46689)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
