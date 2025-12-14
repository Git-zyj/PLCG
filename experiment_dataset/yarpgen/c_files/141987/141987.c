/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_6 [i_0] [1] [i_0] = (((((((-1 ? var_1 : -24))) ? (7 ^ 120) : -var_1)) > ((((var_13 < (arr_1 [i_0])))))));
                    var_16 += ((-(min((((arr_4 [i_0 - 1] [3]) | 8589934584)), ((min(var_5, var_6)))))));
                    var_17 = (-var_5 ? (arr_1 [i_0]) : var_0);
                    var_18 = ((((((2 < var_3) ? ((((arr_5 [i_0] [i_0] [i_1] [i_2]) ? (arr_3 [i_0] [i_1] [1]) : var_0))) : (max(var_14, 934578362))))) ? (arr_2 [i_0]) : ((((2042920995694707925 >= ((((arr_1 [i_0]) ? 4294967276 : (arr_5 [i_0] [i_0] [i_2] [i_2]))))))))));
                }
            }
        }
    }
    var_19 = var_9;
    var_20 = (2 | var_13);
    var_21 = (max(var_21, (!var_5)));
    #pragma endscop
}
