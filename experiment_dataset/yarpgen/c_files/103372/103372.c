/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_16 = (((((var_12 || (124 > 1365822914)))) < var_9));
                var_17 = (max(var_17, ((min(((((((arr_4 [i_0]) == (arr_2 [i_1 - 1] [i_1] [i_1]))) ? (var_14 / -1365822905) : (arr_4 [i_1 + 1])))), (min((arr_4 [i_1 - 1]), (arr_4 [i_0]))))))));
            }
        }
    }
    var_18 *= (-1208774518 | -66);
    var_19 = ((((((var_1 ? var_12 : var_7)))) || var_3));
    #pragma endscop
}
