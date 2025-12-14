/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_20 = (min((((arr_5 [i_0]) <= 32752)), (((((var_14 ? 763455941 : (arr_1 [i_2])))) || ((min((arr_5 [0]), 12542465407897323463)))))));
                    var_21 = (max(var_21, (arr_1 [i_1 + 3])));
                    var_22 = (max(var_22, var_11));
                }
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    arr_8 [i_3] [13] [1] [13] = (((((arr_3 [i_1 - 1]) ? 65535 : (arr_3 [i_1 + 3]))) << ((((arr_3 [i_1 + 2]) > (arr_3 [i_1 + 3]))))));
                    var_23 = (((!-223142282050805918) ? (min((((arr_7 [i_0]) ? 3513873487 : var_11)), (arr_1 [i_0]))) : var_3));
                    var_24 ^= (((arr_4 [i_1] [9]) || (((+(((arr_4 [i_0] [i_1]) ? (arr_2 [i_3] [i_1 + 3] [i_0]) : (arr_2 [i_0] [i_0] [i_3]))))))));
                    var_25 = (((arr_2 [i_1] [i_1] [i_1 - 3]) >> (-var_17 + 55611)));
                }
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    arr_11 [i_0] [i_4] [i_4] = ((var_18 < (((arr_9 [i_4] [i_1] [i_1 + 3] [i_4]) ? (arr_2 [i_1 - 3] [i_0] [i_0]) : -3236695191361406376))));
                    var_26 = ((!((((1 || 1) ? 1 : 32784)))));

                    for (int i_5 = 2; i_5 < 20;i_5 += 1)
                    {
                        var_27 = (((min((arr_13 [i_1 + 1]), (arr_13 [i_1 + 1]))) * (arr_13 [i_1 - 3])));
                        var_28 = 125829120;
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        var_29 = var_13;
                        arr_17 [i_4] [i_4] [1] [i_4] = (-79 > (arr_14 [i_4] [1] [i_1] [i_6] [i_6] [i_6]));
                        arr_18 [i_4] [i_1] = var_11;
                        var_30 *= (((arr_16 [i_1 + 3] [i_0]) - (arr_16 [i_1 + 1] [i_0])));
                        arr_19 [i_4] [i_0] [i_4] = (~448);
                    }
                }
                arr_20 [i_0] [11] = ((~(min((min(var_2, 5904278665812228167)), var_1))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                {
                    arr_29 [i_7] [i_7] = ((min(255, (var_7 >= 2923462801))));
                    var_31 = (max(var_31, 254));
                }
            }
        }
    }
    var_32 *= var_0;
    var_33 = ((min(1317928901, var_0)));
    #pragma endscop
}
