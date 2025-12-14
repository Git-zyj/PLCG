/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += ((var_3 ? ((-(min(var_13, var_17)))) : ((((min(var_3, var_3)))))));

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        var_20 = ((arr_0 [i_0 - 4] [10]) > (((arr_0 [i_0 - 3] [i_0]) ^ (arr_0 [i_0 - 2] [i_0 - 4]))));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_21 -= (arr_4 [i_0]);
            arr_5 [i_1] [i_1] [i_0] = var_1;
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            arr_8 [2] [i_2] [i_0] = var_3;
            var_22 = (min((min(3823689182, 11415639458865189118)), (((((arr_7 [i_0] [14] [i_2]) != var_0)) ? (arr_4 [i_2]) : (~11415639458865189118)))));
            arr_9 [i_0] [i_2] [i_2] = -var_8;
        }
        var_23 -= ((((arr_4 [i_0 - 2]) || (arr_4 [i_0 - 1]))));
        arr_10 [i_0] = (((min((var_14 | var_8), var_16))) ? (arr_0 [i_0 - 2] [i_0 - 1]) : var_11);

        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            var_24 = (max(var_24, (((~(3773189267 && 7031104614844362498))))));

            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                var_25 = (min((((arr_13 [i_0 + 2] [i_0 - 4] [i_0 + 2] [i_0 - 4]) % (arr_13 [i_0 - 2] [i_0 - 4] [i_0 - 3] [i_0 - 1]))), (var_9 - 125)));
                var_26 = ((var_3 ? var_17 : (((!(arr_3 [i_0 - 1] [i_3] [i_4]))))));
                arr_15 [2] [i_3] [i_0] [i_0] = 2327178770;
                arr_16 [i_0] [i_3] = (arr_7 [i_0 - 1] [4] [3]);
                var_27 = ((min(var_18, (arr_7 [i_0 - 3] [i_0 - 3] [i_0 - 3]))) >= ((((!(arr_7 [i_0 + 1] [i_0 - 4] [i_0 + 1]))))));
            }
        }
    }
    #pragma endscop
}
