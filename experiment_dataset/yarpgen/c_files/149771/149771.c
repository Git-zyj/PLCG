/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_3 [8] &= (1268095811 && -8305932717022729339);
        var_16 = (max(var_16, (((((((((arr_2 [i_0]) ? var_3 : (arr_1 [8]))) << ((((8305932717022729338 << (8305932717022729338 - 8305932717022729338))) - 8305932717022729329))))) <= ((3272618788 + ((((!(-2147483647 - 1))))))))))));
        var_17 = (((1769561437 + -155320619) ^ ((var_14 ? var_4 : (((arr_1 [i_0]) / -6873295761453327570))))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_8 [i_1] [i_1] |= ((min((-8305932717022729339 / -274092408), (((185 ? 65535 : 65535))))));
        var_18 = (212 > 212);
        arr_9 [i_1] = ((((min((arr_5 [i_1] [i_1]), var_5))) ? (((arr_5 [i_1] [i_1]) ? var_11 : (arr_5 [i_1] [i_1]))) : ((var_5 | (arr_5 [i_1] [i_1])))));
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 21;i_4 += 1)
            {
                {
                    arr_18 [i_4] [i_2] [i_3] [i_2] = max((((1022348507 ? (arr_16 [i_2] [i_3] [i_2] [i_4 - 3]) : (arr_16 [i_2] [i_3] [i_4] [i_4 + 2])))), -8305932717022729340);
                    var_19 = (max(var_19, 38));

                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_20 = -18446744073709551596;
                        var_21 = (((((-(min(-8305932717022729339, 65024))))) == ((var_2 >> (-var_3 + 16656)))));
                    }
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        var_22 = (((((((7845 <= (arr_13 [i_2] [i_3])))) * (-1 > var_11))) | (((((256721013 ? (arr_24 [22] [22] [i_4] [22]) : -8305932717022729335)) == (var_12 != var_9))))));

                        for (int i_7 = 3; i_7 < 22;i_7 += 1)
                        {
                            var_23 = (min(var_23, 42583));
                            var_24 = (max(var_24, (((((((var_0 < (arr_13 [i_2] [i_4 - 3]))))) == (var_3 % 1972672331))))));
                        }
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        var_25 = ((15 != (0 | -10)));
                        var_26 = (((arr_30 [i_4] [i_4] [i_4 - 3] [i_4 - 1]) << (((arr_30 [i_4] [i_4] [i_4] [i_4 - 1]) - 35108))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
