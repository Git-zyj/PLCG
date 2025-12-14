/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((1155873329 ^ (!1155873329)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_11 [1] [7] [10] [i_0] [3] [i_3] = ((min(var_6, (arr_0 [i_0]))));
                            arr_12 [i_0] [i_1] [11] = min(var_7, -1155873329);
                        }
                    }
                }
                var_11 = (arr_10 [i_0] [i_0] [1] [1] [i_1] [i_1]);
                arr_13 [i_0] [i_0] [i_0] = 1;
            }
        }
    }
    var_12 = (min(((var_1 ? var_7 : ((min(var_3, 27458))))), ((var_3 ? var_1 : ((min(27438, 1)))))));
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 12;i_6 += 1)
            {
                {
                    var_13 ^= 13062;
                    arr_20 [i_4] [i_5] [i_4] = ((((((~35036) ? -1117187851 : var_5))) < (min(((var_9 ? 2847479907081501999 : (-2147483647 - 1))), var_2))));

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {

                        for (int i_8 = 3; i_8 < 13;i_8 += 1) /* same iter space */
                        {
                            arr_28 [11] [11] [11] [i_4] [11] = (((arr_27 [i_5 - 1] [i_5 - 1] [i_5] [i_5] [i_5] [i_5] [i_5 - 1]) ? (~9223372036854775803) : (arr_26 [i_8] [8] [i_6] [i_5] [i_4])));
                            arr_29 [i_6] [i_4] = (2147483647 ^ 1155873353);
                            var_14 = (min(var_14, (3558994902 + -1)));
                        }
                        for (int i_9 = 3; i_9 < 13;i_9 += 1) /* same iter space */
                        {
                            var_15 = (min(var_15, (((arr_17 [i_7] [i_6 + 4]) ? -27438 : 27438))));
                            arr_33 [i_4] [i_4] [i_4] [i_7] [5] = var_8;
                            var_16 = (min(var_16, ((((arr_32 [i_5 - 1] [i_5] [8] [i_5] [i_5] [i_7] [10]) ? (arr_32 [i_5 - 1] [6] [i_5] [6] [i_5] [i_7] [12]) : var_8)))));
                            var_17 *= var_4;
                        }
                        arr_34 [0] [i_4] [i_5] [i_5] = var_6;
                        var_18 ^= (1 ? 30500 : 1);
                        arr_35 [i_4] [i_4] [11] [i_4] [i_4] = 1;
                    }
                }
            }
        }
    }
    #pragma endscop
}
