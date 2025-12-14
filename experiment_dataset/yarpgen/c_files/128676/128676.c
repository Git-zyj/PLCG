/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_10 = ((((min(((12304373223788293018 ? 1252544730706580824 : 14336)), (min(1252544730706580824, 144115188075855871))))) ? (8690062847885641297 && 615212977) : (min(-1860286540, 2016))));
                    var_11 = (max(var_11, ((max(((((arr_6 [i_0] [i_1] [i_2] [16]) < (arr_3 [i_0 + 2])))), 31308)))));
                    arr_8 [i_0] [i_1] [i_1] = (min((arr_5 [i_0] [i_0 + 2]), ((-(arr_5 [i_0] [i_0 + 2])))));
                }
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    var_12 |= ((((max((((arr_6 [5] [14] [5] [4]) % (arr_5 [4] [8]))), 31308))) ? ((+(((-835520442 + 2147483647) >> (var_4 - 58))))) : (((!(arr_3 [i_0 + 1]))))));
                    var_13 = (max((((arr_7 [i_0 + 1] [i_0 + 1] [i_0]) ? (arr_7 [i_0 + 1] [i_0 - 1] [5]) : (arr_7 [i_0 - 1] [i_0 - 1] [i_0]))), (((arr_7 [i_0 - 1] [i_0 - 1] [16]) ? (arr_7 [i_0 + 2] [i_0 + 1] [i_0]) : (arr_7 [i_0 - 1] [i_0 - 1] [i_0])))));
                }
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    arr_13 [i_0] = var_3;
                    var_14 = (min(var_14, 32));

                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        var_15 = (((((min(var_4, (arr_12 [i_0] [i_1] [i_4] [i_0 + 2]))))) / (((arr_9 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0]) ? (arr_9 [i_0] [i_0 + 1] [i_0 - 1] [i_0]) : -8690062847885641298))));
                        var_16 *= ((((min((arr_15 [i_5] [i_5]), (arr_11 [i_0 + 1] [i_0] [i_0])))) || 2497431765));
                    }
                    arr_16 [i_0] [i_0] [i_4] = (arr_0 [12]);
                    arr_17 [i_0 - 1] [i_0] [9] = (arr_6 [i_0] [i_0] [i_4] [i_4]);
                }
                var_17 -= (((((((!(arr_5 [4] [i_1])))))) & var_7));
                var_18 = ((32 < ((1252544730706580824 / (arr_14 [3] [i_0] [3] [i_0 + 1] [i_1] [i_0 - 1])))));
                arr_18 [i_0] = (arr_7 [i_1] [i_0] [i_0 + 2]);
            }
        }
    }
    var_19 = -13524368874670905205;
    #pragma endscop
}
