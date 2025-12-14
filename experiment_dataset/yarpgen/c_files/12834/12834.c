/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                arr_7 [i_1 + 1] [i_0 - 1] = 5896963846148959488;
                var_14 = (min(var_14, 5896963846148959488));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 ^= (max((((((!(arr_9 [11] [i_1 - 1] [i_2]))) ? var_9 : -0))), ((var_2 & (min(128, 6933888389414757488))))));
                                arr_18 [i_0] [i_4] &= 7;
                                var_16 = (max(var_16, (((((arr_4 [i_3 - 1] [i_1 - 3]) ? (var_11 | var_9) : (128 << 1)))))));
                            }
                        }
                    }
                    var_17 = (((11512855684294794139 * 214) - (((var_4 >> (((arr_12 [i_0] [i_0] [i_2] [i_0] [i_0 + 1]) >> (216805699067945682 - 216805699067945666))))))));
                    arr_19 [i_1] = (max((((arr_2 [i_0 - 1]) ? (arr_12 [i_0] [i_0 - 1] [i_0] [i_0] [i_0]) : var_6)), (((!(arr_2 [i_0 + 1]))))));
                }
            }
        }
    }
    var_18 = -var_0;
    #pragma endscop
}
