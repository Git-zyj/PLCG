/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188853
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 11; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = (~(((/* implicit */int) (unsigned short)56383)));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
        {
            var_10 = ((/* implicit */unsigned short) (~((~(38121729)))));
            /* LoopSeq 4 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_9 [2] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(-384317943)))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_6))));
                var_11 = ((/* implicit */unsigned short) (((~(208373062))) >= (((/* implicit */int) ((208373072) != (208373072))))));
                /* LoopSeq 2 */
                for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    var_12 += ((/* implicit */unsigned short) ((var_6) ? ((~(((/* implicit */int) var_2)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)51719)) > (((/* implicit */int) (_Bool)1)))))));
                    var_13 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)37275))));
                    /* LoopSeq 1 */
                    for (int i_4 = 0; i_4 < 13; i_4 += 3) 
                    {
                        var_14 = ((/* implicit */int) (((-(((/* implicit */int) var_2)))) >= (((/* implicit */int) var_0))));
                        arr_15 [i_2] [i_1] [i_1] [i_3] [(_Bool)0] = (_Bool)1;
                        arr_16 [i_2] [(unsigned short)4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (-1255642063) : (((/* implicit */int) var_0))));
                    }
                    arr_17 [i_2] [i_1] [i_1] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)65519))));
                    var_15 ^= ((/* implicit */unsigned short) (+((~(((/* implicit */int) (unsigned short)28260))))));
                }
                for (unsigned short i_5 = 3; i_5 < 9; i_5 += 3) 
                {
                    /* LoopSeq 3 */
                    for (int i_6 = 3; i_6 < 11; i_6 += 3) 
                    {
                        var_16 = ((/* implicit */_Bool) 38121729);
                        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) var_7))));
                    }
                    for (int i_7 = 3; i_7 < 11; i_7 += 4) 
                    {
                        var_18 += ((/* implicit */unsigned short) (~(((var_6) ? (((/* implicit */int) (unsigned short)52187)) : (((/* implicit */int) (_Bool)1))))));
                        var_19 = ((/* implicit */int) var_4);
                        arr_24 [i_2] [i_1] [i_1] [i_1] = var_5;
                        arr_25 [i_2] = var_7;
                        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((((((/* implicit */_Bool) (unsigned short)37275)) ? (var_7) : (2147483644))) + (2147483647))) << ((((((-(((/* implicit */int) var_2)))) + (31514))) - (18))))))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_28 [i_0] [i_1] [i_2] [i_2] [i_8] = (~(-859990156));
                        var_21 &= (~(((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)63823)) : (((/* implicit */int) var_6)))));
                    }
                    arr_29 [i_0] [i_1] [(unsigned short)11] [i_2] [i_2] = (((~(((/* implicit */int) (unsigned short)1)))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)33170))))));
                }
            }
            for (unsigned short i_9 = 0; i_9 < 13; i_9 += 4) 
            {
                var_22 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)52095))));
                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (-(-2147483645))))));
                /* LoopNest 2 */
                for (unsigned short i_10 = 3; i_10 < 11; i_10 += 3) 
                {
                    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                            arr_40 [i_0] [(unsigned short)4] [(unsigned short)4] [i_0 - 1] [i_0] = ((/* implicit */unsigned short) (+(var_9)));
                        }
                    } 
                } 
                var_25 += ((/* implicit */_Bool) (~(936429925)));
                /* LoopSeq 4 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    arr_44 [i_12] [5] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (-2108120864) : (-38121730)));
                    arr_45 [i_0] [i_0] [(unsigned short)4] [i_0] = (-(((/* implicit */int) (_Bool)1)));
                    arr_46 [(unsigned short)0] [i_1] [i_9] [i_9] [i_12] = ((/* implicit */int) ((1824711598) > (((/* implicit */int) ((-208373076) < (((/* implicit */int) (_Bool)1)))))));
                }
                for (unsigned short i_13 = 0; i_13 < 13; i_13 += 2) 
                {
                    var_26 = ((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned short)21467)) << (((((/* implicit */int) (unsigned short)37275)) - (37274)))))));
                    var_27 = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)0))));
                    var_28 *= ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | ((~(2147483647)))));
                }
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    arr_52 [i_14] [(unsigned short)10] [i_14] = (!(((/* implicit */_Bool) (~(((/* implicit */int) var_6))))));
                    arr_53 [(_Bool)1] [i_1] [i_14] = ((/* implicit */unsigned short) (~(((-2108120871) - (var_7)))));
                    var_29 &= ((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned short)19436)) << (((/* implicit */int) var_3))))));
                }
                for (unsigned short i_15 = 3; i_15 < 10; i_15 += 3) 
                {
                    var_30 = ((/* implicit */unsigned short) var_3);
                    var_31 *= ((/* implicit */unsigned short) (_Bool)0);
                    arr_56 [i_15] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) (_Bool)1))))));
                }
            }
            for (int i_16 = 0; i_16 < 13; i_16 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_17 = 0; i_17 < 13; i_17 += 3) 
                {
                    arr_62 [i_0] = ((/* implicit */_Bool) (-((-(-1031838022)))));
                    /* LoopSeq 1 */
                    for (unsigned short i_18 = 0; i_18 < 13; i_18 += 3) 
                    {
                        arr_66 [7] [7] [i_16] [(unsigned short)9] [i_18] [i_18] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned short)64414)))) ? (((/* implicit */int) var_8)) : (36354601)));
                        arr_67 [i_0] [i_0] [i_0] [i_18] [i_0] [(_Bool)1] [i_18] = ((/* implicit */_Bool) (-(-2147483635)));
                    }
                    var_32 -= ((((/* implicit */_Bool) -2147483629)) ? ((-(((/* implicit */int) (unsigned short)0)))) : ((-(var_1))));
                    arr_68 [i_0 + 1] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) var_6))))));
                }
                arr_69 [i_0] [i_0] [i_16] = ((/* implicit */_Bool) (~(((2147483644) >> (((2108120848) - (2108120838)))))));
            }
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                /* LoopNest 2 */
                for (int i_20 = 1; i_20 < 11; i_20 += 2) 
                {
                    for (unsigned short i_21 = 4; i_21 < 9; i_21 += 4) 
                    {
                        {
                            var_33 = -2108120852;
                            arr_78 [i_0] [i_1] [i_19] [i_19] [i_20] [i_20 + 1] [i_21] = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) 1217194639)) ? (2147483639) : (416723522))));
                            arr_79 [i_0] [i_0] [(unsigned short)11] [(unsigned short)8] [i_0 + 2] = ((/* implicit */_Bool) (~(((/* implicit */int) var_2))));
                            var_34 += (_Bool)1;
                        }
                    } 
                } 
                var_35 = ((/* implicit */_Bool) ((((/* implicit */int) var_0)) | (var_5)));
            }
        }
        for (unsigned short i_22 = 0; i_22 < 13; i_22 += 3) /* same iter space */
        {
            arr_83 [i_0] = ((/* implicit */_Bool) -2147483626);
            var_36 = (unsigned short)28260;
            var_37 *= ((/* implicit */unsigned short) (-(36354601)));
        }
        for (unsigned short i_23 = 0; i_23 < 13; i_23 += 3) /* same iter space */
        {
            arr_88 [i_23] [(unsigned short)8] = ((((/* implicit */_Bool) (unsigned short)52092)) ? ((+(-198588019))) : ((+(((/* implicit */int) var_8)))));
            var_38 ^= ((/* implicit */unsigned short) (_Bool)0);
        }
        /* LoopSeq 2 */
        for (int i_24 = 0; i_24 < 13; i_24 += 3) 
        {
            /* LoopNest 3 */
            for (int i_25 = 0; i_25 < 13; i_25 += 2) 
            {
                for (unsigned short i_26 = 1; i_26 < 11; i_26 += 2) 
                {
                    for (int i_27 = 0; i_27 < 13; i_27 += 2) 
                    {
                        {
                            var_39 += ((/* implicit */unsigned short) (+(((var_6) ? (-2108120864) : (((/* implicit */int) var_3))))));
                            var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) (unsigned short)18031)) ? (-1792490741) : (((/* implicit */int) (unsigned short)24159))))));
                            arr_101 [i_26] [7] [i_25] [(_Bool)1] [i_26] = ((/* implicit */unsigned short) var_8);
                            var_41 = ((/* implicit */unsigned short) max((var_41), (((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))) != (1279954058))))));
                            arr_102 [i_0] [i_0] [(unsigned short)11] [i_0] [i_26] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65535))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)0)))) : (((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (unsigned short)4095))))));
                        }
                    } 
                } 
            } 
            var_42 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(-902571506))))));
        }
        for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
        {
            arr_105 [i_0] [i_28] = (~(-1796354518));
            var_43 = ((/* implicit */int) max((var_43), (var_9)));
        }
        var_44 = ((/* implicit */unsigned short) -1115430039);
        var_45 = ((/* implicit */_Bool) max((var_45), (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)41372))))) << (((((/* implicit */_Bool) -2147483639)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4)))))))));
    }
    for (int i_29 = 1; i_29 < 11; i_29 += 3) /* same iter space */
    {
        var_46 = ((/* implicit */unsigned short) (~((+(((/* implicit */int) ((((/* implicit */_Bool) var_2)) || ((_Bool)1))))))));
        var_47 *= (unsigned short)41372;
        arr_110 [i_29] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) (!(var_4))))))));
    }
    var_48 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
}
