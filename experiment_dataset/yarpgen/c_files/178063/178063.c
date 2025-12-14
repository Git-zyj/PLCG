/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_1] [i_2] [i_3 + 1] = (18446744073709551615 == ((min((arr_7 [i_0] [i_1] [i_1] [i_0] [i_0] [i_3 - 1]), (arr_8 [i_0] [i_1] [i_1] [i_3 + 1])))));
                            var_14 = (max(var_14, var_8));

                            for (int i_4 = 0; i_4 < 17;i_4 += 1)
                            {
                                var_15 = ((((+((max((arr_13 [i_0] [i_1] [i_2] [i_3 - 1] [i_4]), (arr_7 [i_0] [i_1] [i_2] [i_2] [i_3 + 1] [i_4])))))) + (min((arr_4 [i_0] [i_0]), var_10))));
                                var_16 = (((((~(~0)))) ? (arr_9 [i_3 - 1]) : (arr_4 [i_0] [i_1])));
                                var_17 = (((((((((~(arr_8 [i_0] [i_1] [i_2] [i_4])))) ? (~1) : (arr_2 [i_0] [i_0]))) + 2147483647)) >> ((((~(arr_13 [i_2] [i_1] [i_2] [i_3 + 1] [i_3 + 1]))) + 93))));
                            }
                            for (int i_5 = 1; i_5 < 16;i_5 += 1)
                            {
                                arr_18 [i_0] = min((arr_1 [i_5 - 1] [i_5 + 1]), (min(var_9, (arr_1 [i_5 + 1] [i_5 - 1]))));
                                var_18 = 1596025737;
                            }
                            var_19 = ((-(max(-1788647114, 1))));
                        }
                    }
                }
                arr_19 [i_0] [i_0] = max(2199227632, ((~(arr_17 [i_0] [i_0] [i_1] [i_1] [i_0]))));
                var_20 = (var_7 || ((((arr_4 [i_1] [i_0]) >> (((arr_1 [i_0] [i_0]) - 68))))));
                arr_20 [i_0] = ((min((arr_14 [i_0]), (max(var_11, 2199227632)))) < 1);
            }
        }
    }
    var_21 = ((!((!((min(var_2, var_4)))))));
    var_22 = ((((~((var_12 ? 1596025737 : var_11)))) ^ var_0));
    /* LoopNest 3 */
    for (int i_6 = 2; i_6 < 10;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {
                    var_23 = var_11;
                    arr_28 [i_8] [i_8] [i_6 + 1] = (max(0, -1634548692));
                }
            }
        }
    }
    var_24 = var_5;
    #pragma endscop
}
