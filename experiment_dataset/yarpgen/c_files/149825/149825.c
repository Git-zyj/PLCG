/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-(((var_4 == var_5) % -var_14))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_17 = (max(var_17, 1498922136));
        arr_4 [i_0] = arr_0 [i_0] [i_0];

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            var_18 = 187;
            var_19 = (min(var_19, (((((((arr_3 [i_1 + 1]) - (arr_1 [8] [8])))) ? (((-1850948520 + 2147483647) >> (-28287 - 18446744073709523303))) : (0 < 15515057628922602316))))));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            var_20 = (-(!0));
            var_21 = (min(var_21, (arr_10 [0])));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_22 = 0;

                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            var_23 = (((arr_6 [i_4]) != 1));
                            var_24 = (max(var_24, (2202667910 - 187)));
                            arr_22 [i_3] [i_2] [i_3] [i_3] [i_3] |= (((((arr_0 [i_3] [i_3]) ? var_2 : 69)) - (arr_0 [i_0] [i_3])));
                        }
                        var_25 *= (186 | 16027);
                    }
                }
            }
        }
        var_26 = (max(((((69 <= (arr_8 [i_0] [i_0] [i_0]))))), ((46515 % ((var_12 ? (arr_5 [i_0] [i_0] [i_0]) : (arr_6 [i_0])))))));
    }
    var_27 = var_5;
    #pragma endscop
}
