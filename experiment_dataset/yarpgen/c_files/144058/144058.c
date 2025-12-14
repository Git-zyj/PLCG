/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_17 = ((+((max((arr_0 [i_0]), (arr_11 [6] [i_0] [i_0] [i_0 + 2]))))));

                            for (int i_4 = 0; i_4 < 10;i_4 += 1)
                            {
                                var_18 ^= (max(var_9, (arr_7 [i_0 + 1] [5] [i_0 + 3] [i_0 + 3])));
                                var_19 = (max(var_19, (((-(arr_12 [i_4] [i_4] [i_1] [i_2] [i_1] [i_4]))))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] = ((!((max((arr_0 [i_0]), (arr_13 [i_0] [i_0 + 4] [i_0 + 1] [i_0]))))));
                                var_20 = (max((((!((max(var_15, (arr_0 [i_0]))))))), (max((arr_2 [i_3] [i_4]), (arr_2 [i_1] [i_2])))));
                            }
                            for (int i_5 = 0; i_5 < 10;i_5 += 1)
                            {
                                var_21 = (max((max(var_12, (arr_2 [i_1] [i_2]))), (arr_3 [i_0] [i_3])));
                                var_22 = (((((8781801724588935652 ? -9193395719892009331 : 8781801724588935652))) ? (arr_2 [i_0 - 1] [i_0 - 1]) : var_16));
                                var_23 = (((((~(arr_0 [i_0])))) ? (~var_11) : (max(3007548845027481003, var_15))));
                            }
                        }
                    }
                }
                arr_19 [i_0] [i_0] = max(var_5, (max((arr_13 [i_0] [i_1] [i_1] [i_0]), (arr_17 [i_0 + 1] [i_0] [i_0 + 3] [i_0] [i_0]))));
                var_24 = var_9;
                arr_20 [i_0] [i_0] [i_1] = (!-8781801724588935662);
            }
        }
    }
    var_25 = (max(var_25, var_6));
    #pragma endscop
}
