/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, 164458509));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_16 = (min((((arr_1 [i_0]) ? (((!(arr_3 [i_0] [i_0] [i_0])))) : (arr_0 [i_0]))), ((((!(arr_4 [8] [i_1])))))));
                var_17 = (((((1 ? 65519 : 36310))) % ((((arr_3 [i_0] [i_0] [i_1 + 1]) == (arr_3 [i_0] [i_1] [i_0]))))));
                var_18 = (max(var_18, 32745));
            }
        }
    }
    var_19 = (min(var_19, 49));
    var_20 = var_11;
    #pragma endscop
}
