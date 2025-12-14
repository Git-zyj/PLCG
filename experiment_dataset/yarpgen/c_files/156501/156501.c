/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((max(var_2, (~var_13)))) ? var_2 : (~var_1)));
    var_19 = ((var_4 ? (((((var_11 ? var_10 : var_15))) ? (max(var_3, var_7)) : ((max(var_0, var_1))))) : (((-12148712098131464286 ? (((min(1, 1)))) : var_3)))));
    var_20 = ((var_4 / ((((min((-9223372036854775807 - 1), 1)) < (var_2 << 1))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_21 += var_9;
        arr_2 [i_0] = ((300365386138109281 >> (107 - 92)));
        arr_3 [i_0] = ((!((min(((((-9223372036854775807 - 1) ? 1707622744 : var_10))), var_1)))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = var_15;
        arr_7 [i_1] = (max(((((max(var_11, (arr_0 [i_1]))) / -var_12))), ((36 ? (var_1 | 0) : (((arr_0 [i_1]) ? 12836534675479004250 : 1707622744))))));
    }
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        var_22 |= ((1707622721 - (((2305843009146585088 != (((var_7 ? (arr_1 [i_2] [i_2]) : var_11))))))));
        var_23 = ((~(((((var_13 ? (arr_0 [i_2]) : var_7)) > -106)))));
        var_24 = (((var_2 / (max(var_11, 300365386138109279)))));
    }
    /* LoopNest 3 */
    for (int i_3 = 2; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                {
                    var_25 += (((var_16 ? (((var_4 + 2147483647) >> (((arr_1 [i_3] [i_5]) - 177)))) : var_17)));
                    arr_18 [i_3] [i_4] [i_5] = (((-(!var_8))));
                    arr_19 [i_3] [i_3] [2] = ((44 ? 281474975662080 : 5967372091527972361));
                    arr_20 [i_3] [i_4] [i_3] = ((((var_17 < (arr_0 [i_5]))) ? (((arr_17 [i_3] [i_4] [i_5]) % 1133611858)) : var_11));
                }
            }
        }
    }
    #pragma endscop
}
