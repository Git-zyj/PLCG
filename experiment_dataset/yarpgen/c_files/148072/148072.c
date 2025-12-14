/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (min(255, var_2))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_21 = (min(var_21, (((max((255 <= var_11), (var_13 == var_1))) ? (min(10328317792013944497, (((var_15 * (arr_3 [i_0] [i_1] [i_1])))))) : ((min((arr_2 [i_0]), (arr_1 [i_0] [i_1]))))))));
                var_22 = (((~var_4) ? (max((((~(arr_3 [i_1] [i_0] [0])))), (min(var_6, var_12)))) : ((((!(arr_1 [i_0] [i_1])))))));
            }
        }
    }
    #pragma endscop
}
