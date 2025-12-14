/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= ((var_16 ? (((((min(var_4, var_6)))) & -var_3)) : var_14));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_18 = arr_3 [i_0] [i_2];
                    var_19 = (((((((((arr_4 [i_0] [i_1] [i_1]) ? (arr_4 [i_1] [i_1] [i_2]) : (arr_1 [7])))) ? 1062663702 : (var_15 == 116)))) ? (max((min((arr_0 [i_2]), var_16)), (((var_11 + (arr_3 [i_0 - 1] [8])))))) : (((-(((arr_3 [i_0] [i_1]) >> (arr_3 [i_1] [i_0]))))))));
                }
            }
        }
    }

    for (int i_3 = 1; i_3 < 17;i_3 += 1)
    {
        var_20 -= ((+(((arr_8 [i_3]) ? (((arr_8 [i_3]) ? 4764691908895847548 : (arr_7 [i_3]))) : (arr_8 [i_3])))));
        arr_9 [i_3] = (min(9918285064515215061, 25161352));
    }
    var_21 = (((((((var_14 ? var_2 : var_2))) ? (((33092 ? 1 : var_9))) : (max((-2147483647 - 1), 9918285064515215066)))) < ((max(((3045324712 ? var_13 : var_3)), (var_3 && var_12))))));
    var_22 = (min(((((min(12961972758500973597, var_16))) ? (26471 || 1) : (var_10 ^ var_5))), (~-741710632)));
    #pragma endscop
}
