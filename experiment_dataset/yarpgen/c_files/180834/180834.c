/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((min(var_3, var_7))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_17 = (max(var_17, (((-20934 ? (min(((-15257 ? var_7 : var_8)), (~117))) : ((((((127 ? (arr_0 [i_0] [i_0]) : -16495622957142623)) >= (arr_2 [i_0]))))))))));
        var_18 -= var_8;
        arr_3 [i_0] [i_0] = (min(855729115, (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])))));

        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            arr_6 [i_1 + 1] = var_1;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_19 = ((32767 * ((-32758 * (min(0, 2861082805))))));
                        var_20 = (min((((27257 ? var_12 : (arr_11 [i_0] [i_2] [i_2] [i_1] [i_0])))), ((((8000052845911031497 >= (arr_0 [17] [i_2]))) ? var_3 : -var_11))));
                    }
                }
            }
            var_21 -= ((+((max((arr_10 [i_0] [i_0] [i_0] [i_0]), (arr_10 [i_0] [i_1] [i_0] [i_0]))))));
            arr_12 [i_1 + 1] = (min((((max(var_1, 1)))), (min((arr_10 [i_1 - 3] [i_1] [1] [i_0]), 38272))));
        }

        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            var_22 = (min(var_22, -1));

            for (int i_5 = 1; i_5 < 20;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        {
                            var_23 = var_10;
                            var_24 = (max(((min((arr_16 [i_5 + 1]), ((1 ? var_2 : -432468167723546678))))), (arr_16 [i_0])));
                        }
                    }
                }

                /* vectorizable */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    var_25 = (min(var_25, (arr_26 [i_8] [i_8] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1])));
                    var_26 = (min(var_26, ((((38272 - 38278) ? (((var_13 ? 38279 : var_10))) : ((-(arr_22 [i_5]))))))));
                    var_27 = (max(var_27, (((((arr_4 [i_4]) + (arr_27 [1] [i_4] [i_4] [i_4] [i_4])))))));
                }
            }
            for (int i_9 = 3; i_9 < 17;i_9 += 1)
            {
                var_28 = var_8;
                var_29 = ((((((38289 ? 0 : 1))) >= var_8)));
                arr_33 [i_0] [i_4] [i_9] = (max(((((max((arr_13 [i_4]), 855729115)) << (4011689773513384322 - 4011689773513384293)))), (((arr_24 [16] [i_4] [i_4] [i_4]) / (((arr_11 [i_0] [i_0] [i_4] [i_4] [i_9]) * (arr_24 [i_0] [i_0] [17] [i_9 + 2])))))));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {
                        {
                            arr_39 [i_11] [i_10] [i_9] [i_9 + 3] [i_9] [i_4] [i_0] = arr_10 [i_0] [i_4] [i_9] [i_11];
                            var_30 = 12194575989103078944;
                        }
                    }
                }
            }
        }
    }
    var_31 = (min(651822162, 10160393155208974296));
    var_32 = var_15;
    var_33 = (((var_11 * var_15) / (((var_7 ? var_15 : var_5)))));
    #pragma endscop
}
