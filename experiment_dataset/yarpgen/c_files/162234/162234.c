/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((var_5 * var_8), var_5));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    var_12 -= (((((arr_2 [i_2 + 1]) - (arr_2 [i_2 + 1]))) + (((((arr_7 [i_2]) + (arr_4 [i_1]))) + 68))));
                    arr_10 [i_2] [i_1] [i_0] |= (~var_5);
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    arr_13 [i_0] [0] [i_1] [21] = 2147483647;
                    var_13 ^= (--14159341663699431544);
                    arr_14 [12] [i_1] [i_3] = var_5;
                    var_14 = ((var_0 % (arr_4 [i_0 - 1])));
                    arr_15 [15] [i_1] [1] [i_1] = (((arr_11 [i_0] [13] [i_3] [3]) ? var_6 : (~220)));
                }
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    arr_19 [i_4] [i_1] [i_1] [i_4] = (min(-85, (((!(50 % 54))))));
                    var_15 = ((((((var_3 > (arr_1 [i_0] [i_1]))))) ? 16327175821776348948 : (min((min(var_10, -87)), 32))));
                    arr_20 [i_1] |= -123;
                }
                /* vectorizable */
                for (int i_5 = 3; i_5 < 19;i_5 += 1)
                {
                    var_16 = ((-2002548862 ? var_2 : (arr_11 [i_0] [17] [i_5] [i_0 - 1])));
                    var_17 -= (var_4 ? (arr_3 [i_0] [i_0 + 2] [i_5 + 2]) : 1);
                    arr_24 [1] = ((((arr_2 [1]) != 3959057545432868372)));
                }
                arr_25 [i_0] = ((~(min(var_2, ((max(var_4, (arr_17 [i_0] [i_1]))))))));
                var_18 += (((6290642832813000681 ? (arr_12 [8]) : var_3)));
            }
        }
    }
    #pragma endscop
}
