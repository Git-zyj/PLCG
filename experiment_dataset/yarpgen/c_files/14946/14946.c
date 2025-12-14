/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, -1));

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_12 = (arr_2 [i_0]);
        var_13 = (((arr_1 [i_0]) && (arr_2 [i_0])));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_14 = (max(var_14, (((~(((arr_2 [i_1]) ? 582592169 : 14822651616224933138)))))));
        var_15 = ((((((((arr_3 [i_1] [i_1]) ? 3551226864 : var_3)) * (((((arr_1 [i_1]) < (arr_1 [13])))))))) ? (((min(var_3, var_8)) << ((min(var_10, (arr_5 [i_1])))))) : (arr_4 [i_1])));
    }
    var_16 = var_1;
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            {
                var_17 = (min(var_17, (((!((max(((14036654000092442872 ? (arr_10 [10]) : (arr_10 [4]))), ((~(arr_6 [i_2] [4])))))))))));
                arr_11 [16] |= (((arr_10 [12]) >= (arr_10 [0])));
                arr_12 [i_2] [i_2] [i_2] = (((~(arr_7 [i_3] [i_2]))));
                var_18 = (arr_7 [i_2] [i_3]);
            }
        }
    }
    #pragma endscop
}
