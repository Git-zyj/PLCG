/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_12 = (!var_4);
                    var_13 = var_8;
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_14 &= (((((arr_12 [i_3]) ? var_3 : (arr_12 [i_3]))) | var_0));

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_15 = (((((((max((arr_2 [i_3]), var_6))) ? var_7 : var_6))) ? ((-((-(arr_10 [i_3]))))) : (arr_13 [i_3] [i_3])));
            var_16 = (min(var_16, (arr_2 [i_3])));
        }
        var_17 = ((var_5 ? ((~(((arr_3 [1]) ^ var_5)))) : var_1));
    }
    #pragma endscop
}
