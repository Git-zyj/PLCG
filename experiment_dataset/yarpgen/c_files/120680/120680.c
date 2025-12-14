/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_13 -= (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [1])));
        var_14 |= ((15 ? 8905869575388538741 : 11756));
        var_15 *= (arr_2 [14] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_16 ^= arr_2 [i_0] [i_1];
                    var_17 = ((((((arr_6 [i_0] [i_1] [i_2]) ? (arr_3 [i_0]) : 65525))) ? (arr_6 [i_0] [i_1] [i_0]) : var_8));
                    arr_9 [i_1] [i_1] [i_2] [i_0] = (arr_4 [i_2 + 1] [i_2 + 1] [i_2]);
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_18 = (max(var_18, (((((min(var_6, (arr_7 [11] [11] [i_3])))) ? (((var_12 != (((arr_11 [i_3] [i_3]) ^ (arr_10 [i_3])))))) : ((23988 << (1160770097 - 1160770097))))))));
        var_19 ^= (~var_5);
        var_20 -= (max((152815516 + 65511), var_5));
    }
    var_21 = ((var_5 > (((((min(var_12, var_3))) & (var_5 > var_1))))));
    var_22 = ((~(min(((min(var_11, var_12))), var_9))));
    #pragma endscop
}
