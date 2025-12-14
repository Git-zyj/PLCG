/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_1 | -32768);

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        arr_8 [i_0 + 1] [i_0 - 1] [i_1] [i_2 + 2] [i_0 - 1] [i_1] = 12;
                        arr_9 [i_0] [i_0] [i_1] [i_3] [i_3] = (max(958488604, 15));
                        var_19 &= 4;
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                var_20 = (max(var_20, (((((max(34, ((var_1 ? -28075 : var_9))))) - (min((((-2009562254 ? 1895657304 : -61))), 18446744073709551606)))))));
                                var_21 += ((((((arr_6 [i_0 - 2] [i_2 + 1] [i_4 - 1]) >> (arr_6 [i_0 - 2] [i_2 + 1] [i_4 - 1])))) ? (min(-522958527, (arr_6 [i_0 - 2] [i_2 + 1] [i_4 - 1]))) : (((arr_6 [i_0 - 2] [i_2 + 1] [i_4 - 1]) ? 9863 : 373837926))));
                            }
                        }
                    }
                }
            }
        }

        for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
        {
            var_22 += 188;
            var_23 = (max(var_23, (((0 ? (arr_13 [i_6] [i_0 + 2] [i_6] [i_0 + 2] [i_6] [i_6]) : (min(-408688482, ((155 ? var_10 : -1952122308)))))))));
        }
        for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
        {
            var_24 ^= ((min(112, ((1720139899283150013 ? 1895657304 : (arr_20 [i_0] [i_0] [i_7]))))));
            var_25 = var_2;
            var_26 = ((~(((arr_1 [i_0 - 1]) ? 15 : (arr_1 [i_0 + 2])))));
        }
        for (int i_8 = 2; i_8 < 11;i_8 += 1)
        {
            var_27 ^= (((!(((var_4 ? var_0 : -59))))));
            var_28 = ((min(var_9, (arr_15 [8] [i_0 - 1] [i_8 - 1] [i_0] [i_8]))));
        }
        for (int i_9 = 2; i_9 < 10;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 9;i_11 += 1)
                {
                    {
                        arr_32 [i_0] [i_9] [i_10] [i_10] = (((arr_2 [i_0 - 1] [i_9] [i_11]) ? (((~((-522958527 ? -1952122313 : var_10))))) : ((max(18446744073709551615, 4080)))));
                        var_29 += ((((((((arr_26 [i_0 - 1] [i_9] [i_0 - 1]) ? (arr_16 [i_0] [i_0 + 1] [i_9 + 1] [i_10] [i_10] [i_11]) : (arr_29 [i_0] [i_0] [8] [i_10] [i_11])))) ? (max((arr_28 [8] [i_9] [4] [i_11 + 2]), var_9)) : (min(-8352, (arr_19 [i_0] [i_0] [i_10])))))) ? 255 : (arr_5 [i_10] [8]));
                        var_30 = (((((~(((!(arr_4 [i_9] [i_10]))))))) / (max(-709226, (arr_12 [i_10] [i_11 - 2] [i_11] [i_11 - 2])))));
                        var_31 += var_5;
                    }
                }
            }
            var_32 = (min(var_32, ((max(((((((arr_17 [i_0] [i_0 - 1] [i_9 + 2]) >= var_10))) <= (((((arr_23 [i_0]) + 2147483647)) >> (((arr_31 [11] [i_0] [i_9] [i_9]) - 1540246067)))))), (-1366684622 || -1952122324))))));
        }
        arr_33 [i_0] [i_0 - 2] = min((max(22, ((var_6 ^ (arr_27 [i_0] [i_0] [i_0] [i_0]))))), (((min(-1532560411, var_10)) + (arr_31 [2] [i_0] [4] [0]))));
    }
    var_33 = var_0;
    #pragma endscop
}
