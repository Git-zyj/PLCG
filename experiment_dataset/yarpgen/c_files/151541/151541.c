/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_20 *= -var_2;
        var_21 ^= (~-1);
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            var_22 &= ((~((~(arr_0 [i_1])))));
            var_23 += (((-(~1))));
        }
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            var_24 = ((!(arr_0 [i_1])));

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                arr_13 [i_4] [i_3] [i_1] [i_1] = 1;

                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    arr_16 [i_1] [i_3] [i_4] [i_4] [i_5] [i_5] = ((~(!var_11)));
                    arr_17 [i_4] [i_3] [i_5] [i_5] [i_4] [i_5] = ((-(~1)));
                }
            }
            var_25 = ((!((!(arr_2 [i_3])))));
        }
        var_26 += (~-var_10);
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    {
                        var_27 = (+-1);

                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            var_28 = var_14;
                            var_29 = (~39);
                            arr_27 [i_1] [i_6] [i_7] [i_8] [i_9] = (~var_12);
                        }
                    }
                }
            }
        }
        var_30 += ((-(arr_4 [i_1])));
    }
    for (int i_10 = 1; i_10 < 1;i_10 += 1)
    {
        var_31 = (-(!var_17));
        arr_30 [i_10] [i_10] = ((!((!(arr_28 [i_10])))));

        for (int i_11 = 0; i_11 < 21;i_11 += 1)
        {
            var_32 = ((~((~(arr_29 [i_10 - 1])))));
            var_33 = ((-((-(arr_28 [i_10 - 1])))));
        }
    }
    var_34 = var_6;
    #pragma endscop
}
