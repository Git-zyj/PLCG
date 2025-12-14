/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, ((((max((var_12 > 2191481959092049246), var_12)) >> (((max((min(0, 39)), (max(var_5, var_0)))) - 5416610321183605758)))))));
    var_18 = ((((((((1 ? 7 : 2986458410996475483))) ? var_11 : -4645035052525258665))) ? var_3 : var_14));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (((0 * (arr_0 [4]))));

                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    var_19 = (min(var_19, 7));
                    var_20 = ((((min(var_13, (arr_1 [i_0])))) ^ ((var_2 ? 8477172465380550388 : (arr_0 [i_0])))));

                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        var_21 = (arr_0 [i_1]);
                        arr_10 [i_0] = ((!1) != (((arr_2 [i_2 + 1]) ? (arr_5 [i_3] [i_3] [8] [11]) : ((12524 ? 94 : 0)))));
                        var_22 = 2887063827;
                        var_23 = (arr_3 [i_0] [i_1]);
                        arr_11 [i_0] = ((var_8 ? (1 || 0) : (!4294967294)));
                    }
                    for (int i_4 = 1; i_4 < 16;i_4 += 1)
                    {
                        var_24 = (min((((arr_13 [i_0 - 1] [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 1]) ? (arr_13 [i_0 + 1] [i_0] [i_0] [i_0 - 1] [i_0]) : (arr_13 [i_0 - 1] [i_0] [i_0] [i_0 + 1] [i_0]))), 102));
                        arr_16 [i_0] [i_1] [14] [i_0] [i_1] = ((((((arr_12 [i_0 - 1] [i_4 - 1]) ? 7 : (arr_0 [i_4 - 1])))) ? (25 + var_0) : (((min((arr_0 [i_4 - 1]), (arr_0 [i_4 + 1])))))));
                        var_25 = 62;
                    }
                }
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    arr_19 [i_0] = (arr_1 [i_0]);
                    /* LoopNest 2 */
                    for (int i_6 = 4; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 16;i_7 += 1)
                        {
                            {
                                var_26 -= ((~(((arr_2 [i_5]) ^ ((((!(-9223372036854775807 - 1)))))))));
                                arr_26 [7] [i_0] [i_0] [8] [i_7] = ((((((!(arr_14 [i_0 - 1] [i_1] [i_0 - 1] [i_6] [i_6] [i_0]))))) ? (arr_12 [i_0 - 1] [i_0]) : ((((!((((arr_0 [i_5]) ? 1 : -32753)))))))));
                                var_27 = (max(var_27, ((((((min((arr_21 [i_0 + 1] [i_1] [i_1] [i_7]), 1407903476))) ? ((((arr_9 [i_1] [i_5] [i_7]) ? 1 : (arr_22 [i_0] [i_1] [i_5] [i_6] [i_7 - 3])))) : ((3555714150400151793 ? 0 : (arr_8 [i_0] [i_0] [i_5] [i_6] [4] [i_7])))))))));
                            }
                        }
                    }
                }
                var_28 = (max(var_6, 78));
                var_29 = (((arr_9 [i_0] [16] [1]) ? (arr_1 [i_0]) : (-8 && -3555714150400151794)));
            }
        }
    }
    #pragma endscop
}
