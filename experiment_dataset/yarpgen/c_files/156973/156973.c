/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;
    var_14 = (16232151611949801783 >> var_6);
    var_15 = (((max(16232151611949801802, -2214592461759749834)) >= -2214592461759749833));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (59 | (arr_1 [i_0] [i_0]));
        var_16 = (max(var_16, ((max(((((~(arr_1 [i_0] [i_0]))) ^ ((16232151611949801783 ? (arr_0 [i_0] [i_0]) : 1611286700083800020)))), (max((!4335224828226966943), (((arr_0 [i_0] [i_0]) | -4335224828226966964)))))))));
    }
    var_17 = ((((max(var_0, var_4))) ? (((var_11 > 10490181136453723349) ? 1379526748468875483 : var_12)) : ((((max(140737488355327, 1985528782))) ? ((max(var_12, 1566741524067763513))) : ((var_3 >> (var_5 - 12683518057618352091)))))));
    #pragma endscop
}
