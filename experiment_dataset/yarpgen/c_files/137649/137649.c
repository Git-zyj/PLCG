/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -12;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                {
                    var_13 = ((+(((arr_0 [i_2 - 1] [i_2 - 4]) ^ var_9))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 = 41279;
                                var_15 = ((!(!var_1)));
                                arr_15 [i_0] [i_4] [i_4] = (arr_3 [i_2] [i_2]);
                            }
                        }
                    }
                    var_16 = ((~(min((((!(arr_0 [i_0] [i_0])))), (((arr_0 [i_0] [i_1]) ? var_0 : var_7))))));
                    arr_16 [i_1] [i_1] = (!1);
                    var_17 = (-3362128476556068472 >= ((((arr_6 [2] [i_1] [i_0]) ? (arr_13 [i_0] [1] [i_2] [i_2 - 1] [i_2] [7] [1]) : -70))));
                }
            }
        }
    }
    #pragma endscop
}
