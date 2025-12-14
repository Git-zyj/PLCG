/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_0));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 |= ((-(min(var_8, (arr_0 [5] [3])))));

        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            var_14 = (max(var_14, (~31)));
            var_15 = (max(var_15, (((~(((arr_6 [i_0] [3]) ^ (var_8 | var_0))))))));
            arr_7 [i_0] [i_1] = var_11;
            arr_8 [i_1] [i_0] [5] = ((((51780 ? (arr_1 [i_1 - 1] [3]) : (arr_1 [i_1 - 1] [i_1 - 1]))) & (((arr_6 [i_0] [i_1 - 1]) ? 214 : var_4))));
        }
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            arr_14 [i_3 - 1] = ((~((+((0 ? (arr_10 [6] [6]) : var_9))))));
            arr_15 [i_2] [0] [i_2] = var_4;
        }
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            var_16 ^= (min((((31 & 4125565010) << (((var_2 / 13893) + 393406639678574)))), ((((var_11 ? 13776 : 51780))))));
            var_17 = var_8;
        }
        /* LoopNest 3 */
        for (int i_5 = 3; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    {
                        var_18 -= ((min(var_9, -69)));
                        var_19 = 222;
                    }
                }
            }
        }
    }
    #pragma endscop
}
