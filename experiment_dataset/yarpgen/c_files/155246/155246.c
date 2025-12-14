/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, 9897733832200266534));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = var_18;
        var_21 = ((33030144 ? ((min((66584576 & 3422416613), 45357))) : (((max(5091, (arr_1 [i_0]))) >> (137 - 84)))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_22 = (min(var_22, ((max(20186, (min((arr_1 [i_1]), (arr_1 [i_1]))))))));
        arr_5 [i_1] = 20197;
    }
    var_23 = (min(var_23, ((max(105, 1)))));
    var_24 -= (min(var_7, (((((min(-105, 1))) || 45357)))));
    var_25 = (~36);
    #pragma endscop
}
