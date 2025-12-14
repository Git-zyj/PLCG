/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((max((max(4542452687774960090, var_12)), (!1138341886))), -1138341886));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((((min(127, (arr_3 [i_0] [5] [i_1])))) || ((((var_1 | var_3) ^ ((0 ? 0 : var_11)))))));
                var_14 = (max(var_14, -127));
                var_15 = (min((((((65520 ^ (arr_2 [i_0] [i_0] [i_1]))) >> ((((var_3 ? (arr_2 [i_0] [i_1] [i_0]) : -172561796)) - 1281703509))))), (~5073125525044129587)));
                arr_5 [1] &= (arr_3 [i_0] [8] [i_1]);
            }
        }
    }
    #pragma endscop
}
