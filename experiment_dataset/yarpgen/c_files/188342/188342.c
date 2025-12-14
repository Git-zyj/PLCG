/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((16128 >> (-3704019135497710521 + 3704019135497710547)))) ? -29952 : -129)));
    var_12 = var_10;
    var_13 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 ^= ((-3704019135497710521 ? (((arr_3 [i_0]) / (arr_3 [i_0]))) : (min(var_3, var_2))));
                var_15 = (min(var_15, (((1 < ((((((arr_3 [i_1]) ? (arr_3 [i_0]) : var_1))) ? ((28819 ? -3704019135497710549 : 1)) : var_2)))))));
                var_16 = (-(((((~(arr_1 [3] [i_0])))) + -3704019135497710521)));
                arr_6 [i_1] [i_1] [8] = -9857;
            }
        }
    }
    #pragma endscop
}
