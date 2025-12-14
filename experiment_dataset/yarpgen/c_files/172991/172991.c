/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 1;
    var_19 += (~3);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, (var_10 == var_5)));
                    arr_6 [i_0] [i_1] [6] [i_2] &= (min(((var_6 ? var_3 : (~247))), ((1 >> (70 - 41)))));
                    var_21 -= 14593230991156025559;
                    var_22 = (max(var_22, (((((max((arr_3 [i_0] [0]), (arr_5 [i_0] [i_1] [4] [i_0])))) ? (((((((arr_0 [i_0]) ? 4102904271 : 1357811816))) && var_1))) : ((var_12 >> (var_7 - 146463118))))))));
                }
            }
        }
    }
    var_23 = (-108 + 20);
    #pragma endscop
}
