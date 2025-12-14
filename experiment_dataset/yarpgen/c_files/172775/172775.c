/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1] [i_0] [i_2] = ((~(-747749184 | var_8)));
                    arr_9 [i_0] [i_1] [i_0] &= var_13;
                    arr_10 [i_0] [i_2] [i_2] = ((((min((arr_6 [i_0] [i_1] [i_2]), var_10))) ? (max(((var_1 ? var_7 : (arr_7 [i_1]))), (((var_8 ? var_13 : 1546216510))))) : (((max((arr_7 [i_1 + 3]), (arr_7 [i_1 + 4])))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_16 = (-545002034 / 254);
                        var_17 = (var_13 ? var_12 : (arr_3 [i_2] [i_3]));
                        arr_13 [i_0] [i_1] [i_2] [i_2] = var_7;

                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            arr_16 [i_2] [i_2] [i_3] [i_4] = (arr_5 [i_3]);
                            var_18 = ((arr_4 [i_4 - 1] [i_1 + 1]) >> 2);
                            arr_17 [i_2] [i_2] = ((2 ? var_2 : -1));
                            arr_18 [i_0] [i_2] [i_2] [i_3] [i_4] = 6082171462854929309;
                        }
                    }
                    var_19 = ((((((arr_0 [i_2]) ? var_1 : (arr_12 [i_0] [i_0] [i_2] [i_1] [i_2] [i_2]))) / var_9)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 4; i_6 < 16;i_6 += 1)
        {
            {
                var_20 ^= (((((~(((arr_23 [i_5]) ? var_7 : 18446744073709551615))))) ? (~var_14) : (!-4)));
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 16;i_9 += 1)
                        {
                            {
                                var_21 = (max(var_21, (((var_8 >> (var_6 - 12945))))));
                                arr_34 [i_5] [i_6] [i_7] [i_8] [i_8] = ((-(((!(((var_0 ? 48177 : (arr_7 [i_5])))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
