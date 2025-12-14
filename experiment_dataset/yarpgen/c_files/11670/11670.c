/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -1;
    var_20 = (max((~var_12), (~var_7)));
    var_21 = (min(var_21, (((var_0 ? var_3 : (var_14 || var_11))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_22 = ((~(arr_1 [i_0 + 2])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [17] = ((((!(arr_3 [i_0] [i_1] [22]))) ? (arr_5 [i_0 - 1]) : (~65535)));
                    var_23 = (min(var_23, 1));
                    arr_11 [i_0] = 1;
                }
            }
        }
        var_24 = ((((3003062609908150429 ? 3003062609908150428 : (arr_0 [i_0] [8]))) <= (arr_2 [i_0])));
        var_25 *= (((arr_7 [2]) & (arr_7 [18])));
        arr_12 [i_0] = ((-(arr_1 [i_0 - 1])));
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        arr_15 [i_3] = (arr_6 [i_3] [i_3]);
        var_26 *= ((((((-32476 / 1) / 3003062609908150443))) ? ((((((((arr_9 [9] [i_3] [i_3] [i_3]) ^ (arr_2 [9])))) || (arr_8 [i_3] [i_3] [15] [15]))))) : (((arr_6 [i_3] [i_3]) & (arr_2 [i_3])))));
        var_27 = 15443681463801401173;
    }
    #pragma endscop
}
