/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_17 = (min((min((-7419998858499693814 % -7419998858499693836), ((var_13 ? (arr_0 [i_1]) : var_0)))), 18732));
                var_18 = (max(var_18, ((max((!var_1), -0)))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        arr_8 [i_2] = (((arr_7 [i_2]) ? (arr_7 [i_2]) : (arr_7 [i_2])));
        var_19 = (7419998858499693815 ? (arr_4 [i_2]) : 2610205419399490182);
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 15;i_5 += 1)
                {
                    {
                        var_20 = ((+((32 ? (-9223372036854775807 - 1) : -7704722289251681961))));
                        var_21 = (((arr_13 [i_4] [i_4 - 2] [i_4] [i_2]) ? (!65535) : 125));
                        arr_16 [i_5 - 2] [i_4 + 2] [4] [i_2] |= (((arr_11 [i_4] [i_4 + 2] [i_4 + 2]) || var_11));
                        var_22 = var_8;
                        var_23 = (arr_11 [i_5 + 1] [i_4] [i_4 - 1]);
                    }
                }
            }
        }
    }
    for (int i_6 = 2; i_6 < 14;i_6 += 1)
    {
        var_24 = (max(((((arr_17 [i_6 + 2] [i_6 + 2]) ? var_3 : var_13))), (((arr_17 [i_6 + 3] [i_6 + 1]) ? (arr_17 [i_6 + 3] [i_6 - 1]) : (arr_17 [i_6 + 2] [i_6 - 1])))));
        arr_19 [i_6] = 0;
    }
    var_25 = (((min((var_5 >= var_0), (min(var_15, var_11)))) == var_1));
    #pragma endscop
}
