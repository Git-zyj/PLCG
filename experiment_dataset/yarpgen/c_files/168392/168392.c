/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;
    var_17 = ((((((0 <= var_2) - (~var_1)))) || (0 <= 17014)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    var_18 = (min(var_18, ((((((((var_0 ? var_10 : (arr_2 [i_1]))) >= -0))) + 0)))));
                    var_19 *= max((max(((var_6 ? (arr_2 [i_1]) : (arr_3 [i_0]))), (arr_3 [i_0]))), (((((0 << (((arr_7 [i_0] [i_2] [i_2]) + 86))))) ? (arr_6 [1] [1] [i_2 - 2] [i_2 + 3]) : (max((arr_3 [i_2]), (arr_6 [i_0] [5] [i_0] [i_2 + 2]))))));
                    arr_8 [10] [i_1] [i_2] [i_2] = ((((min((arr_7 [i_0] [i_2 + 4] [i_2]), 3981230202630885673))) ? (((((arr_7 [i_0] [i_2 - 2] [i_2]) || (arr_7 [i_0] [i_2 - 1] [i_2 + 4]))))) : (((arr_6 [i_2] [i_2 + 2] [i_2 - 2] [i_2]) ? (arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 1] [6]) : (arr_7 [14] [i_2 + 1] [i_2 + 1])))));
                    var_20 = ((((((arr_7 [i_2 + 3] [i_2] [i_2 + 2]) ? (arr_7 [i_2 + 3] [i_2 + 3] [i_2 + 3]) : (arr_5 [i_2] [i_2 - 1] [i_2] [i_2 + 4])))) && ((((arr_7 [i_2 + 4] [i_1] [i_2]) + (arr_7 [i_2 + 4] [i_1] [i_2]))))));
                }
                for (int i_3 = 2; i_3 < 22;i_3 += 1)
                {
                    var_21 = (min(var_21, (arr_2 [i_0])));
                    arr_13 [i_0] [i_1] [18] = (arr_0 [6]);

                    for (int i_4 = 3; i_4 < 21;i_4 += 1)
                    {
                        arr_16 [1] = (((arr_9 [i_4] [i_4] [i_4] [i_4 - 3]) == (arr_9 [i_4] [i_4] [1] [i_4 - 1])));
                        var_22 = (((((-3981230202630885674 ^ (arr_2 [i_0]))) ? var_2 : ((((arr_6 [i_4] [i_4] [i_4] [6]) ? var_13 : var_11))))));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_21 [8] [i_3] [8] [8] [i_3] = ((-4038204804600943862 * (((((arr_19 [i_6] [i_3 - 2] [i_6 + 1] [i_3 - 2] [i_1]) >= (0 - 1285984115)))))));
                                var_23 -= var_5;
                                var_24 = (max(var_24, (((0 ? 20 : 97)))));
                            }
                        }
                    }
                    arr_22 [i_0] [i_0] [i_1] [i_3] = var_12;
                }
                var_25 = 18154;
                var_26 += ((((min((-18173 < 26), (var_14 != -126)))) * (((!((max(144, 9057833461350411321))))))));
                arr_23 [i_0] = (arr_19 [i_0] [i_0] [i_0] [i_1] [6]);
            }
        }
    }
    var_27 -= 932231266;
    #pragma endscop
}
