/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((var_16 + (var_10 + var_1))) << (var_8 >= var_1)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = (min(var_15, (((((2833491745 ? (arr_6 [i_0]) : var_10))) ? (arr_2 [i_2 - 1]) : (0 / var_5)))));
                    arr_10 [i_0] [i_0] [i_2] = ((((arr_3 [i_2 - 1]) ^ (arr_3 [i_2 - 1]))) >= ((((min(var_6, (arr_2 [i_1])))) ? ((((arr_6 [18]) ? 2833491722 : (arr_4 [i_0] [i_1] [i_1])))) : (((arr_9 [i_2] [i_2] [i_0]) + 198)))));
                    var_19 = (min(var_19, ((min((((0 >> (var_10 - 14943610367622922441)))), var_8)))));
                }
            }
        }
    }
    #pragma endscop
}
