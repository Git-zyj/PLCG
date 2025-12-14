/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((var_13 || 5940376032240135441) ? ((min(var_0, var_4))) : ((var_11 ? var_6 : var_6))))) ? var_3 : (((max((max(15172, -17887)), (max(1, 26174))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = ((+((max((arr_1 [i_1]), (arr_3 [i_0 - 1] [21]))))));

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] [0] = ((!((max(var_3, 192)))));
                    var_16 = ((min(((max(var_2, var_9))), (~1880196157))));
                    var_17 = (max(var_17, ((min(((var_12 ? (min(2054862434, 7291027527701020121)) : var_7)), (((((arr_0 [18] [i_1]) * (arr_0 [12] [i_0 - 2]))))))))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_18 -= var_3;
                        var_19 = (min((arr_3 [i_0 - 1] [i_3]), (((!(arr_3 [i_3] [i_2]))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 20;i_4 += 1)
                    {
                        var_20 = ((((12480181382244221328 ? var_11 : 7175))) ? var_9 : -1);
                        var_21 = ((1 ? 207 : 13));
                        var_22 = (arr_0 [i_0] [i_0]);
                        var_23 = var_12;
                    }
                }
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 19;i_7 += 1)
                        {
                            {
                                var_24 = (min(var_24, (arr_18 [i_5] [i_7 + 3])));
                                var_25 = ((!((((var_4 ? var_7 : -104)) >= ((max(59944, -28)))))));
                                var_26 = (min(var_26, ((min(var_3, var_11)))));
                            }
                        }
                    }
                    var_27 ^= (max((((!((max(33776997205278720, 159)))))), (arr_3 [i_0 - 2] [i_0 - 3])));

                    for (int i_8 = 1; i_8 < 21;i_8 += 1)
                    {
                        var_28 = (max(var_28, (((((((arr_9 [20]) ? (arr_1 [i_8]) : ((min((arr_17 [i_0]), 1)))))) ? (arr_6 [14] [14] [10]) : (min(((254 ? (arr_9 [10]) : var_8)), var_13)))))));
                        var_29 = (~1);
                    }
                    var_30 ^= ((-28122 ? -var_12 : var_2));
                    var_31 = 2799300439;
                }
                var_32 = ((-32270 ? 48349 : 15066741197923832730));
                var_33 = ((((max(4425, -1288))) / (~var_12)));
            }
        }
    }
    #pragma endscop
}
