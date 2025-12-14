/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_8, ((((max(var_16, 18088121463819872869))) ? (max(var_16, var_4)) : (((var_1 ? var_12 : var_12)))))));
    var_18 = (!(-9223372036854775807 - 1));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] [i_2] = (((((~((9223372036854775807 << (180 - 180)))))) ? ((~(var_8 & 163))) : (((arr_2 [i_0] [i_1]) >> 0))));
                    arr_8 [2] &= ((39821 ? ((((var_2 ? (arr_3 [i_0]) : -4852608098598555658)) - (21 & -9223372036854775786))) : (~-25)));
                    var_19 = ((((((((var_6 ? 0 : var_12))) ? (~var_14) : (arr_0 [i_2])))) ? (((((~(arr_1 [1])))) ? var_2 : (((1 ? (arr_2 [1] [9]) : (arr_5 [i_0] [i_2])))))) : ((((arr_3 [i_1]) ? (arr_3 [i_1]) : (arr_3 [i_0]))))));
                    arr_9 [i_1] [i_1] [i_2] [i_1] = ((!(((-((1633887165099163848 ? (arr_0 [i_0]) : (arr_3 [i_0]))))))));
                    arr_10 [i_0] [i_1] = ((((max((((!(arr_1 [i_2])))), -var_5))) / var_16));
                }
            }
        }
        var_20 = 449611253;
        var_21 = (!((max(((((arr_1 [i_0]) ? 0 : (arr_5 [i_0] [i_0])))), ((0 ? var_0 : var_15))))));
        arr_11 [i_0] = arr_1 [i_0];
    }
    for (int i_3 = 3; i_3 < 23;i_3 += 1)
    {
        arr_16 [i_3] = ((+(((((((arr_13 [i_3]) << (((arr_12 [i_3] [i_3 - 3]) + 54))))) && (arr_14 [18]))))));
        var_22 = ((((var_16 <= (arr_12 [i_3 - 2] [5]))) ? ((~((var_16 / (arr_15 [i_3]))))) : (((((arr_14 [i_3]) == ((1 ? (arr_13 [i_3]) : var_11))))))));
        var_23 = (arr_12 [4] [22]);
    }
    #pragma endscop
}
