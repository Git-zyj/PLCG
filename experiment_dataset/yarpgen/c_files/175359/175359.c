/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_18 = (((arr_1 [i_1] [i_1]) - ((((!(var_13 | 1)))))));
                var_19 = var_10;
                arr_5 [i_0] [i_0] [i_1] = ((((((arr_1 [i_0] [i_1 - 1]) ? (arr_1 [i_1 + 2] [i_1 - 2]) : (arr_1 [i_0] [i_1 - 1])))) ? (((arr_1 [i_0] [i_1 + 1]) ? (arr_0 [7] [i_1 - 1]) : (arr_1 [i_0] [i_1 + 1]))) : (((arr_1 [0] [i_1 - 2]) >> (((arr_1 [i_0] [i_1 - 1]) - 9220714083903285772))))));
            }
        }
    }
    var_20 = 2694103012643817239;
    #pragma endscop
}
