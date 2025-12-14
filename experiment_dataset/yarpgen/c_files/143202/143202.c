/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [10] [i_0] = (min((max((arr_2 [i_0] [i_1]), (arr_2 [i_0] [i_0]))), (((((min((arr_4 [i_1]), (arr_2 [9] [i_0])))) && ((max((arr_3 [i_0]), (arr_0 [i_1])))))))));
                arr_7 [i_0] [6] = ((min((arr_3 [i_1]), (arr_3 [i_1]))));
                var_20 = (min(var_20, (((((min((arr_0 [i_1]), ((max((arr_2 [i_0] [i_0]), (arr_1 [3]))))))) ? (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))) : ((18446744073709551615 ? (min(881459344, 18446744073709551609)) : -22)))))));
                arr_8 [i_1] [i_1] [i_0] = ((+((+((min((arr_5 [9] [i_0] [9]), (arr_3 [6]))))))));
            }
        }
    }
    #pragma endscop
}
