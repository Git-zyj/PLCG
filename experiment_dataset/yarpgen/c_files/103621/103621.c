/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 &= (min((arr_1 [i_0]), (arr_2 [1] [i_0])));
        var_19 = ((((-(!1)))) % (arr_1 [i_0]));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_0] [21] = 1;
                        var_20 -= (-(((min((arr_9 [i_3] [10] [i_2] [i_0] [i_0] [i_0]), var_3)) | (arr_5 [i_2]))));
                    }
                }
            }
        }
        arr_11 [i_0] [i_0] = ((5396045560459120221 ? (((((((arr_1 [i_0]) ? (arr_8 [i_0] [i_0]) : var_3))) && (((arr_6 [i_0] [i_0] [i_0] [i_0]) < (arr_1 [i_0])))))) : ((var_8 << ((((arr_3 [15] [i_0]) >= 1)))))));
    }
    var_21 += ((-(((var_8 * 1) / -var_16))));
    var_22 = var_8;
    var_23 = (!var_9);
    var_24 = 1;
    #pragma endscop
}
