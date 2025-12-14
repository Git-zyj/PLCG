/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (min(var_16, (((arr_2 [i_0]) ? (arr_1 [i_0]) : (arr_2 [i_0])))));
        var_17 = ((1654903591 ? 1654903591 : 451996183));
        arr_3 [20] = (-1 + 2640063714);
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            var_18 = ((253 ? 1506311651 : (arr_4 [i_2 - 2] [9])));
            var_19 = (min(var_19, (arr_5 [i_2] [i_2 - 1])));
            var_20 = 26;
            var_21 = ((-(arr_8 [i_2] [i_2 + 1] [5])));
        }
        var_22 = (max((min(5, (min(13382526843832951183, -27)))), (((4294967295 ? (-1 || 0) : (((!(arr_0 [i_1])))))))));
        arr_9 [i_1] |= ((~((~(min(-1, (arr_7 [0])))))));
        var_23 ^= var_4;
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        var_24 *= (arr_11 [i_3]);
        var_25 = (min(-869260585, (arr_2 [i_3])));
        var_26 = ((-1654903584 ? 45 : (min(4294967282, 1654903568))));
        var_27 += 3490299894201161927;
    }
    var_28 = 490829313;
    var_29 = (min(13382526843832951183, 834836660));
    var_30 = (max(var_12, var_8));
    #pragma endscop
}
