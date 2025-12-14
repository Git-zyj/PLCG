/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_1;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_21 += (min(15, (arr_4 [i_0] [i_0])));
            arr_5 [i_1] = ((((min(-5670001171247286891, (arr_3 [i_0 - 1] [i_1])))) ? (arr_0 [2]) : (arr_1 [i_0])));

            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                arr_9 [i_2] = ((((11 ? (min((arr_8 [i_1] [i_2 + 1]), 5670001171247286891)) : 2798359688)) != (arr_6 [i_1] [i_0 - 1] [i_2] [i_1])));
                var_22 ^= (((((((!(arr_7 [11] [i_1] [i_1]))) ? (((arr_2 [6] [11] [i_2 + 1]) ? 268435456 : (arr_1 [i_0]))) : ((1496607607 ? (arr_1 [i_0]) : (arr_6 [i_0] [0] [i_2] [i_0])))))) ? ((((!(arr_7 [i_0 - 1] [i_0] [i_0 - 1]))))) : (((arr_3 [i_0 - 1] [i_0 - 1]) ? (arr_4 [i_0] [i_2]) : 692232404425215001))));
                arr_10 [i_0 - 1] [i_0 - 1] &= (arr_1 [10]);
            }
            var_23 = ((+((((((-5670001171247286891 ? (arr_3 [i_0] [i_0 - 1]) : 124))) || 2798359689)))));
        }
        var_24 -= var_19;
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        arr_14 [i_3] [i_3] = (((((15 ? 255 : 128))) + (arr_12 [i_3])));
        var_25 = ((-(arr_11 [i_3] [i_3])));
        arr_15 [i_3] [i_3] = (arr_11 [11] [6]);
    }
    var_26 = (((var_13 ? (!var_7) : -1)));
    var_27 = var_17;
    #pragma endscop
}
