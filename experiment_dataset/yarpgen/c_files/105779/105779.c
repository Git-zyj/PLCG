/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((~15714798525571963915) ? var_12 : var_4))) ? (((((var_10 ? var_5 : var_12))) ? ((var_12 ? var_1 : var_7)) : 5959685918928832311)) : (((4294967281 ? var_2 : ((1509727342 ? 28 : -9002339698759812218)))))));
    var_18 += var_16;

    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        var_19 = min((!var_1), (((arr_0 [i_0] [i_0 - 4]) ? var_4 : (arr_0 [i_0 - 1] [i_0 - 3]))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_20 = var_3;
                    var_21 = ((((((arr_2 [i_0]) ? -6023810948937915054 : (arr_8 [i_0] [i_1] [1]))))) ? (((var_15 ? var_16 : var_6))) : (var_5 ^ -6749674750595157111));
                    var_22 = (((((var_0 ? ((((var_3 > (arr_8 [i_0] [i_0] [i_0]))))) : ((7267110492444451364 ? 1421925133 : (arr_8 [i_0 - 2] [i_1] [i_2])))))) ? ((15164 ? var_2 : (arr_6 [16] [i_2 + 1] [i_2 - 2]))) : (arr_6 [22] [i_1] [i_2 + 1])));
                }
            }
        }
    }
    #pragma endscop
}
