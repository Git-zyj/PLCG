/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_15 = (((((!(((25375 ? -2 : 141)))))) >= (max(((var_6 ? var_3 : var_2)), var_11))));

                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    var_16 += ((((var_11 & (((arr_5 [i_0 - 3]) ? 152 : 4713864124431680663)))) | (((arr_2 [i_2 + 1] [i_0 + 3] [i_0 + 1]) ^ (((arr_3 [18]) & (arr_6 [i_1])))))));
                    var_17 = ((!(((~(min((arr_5 [i_2]), 1008)))))));

                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                        {
                            var_18 = max(((~(((arr_11 [i_0 + 3]) ? 100 : (arr_8 [3] [i_4] [10] [i_0]))))), ((var_4 >> (((arr_7 [i_2 + 1] [i_0 + 1]) + 6377)))));
                            var_19 = ((109 ? (((((((arr_0 [i_0]) || var_13))) != ((var_13 ? 117 : 27928))))) : (~var_2)));
                            arr_13 [i_0] [i_1] [i_2] [i_3 - 2] [i_3] [i_3] [1] = (min(((-(arr_10 [i_0] [i_2 - 1]))), (41386 - 1)));
                        }
                        for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                        {
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_5] = (min(172, 51438));
                            var_20 = (var_9 > 6734);
                            arr_17 [i_0] [i_1] [i_1] [3] [i_2] [i_3] [i_5] = (arr_5 [i_3 - 2]);
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
                        {
                            var_21 = ((31457280 ? 131 : 8103422091723025375));
                            var_22 += ((~(arr_15 [i_0 + 3] [i_3 + 1])));
                            var_23 ^= var_5;
                            arr_22 [i_1] [i_0] [i_1] [i_1] [i_1] [i_1] = var_8;
                        }
                        arr_23 [i_0] [i_1] [i_3 + 1] [i_3] = ((-(arr_0 [i_0])));
                    }
                    for (int i_7 = 1; i_7 < 17;i_7 += 1)
                    {
                        arr_28 [i_0] [i_0] [i_0] [9] = ((-(((arr_4 [3] [4] [i_2 + 1]) ? (arr_4 [i_7 - 1] [i_1] [i_2 - 1]) : (arr_19 [i_2] [i_1] [i_2 - 1] [i_7 + 1] [i_7])))));

                        for (int i_8 = 3; i_8 < 15;i_8 += 1)
                        {
                            var_24 = ((-52 ? -var_8 : (max(var_7, ((~(arr_25 [i_0] [i_1])))))));
                            var_25 = (max((((((4083444014640018256 != (arr_21 [i_0] [i_7]))) && 45976))), ((16767240720281044157 ? (min(var_5, 4713864124431680675)) : (arr_19 [i_0 + 2] [i_1] [i_2 - 1] [i_7 - 1] [i_8])))));
                        }
                        arr_32 [i_0] [i_0] [i_7 - 1] [i_7] [i_7] [i_7 - 1] = (max(1, (((((1980848216562503812 ? (arr_11 [i_1]) : 23206))) ? (((arr_29 [i_0] [i_0] [i_2] [5] [13]) / (arr_12 [i_0] [i_1] [i_1] [i_2 + 1] [i_1] [i_7]))) : (max(var_12, -2129502357))))));
                    }
                }
                var_26 = (max(var_26, (((((((arr_30 [i_0 - 2] [i_0 + 2] [i_0 + 2] [i_0 - 2] [i_0 + 3]) + 17993))) ? (((((var_13 ? var_6 : 1980848216562503805)) <= 29748))) : -3723)))));
            }
        }
    }
    var_27 = var_8;
    #pragma endscop
}
