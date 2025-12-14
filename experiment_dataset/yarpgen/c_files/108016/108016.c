/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= (min(77815190, (-2147483647 - 1)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((!(arr_0 [i_0 + 2] [i_0 + 3])));
                var_13 -= (min(535045105, var_6));
                arr_6 [i_0] [i_0] = (arr_4 [i_0] [i_1]);
                var_14 = (max(var_14, (((~(((arr_4 [i_0 - 1] [11]) ? var_6 : (arr_4 [i_0 - 1] [i_1]))))))));
            }
        }
    }
    var_15 = ((-(((var_0 > (min(1169921703, var_1)))))));
    #pragma endscop
}
