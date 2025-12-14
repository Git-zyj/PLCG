/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [5] [2] [i_0] = (-127 - 1);

                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            arr_16 [i_0] [8] [i_2] [i_0] [1] = 7216308678486003906;
                            var_15 = (min(var_15, ((520919616 ? (arr_11 [i_1 + 2]) : 122))));
                        }
                        arr_17 [i_0 - 1] [i_0] [i_0 - 1] [i_0] = (((~(arr_9 [i_0]))));
                        var_16 += (520919607 / -64);
                        var_17 = (!0);
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_18 -= ((var_4 ? (((1 & -109) & (-120 + 960483687))) : (((0 ? 32749 : 136)))));
                        var_19 += (!520919616);
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 11;i_7 += 1)
                        {
                            {
                                arr_26 [i_0] [i_1] = 119;
                                var_20 += (((2835217519 != 5624685063281813091) ? (127 | 4369549928954611178) : ((((arr_19 [i_0] [i_7 - 2] [i_0 - 1] [i_7]) ? var_11 : ((var_13 ? 58725 : 2835217535)))))));
                                var_21 = (((min((arr_22 [i_7] [i_0] [i_0] [i_0]), ((min(14952, 1459749776))))) + ((max(var_5, (arr_5 [i_0 + 1] [i_0 + 1] [8]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = ((var_1 ? 3189704248 : var_0));
    var_23 = var_10;
    #pragma endscop
}
