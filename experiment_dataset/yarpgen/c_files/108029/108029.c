/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 18;i_4 += 1)
                            {
                                var_17 = (min(var_17, (arr_6 [i_0] [i_4])));
                                var_18 = (((var_11 ? ((var_2 ? (arr_0 [i_2] [10]) : (arr_6 [i_1] [i_1]))) : (arr_3 [i_0 - 1]))));
                                var_19 = arr_1 [i_0] [i_1];
                                var_20 *= ((-8319334228741936521 ? var_3 : (~var_2)));
                            }
                            for (int i_5 = 0; i_5 < 18;i_5 += 1)
                            {
                                var_21 = ((((((arr_0 [i_0 - 2] [i_0 + 1]) ? (arr_11 [i_0 - 1] [13] [3] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_2]) : (arr_7 [i_1] [i_0 + 1])))) ? (((-8319334228741936520 ? var_0 : 25666))) : (var_3 + 8319334228741936539)));
                                var_22 = 8795958804480;
                                var_23 = (max(var_23, ((min(129, 127)))));
                            }
                            for (int i_6 = 0; i_6 < 18;i_6 += 1)
                            {
                                var_24 = -var_4;
                                var_25 = var_7;
                            }
                            var_26 ^= ((((-((8319334228741936550 ? 16744483924597396408 : -121)))) - (((~(arr_5 [i_0] [10]))))));
                        }
                    }
                }
                var_27 |= (max(((39873 ? (arr_12 [6] [i_0] [i_0] [i_0] [6] [i_0] [6]) : (arr_12 [2] [i_0] [i_0] [2] [i_0] [10] [2]))), (((arr_6 [16] [8]) ? ((var_11 ? -124 : (arr_1 [i_0] [i_1]))) : 108))));
            }
        }
    }

    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_11 = 3; i_11 < 16;i_11 += 1)
                        {
                            var_28 = (var_8 ? var_3 : (~-24));
                            var_29 &= var_1;
                        }
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            var_30 = -var_6;
                            var_31 = ((((arr_20 [4] [i_9]) ? (arr_20 [i_10] [i_8]) : (arr_20 [i_7] [i_7]))));
                            var_32 = ((-var_13 ? ((min(-var_10, 249))) : (~var_5)));
                        }
                        var_33 = arr_19 [5];

                        for (int i_13 = 0; i_13 < 17;i_13 += 1)
                        {
                            arr_35 [4] [i_8] [i_9] [i_10] [i_13] [i_13] [i_9] &= var_11;
                            var_34 = 177;
                        }
                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 17;i_14 += 1)
                        {
                            var_35 = (var_4 ? (((arr_4 [i_9]) ? (arr_34 [i_7] [16] [i_9] [i_10] [i_14]) : var_0)) : var_13);
                            var_36 = (min(var_36, ((((arr_18 [i_10]) ^ (arr_18 [i_10]))))));
                        }
                        var_37 = (max(var_37, -var_1));

                        for (int i_15 = 2; i_15 < 16;i_15 += 1)
                        {
                            arr_40 [i_7] [i_7] [i_7] [i_15 - 2] = (!249);
                            arr_41 [i_7] [i_15] [i_9] [i_10] = max(((((!var_8) ? -8319334228741936521 : (!255)))), (((((47 ? -61 : 0))) ? (((arr_34 [i_7] [i_8] [i_9] [i_10] [i_15 - 2]) ? 1799576857602298134 : (arr_13 [i_8] [i_9] [i_7]))) : (((max(var_11, -121)))))));
                        }
                    }
                }
            }
            var_38 = (arr_20 [1] [i_7]);
            var_39 = (min(var_39, ((((~31820) ^ (((arr_36 [8] [i_7] [i_7] [i_7] [i_7] [1]) ? (~-123) : 13014266181483249101)))))));
        }
        var_40 *= 31;
        var_41 = (max((max(-7090146990416629454, var_7)), ((((arr_20 [i_7] [i_7]) ? (arr_16 [i_7] [i_7] [i_7] [i_7] [i_7]) : (-127 - 1))))));
        var_42 = (max(var_42, (((((-(arr_28 [i_7] [0] [i_7] [8] [8]))) / (((0 ? (~var_0) : ((max(129, var_7)))))))))));
    }
    for (int i_16 = 1; i_16 < 18;i_16 += 1) /* same iter space */
    {
        var_43 = -32756;
        var_44 = (max(var_44, ((((((-(arr_43 [i_16 + 1])))) && (arr_42 [18]))))));
    }
    for (int i_17 = 1; i_17 < 18;i_17 += 1) /* same iter space */
    {
        var_45 = -1641583451;

        for (int i_18 = 0; i_18 < 21;i_18 += 1)
        {
            var_46 = 27;
            arr_51 [i_17] = (max((((-(arr_46 [i_17])))), (((arr_47 [i_17 - 1]) ? var_14 : 1494006671))));
        }
        for (int i_19 = 1; i_19 < 20;i_19 += 1)
        {
            var_47 = (min(var_47, ((((arr_48 [2] [2]) ? ((min((arr_48 [4] [4]), (arr_48 [2] [2])))) : -143)))));
            var_48 = var_11;
            var_49 = (((((+(((arr_54 [i_17]) ? var_7 : var_2))))) ? (var_15 <= var_3) : (max((-467364690 - 14396), (-2173370677841456785 + 14379)))));
        }
        var_50 = (min(var_50, ((((!18) << ((((13812571655978421950 ? var_12 : var_13)) - 38803)))))));
        arr_55 [i_17] = (~21864);
    }
    #pragma endscop
}
