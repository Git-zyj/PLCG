/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_13 = 11255;

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            var_14 = ((~((var_9 ? 0 : 12017))));
            var_15 = -1;
            var_16 = ((~((-14 ? (arr_2 [i_1]) : var_4))));
            var_17 = (arr_2 [i_0]);
        }
        arr_4 [i_0] [i_0] = ((((-4 ? -2026106948 : 25092)) >= ((((arr_1 [i_0]) <= (arr_3 [i_0] [i_0]))))));
        var_18 *= ((-2564199260354878274 << (var_11 - 43)));
        var_19 = ((((((8908027477972579373 ? -1940670927 : (arr_0 [i_0]))) + 2147483647)) << ((((((6231314235739366070 ? -14 : -1)) + 45)) - 29))));
    }
    for (int i_2 = 2; i_2 < 9;i_2 += 1)
    {
        arr_7 [i_2] [i_2] = min((~28), (((arr_0 [i_2 + 1]) ? (arr_0 [i_2 + 1]) : (arr_0 [i_2 - 2]))));
        var_20 = ((max((min((arr_3 [i_2] [i_2]), 6893143429154693669)), ((((arr_6 [i_2]) ? 15703 : (arr_6 [i_2])))))));
        arr_8 [i_2] = (arr_2 [i_2]);
        arr_9 [i_2] = (min((((((min(-2026106934, 127))) >= (arr_5 [i_2] [i_2])))), (((arr_6 [i_2]) ? ((min((arr_3 [i_2] [i_2 - 1]), (arr_1 [i_2])))) : 18425))));
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 9;i_3 += 1) /* same iter space */
    {
        var_21 ^= ((((arr_2 [i_3]) || 6231314235739366070)) ? ((((arr_1 [i_3]) ? 1 : var_9))) : 320062248);
        arr_12 [i_3] = 950388844;
    }
    for (int i_4 = 3; i_4 < 9;i_4 += 1) /* same iter space */
    {
        var_22 += (arr_2 [i_4]);
        arr_15 [i_4] &= (arr_14 [i_4]);
    }
    var_23 = (!-481388320130002043);
    #pragma endscop
}
