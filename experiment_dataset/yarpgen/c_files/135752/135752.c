/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((~var_10) ? var_1 : var_1)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_12 |= var_3;
        var_13 = ((((((arr_0 [i_0] [i_0]) ? 1 : (arr_0 [i_0] [i_0])))) ? ((((arr_1 [i_0]) < (arr_0 [i_0] [i_0])))) : (!var_8)));
        var_14 += var_10;
        arr_2 [i_0] = var_9;
    }
    var_15 += var_10;
    /* LoopNest 3 */
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    var_16 += ((+(((((arr_0 [i_1] [i_2]) && (arr_1 [i_3]))) ? ((~(arr_4 [i_1]))) : ((((arr_6 [i_2]) && var_6)))))));
                    var_17 = (((((+((((arr_1 [i_2]) && var_1)))))) - (((1 - var_3) ? ((1 ? 5567143242182612016 : 1)) : var_0))));
                    var_18 = (max(var_18, ((max(((min(((max((arr_7 [i_1]), (arr_8 [i_3])))), (var_4 * var_4)))), (min((max(0, (arr_9 [9] [i_2] [i_3] [2]))), var_3)))))));
                    var_19 &= 780434210;
                }
            }
        }
    }
    #pragma endscop
}
