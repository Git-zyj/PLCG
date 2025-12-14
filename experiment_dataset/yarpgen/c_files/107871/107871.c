/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = (((((arr_4 [i_0]) & ((~(arr_7 [i_0]))))) & (((~(((arr_7 [i_0]) ? var_6 : (arr_0 [i_0]))))))));
                    arr_9 [i_0] [i_0] [i_1 + 2] [i_2] = (max((min((((arr_3 [i_1] [i_2]) << (var_4 - 16))), ((var_2 << (((arr_3 [i_0] [i_1 + 1]) - 181)))))), (max(var_8, (((var_0 + 2147483647) << (((var_8 + 3375319824693027242) - 30))))))));
                }
            }
        }
    }
    var_19 = (((var_6 ? (var_9 | var_14) : var_18)));
    #pragma endscop
}
