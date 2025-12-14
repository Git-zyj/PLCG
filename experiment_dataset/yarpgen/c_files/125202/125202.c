/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_14 % ((63091 ? (var_17 % var_18) : 12504671342121675902))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = ((var_18 ? var_0 : (((arr_0 [i_0 + 1] [i_0]) ? (arr_0 [i_0 + 1] [i_0]) : (arr_0 [i_0 - 1] [i_0])))));
                var_22 = (((!((min((arr_2 [i_0] [i_0]), (arr_3 [i_1] [i_0] [i_0 - 2])))))) || (((((var_9 || (arr_4 [i_0] [i_0]))) ? var_0 : ((-6711219992756891368 ? (arr_2 [i_0 - 1] [i_1]) : var_14))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        arr_7 [i_2] = (arr_6 [i_2]);
        var_23 -= (min(127, -1));
    }
    for (int i_3 = 2; i_3 < 11;i_3 += 1)
    {
        arr_11 [i_3 - 1] = (max((min(((((arr_10 [i_3]) >> (var_4 - 4033654696407191778)))), ((6711219992756891367 << (((arr_9 [i_3]) - 18865)))))), -27));
        var_24 = ((((((arr_8 [i_3 + 4]) == (max(var_2, -1))))) < (arr_9 [i_3 - 2])));
    }
    #pragma endscop
}
