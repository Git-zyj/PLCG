/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_11 = ((var_4 <= ((max((arr_4 [i_0] [i_0] [i_1]), (-1037 != 103613468))))));
                var_12 = 0;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 23;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            var_13 = max((((!(arr_13 [8] [i_3] [i_4] [i_3])))), ((-(0 || var_1))));
                            var_14 = ((((((-1023 ? var_3 : var_2))) & (~3435728066395044608))) ^ (~-3435728066395044608));
                        }
                    }
                }
                var_15 = (((161 == 1013741782) ^ (43 || -3435728066395044609)));
                arr_16 [i_2] [i_3 - 2] = (min(((+((0 ? (arr_9 [i_2 - 1]) : var_0)))), (!147)));
            }
        }
    }
    var_16 = 1036;
    #pragma endscop
}
