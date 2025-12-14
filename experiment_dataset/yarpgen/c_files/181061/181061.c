/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [19] = max((((-942302115455125597 + 9223372036854775807) >> (61513 - 61483))), ((min(6244, (min(var_5, (arr_1 [i_0])))))));
        arr_3 [i_0] [i_0] = 1;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_16 = ((((((arr_0 [i_1] [i_1]) / (arr_0 [i_1] [i_1])))) / (((arr_5 [i_1]) ? (arr_5 [i_1]) : 3824971706663865937))));
        arr_6 [4] [i_1] = max(((+(((arr_0 [i_1] [i_1]) ? 1 : 9397114768586326610)))), 14816713759234568231);
        arr_7 [i_1] = (((-((-942302115455125598 ? 1 : 14234454530866055160)))) + (((min(42098, (arr_4 [i_1] [i_1]))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_11 [i_2] = (arr_10 [i_2]);
        var_17 = 1;
        var_18 = (arr_0 [i_2] [i_2]);
    }
    var_19 = ((((-(min(-942302115455125597, -17374))))) ? ((((((219935330381125306 ? 0 : var_14))) % (max(var_14, 4168151795631324965))))) : (max(125, 6442319724281809157)));
    #pragma endscop
}
