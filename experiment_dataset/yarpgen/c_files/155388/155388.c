/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_2] = (arr_5 [i_0] [i_1] [i_1] [i_2]);
                    var_20 = ((((min(var_10, (arr_0 [i_0 - 1] [i_1 + 1])))) ? (((((arr_0 [i_0] [i_1 + 1]) && (arr_4 [i_0]))))) : (arr_3 [i_0] [i_0])));
                    var_21 = (((min((~-1122122719021649983), var_15)) >= (arr_3 [i_0] [i_1])));
                    var_22 |= var_6;
                    var_23 = ((-(((arr_3 [i_0] [i_2]) ? (((arr_2 [i_0] [i_1 - 1]) ? (arr_3 [i_0] [i_1 + 1]) : var_12)) : -31768))));
                }
            }
        }
    }
    var_24 = ((~(((!(~var_19))))));
    #pragma endscop
}
