/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_19 = -13;
        var_20 = (max(var_20, (((((((var_16 && 3790667077) ? (max(var_11, 648381702786440727)) : (arr_0 [i_0])))) || ((max(2778270188, ((((arr_0 [i_0]) || (arr_1 [i_0] [i_0]))))))))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_4 [i_1] = (max(((-(arr_2 [i_1] [i_1]))), (~2778270188)));

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_21 = (((((((max(504300219, 0))) + 10616793351243535226))) ? ((((((var_12 ? var_14 : (arr_3 [i_1] [i_2])))) ? 3790667077 : (max(504300228, 504300190))))) : (arr_6 [6])));

            for (int i_3 = 3; i_3 < 16;i_3 += 1)
            {
                var_22 ^= 504300220;
                var_23 = ((((((arr_5 [i_1] [i_3 - 1] [i_3 - 3]) ? (arr_1 [i_2] [i_1]) : (arr_7 [i_1] [i_3 + 1] [12] [i_2])))) >= ((max(1386607953, 504300218)))));
                var_24 = (max(504300219, ((((max(var_12, 136))) ? ((var_11 ? var_10 : var_16)) : 9752))));

                /* vectorizable */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {

                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        arr_13 [i_2] [i_2] [9] [i_2] [11] = (!8735546291401919510);
                        var_25 = (max(var_25, (((18018932059718952963 > (-32767 - 1))))));
                        arr_14 [i_2] [i_4] [3] [i_5 + 2] [i_5] = (arr_5 [i_3 - 1] [i_3 - 2] [i_5 - 1]);
                        var_26 += ((arr_7 [i_1] [i_2] [i_3] [i_4]) / ((-(arr_10 [i_1] [i_2] [i_2] [i_3] [i_4] [i_5 + 1]))));
                    }
                    var_27 = (arr_9 [i_1] [i_1]);
                    arr_15 [i_2] [i_3] [i_2] = var_17;
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    arr_19 [i_2] [i_2] = ((((((arr_17 [i_2] [i_3 + 4] [i_3 - 3] [i_2]) + (arr_17 [i_2] [i_3 + 4] [i_3 - 3] [i_2])))) ? 504300210 : var_3));
                    arr_20 [i_2] [i_2] [i_3] [i_3 + 2] [i_6] = 1681443475;
                    var_28 = (min(var_28, (((((-32767 - 1) ^ 2712017125769885262))))));
                }
            }
            var_29 = (min(var_29, ((max(((-(arr_0 [i_1]))), ((max((((arr_11 [i_2] [i_1] [i_1] [i_2] [i_1] [i_1]) << (var_18 + 3777458143218779201))), ((max(65535, var_9)))))))))));
        }
        for (int i_7 = 1; i_7 < 18;i_7 += 1)
        {
            var_30 = (max((((!((max((arr_8 [i_7] [i_7] [i_7 - 1] [i_7]), var_17)))))), (arr_23 [i_7] [i_7])));
            arr_24 [i_7] = (arr_11 [8] [i_1] [8] [i_1] [i_1] [i_7 - 1]);
        }
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            var_31 = (max((((((100 ? (arr_25 [i_1]) : (arr_18 [i_1] [i_8] [i_8] [7])))) ? (((max(var_2, 0)))) : (arr_12 [i_8] [i_8] [i_1] [i_8] [8]))), ((max((((arr_8 [i_8] [i_8] [i_1] [i_8]) > var_3)), (!182947817))))));
            var_32 = (min(var_32, (((((max((arr_10 [i_1] [i_8] [i_8] [i_8] [i_1] [i_8]), (((100 ? 11138 : var_0)))))) + 18446744073709551604)))));
        }
        var_33 -= (arr_17 [10] [i_1] [i_1] [i_1]);
    }
    var_34 &= var_3;
    var_35 = (((((var_0 ? (!var_3) : (max(var_7, 33554431))))) ? var_8 : 64));
    var_36 ^= (var_7 || 136);
    #pragma endscop
}
