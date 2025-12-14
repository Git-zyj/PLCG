/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((var_2 ? var_0 : var_8)))) ? var_5 : (((var_0 >= var_4) ? var_5 : var_7))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_11 = (min(var_11, ((min((min(0, (arr_2 [i_1] [i_1 + 1] [i_1]))), ((min((arr_2 [2] [i_1 - 1] [i_1]), (arr_2 [i_1] [i_1 + 1] [0])))))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 12;i_4 += 1)
                            {
                                arr_13 [i_0] [i_0] |= (min((((arr_12 [i_1 - 1] [i_2 - 1] [i_2 - 1]) ? var_9 : ((255 ? 1 : 255)))), (((arr_2 [i_2 - 1] [i_2 - 1] [11]) ? (arr_2 [i_2 - 1] [i_2] [0]) : (arr_2 [i_2 + 1] [4] [i_3])))));
                                var_12 ^= (!var_5);
                                var_13 = (arr_10 [i_1 - 3] [i_3] [i_3] [i_4] [i_1 - 3] [i_4]);
                                var_14 = (min(var_14, (((((min((~1), (((arr_0 [i_2]) ? (arr_11 [2] [i_3] [i_1 - 2] [2] [i_3] [i_4]) : var_7))))) ? (((arr_9 [i_1]) ? 16535472795178004680 : ((((!(arr_9 [8]))))))) : (((+(((arr_4 [i_1] [8] [11] [i_1]) ? 20 : 17870))))))))));
                            }

                            for (int i_5 = 3; i_5 < 9;i_5 += 1)
                            {
                                arr_16 [i_0] [i_1 - 2] [i_2 - 1] [i_3] [i_1 - 2] = (((((var_2 ? ((min(var_1, (arr_8 [i_0] [4] [i_2] [4] [i_5 - 3])))) : (min(15371350113339352012, 255))))) ? (((0 ? 13038407631983932389 : 0))) : (arr_8 [i_1] [i_1] [i_1 - 3] [i_2 + 1] [i_3])));
                                arr_17 [i_0] [6] [i_2] [i_3] = (((arr_8 [i_1 - 1] [5] [i_2 + 1] [i_2] [i_5 + 1]) ? ((((arr_8 [i_1 + 1] [i_1 + 1] [i_2 + 1] [i_1 + 1] [i_5 + 1]) ? (arr_8 [i_1 - 3] [i_1] [i_2 + 1] [i_1] [i_5 - 3]) : (arr_8 [i_1 - 1] [i_1] [i_2 - 1] [i_1] [i_5 - 3])))) : (arr_8 [i_1 - 1] [i_2] [i_2 - 1] [i_2] [i_5 - 3])));
                            }
                            for (int i_6 = 1; i_6 < 11;i_6 += 1)
                            {
                                var_15 = 13038407631983932389;
                                var_16 = ((((((!(arr_3 [i_1] [i_1] [i_1]))) >> (((max((arr_20 [i_1]), 0)) - 2682986750))))));
                                var_17 ^= (arr_19 [i_0] [i_1 - 1] [i_2] [i_3] [i_1 - 1] [i_6] [i_6]);
                            }
                            arr_21 [i_0] [i_0] [i_1] [i_2] [i_3] = ((-((-(arr_8 [i_1 + 1] [i_2 - 1] [7] [i_3] [i_3])))));
                        }
                    }
                }
                arr_22 [i_1] = (min((((arr_1 [2]) ? var_0 : 255)), ((((min(var_7, (arr_14 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1])))) ? (arr_7 [2] [i_1 - 1] [i_1] [i_1] [i_1 + 1] [i_1]) : ((min(246, var_2)))))));
                var_18 = (min(-2469, ((((arr_1 [i_1 - 1]) ? var_3 : 112)))));
            }
        }
    }
    var_19 |= (min((~var_7), (var_7 / var_4)));
    var_20 -= (3141126737 | -0);
    var_21 = (min(var_21, ((min((max((~10961302045501032643), 4294967295)), ((max((min(var_5, 3904)), (max(var_3, var_2))))))))));
    #pragma endscop
}
