/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_9));
    var_14 = var_10;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_2 [13] [1] = (min(((max((39154 ^ 1848400818), ((min(0, (arr_0 [i_0]))))))), (((var_7 | var_4) & (((arr_1 [i_0 + 1]) & (arr_1 [i_0])))))));
        arr_3 [8] = (arr_1 [i_0 + 2]);
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = var_9;

        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            var_15 += (((4256766675603655145 + var_10) ^ var_11));
            arr_10 [14] = (((~17592186044415) >> (((arr_7 [i_1] [i_2 + 1] [1]) - 25794))));
        }
        var_16 = ((((((var_6 || var_4) ? (7555 && 65533) : (-1867848034 || 1)))) || ((((arr_7 [i_1 + 4] [i_1] [i_1]) ? (arr_7 [i_1 + 3] [i_1 + 3] [i_1 + 3]) : 12674848728931278266)))));
        arr_11 [i_1] = ((!((((max(17179869183, var_6)) * 46425)))));
        var_17 = (min(var_17, ((min(((max(65527, 118))), (max((arr_7 [i_1 + 1] [i_1] [i_1]), (arr_8 [i_1 + 3]))))))));
    }
    #pragma endscop
}
