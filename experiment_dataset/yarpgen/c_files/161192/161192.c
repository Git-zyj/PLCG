/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= ((-26 ? 25 : -8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] = ((((min((max((arr_2 [i_0] [i_1]), (arr_1 [i_0] [i_0]))), (arr_1 [i_1 + 3] [i_1 + 1])))) ? (((arr_5 [i_1 + 1] [i_1 + 1]) + (arr_5 [i_1 + 1] [i_1]))) : (((((arr_2 [i_0] [2]) ? (arr_3 [i_0]) : (arr_4 [i_1] [i_1])))))));
                var_20 += ((((max((arr_1 [i_0] [i_1 + 1]), (arr_5 [1] [i_1 + 3])))) ? (arr_3 [i_1 + 1]) : ((-22 ? -25 : 5333639096415612439))));
            }
        }
    }
    var_21 &= ((((54961 || 27719) != ((var_14 ? var_4 : var_10)))));
    var_22 = ((18684 ? 31 : 32767));
    var_23 = (min(var_6, (((((min(var_4, var_13))) ? (max(-47, var_17)) : (var_2 & var_14))))));
    #pragma endscop
}
