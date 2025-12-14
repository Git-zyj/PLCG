/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (max(((((min(1, -4058803170914884702))) ? ((var_6 ? var_8 : 80)) : (!150))), (((!(arr_1 [i_0] [i_0]))))));
        var_18 &= (arr_0 [i_0]);
        var_19 = (min(190, (((1 != ((var_7 ? 1 : var_16)))))));
        arr_2 [i_0] = (min((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))), var_3));
        arr_3 [i_0] [i_0] = (((((((max((arr_1 [i_0] [i_0]), 4058803170914884689))) ? (arr_0 [i_0]) : ((1 ? (arr_1 [i_0] [i_0]) : 1904125317))))) ? (((arr_0 [i_0]) ? ((1 ? var_7 : 81)) : var_11)) : var_12));
    }
    var_20 = -1904125318;
    var_21 = (min(var_21, ((((~((max(var_13, 1)))))))));
    var_22 = max(var_14, (min(-4058803170914884693, (min(var_12, var_14)))));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 8;i_2 += 1)
        {
            {
                arr_8 [i_2] = ((((-(arr_1 [i_1] [i_2 + 1]))) * (((arr_6 [i_1] [i_2] [i_1]) / var_16))));

                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            {
                                arr_19 [i_2] [i_2] = (max((((!(arr_0 [i_2 - 1])))), (min((max(-811608129, -22)), (arr_17 [i_5] [i_5] [0] [i_3] [i_2 + 2] [1])))));
                                arr_20 [i_1] [i_1] [i_1] [i_4] [i_2] = ((~(arr_18 [i_2 + 1] [i_2 + 1] [i_5] [i_5] [i_5] [i_5])));
                                var_23 *= (((((((min((arr_9 [i_1] [i_5] [i_5] [i_4]), 0))) ? (arr_14 [6] [i_1] [i_2 + 2] [4] [i_2 - 1]) : (((arr_11 [i_1] [i_1] [i_1] [i_1]) / (arr_18 [i_1] [i_2 + 2] [4] [i_2 + 2] [i_4] [i_5])))))) ? ((+(((arr_16 [i_2] [i_5] [i_5]) ? (arr_17 [i_1] [i_2] [i_3] [i_1] [i_1] [i_1]) : 176)))) : var_0));
                                arr_21 [i_3] [i_2] = var_4;
                            }
                        }
                    }
                    var_24 = ((((((arr_16 [i_1] [i_2] [i_3]) ? (arr_7 [i_2 + 2] [i_2 + 3] [i_2 + 2]) : var_14))) ? 5964 : -205));
                    var_25 -= ((~((max(1, 190)))));
                    arr_22 [i_2] [i_2] [i_2] = ((((((((-14194 ? (arr_5 [i_2] [i_3]) : 96))) ? var_7 : -103))) ? ((((min(var_14, var_6))) ? -var_8 : (((arr_9 [i_1] [i_2] [3] [i_1]) ? 174 : var_11)))) : ((min((arr_0 [i_3]), (arr_18 [i_3] [i_2] [i_3] [i_2] [i_2] [i_1]))))));
                }
            }
        }
    }
    #pragma endscop
}
