/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((~(!var_8))) + 2147483647)) >> (-var_1 + 421)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_2] [8] = var_1;
                            var_13 = (max(var_13, (arr_7 [i_3 - 4] [i_3 - 3] [i_3 + 2] [i_3 + 3])));

                            for (int i_4 = 0; i_4 < 20;i_4 += 1)
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] = var_4;
                                var_14 += 49;
                                arr_15 [i_0] [i_1] [i_2] [7] [17] [i_4] = ((((((arr_11 [i_4] [i_4] [i_3 + 1] [i_3 - 4]) ? (arr_11 [i_4] [i_4] [i_3 + 1] [i_3 + 2]) : (arr_13 [i_4] [i_4] [i_3 + 2] [i_3 - 1])))) ? ((-(arr_6 [i_3] [i_3] [i_3 - 4] [i_3 + 2]))) : (~1)));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 20;i_5 += 1)
                            {
                                var_15 ^= (var_5 == var_11);
                                var_16 = (min(var_16, (arr_4 [i_1] [i_1])));
                                var_17 = ((arr_13 [i_3 - 4] [i_3 - 3] [i_3 + 3] [i_3 + 2]) >= ((var_8 ? 7396436054295865255 : (arr_13 [i_0] [i_2] [i_3] [i_5]))));
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 20;i_6 += 1)
                            {
                                var_18 = (arr_9 [i_0] [17] [i_0]);
                                arr_21 [i_0] [i_1] [i_0] [0] [12] [i_3] [i_1] &= (((arr_17 [i_3 + 1]) ? (arr_17 [i_3 - 1]) : (arr_17 [i_3 + 2])));
                            }
                        }
                    }
                }
                var_19 = 1;
                var_20 = (!29885);
                arr_22 [i_0] [i_1] = ((((((arr_18 [i_1] [i_1] [i_0] [i_0] [i_1]) ? -11116 : 15278))) ? -var_9 : (min((((1713785135 || (arr_13 [i_0] [i_0] [2] [2])))), 13920297046242119213))));
            }
        }
    }
    var_21 = (max((min(2147483647, ((-62 ? 11203149283851459871 : 32736)))), 4294967295));
    #pragma endscop
}
