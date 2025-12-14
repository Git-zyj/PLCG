/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((max(-var_7, (var_6 >= -84)))) ? 1564406141 : ((((var_4 == var_1) >= (min(var_3, 34272)))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (min(((((arr_1 [i_0] [i_0]) % 117))), ((1564406140 ? 2730561126 : 19994))));
        var_13 += 2155670694;
        arr_3 [21] [i_0] = 1589227479;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_14 = (min(var_14, (((((min(1589227479, -1589227488))) ? -7593512440839061067 : (~1564406141))))));
        var_15 = ((1219725513 ? 1 : 3389875643122267448));
        arr_7 [i_1] = (arr_4 [i_1] [i_1]);
        arr_8 [i_1] = ((-16 <= (((!((((arr_0 [i_1]) ? 6333273697541263432 : (arr_0 [i_1])))))))));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        arr_13 [i_2] = (max(0, 1));
        var_16 = ((((max((arr_4 [i_2] [i_2]), (arr_10 [i_2])))) ? (arr_0 [i_2]) : (arr_10 [i_2])));
    }

    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        arr_16 [17] = (((~((((arr_0 [i_3]) <= var_6))))));
        arr_17 [i_3] [i_3] = min(-72, (((((((arr_14 [i_3] [i_3]) ? -200872098 : var_4))) ? 1692546156 : 16435))));
        arr_18 [i_3] = ((((min(69, var_8))) ? (((min(-72, -72)))) : var_7));
        arr_19 [i_3] = (((arr_4 [i_3] [i_3]) ? (((((arr_0 [i_3]) ? (arr_1 [i_3] [i_3]) : 7988301014397783289)) & ((((arr_14 [i_3] [i_3]) & (arr_5 [0])))))) : (min(49592, 3878203503353384356))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_17 = (((arr_5 [i_4]) ? ((var_10 ? -17342 : 1)) : ((((arr_4 [i_4] [14]) <= 1463867836)))));
        var_18 = (((((15944 ? 2730561155 : 2730561172))) ? 16435 : 16435));
        var_19 = (arr_11 [i_4] [i_4]);
    }
    #pragma endscop
}
