/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_3] [i_4] [i_4] = var_11;
                                arr_14 [i_0] [i_0] [i_0 + 1] [i_0] = (((((min(726696594577748844, var_8)))) ? ((((arr_8 [i_0 + 1] [i_0 + 1] [i_1]) ? (arr_8 [i_0 + 1] [i_0 + 1] [i_0]) : (arr_0 [i_0 + 1])))) : (((-726696594577748845 != var_13) ? var_2 : (arr_1 [i_0])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_16 += (((arr_6 [i_0] [i_1] [i_2] [i_5]) ? ((-((-726696594577748845 ? 4063232 : var_9)))) : (((-(arr_1 [i_1]))))));
                                arr_19 [i_0] [13] [i_6] [i_5] [i_6] [i_6] [i_2] = (((((!(((var_10 ? (arr_17 [i_0] [i_0] [i_2] [i_5] [i_5] [i_6]) : var_5)))))) % (((arr_16 [i_0] [i_0 + 1] [i_0 - 1] [i_0 + 1]) ? (arr_16 [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 1]) : (arr_16 [i_0] [i_0 + 1] [i_0 - 1] [i_0 + 1])))));
                                var_17 = (min(var_17, ((min(30, ((((!var_11) && (((30 ? 32767 : -9028079625839114037)))))))))));
                                var_18 = (min(var_18, (((var_12 ? var_12 : ((var_14 ? (((4294967295 ? var_14 : (arr_7 [i_1])))) : 726696594577748846)))))));
                            }
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_7 = 2; i_7 < 9;i_7 += 1)
    {
        var_19 ^= var_14;
        arr_22 [i_7] = 51;
        var_20 = ((~(arr_1 [i_7])));
        arr_23 [i_7] = (((((var_3 ? var_11 : var_12))) ? 51 : (-25 || var_4)));
    }
    var_21 = ((var_2 ? var_15 : ((~(1140234370 / -726696594577748834)))));
    #pragma endscop
}
