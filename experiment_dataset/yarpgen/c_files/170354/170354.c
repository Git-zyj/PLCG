/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= (max((+-576460752301326336), (((!var_3) | var_8))));
    var_15 ^= (((((((max(var_2, 1652422298))) ? (-47 + var_11) : (((43 ? 46426 : var_7)))))) ? (min(576460752301326309, ((min(var_11, var_2))))) : ((-(var_8 | var_9)))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_16 = (max(var_16, (((!((max(((max(29626, var_2))), (max(4294967292, 62815))))))))));
                arr_4 [i_0] [i_0] = (-((var_1 | (arr_2 [i_0] [i_0]))));
            }
        }
    }

    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    arr_13 [i_4] [i_4] [i_4] [i_2] = ((-((min((arr_8 [i_2 + 1] [i_3]), (arr_8 [i_2] [i_3]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_20 [i_2 - 1] [i_2 - 1] [i_4] [i_2 - 1] [i_6] &= ((((max(((max(0, (arr_3 [19] [i_4])))), (arr_1 [i_5])))) ? -6009440170878763179 : (((((((arr_12 [19] [19] [i_4]) ? (arr_7 [1] [i_5]) : 1))) ? 43 : ((1 ? 3007945291 : var_10)))))));
                                var_17 ^= (min(-1632447812963900531, -1616644685));
                                var_18 = ((-((-(arr_18 [i_2] [i_3] [14] [14] [i_5])))));
                            }
                        }
                    }
                }
            }
        }

        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 19;i_9 += 1)
                {
                    {
                        arr_29 [i_9] [i_7] [i_8] [i_9] = (((arr_22 [i_2]) == (arr_1 [i_7 - 1])));
                        arr_30 [i_2] [i_2] [i_2] [i_9] = (min((((arr_19 [i_2 + 2] [i_7 - 1] [i_2 + 2]) ? (arr_19 [i_9] [i_8] [i_2 - 1]) : (arr_19 [i_9 - 1] [i_7] [i_2 + 2]))), var_11));
                        arr_31 [i_2] [i_2] [i_2] [i_2] = ((+(min((arr_25 [i_9 + 1] [i_9]), ((min((arr_8 [i_2 + 1] [11]), -22)))))));
                        var_19 = (min(var_19, (arr_9 [i_2] [i_8] [i_7 - 1])));
                        arr_32 [i_2 + 1] [i_8] [i_8] = arr_15 [i_9 - 1] [i_8] [i_7 - 1] [i_2];
                    }
                }
            }
            arr_33 [i_2] = (max(549751619584, 18437736874454810624));
        }
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            var_20 ^= ((((max((!var_2), (((arr_0 [i_10] [i_2]) ? (arr_16 [i_2 + 1] [i_2] [i_2] [i_2] [i_2]) : 4643163405304408424))))) ? ((max((!3499944584), 1))) : ((((arr_0 [i_2] [i_2 + 1]) <= ((((!(arr_9 [i_10] [i_10] [i_10]))))))))));
            arr_36 [i_10] = max(18446743523957932032, -1632447812963900531);
        }
    }
    #pragma endscop
}
