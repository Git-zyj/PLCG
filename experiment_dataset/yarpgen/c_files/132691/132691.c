/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((((((~(arr_2 [i_0])))) ? ((min((arr_0 [i_0]), (arr_3 [i_0] [i_0])))) : ((((arr_4 [i_1] [i_1]) >= (arr_4 [i_0] [i_1])))))) >= ((~(((arr_0 [i_0]) ^ (arr_4 [i_0] [i_1]))))));
                arr_6 [i_0] = (((min(((((arr_3 [i_0] [i_1]) ? (arr_4 [i_0] [i_1]) : (arr_2 [i_0])))), (max(0, 3212976386210757905))))) ? (arr_1 [i_1]) : (((min(65533, 1)))));
            }
        }
    }
    var_13 = (max((~3), (min((var_9 * var_0), (var_4 != var_10)))));
    var_14 |= (((((~var_9) == var_4)) && ((((~var_12) ? (min(var_9, var_4)) : (!18))))));
    var_15 = ((((max(((var_11 ? var_5 : var_4)), (!var_8)))) ? (((var_7 && var_5) ? (((var_9 ? var_6 : var_0))) : (var_10 | var_12))) : (((min((min(var_0, var_9)), (var_10 == var_3)))))));
    #pragma endscop
}
