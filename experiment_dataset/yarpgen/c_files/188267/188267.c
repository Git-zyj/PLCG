/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~(16384 | -930373482)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = ((((~var_12) * var_14)));
                    var_17 = (max(((max(((8459880770457536745 ? 930373477 : var_14)), 10147))), (arr_1 [i_0])));
                    var_18 = (min(var_18, ((((((((var_12 && (arr_1 [3])))) + (arr_6 [i_2 - 1] [i_1] [i_1]))) >> ((((((max((arr_5 [i_0]), var_5))) ? 930373470 : (max(0, 930373470)))) - 930373459)))))));
                    var_19 = (arr_2 [i_2 - 1]);
                }
            }
        }
    }
    var_20 += 1226438249;
    #pragma endscop
}
