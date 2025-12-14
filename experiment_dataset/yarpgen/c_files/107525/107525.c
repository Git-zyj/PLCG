/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (((1 || (((-(7025 || 31792)))))))));
    var_16 -= ((((min(var_13, var_7))) <= 9223372036854775797));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_17 = ((-((((!var_6) && (arr_0 [i_1 + 1]))))));
                var_18 -= ((((((arr_0 [i_0]) ? (arr_0 [i_1]) : (arr_4 [i_0])))) ? ((-(arr_3 [i_0] [i_1 + 1]))) : var_7));
            }
        }
    }

    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_19 ^= (((+(min((arr_3 [i_2] [i_2]), -1)))));
        var_20 = (min((arr_1 [i_2]), ((((arr_2 [i_2]) ? (arr_6 [i_2] [i_2]) : (arr_2 [i_2]))))));
    }
    var_21 = (max(var_13, ((min(((var_13 ? 0 : var_4)), (var_7 || 3294316580421529696))))));
    #pragma endscop
}
