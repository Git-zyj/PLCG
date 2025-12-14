/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_10 ? (max(-6193431225872439884, var_1)) : (((max((65525 == 81), (1902996697 >= 12855746517634187315)))))));
    var_14 = 0;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_15 = (arr_1 [i_0] [i_0]);
        arr_2 [12] = ((2 ^ (((arr_1 [i_0] [i_0]) - (arr_1 [i_0] [i_0])))));
        arr_3 [i_0] [i_0] = 31;
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_8 [i_1] = -1291351524;
        var_16 = ((((max((min(8345, 0)), var_12))) ? 794336321 : ((((min(2271024856721831787, (-127 - 1)))) ? 5122916730664580765 : (-127 - 1)))));
        arr_9 [i_1] = (1 < 32757);
        arr_10 [8] = ((var_6 ? ((min((arr_1 [i_1] [i_1]), var_12))) : (((((arr_1 [i_1] [i_1]) ? -31476 : 1125899906842623))))));
    }
    var_17 = (min(var_17, ((max((min(var_4, var_3)), ((18446744073709551613 ? 225 : ((13 ? 29 : 8195)))))))));
    #pragma endscop
}
