/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_20 = -12940;
                var_21 = (min(((2147483647 / (1 != 6322138126492539008))), (!12940)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            {

                /* vectorizable */
                for (int i_4 = 2; i_4 < 9;i_4 += 1)
                {
                    var_22 = ((+(((arr_4 [i_4]) ? -12925 : var_3))));
                    var_23 = ((~(153 != 12939)));
                    arr_13 [i_2] [i_2] = (((arr_12 [i_2] [i_2] [i_3] [i_4 - 1]) > (arr_10 [i_2] [10] [4])));
                    arr_14 [9] [i_3] [8] = (~var_9);
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    arr_18 [1] [i_3] [6] = (-((~(!13488615881758353071))));
                    var_24 = (max(((-(arr_1 [i_2]))), 102));
                    var_25 = 4958128191951198543;
                    var_26 += (!-1);
                }
                for (int i_6 = 3; i_6 < 8;i_6 += 1)
                {
                    var_27 += 4958128191951198561;
                    arr_22 [i_3] [i_6 + 1] = (((((13488615881758353072 == (max(9907130510725221070, 576460752303423480))))) == -12940));
                    arr_23 [i_6] [i_6] = max(11785, ((max(var_19, (arr_7 [i_2])))));
                }
                var_28 = ((13488615881758353074 != ((((arr_12 [i_2] [i_2] [9] [8]) / (arr_7 [i_3]))))));
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            {
                                var_29 = 1518360923597375457;
                                arr_31 [i_2] = var_7;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
