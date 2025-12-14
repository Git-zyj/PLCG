/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_9));
    var_15 = ((var_1 ? 13215935325944630513 : ((max(var_4, ((min(-1, -1124365752))))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_1] = (((((min(65513, var_11))) ? ((((-127 - 1) - (arr_0 [i_0] [i_0])))) : (min(var_13, var_10)))));
                    var_16 = (max(var_16, (arr_0 [0] [0])));

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            var_17 = ((((min(62345, (arr_2 [i_0])))) ? (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0]))) : (arr_2 [i_0])));
                            arr_13 [13] [4] [i_2] [i_0] [i_4] = ((~((~((var_11 ? var_13 : 1124365745))))));
                            var_18 = (((((((min(224, (arr_0 [i_0] [i_1])))) || (((8354 ? 30669 : var_11)))))) * ((-(9 != 68719476480)))));
                            var_19 = max((((((arr_11 [i_0]) % 65513)) % var_2)), (((18446744004990075135 >= var_7) % 108)));
                        }
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            var_20 *= (arr_1 [i_0]);
                            arr_16 [i_0] [i_5] [i_2] [i_0] [i_0] = ((!((max((((-30660 ? -96 : (arr_12 [11])))), (min(var_0, var_11)))))));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            var_21 = (var_4 || (arr_1 [i_2]));
                            var_22 += (((((arr_3 [i_3] [i_3]) ? 0 : 18446744004990075135)) != 27679));
                        }
                        arr_20 [i_3] [i_3] [i_0 - 3] |= (+-1);
                        var_23 = (max((((-(arr_19 [i_0 - 3] [10] [i_2] [i_1] [i_0])))), ((min((arr_10 [i_3]), (arr_0 [i_0] [i_0]))))));
                        var_24 = 1;
                        var_25 = (((((~(max(var_5, var_9))))) ? 65489 : -2147483648));
                    }
                    arr_21 [i_0] [12] = (((((~108) ? (arr_5 [i_1] [i_0]) : (((-127 - 1) ? 255 : 31)))) ^ (((((var_8 ? -24 : -99))) ? ((var_6 ? (arr_1 [i_2]) : var_1)) : (arr_0 [i_0] [i_0])))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 2; i_7 < 14;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                {
                    var_26 *= var_12;
                    var_27 = 255;
                    var_28 = ((((arr_4 [i_7 + 1]) ? 2088960 : (arr_4 [i_7 + 1]))));
                    var_29 += ((-((max(var_0, var_1)))));
                }
            }
        }
    }
    var_30 = var_4;
    #pragma endscop
}
