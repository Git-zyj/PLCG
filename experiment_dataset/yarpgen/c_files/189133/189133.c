/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= ((var_18 ^ ((-(~1857231093)))));
    var_20 = ((((((62658 ^ var_18) != (var_15 ^ var_1)))) ^ var_1));
    var_21 += (max(((var_12 ^ ((max(var_6, 62657))))), (var_5 != var_5)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_22 = (min(var_22, ((((arr_0 [i_0] [i_0]) != (arr_0 [i_1 + 1] [i_1 + 2]))))));
                arr_5 [i_1] [i_1] = (((var_1 != var_6) != (min(2434705516675349877, ((((arr_4 [i_0] [i_1]) ? var_6 : 0)))))));
            }
        }
    }
    #pragma endscop
}
