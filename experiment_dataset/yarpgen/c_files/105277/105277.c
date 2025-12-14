/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((var_5 >> (((20110 - var_5) - 499991100)))) > (((var_9 + (var_7 < -3794806737436515719))))));
    var_11 = (min(14352849105970170927, (((var_5 > (~3794806737436515718))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = (((var_6 ? (arr_4 [i_0]) : (arr_4 [i_0]))));
                arr_5 [i_0] = (min(((~(max(-3794806737436515719, 1996724561)))), (((((((arr_1 [i_1]) && -3794806737436515707))) < ((min(var_7, 15402))))))));
            }
        }
    }
    #pragma endscop
}
