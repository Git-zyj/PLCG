/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((var_10 != ((var_4 ? var_7 : var_10)))) ? (min(var_10, (min(var_1, 1190474447)))) : var_6));
    var_12 += 4294967295;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, (((~(((arr_2 [i_2 - 1] [i_0 - 1]) ? (var_5 && var_1) : (60 && 42445))))))));
                    var_14 += ((((~(arr_5 [i_2 - 1] [12] [i_1 - 2]))) == ((((!((min(-63, -77)))))))));
                }
            }
        }
    }
    #pragma endscop
}
