/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((var_5 + var_3) >= ((var_9 ? var_3 : 31396)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_12 = ((-(((arr_2 [i_1] [i_1]) ? (arr_1 [i_0 + 1]) : ((14 ? 34142 : 7410611552988950937))))));
                var_13 += (arr_4 [i_0] [i_0] [i_0 + 1]);
            }
        }
    }
    var_14 = var_1;
    var_15 = (min(1103989903, (5 * 0)));
    var_16 = ((((((min(1, 34140))) ? 4518724272004376191 : 1684))) ? (((var_8 ? ((60 ? var_7 : 255)) : ((min(32766, 21)))))) : (min(var_9, 3292708268677536976)));
    #pragma endscop
}
