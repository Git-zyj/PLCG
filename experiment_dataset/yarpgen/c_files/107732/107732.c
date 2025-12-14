/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_20 = (~29232);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_21 = (arr_0 [i_1]);
                    var_22 *= ((-(((arr_2 [i_2] [i_2]) ? (arr_2 [i_0] [i_2]) : (arr_2 [i_0] [i_2])))));
                    var_23 += (((min((min(1161033820595126575, 9223372036854775789)), ((var_14 / (arr_1 [i_2]))))) % (((arr_4 [i_2] [i_1] [i_1]) ? ((var_4 ? (arr_6 [i_0] [i_0] [i_0]) : var_6)) : (arr_5 [i_2] [i_2])))));
                    var_24 = ((((!(arr_7 [i_0] [i_1] [i_2] [i_1])))));
                }
            }
        }
    }
    var_25 = var_4;
    #pragma endscop
}
