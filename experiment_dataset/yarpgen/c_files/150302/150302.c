/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_20 *= 912932322;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [i_2 + 1] = ((-(arr_7 [i_1] [i_2] [i_2] [3])));
                    var_21 = (min(var_21, (arr_2 [i_1] [i_2])));
                    var_22 = (((max(((min((arr_6 [i_0]), 20))), (((arr_1 [i_0]) ? (arr_3 [i_0] [i_0] [i_0]) : 13136670064788028302)))) << ((((max((arr_5 [i_0] [i_0]), (arr_3 [i_0] [i_1] [i_2])))) + 174))));
                    arr_10 [i_0] [i_1] [i_2] [i_0] = (((((-1112556087 & (arr_2 [i_2 - 3] [i_2 - 4])))) ? 5310074008921523302 : ((((arr_2 [i_2 - 3] [i_2 - 2]) ? (arr_2 [i_2 - 4] [i_2 - 4]) : (arr_2 [i_2 - 2] [i_2 - 3]))))));
                    arr_11 [i_0] [i_0] [i_0] [i_2] = (i_2 % 2 == 0) ? ((((1 - (arr_4 [i_0] [i_1] [i_2 + 1]))) - (arr_7 [i_0] [i_2] [i_2 + 1] [i_0]))) : ((((1 - (arr_4 [i_0] [i_1] [i_2 + 1]))) + (arr_7 [i_0] [i_2] [i_2 + 1] [i_0])));
                }
            }
        }
    }
    for (int i_3 = 2; i_3 < 10;i_3 += 1)
    {
        var_23 = (((((-(7425909310258283882 / -1112556087)))) ? ((+(((arr_1 [i_3 + 2]) & 8)))) : -1648752594));
        arr_16 [i_3 - 2] = ((!((min((((arr_0 [i_3]) ? (arr_1 [i_3 - 1]) : (arr_2 [i_3 + 1] [i_3]))), (arr_3 [i_3] [i_3] [i_3 + 1]))))));
        var_24 *= (min((((((-(arr_1 [i_3 - 2])))) == 5154630370331615450)), (((arr_6 [i_3 - 1]) || (arr_6 [i_3 + 2])))));
        var_25 = (((18446744073709551615 / (((arr_3 [i_3] [i_3] [i_3]) ? 8 : 274877906943)))));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 9;i_4 += 1)
    {
        var_26 *= ((!(arr_2 [i_4 - 1] [i_4 + 1])));
        var_27 = (((arr_0 [i_4 + 1]) != (arr_6 [i_4 + 1])));
        var_28 ^= (((arr_2 [i_4 + 1] [i_4 + 1]) && (4103758798052458677 || 4503599627370495)));
        var_29 = 32610;
        arr_19 [6] [6] &= ((((2 == (arr_14 [i_4]))) ? (arr_17 [i_4 + 1]) : (arr_18 [8])));
    }
    var_30 = 5980638979946848228;
    var_31 = (!-var_18);
    #pragma endscop
}
