/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, var_11));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_19 *= ((var_2 >> ((+(((arr_0 [1]) ? (arr_1 [10] [i_0]) : var_5))))));
        var_20 ^= (min((max(((var_15 + (arr_0 [8]))), (!var_3))), ((((((arr_0 [16]) ? 6859 : (arr_2 [i_0]))) > (max((arr_2 [i_0]), var_14)))))));
        var_21 -= (~(~var_12));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = (!((((arr_0 [i_1]) ? (arr_2 [i_1]) : ((((arr_0 [i_1]) ? (arr_3 [i_1] [i_1]) : (arr_0 [i_1]))))))));
        var_22 = (min(var_22, ((max(((((min(var_7, var_16)) > (arr_2 [i_1])))), ((3345838850 ? (~1) : var_3)))))));
        var_23 = (max(var_23, (min((arr_3 [i_1] [i_1]), var_2))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    {
                        var_24 = (18446744073709551615 ? 0 : 3702304355);

                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            arr_16 [i_1] [i_1] = (arr_10 [i_1] [i_4]);
                            var_25 += ((((!(!var_3))) ? (((+((3345838831 ? (arr_11 [i_4]) : 53806))))) : (arr_1 [i_4] [i_3])));
                            var_26 += (!949128448);
                        }
                        arr_17 [i_1] [i_2] [i_1] = var_16;
                        arr_18 [i_1] [i_1] [i_1] [0] = max(var_14, ((((min((arr_0 [i_1]), var_14))) < 12321)));
                    }
                }
            }
        }
        var_27 ^= ((((min((((arr_4 [i_1]) / (arr_11 [1]))), var_5))) ? 6856 : (max(1, 4294967295))));
    }
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        var_28 = ((-(var_8 == var_3)));
        var_29 += arr_6 [i_6] [8];
    }
    for (int i_7 = 3; i_7 < 15;i_7 += 1)
    {
        var_30 = (arr_2 [i_7]);
        arr_23 [i_7] [i_7] = (+((((((arr_22 [i_7 - 1] [2]) + (arr_0 [0])))) ? (((~(arr_0 [18])))) : (max(949128445, 949128465)))));
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    {
                        arr_31 [2] [i_8] [i_10] [i_8] [2] = (((arr_27 [11]) ? (((((arr_0 [i_9]) ? var_2 : (arr_27 [i_9]))))) : (arr_28 [i_7] [i_8] [i_9] [i_10])));

                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            arr_34 [i_7] [i_8] [i_9] [i_9] [i_10] [i_11] [i_11] = var_0;
                            arr_35 [i_8] [i_8] = (+(min((~65535), 199440830)));
                            var_31 = (arr_2 [i_7]);
                        }
                        var_32 += ((arr_2 [i_7 + 1]) ? ((((~(arr_27 [i_7]))) ^ (!1))) : (arr_25 [i_9] [i_10]));
                    }
                }
            }
        }
        var_33 = (((((arr_28 [i_7] [i_7] [i_7] [0]) != (var_14 + 1))) ? (((max((arr_28 [i_7] [i_7] [i_7] [i_7]), var_11)))) : ((-var_7 ? (((!(arr_30 [i_7] [0] [i_7] [i_7] [i_7] [i_7])))) : (((arr_25 [15] [i_7]) ? (arr_26 [i_7 - 2]) : (arr_29 [i_7])))))));
        var_34 = ((-((((max((arr_33 [i_7] [i_7] [i_7]), var_14))) ? (min(var_10, (arr_32 [i_7] [i_7] [i_7] [i_7] [i_7]))) : (((13978061798298950072 ? 54609 : 1)))))));
    }
    var_35 = ((~(((!(((var_1 ? var_10 : var_10))))))));
    var_36 = (max(var_36, (((((((max(var_5, 11729))) - (min(var_2, var_16)))))))));
    #pragma endscop
}
