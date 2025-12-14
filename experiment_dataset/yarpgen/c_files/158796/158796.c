/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= ((max((14148712303438043326 | 186), var_4)));
    var_16 *= ((var_11 > ((((69 || var_12) || (-2791048310838229390 && 892389375))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 186;
        var_17 &= (((65527 && var_3) || ((max(-4089609392057888792, 892389375)))));
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        var_18 -= ((+((-1265110449 / ((max((arr_5 [i_1 + 1]), var_9)))))));
        var_19 = (max(var_19, (arr_0 [i_1 - 1])));
        var_20 = ((((min((arr_6 [i_1 - 1] [i_1 + 1]), 255))) & -1));
    }
    #pragma endscop
}
