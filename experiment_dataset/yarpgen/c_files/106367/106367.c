/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (234 ^ var_4)));
    var_14 = (min(var_14, ((((((var_12 ? var_12 : (608261120 != var_10)))) ? (((max(var_4, var_11)))) : (((-19 % 8231521612897987195) * var_12)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_15 = (min(var_15, ((((max((var_0 | var_4), (var_5 - var_3))) | (((((arr_4 [i_2 - 1]) && (4 == var_3))))))))));
                    var_16 += (((((var_4 ? (var_7 || 1695998623) : ((max(var_8, 150)))))) ? ((((((arr_6 [i_0] [i_2] [10] [i_2]) % var_1))) ? (((var_12 >> (((arr_4 [i_1]) + 2611235141327650408))))) : -704756830163887708)) : ((max((((arr_1 [17]) ? var_12 : 3009257760)), ((max(var_0, var_8))))))));
                    var_17 = (min(var_17, ((((arr_7 [i_2] [i_1] [i_1]) ? (max((var_4 >= 792270602), (arr_1 [1]))) : (96 & 29521))))));
                    var_18 += var_8;
                }
            }
        }
    }
    #pragma endscop
}
