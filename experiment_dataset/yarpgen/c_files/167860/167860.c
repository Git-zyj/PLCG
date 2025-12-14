/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_20 |= (max((max(((-10729 ? -686552100 : (arr_4 [8]))), ((((arr_2 [i_1]) ? var_2 : (arr_0 [i_0])))))), (((!((max((arr_3 [i_0]), 13961352371381643704))))))));

            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        {
                            arr_12 [i_4] [i_0] [i_0] [i_0] = (min(((((arr_11 [i_3 + 1] [i_3 + 1] [i_2] [i_2 - 1] [i_0] [i_0]) > 272422872))), ((-(arr_11 [i_3 + 1] [11] [i_2] [i_2 - 1] [i_4] [i_2])))));
                            arr_13 [i_0] [20] [i_4] [i_2] [i_3] [20] &= (arr_8 [i_0] [16] [i_2] [i_2] [i_3 + 1] [16]);
                            var_21 = (min(var_21, ((((!72057594037796864) / (arr_4 [i_4]))))));
                        }
                    }
                }
                var_22 *= ((-(arr_4 [18])));

                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    arr_16 [i_0] [i_0] [i_0] [i_2] [i_0] = -2200;
                    var_23 = (arr_3 [i_1]);
                }
            }
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_19 [i_6] [i_0] = ((((~((7620771868804593095 / (arr_17 [i_0]))))) <= (((((23197 ? 2309 : -11123))) ? ((-(arr_2 [i_0]))) : (arr_18 [i_0] [i_6] [i_6])))));
            var_24 -= ((+((4096 * ((max((arr_17 [i_0]), var_7)))))));
        }
        var_25 = (((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) == (((13401 >= (((!(arr_1 [i_0] [i_0])))))))));
        var_26 *= arr_11 [i_0] [i_0] [1] [i_0] [i_0] [1];
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 18;i_7 += 1)
    {
        var_27 += (((-127 - 1) < 2310));
        var_28 = -2093724522;
        var_29 = (min(var_29, (arr_17 [1])));
        var_30 = ((11565599169867094704 * (((arr_22 [2]) ? var_10 : var_3))));
        arr_23 [i_7 - 1] = (var_10 ^ var_18);
    }
    var_31 = ((!((max(var_0, ((var_0 ? var_14 : var_13)))))));
    var_32 = (((((18446744073709549568 ? 16418 : 60))) && 248));
    #pragma endscop
}
