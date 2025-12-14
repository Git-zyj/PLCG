/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_9, 1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = (min(var_18, 1));
                arr_6 [i_0] [i_1] = ((((((~(arr_1 [i_0])))) ? 27833 : (((var_4 <= (arr_0 [i_1])))))));
                arr_7 [i_1] [i_1] [i_1] = ((-93 ? 116 : ((max((arr_0 [i_0]), (arr_1 [i_0]))))));

                for (int i_2 = 1; i_2 < 24;i_2 += 1)
                {
                    arr_10 [i_0] [i_2] [i_0] = arr_3 [i_0] [6];
                    var_19 = (!((((max(var_9, 1))))));
                    arr_11 [i_2] = arr_4 [i_2 + 1] [i_2 + 1] [i_1];
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_20 = (max(var_11, ((min(var_0, -93)))));
                                var_21 = ((((((13751 ? -1 : 1)))) ? var_8 : (((((-(arr_1 [i_0])))) / (arr_13 [i_0] [i_0] [i_1] [i_1] [i_3] [i_2])))));
                            }
                        }
                    }
                    arr_16 [i_0] [i_2] [i_2] = ((max((max((arr_15 [i_0] [i_0] [20] [i_0] [i_0] [i_2] [i_2]), var_14)), ((min(7419, 255))))));
                }
            }
        }
    }
    var_22 = (max((((2757858291 && var_16) <= ((var_11 ? var_10 : 1)))), ((!(var_8 ^ var_16)))));

    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        arr_19 [i_5] [i_5] = min((max(((0 ? 18446744073709551615 : -10266)), var_11)), (((~((var_7 | (arr_1 [i_5])))))));
        var_23 = (((-0 ? (min(1596125691, 255)) : -7001)));
        arr_20 [i_5] = arr_18 [i_5] [1];
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 13;i_8 += 1)
                {
                    {

                        for (int i_9 = 1; i_9 < 10;i_9 += 1)
                        {
                            arr_30 [i_9] [i_8] [i_7] [i_9] [i_9] = ((~(((min((arr_22 [i_6]), 116))))));
                            var_24 = -6;
                        }
                        var_25 = -7001;
                    }
                }
            }
        }
        var_26 = (!-65509);
    }
    #pragma endscop
}
