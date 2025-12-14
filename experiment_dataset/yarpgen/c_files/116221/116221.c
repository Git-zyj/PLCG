/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_20 ^= ((-(max((arr_1 [i_3]), (max(var_18, 13235301445844363067))))));
                            var_21 = (max(var_21, (arr_2 [12] [i_2] [12])));
                        }
                    }
                }
                var_22 += ((var_16 ? (max(23946, ((4294967268 ? (arr_1 [i_0]) : -4334396766122311139)))) : -2147483642));
                arr_8 [i_0] [i_0] = var_13;
                var_23 = ((~(((((var_15 ? (arr_1 [1]) : var_10))) ^ (((arr_5 [i_0 + 2] [i_1] [i_0] [i_1 + 2]) ? 15410818961420612620 : (arr_7 [i_0] [15] [i_0] [15] [6])))))));
            }
        }
    }
    #pragma endscop
}
