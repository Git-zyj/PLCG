/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [1] [i_1 + 1] [i_1] = 8975078251719400228;
                var_15 = (min(var_15, ((((((((arr_3 [i_0]) >= (arr_2 [i_1]))))) ? (((arr_0 [i_0]) ? 23 : ((max(2986, (arr_2 [17])))))) : (((arr_2 [i_0]) ? 0 : (arr_0 [i_0 + 1]))))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 23;i_4 += 1)
                            {
                                var_16 = (max((((arr_9 [i_3] [i_3] [i_3] [i_0]) ? var_0 : (arr_7 [i_1 - 2] [i_1] [i_1]))), var_9));
                                arr_16 [18] [i_1 - 2] [4] [1] [i_3] = (arr_1 [i_2 + 2]);
                                arr_17 [i_4] [i_3] [i_3] [i_2] [i_3] [i_0 + 1] [i_0 + 1] = ((((min((arr_7 [2] [i_1] [1]), ((min((arr_2 [i_3]), (arr_3 [i_1]))))))) ? var_12 : (max((arr_7 [i_1 - 1] [15] [14]), ((((arr_15 [1] [i_0 - 1] [20] [i_2 + 3] [i_2] [i_2] [0]) != var_1)))))));
                                var_17 = ((((-1839364415 < (max(-7665158474523966407, var_4))))) < ((((arr_7 [i_1 - 2] [i_1] [i_0 + 1]) > (arr_6 [i_1 + 1] [i_2 - 2] [i_2 + 1])))));
                            }
                            var_18 = var_4;
                            var_19 ^= 255;
                            var_20 = ((31716 <= (arr_8 [i_2 + 1] [i_2] [9])));
                            var_21 ^= arr_5 [i_0] [i_2] [i_0] [i_0];
                        }
                    }
                }
            }
        }
    }
    var_22 = (min(var_14, (((255 ? var_0 : var_9)))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 17;i_6 += 1)
        {
            {
                arr_22 [i_5] [i_6] = (max(((((arr_10 [i_5] [i_6 + 1] [9] [i_5]) ? 1 : (arr_10 [17] [i_6 + 1] [18] [i_5])))), (((arr_0 [i_5]) ? var_11 : -18446744073709551605))));
                var_23 = ((((((max((arr_11 [i_5] [i_5] [i_5] [i_5]), var_14))) && var_1)) ? (max(9223372036854775807, 13077904743465536606)) : (((((255 ? (arr_3 [i_5]) : var_0)))))));
            }
        }
    }
    var_24 = (((min(var_9, ((var_10 ? 11365 : -526156103)))) >> ((((((var_4 ? -62 : var_2)))) - 192))));
    #pragma endscop
}
