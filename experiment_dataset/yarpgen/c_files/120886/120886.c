/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_17 = ((((((arr_3 [i_0]) ? var_9 : (arr_6 [i_0] [i_0] [i_2])))) ? ((var_5 ? -1267202142130923431 : (arr_7 [i_0]))) : 51147));
                        arr_10 [i_3] [i_3] [i_2] [i_0] [i_3] = (((arr_8 [i_0] [i_1]) ? (arr_0 [i_0] [i_0]) : 1751109111));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            {
                                var_18 = (arr_0 [i_0] [i_4]);
                                var_19 ^= ((-1581947856 ? 14395 : 1475700521));
                                var_20 += ((-(min(var_3, (((arr_1 [i_5]) ? (arr_0 [i_1] [i_2]) : 127))))));
                            }
                        }
                    }
                    var_21 += -100;
                    var_22 &= (((((1581947841 ? 117440512 : 2147483647))) ? ((((arr_11 [i_0] [i_0] [i_0] [i_0]) ? (arr_7 [i_1]) : ((32 / (arr_3 [i_2])))))) : ((-51141 ? (arr_4 [15]) : ((var_3 ? 16777215 : var_7))))));
                }
            }
        }
    }
    var_23 = (max(2147483647, 89));
    var_24 -= ((((max(-var_5, (!15)))) ? var_13 : var_8));
    var_25 = ((-(~var_4)));
    #pragma endscop
}
