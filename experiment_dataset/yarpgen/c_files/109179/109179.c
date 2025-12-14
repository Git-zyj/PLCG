/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = ((min(var_11, 18446744073709551612)));
        var_14 = var_12;
        var_15 = var_11;
        arr_4 [i_0] = max(((((var_0 + 2147483647) >> (203 - 200)))), (min(845441501714365197, (4294967295 >= var_11))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (max(((((var_1 | var_7) || 30878))), ((1567235258 ? 11048169556426897463 : -32))));
        var_16 = (min(var_16, ((max((-7438176180440172866 | 2097151), (~var_11))))));
        arr_8 [9] = (min((var_12 <= 2971480059497698094), (min(32761, 11))));
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 19;i_4 += 1)
            {
                {
                    var_17 = var_0;
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_18 |= var_0;
                                var_19 = ((min(0, 9223372036854775807)));
                                arr_21 [i_6 - 1] [i_5] [i_5 + 1] [i_4 - 1] [i_5] [4] = (max((max((~-9223372036854775807), var_13)), var_12));
                                arr_22 [i_5] [i_5] = ((0 % 1111298521) ? ((32767 + (min(var_5, var_2)))) : (((((min(112, 5149))) && 4122823958885999391))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
