/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_10 [i_2 + 1] [i_2] [i_2 + 1] [i_1] [i_2] [i_0] = (((((((((arr_6 [i_1] [i_1] [i_3]) ? (arr_7 [i_0] [i_1]) : 0))) ? (min(4294967295, var_15)) : (((min((arr_7 [i_0] [5]), var_12))))))) ? ((((((var_13 ^ (arr_2 [i_1] [i_1] [i_1])))) ? ((min(42, 25275))) : (((arr_7 [i_0 + 3] [i_0 + 3]) ? 65117 : 5452))))) : (min(-51, var_10))));
                            var_16 = ((((!(arr_6 [i_0] [i_0] [i_2 + 1]))) ? (((((min(var_8, var_15))) ? ((-(arr_4 [i_1]))) : ((-(arr_6 [i_0] [i_1] [i_2 + 2])))))) : (((arr_0 [i_0 - 1] [i_1]) ? (((var_3 ? (arr_2 [2] [i_1] [i_2 - 1]) : 1403686834))) : 14254609071384483016))));
                            var_17 ^= (arr_3 [i_3] [i_0]);
                            var_18 = (2382209852911166809 / 1);
                        }
                    }
                }
                var_19 = ((max(((((arr_2 [i_0] [i_0 + 2] [i_1]) || var_8))), (max(-58, var_11)))));
                arr_11 [i_0 - 1] [i_1] = ((min((((arr_7 [i_0 + 1] [i_1]) ? var_9 : var_9)), (arr_8 [i_0 + 2] [i_0 - 1] [i_0] [i_1]))));
            }
        }
    }
    var_20 = var_2;
    var_21 = (-var_6 != var_4);
    #pragma endscop
}
