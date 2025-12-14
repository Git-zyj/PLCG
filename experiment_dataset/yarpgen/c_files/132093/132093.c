/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_14 = (max(((var_4 | (var_11 * -16))), ((min((!var_1), ((1373411099 ? (arr_3 [i_0] [i_1]) : var_5)))))));
                var_15 = (((((var_0 / (arr_1 [i_1 - 1])))) % var_7));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    var_16 = (min(var_16, ((((arr_4 [i_0] [0] [i_0]) ? (((((arr_3 [i_0] [6]) >= (arr_6 [i_2 + 1] [2] [i_0]))))) : (arr_1 [i_0 - 1]))))));
                    arr_7 [5] [i_1] [i_2] [i_2] = (arr_2 [i_1 - 1]);
                }
            }
        }
    }
    var_17 = ((((((var_7 < var_5) * (18446744073709551615 < 2921556185)))) ? 6 : ((var_6 ? (((var_2 ? var_7 : 1))) : ((-431174041 ? var_7 : var_11))))));
    var_18 = ((~(((((var_13 ? 227 : var_5))) / (var_5 - var_7)))));
    var_19 = ((((((var_4 != var_8) ? ((var_1 ? 0 : var_11)) : (var_5 | 19)))) ? (((min(65520, var_8)) - (((var_4 ? var_9 : var_4))))) : var_0));
    var_20 = (((((~((var_8 ? var_4 : var_2))))) ? 27 : ((var_3 ? var_1 : ((22 ? var_8 : var_9))))));
    #pragma endscop
}
