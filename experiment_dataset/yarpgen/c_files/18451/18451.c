/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_14 = var_5;

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_15 = var_1;
                        arr_9 [10] [i_1] [i_3] [10] = (((min((arr_5 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]), 1))) ? 1358095664 : -var_9);
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        var_16 += ((var_6 * (((max(var_0, var_4)) + (((var_10 ? (arr_7 [i_0] [i_0] [0] [i_2] [i_4] [2]) : (arr_0 [i_1]))))))));
                        arr_13 [i_4] = ((~(~var_8)));
                        var_17 &= ((!((((((var_2 ? var_9 : var_1))) ? 2147483647 : (max(var_13, 10196)))))));
                    }
                    var_18 *= ((((18446744073709551615 & var_2) ? (arr_4 [i_1 - 1]) : ((min(var_10, -2))))));
                }
            }
        }
    }
    var_19 += (max(var_12, 4080712178264310904));
    var_20 = (min(var_20, ((max(var_3, ((max(5612941882748714704, -985895648))))))));
    var_21 = ((var_6 ? (((((max(160, var_13)) >= var_1)))) : var_12));
    #pragma endscop
}
