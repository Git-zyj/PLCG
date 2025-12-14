/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_14 ? var_12 : var_14));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_16 = ((!((!((((arr_0 [i_1]) % (arr_0 [i_0]))))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1 + 2] [i_3] [i_2] = 65535;

                            for (int i_4 = 0; i_4 < 21;i_4 += 1)
                            {
                                arr_13 [i_0] [i_0] [i_3] [i_3] [i_1] = (arr_4 [i_1] [i_1] [i_3]);
                                var_17 = (min((11068 & 24094), (arr_1 [i_2 + 1] [i_0])));
                                arr_14 [i_0] [i_0] [i_3] [i_0] [i_0] = (max((((!(((var_13 ? (arr_2 [i_4]) : var_9)))))), (((12990953958399969064 && 2147483647) >> (var_0 + 397)))));
                            }
                            var_18 = (max(var_18, (((17433 ? (!2147483647) : -24094)))));
                            var_19 = (min(var_19, ((((!(arr_1 [i_1] [i_1 + 3])))))));
                        }
                    }
                }
                arr_15 [i_0] [i_1] [i_1] = (!var_9);
            }
        }
    }
    var_20 = (min(var_20, var_3));
    var_21 = ((((min((max(var_14, var_6)), ((max(-16186, var_6)))))) ? var_5 : (max(var_11, ((min(var_6, var_5)))))));
    var_22 = 2147483647;
    #pragma endscop
}
