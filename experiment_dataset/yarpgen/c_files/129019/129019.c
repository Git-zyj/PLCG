/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (var_7 == var_2)));
    var_14 = -496;
    var_15 = (min(var_15, var_11));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                arr_8 [i_0 + 1] [i_1] = (-496 + 16376);
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_1] [i_3] = ((~(max(7981061381022594721, (arr_12 [i_0 + 1] [i_1 - 1] [i_1 + 1] [i_2 + 1])))));

                            for (int i_4 = 1; i_4 < 11;i_4 += 1) /* same iter space */
                            {
                                var_16 = (min(var_16, (((7981061381022594738 ? 16372 : (((16376 ? ((-503 ? (arr_0 [i_4 - 1]) : -496)) : ((6583 ? 6581 : 6595))))))))));
                                var_17 = (max((arr_16 [i_0] [i_1] [i_1] [i_3] [i_4]), (((arr_9 [i_2] [i_1] [i_0]) / 16364))));
                                arr_17 [i_4] [i_1] [i_2 - 2] [i_1] [i_0 - 1] = -496;
                                var_18 &= ((((96 ? var_4 : (-2147483647 - 1))) < (!18301701857626676374)));
                            }
                            for (int i_5 = 1; i_5 < 11;i_5 += 1) /* same iter space */
                            {
                                var_19 = (((max(((((arr_20 [i_0] [i_0 - 1] [i_0] [i_0] [i_0]) ? (arr_1 [i_3]) : (arr_1 [i_5 - 1])))), (((arr_6 [i_2] [i_1]) ? 31744 : (arr_10 [i_1]))))) / (((-(arr_20 [i_0 + 1] [i_1 - 1] [i_2] [i_3] [i_5 - 1]))))));
                                var_20 = ((~(min(-629293001, (arr_3 [i_0] [i_0])))));
                            }
                            var_21 += ((((((max((arr_10 [0]), (arr_7 [8] [i_1 + 1])))) ? (((arr_20 [i_3] [i_3] [i_2] [i_1] [i_0]) ? 0 : -478659576)) : 1403688284)) | (((!(arr_1 [i_3]))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
