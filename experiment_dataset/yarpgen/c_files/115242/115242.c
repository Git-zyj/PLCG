/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((var_2 < var_12) ? 61 : (min((var_7 + var_3), (((var_10 ? -18600 : var_5)))))));
    var_20 = (min((((((min(-4199505356936528898, 9223372036854775807))) && ((min(var_4, var_12)))))), ((var_1 ? (min(var_7, var_6)) : -61))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_21 = (min((arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1]), ((~(arr_6 [i_0 - 3] [i_0 - 1] [i_0 - 1])))));
                var_22 = ((((max((((arr_1 [20] [i_1]) ? (arr_6 [7] [i_1] [i_1]) : var_10)), (((var_3 || (arr_3 [i_0] [4]))))))) ? -9223372036854775807 : ((((var_5 || -4199505356936528917) || ((min(123, (arr_7 [i_0])))))))));
                var_23 -= ((~(((((var_11 ? (arr_7 [i_1]) : (arr_5 [i_1])))) ? ((-9223372036854775807 ? (arr_2 [i_1]) : var_5)) : (((((arr_6 [i_1] [i_1] [19]) < (arr_7 [i_1])))))))));
                var_24 = ((((!((((arr_7 [i_0]) / (arr_2 [i_0])))))) ? (min(((min(var_1, (arr_2 [i_0])))), (min(723232384, var_4)))) : ((((max((arr_4 [i_0] [i_0] [20]), (arr_3 [3] [i_0]))))))));
            }
        }
    }
    #pragma endscop
}
