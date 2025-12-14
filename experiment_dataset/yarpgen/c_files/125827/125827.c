/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_5 ? (((9149544648986738663 != var_12) ? var_5 : var_0)) : var_2));
    var_14 = ((var_10 ? var_0 : var_0));
    var_15 = ((((((((var_1 ? var_2 : var_6))) ? var_8 : (var_6 != var_4)))) % var_1));
    var_16 = 214;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, ((min(((-var_7 ? (4583032452304686467 + -5234418115644670888) : ((min(var_3, var_5))))), (var_5 + -var_11))))));
                    arr_10 [i_0] [i_1] [i_1] = 5535;
                    arr_11 [i_2] = (((arr_5 [i_1 - 2] [i_1]) | (((arr_6 [i_0] [i_1 + 1]) ? (arr_4 [i_0 + 2]) : (arr_6 [i_0] [i_0])))));
                }
            }
        }
    }
    #pragma endscop
}
