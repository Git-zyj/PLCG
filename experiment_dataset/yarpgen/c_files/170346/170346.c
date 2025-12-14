/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= (max(var_5, ((1739760446 ? 2555206850 : var_0))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        arr_8 [i_0] [i_0] [1] [i_2] [i_2] [i_3] = (((arr_7 [i_0 - 2] [i_0] [i_0] [i_0]) ? (arr_7 [i_0 - 1] [i_0] [i_0] [i_0]) : 4745991077164473481));

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            var_15 = (((-1254475037457217478 / 2555206850) < 939778812126144023));
                            var_16 = (var_2 ? var_6 : ((((var_6 || (arr_3 [i_0] [i_0]))))));
                            var_17 = (((arr_12 [i_1] [i_1] [i_0 - 2] [i_0] [i_0] [i_0] [i_0]) < (arr_12 [2] [i_1] [i_0 - 3] [i_0 - 2] [i_0] [i_0 - 1] [i_0])));
                        }
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            arr_15 [i_0] [i_2] [i_3] [i_2] = (arr_0 [i_0]);
                            arr_16 [i_5] [i_2] [11] [i_2] [i_2] [i_0 - 3] = (arr_1 [i_1]);
                        }
                    }
                    for (int i_6 = 4; i_6 < 10;i_6 += 1)
                    {
                        arr_19 [i_0] [i_1] [i_2] [i_6] [i_2] = (((((arr_6 [5] [i_1] [i_2] [i_2]) || var_4)) ? (((arr_1 [i_0]) ? 72 : (arr_1 [i_0]))) : ((((((min(17057616413598644789, -20005))) || 4745991077164473481))))));
                        arr_20 [i_0] [i_1] [i_2] [i_6] = (arr_6 [i_0] [i_1] [i_0] [i_6 - 2]);
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        var_18 = 2381923058641725235;
                        arr_23 [i_0] [i_2] [i_0] [i_2] [0] [i_7] = ((((arr_9 [i_1] [i_1] [i_2] [i_2]) | var_13)));
                        var_19 = (((((var_10 ? (arr_14 [i_0] [i_0]) : var_12))) != (arr_10 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 2])));
                    }
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        arr_26 [i_0] [i_1] [i_8] [11] [i_2] = (arr_1 [i_0]);
                        var_20 = max((((9125092570176405097 ? -1254475037457217478 : var_9))), ((1389127660110906827 & (min(var_6, (arr_4 [1] [i_2] [i_2]))))));
                        var_21 = (min((arr_0 [i_2]), ((((((arr_17 [i_8] [i_2] [i_0 - 2] [i_0 - 2]) ? (arr_1 [i_8]) : (arr_0 [i_0])))) ? 1389127660110906827 : (arr_22 [i_1] [i_1])))));
                        var_22 = arr_18 [i_2] [i_2];
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            {
                                var_23 = ((((9223372036854775802 << (1389127660110906849 - 1389127660110906849)))) ? ((var_12 / (arr_25 [i_0 - 2] [i_0 + 1] [9]))) : (((arr_25 [i_0] [i_0 + 1] [i_0]) & (arr_25 [8] [i_0 + 1] [i_2]))));
                                var_24 = ((var_3 + 16064821015067826354) ? ((max(1254475037457217474, (arr_32 [i_0] [i_0] [i_0 - 3] [i_0] [i_2])))) : ((1 + (var_7 ^ 1))));
                                arr_34 [i_0] [i_1] [i_2] [i_1] [i_2] = 104;
                                var_25 = var_2;
                            }
                        }
                    }
                    var_26 |= (32 / 3);
                    var_27 = (min(var_27, var_6));
                }
            }
        }
    }
    var_28 = (((((~(var_8 ^ 892044469)))) ? var_10 : ((var_1 ? 2381923058641725262 : ((max(var_10, var_9)))))));
    #pragma endscop
}
