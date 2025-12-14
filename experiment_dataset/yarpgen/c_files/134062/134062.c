/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((203 & ((min(2036436081477519234, 224)))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_12 &= var_7;
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = ((((!((((arr_5 [i_1] [i_0] [i_2] [i_1]) ? var_4 : var_5))))) ? ((~(arr_6 [i_2 + 2] [i_0] [i_1]))) : var_6));
                    var_13 = var_9;
                }
            }
        }
        arr_8 [1] |= (min(32752, 32752));
        var_14 = (arr_5 [i_0] [i_0] [i_0] [i_0]);
    }
    var_15 -= ((var_10 ? (((~((max(60, var_10)))))) : (min(((var_3 ? var_6 : var_7)), var_4))));
    var_16 = ((1 ? 0 : 4177671120));
    #pragma endscop
}
