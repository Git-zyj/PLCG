/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_10 &= ((((((max((arr_1 [i_0]), 1)) > 52709))) >= (((arr_1 [i_0]) ? 0 : (arr_1 [i_0])))));
        var_11 = (max(((11144183552159685907 << (52698 - 52681))), ((min(4236871732, (-111 <= 3867689334))))));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_12 = (max(1801594040, (max(((max(3867689334, 811250564))), (((arr_1 [i_0]) ^ 131071))))));
            var_13 = ((((((arr_1 [i_0]) ? 232 : 4294967290))) ? (-37 % 66) : 4461));
            var_14 = (max(var_14, 4810315722617462068));
        }
    }
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        arr_9 [i_2] [13] = ((1 ? 29 : (max(((1 ? -123 : 1)), -1))));
        var_15 = ((17793 ? 2581312076633467778 : (((arr_6 [i_2] [i_2] [i_2 + 2]) * 1))));
    }
    var_16 -= var_9;
    var_17 = 29;
    #pragma endscop
}
