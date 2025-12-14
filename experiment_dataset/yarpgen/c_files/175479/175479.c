/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [4] = (min(((var_13 ? (min(-6468643212857562105, 32481)) : (((var_11 ? var_5 : -1380761350))))), (min(((max(316727379, -14438))), -882637448260034004))));
                var_17 = (max(4885291571076695097, -25326));

                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    arr_9 [i_2] = (!var_15);
                    arr_10 [i_0] [i_2] = (max(var_0, ((~((29457 ? (arr_0 [i_0]) : var_13))))));
                    var_18 = ((((min(var_2, (arr_3 [i_2] [i_2 - 1] [i_2])))) ? ((-(arr_3 [i_2 - 1] [1] [i_2 - 1]))) : (((((var_5 ? (arr_5 [i_0] [i_0]) : -4442568244939412838))) ? -112 : 785300391))));
                }
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_19 = 25862;
                                arr_18 [i_0] [i_1] [i_3] [i_4] [i_1] = (max(((~((9223372036854775807 ? 561850441793536 : 1)))), (((((max(7850337944046785665, 1))) ? (max(var_0, 1)) : (min((arr_14 [i_5 - 1] [i_4] [i_3] [i_1]), var_3)))))));
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = -5;
                                var_20 = ((~(max(11, -2021253145))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        arr_23 [i_6] = (arr_13 [i_6] [i_6] [i_6]);
        arr_24 [i_6] = ((!(!14)));
    }
    var_21 = ((((min((-1886685027 % 1951821970), (!var_5)))) ? var_7 : ((min((max(1, 1300538090)), var_11)))));

    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        var_22 += -32760;
        var_23 -= var_0;
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_24 = (max(var_24, (31744 * 13058)));
        var_25 = (min(var_25, var_2));
        arr_29 [i_8] [i_8] |= (min(((max(25, -2147483633))), (var_11 + 1)));
    }
    #pragma endscop
}
