/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((min((var_0 ^ var_2), var_9))) ? (1 | var_2) : ((~(min(4611681620380876800, var_15)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_17 = ((15138569648112292513 ? ((max(-8, (max(7029, 40))))) : (arr_5 [i_1] [i_1])));
                                var_18 = var_9;
                                var_19 -= (max(((((arr_10 [i_0] [2] [i_2 + 2] [i_3 - 1] [i_4] [i_0] [i_0]) ? ((28 ? var_7 : -79)) : ((min(56777, (arr_0 [i_2 + 1] [i_3 + 1]))))))), (var_3 & var_1)));
                                arr_12 [i_2] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((max(var_3, -5240918838752403367)));
                            }
                        }
                    }
                    var_20 = -23;
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_21 = (arr_9 [i_0]);
                                var_22 = (max((max(-9139650394120984651, 17)), (((((1 ? 10 : 4294967295)) >> (var_1 - 16705017866328925416))))));
                            }
                        }
                    }
                    var_23 = (((((((min(var_0, (arr_7 [i_1])))) & 247))) ? (((arr_7 [i_2]) & (arr_9 [i_2 - 1]))) : (arr_2 [16])));
                }
            }
        }
    }
    var_24 = var_3;
    #pragma endscop
}
