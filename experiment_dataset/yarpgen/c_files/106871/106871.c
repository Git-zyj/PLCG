/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(((((min(-24794, var_6))) ? ((395665694 << (var_10 - 1102118844430999943))) : var_8)), var_4));
    var_14 = (min(var_14, var_5));

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = ((!((((3974886197 != 15) ? (((4318 ? 117 : -91))) : (arr_0 [i_0 + 2]))))));
        var_15 = (3 & ((3899301620 >> (395665694 - 395665671))));
        var_16 = (((((arr_1 [i_0 - 1] [i_0 - 2]) ^ (min(-1, 1)))) == (8191 << 15)));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_7 [i_1] = ((!((((24794 || -36) ? 43944 : (arr_5 [3] [i_1]))))));
        arr_8 [i_1] [i_1] = (((2 < 4294959104) ? (((((!(arr_4 [i_1] [i_1])))) & (arr_4 [i_1] [i_1]))) : 18691));
        var_17 = (max(var_17, (((!(((1023 << (35 - 29)))))))));
        var_18 = ((!((((arr_5 [i_1] [i_1]) ? 24794 : (arr_5 [i_1] [i_1]))))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        arr_11 [i_2 - 1] = ((((-(arr_10 [i_2])))) ? ((var_11 ? var_3 : 4294967295)) : (-1 >= 8191));
        arr_12 [i_2] = (((arr_9 [i_2 + 1]) * (arr_9 [i_2 - 1])));
        var_19 = (((arr_9 [i_2 + 1]) ? 24794 : 24794));
    }
    var_20 = ((var_8 & ((((2110999027 <= var_7) >= 2386725779)))));
    #pragma endscop
}
