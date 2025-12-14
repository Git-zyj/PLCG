/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_12 = (~5);
                            var_13 -= var_10;
                            var_14 |= ((-((47 ? (arr_6 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1]) : (arr_6 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1])))));
                            var_15 = (min(var_15, ((((-(arr_6 [4] [i_1 + 1] [i_2] [i_3 - 1])))))));
                            var_16 = (max(var_16, ((var_2 ? (((((8319266974427693962 ? var_9 : var_0)) ^ 8))) : (min((arr_0 [i_1 + 1] [i_1]), ((((arr_7 [i_3 - 1] [i_2] [15] [i_0 - 1]) ^ var_2)))))))));
                        }
                    }
                }
                var_17 = (max(var_17, (((-65 ? 225150094 : (((-(arr_7 [i_0 - 1] [i_1 - 1] [i_1] [i_0 + 1])))))))));
                var_18 = ((-((((var_6 ? var_0 : var_9)) + (var_2 != var_7)))));

                /* vectorizable */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    var_19 = (max(var_19, ((((arr_6 [i_0] [i_1] [i_4] [i_1]) || (arr_8 [i_4] [i_1] [i_1 - 1] [i_0] [i_0]))))));
                    var_20 *= ((((((arr_4 [i_4] [i_0] [i_0]) ? -723031053 : (arr_8 [i_0] [16] [i_4] [i_4] [i_0])))) ? var_10 : var_11));
                    var_21 -= ((~(arr_11 [i_1] [i_1 - 1] [i_1] [i_1])));
                }
            }
        }
    }
    var_22 = (max(var_22, var_0));
    #pragma endscop
}
