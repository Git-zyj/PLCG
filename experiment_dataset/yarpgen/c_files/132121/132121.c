/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_14 *= ((((!((-1 <= (arr_0 [i_0]))))) ? (((min(var_5, (min(103, (arr_0 [i_1]))))))) : (min(90, 0))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 3; i_4 < 18;i_4 += 1)
                            {
                                arr_11 [i_0] [i_0] [i_2] [i_0] [i_0] |= (((arr_6 [i_1 - 1] [i_1 + 2] [i_1]) ? (arr_4 [i_1 + 3] [i_1 - 2] [i_1 - 2]) : -56));
                                var_15 -= -104;
                            }
                            var_16 = (max(var_16, ((((((((arr_1 [i_0]) ? var_3 : 1405076461126337803))) ? (min(1232453368, (arr_3 [i_0] [i_1] [i_1]))) : var_4))))));
                        }
                    }
                }
                var_17 = ((-84 ? (min((var_1 & var_0), (((arr_1 [i_0]) ? 94 : -95)))) : (((var_10 < 127) ? ((((arr_5 [i_0] [i_0] [i_0]) < (arr_1 [i_0])))) : 56199))));
            }
        }
    }
    var_18 = ((-(((((min(var_1, var_13)))) / (var_4 / 27047)))));
    var_19 = ((((var_9 ? var_11 : -95)) ^ var_10));
    var_20 = ((204 >> (-21 + 30)));
    var_21 = (max(var_21, (((var_5 << ((var_10 ? (var_10 == var_13) : ((255 ? var_2 : var_12)))))))));
    #pragma endscop
}
