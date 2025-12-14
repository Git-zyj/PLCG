/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, var_1));
                    var_17 = (max(4455626679089066220, (((~((var_4 ? var_3 : 93)))))));
                    var_18 -= (((((((arr_0 [i_0 + 1]) ? var_13 : var_5))) ? (((8064 ? var_4 : (arr_6 [i_2] [13] [i_0] [i_0])))) : (arr_0 [i_0]))) % (~-5702096229849539669));
                    var_19 = var_2;
                }
            }
        }
        var_20 = ((-218070264 ? 0 : -195598497));
    }
    var_21 = var_7;
    var_22 = (min((min((max(var_13, var_14)), (~var_5))), -1882074268991999772));

    /* vectorizable */
    for (int i_3 = 3; i_3 < 9;i_3 += 1)
    {
        arr_9 [i_3] [i_3] = ((var_0 ? var_3 : var_7));
        arr_10 [i_3] [i_3] = ((-(~var_3)));
    }
    #pragma endscop
}
