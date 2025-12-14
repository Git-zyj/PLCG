/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;
    var_15 = (max(var_15, ((((((~(var_9 ^ var_3)))) ? var_13 : var_8)))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] = ((3492983731464557632 ? 31 : -32));
        var_16 = (min(var_16, (((((max(((14769523174039917066 ? var_2 : (arr_3 [i_0]))), var_6))) ? -123 : (max((min(71987225293750272, 39)), (((var_8 ? 31 : -120))))))))));
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        var_17 ^= (max(((max((arr_6 [10]), var_4))), var_5));
        arr_7 [i_1] [i_1] = (46269 && 1420098946);
        arr_8 [i_1] = (max(((((96 ? (arr_5 [i_1]) : 2874868345)) | (arr_6 [i_1]))), (((((227 ? (arr_5 [i_1]) : 325618275))) ? var_12 : (arr_5 [i_1 + 2])))));
        arr_9 [i_1] = (((max((max(14953760342244993984, var_1)), (arr_6 [i_1])))) ? (((0 * 28702) ? (((arr_5 [i_1]) - -1)) : var_5)) : ((((((min((arr_6 [i_1]), (arr_6 [i_1])))) >= (((arr_5 [i_1]) ? -115 : (arr_6 [i_1]))))))));
    }
    #pragma endscop
}
