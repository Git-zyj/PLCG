/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_20 = (max(((max((arr_6 [i_1] [i_1] [i_1] [i_1]), (arr_2 [i_1])))), ((~(arr_2 [i_2])))));
                    var_21 = (min(var_21, (((min(99, (arr_6 [i_0] [6] [i_2] [i_2])))))));
                    var_22 = (min(var_22, (((~(min(((min((arr_1 [i_0]), (arr_5 [i_1] [i_1] [i_2] [i_1])))), (((arr_6 [i_2] [1] [1] [1]) ? -5806103305154475059 : var_16)))))))));
                }
            }
        }
        var_23 = (min(var_23, ((max((((((max(-982257319409543865, (arr_5 [i_0] [i_0] [i_0] [i_0]))) + 9223372036854775807)) << (((max((arr_7 [i_0] [i_0] [i_0]), var_10)) - 1463372679)))), ((min(2705568550, 0))))))));
    }
    var_24 = var_15;
    var_25 = var_12;
    #pragma endscop
}
