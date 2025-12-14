/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_19 &= (min((((arr_4 [i_0 + 2] [i_1 - 1]) ? 9133220754673816179 : (arr_4 [i_0 + 2] [i_1 - 1]))), ((min(((9313523319035735427 ? (arr_0 [i_0] [i_0]) : var_7)), ((min(24, (arr_0 [i_1] [i_0])))))))));
                var_20 &= (arr_5 [i_0] [i_1 - 2]);

                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    var_21 = (max(((min((arr_0 [i_2 - 1] [i_0]), (arr_0 [i_2 - 1] [i_1])))), ((-96 ^ (-9223372036854775807 - 1)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_22 &= (arr_3 [i_0 + 2]);
                                var_23 = ((+(((arr_5 [i_3 + 1] [i_0 + 1]) ? (arr_10 [i_3 + 1]) : (arr_11 [i_4 - 4] [i_0] [i_2 - 1])))));
                                var_24 = (arr_3 [i_1 + 1]);
                                var_25 = (((arr_1 [i_1 - 1]) ? ((-((32764 ? -19 : 230)))) : 597264101));
                            }
                        }
                    }
                }
                var_26 = (min(((((~(arr_5 [9] [10]))) + (max(9133220754673816189, 9133220754673816194)))), (max(1, 9313523319035735427))));
            }
        }
    }
    var_27 = (!var_6);
    var_28 = ((var_18 ? var_2 : var_14));
    var_29 = ((var_1 & (min((min(var_6, var_14)), (!1)))));
    #pragma endscop
}
