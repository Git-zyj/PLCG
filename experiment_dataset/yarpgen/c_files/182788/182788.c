/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_18 += var_12;
            arr_5 [7] [i_1] = (((~var_9) ? (((arr_1 [i_0]) & ((var_5 | (arr_3 [i_0]))))) : (((~(arr_3 [14]))))));

            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                var_19 -= var_14;
                var_20 = (((((var_8 / (arr_1 [i_0])))) ? (arr_3 [i_0]) : 968563126));
                arr_9 [18] [i_1] [i_2] = (((((968563126 ? var_12 : (arr_6 [i_2] [i_1])) << (((arr_0 [i_0]) - 67))))));
            }
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                var_21 = ((((((arr_7 [i_3] [12] [i_0]) ? var_17 : var_2)) - (arr_10 [i_0] [i_1] [i_0] [i_3]))));
                var_22 = var_0;
                var_23 = (min(var_23, (arr_3 [i_1])));
            }
        }
        var_24 = (min(var_24, 968563105));
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
    {
        var_25 = ((-((max((arr_4 [i_4] [i_4] [i_4]), (-127 - 1))))));
        var_26 ^= (((((((max((arr_2 [17]), var_13))) && 4294967283))) >= ((((17877 ? 1950232139 : 662775174))))));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_16 [i_5] [i_5] = ((236 ? ((7 ? var_14 : (var_1 / 206))) : (-32767 - 1)));
        arr_17 [i_5] = 968563126;
        var_27 = (min(var_27, (((((((arr_0 [i_5]) ? (arr_8 [i_5] [i_5] [i_5] [i_5]) : (max((arr_0 [i_5]), (arr_12 [24])))))) ? ((((((arr_7 [i_5] [7] [i_5]) ? (arr_10 [i_5] [i_5] [0] [18]) : var_4))) ? ((-1839502466250390731 ? 5845295878198394743 : 32767)) : ((min(var_10, 3326404151))))) : (((-((((arr_11 [i_5] [i_5] [i_5]) >= var_7)))))))))));
    }
    var_28 = (max((min(2904944068, 968563151)), ((((var_11 ? 1 : var_15))))));
    #pragma endscop
}
