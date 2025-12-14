/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = ((((((!(arr_3 [i_0] [i_0]))))) ? ((((arr_2 [i_1] [i_0]) ? (arr_0 [i_0]) : var_4))) : (min((!19), 4033180931))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_19 = -9223372036854775803;
                            var_20 = (min(((((((arr_10 [i_0] [i_0] [i_2] [i_3] [i_1]) ? 4294967288 : (arr_4 [i_0])))) ? (arr_11 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0]) : var_14)), ((min(((min((arr_12 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0]), -883212408))), -7)))));
                            var_21 = (-405299532 != -405299532);
                        }
                    }
                }
            }
        }
    }
    var_22 = var_13;
    var_23 = (11882388428102310203 != 45);
    #pragma endscop
}
