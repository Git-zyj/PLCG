/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_13 = (arr_0 [i_1]);
                var_14 -= var_6;
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                var_15 = (((arr_4 [i_4]) <= ((((((arr_3 [i_0]) >> (2015580481 - 2015580450))))))));
                                var_16 = (min(((max((arr_5 [i_0 - 1] [i_2 + 4] [i_4 + 1] [i_4]), var_9))), (max((arr_9 [i_3] [i_2] [i_1] [i_0]), (arr_0 [i_0 + 2])))));
                                arr_12 [i_4] = (((8 ? (arr_8 [i_0] [i_4 + 1] [i_0 - 1] [i_2 + 4] [i_4] [i_2]) : (arr_8 [i_0] [i_4 + 1] [i_0 - 1] [i_2 + 1] [i_4] [i_0]))));
                                arr_13 [i_0] [i_1] [i_2] [i_4] = ((((min((arr_7 [i_1] [i_1] [i_2 + 1] [i_3] [i_4 + 1]), ((63 ? 5871 : var_6))))) ? (arr_4 [i_2]) : (arr_0 [i_4 + 1])));
                            }
                        }
                    }
                }
                var_17 = (max(var_17, (arr_10 [i_1])));
            }
        }
    }
    var_18 += var_5;
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 8;i_7 += 1)
            {
                {
                    var_19 = (min((((-66 ? 2147483647 : -56))), (max(5871, (arr_16 [i_5])))));
                    var_20 = (arr_17 [i_5] [i_5]);
                    var_21 *= 0;
                    var_22 ^= arr_2 [i_5] [i_6] [i_7];
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 8;i_9 += 1)
                        {
                            {
                                var_23 = (max(var_23, ((((((arr_6 [i_5] [i_5] [i_5]) ? 0 : (arr_1 [i_6]))))))));
                                var_24 = (max((min(13, 17848093164996974465)), ((((arr_22 [i_5] [i_6]) ? (arr_19 [i_9] [i_5] [i_5] [i_5]) : -63)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = (var_10 ^ var_5);
    #pragma endscop
}
