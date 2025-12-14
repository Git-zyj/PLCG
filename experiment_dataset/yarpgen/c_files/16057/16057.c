/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_14 = (((31744 ? 11807121877102181813 : 255)));
        var_15 += (arr_0 [i_0] [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 10;i_3 += 1)
                {
                    {
                        var_16 -= var_1;
                        var_17 = (min((max(-1029566223116908250, (arr_4 [i_2 - 4]))), ((((((var_2 ? var_0 : 65535))) ? (arr_5 [i_0] [i_0] [i_0]) : (!var_4))))));

                        for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
                        {
                            var_18 -= (((max(3294824129, 38106)) >> ((((((250 > (arr_8 [i_0] [i_2 - 1] [i_3] [i_4]))) ? 11807121877102181813 : 31744)) - 11807121877102181813))));
                            var_19 ^= (((var_7 ? (arr_2 [i_3 - 1]) : (arr_2 [i_3 + 2]))));
                        }
                        for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                        {
                            var_20 = (((((33813 ? 11075 : 8874))) ? 12550261664414246707 : 21));
                            var_21 *= var_5;
                            var_22 &= (max(((max((65535 && 0), -32758))), 11578));
                            var_23 -= (((~1) ^ (((((var_6 ^ (arr_1 [i_0] [13])))) ? ((max(var_12, var_12))) : (((arr_6 [i_0]) ? (arr_3 [i_0]) : (arr_14 [i_0] [i_1] [i_2 - 2] [i_3] [i_5])))))));
                            var_24 *= ((29176 ? 0 : (arr_3 [i_0])));
                        }
                    }
                }
            }
        }
        var_25 = max((arr_10 [i_0] [i_0] [i_0] [i_0]), (min(0, (min((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), 1029566223116908227)))));
    }

    /* vectorizable */
    for (int i_6 = 0; i_6 < 0;i_6 += 1)
    {
        var_26 = (0 - 0);
        var_27 = (((((11 ? -7368192683084642254 : 11))) ? (-9223372036854775807 - 1) : (((0 >> (((arr_17 [i_6]) - 7914790277020258195)))))));
        var_28 &= ((255 >> (255 - 230)));
    }
    var_29 = var_11;
    var_30 = ((var_1 > (min(var_4, (~18446744073709551615)))));
    var_31 -= ((!((min(var_4, var_5)))));
    #pragma endscop
}
