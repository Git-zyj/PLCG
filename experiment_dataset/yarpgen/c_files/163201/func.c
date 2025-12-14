/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163201
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
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((_Bool) ((3955881569U) << (((/* implicit */int) (_Bool)1))))))));
                var_18 = arr_3 [i_0 - 2];
            }
        } 
    } 
    var_19 = var_12;
    /* LoopSeq 1 */
    for (signed char i_2 = 3; i_2 < 17; i_2 += 4) 
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2931339533U)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (short)32746))));
        var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)-32746))));
    }
    var_22 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-4))) : (((((/* implicit */long long int) ((/* implicit */int) var_10))) | (-213827772709135568LL)))));
    /* LoopSeq 4 */
    for (signed char i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        /* LoopSeq 3 */
        for (long long int i_4 = 0; i_4 < 18; i_4 += 2) 
        {
            var_23 &= ((/* implicit */unsigned short) (~(((((((/* implicit */int) (signed char)-126)) + (2147483647))) >> (((arr_1 [i_4]) - (3458915901U)))))));
            var_24 = ((/* implicit */signed char) (-(((/* implicit */int) var_13))));
        }
        for (long long int i_5 = 1; i_5 < 17; i_5 += 4) 
        {
            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_5] [i_5] [i_5]))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_5] [i_5 + 1] [(_Bool)1]))) - (17785386950787271663ULL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_3])))))));
            /* LoopNest 2 */
            for (unsigned short i_6 = 0; i_6 < 18; i_6 += 3) 
            {
                for (unsigned short i_7 = 2; i_7 < 17; i_7 += 3) 
                {
                    {
                        arr_22 [i_3] [i_3] [i_3] [i_3] = (i_3 % 2 == zero) ? (((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_16 [i_5] [i_5 + 1] [i_5 - 1] [i_7 - 2])) ? (((/* implicit */int) arr_12 [i_5 - 1] [i_5 + 1] [i_5 - 1])) : (((/* implicit */int) arr_12 [i_3] [i_5 + 1] [i_5 + 1])))) + (2147483647))) << (((((/* implicit */int) ((signed char) arr_13 [i_5] [i_3]))) - (35)))))) : (((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_16 [i_5] [i_5 + 1] [i_5 - 1] [i_7 - 2])) ? (((/* implicit */int) arr_12 [i_5 - 1] [i_5 + 1] [i_5 - 1])) : (((/* implicit */int) arr_12 [i_3] [i_5 + 1] [i_5 + 1])))) + (2147483647))) << (((((((/* implicit */int) ((signed char) arr_13 [i_5] [i_3]))) - (35))) - (74))))));
                        var_26 *= ((signed char) (-(((((/* implicit */_Bool) arr_7 [i_3] [i_5 + 1])) ? (((/* implicit */int) arr_17 [(signed char)13] [i_3])) : (((/* implicit */int) (unsigned short)65535))))));
                        var_27 *= (+(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3] [i_5] [i_5]))) < (var_14)))) <= (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) > (arr_9 [i_3]))))))));
                        arr_23 [i_3] [i_3] [i_6] [i_7] [i_6] [i_3] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) ((((/* implicit */int) var_6)) << (((((((/* implicit */int) arr_12 [i_3] [i_3] [i_7 - 2])) + (36))) - (24)))))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned short i_8 = 0; i_8 < 18; i_8 += 4) 
        {
            arr_26 [i_3] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((arr_3 [i_8]) << ((((~(((/* implicit */int) var_11)))) + (9933)))));
            var_28 = ((/* implicit */signed char) ((_Bool) ((arr_3 [i_8]) != (((/* implicit */unsigned int) ((/* implicit */int) var_4))))));
            arr_27 [i_3] [i_3] [i_3] = ((/* implicit */signed char) arr_19 [i_3] [i_3] [i_3]);
            arr_28 [i_3] [i_3] [i_8] = ((/* implicit */unsigned short) 3955881573U);
            var_29 = ((/* implicit */signed char) ((_Bool) (_Bool)1));
        }
        arr_29 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_3] [i_3] [i_3])) ? (arr_21 [i_3] [i_3] [i_3] [i_3] [i_3]) : (((/* implicit */long long int) 585235200))))) ? (((((/* implicit */_Bool) arr_19 [i_3] [i_3] [i_3])) ? (arr_21 [i_3] [i_3] [i_3] [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [(_Bool)1] [i_3] [i_3]))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) 8U))))));
    }
    for (unsigned int i_9 = 0; i_9 < 22; i_9 += 3) 
    {
        var_30 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_9])) || (((/* implicit */_Bool) arr_31 [i_9])))))));
        var_31 = ((/* implicit */signed char) ((_Bool) arr_31 [i_9]));
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_11 = 0; i_11 < 23; i_11 += 2) 
        {
            for (int i_12 = 0; i_12 < 23; i_12 += 4) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    {
                        var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (max((max((28ULL), (((/* implicit */unsigned long long int) (signed char)-119)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))));
                        var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (-(1733373009U)))) ? (((((/* implicit */_Bool) arr_39 [i_11] [i_11] [i_11] [i_11])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_33 [i_12])))) : (((/* implicit */int) ((short) var_11))))))))));
                        var_34 = var_15;
                        var_35 = ((/* implicit */unsigned short) (((((~(((((/* implicit */_Bool) (unsigned short)42488)) ? (((/* implicit */int) (unsigned short)65527)) : (((/* implicit */int) var_1)))))) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_35 [i_10]))) != (((long long int) 508508208U))))) - (1)))));
                        var_36 &= ((/* implicit */signed char) arr_34 [i_10] [i_11]);
                    }
                } 
            } 
        } 
        arr_44 [i_10] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (((((/* implicit */_Bool) ((((/* implicit */int) var_15)) | (((/* implicit */int) (signed char)-61))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-70)), ((unsigned short)0))))) : (((4475548652037703756ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)69)))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_14 = 0; i_14 < 23; i_14 += 1) 
        {
            /* LoopNest 3 */
            for (short i_15 = 1; i_15 < 22; i_15 += 2) 
            {
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    for (signed char i_17 = 0; i_17 < 23; i_17 += 3) 
                    {
                        {
                            arr_58 [i_10] [i_10] [i_10] [i_10] [i_10] = ((((/* implicit */_Bool) ((unsigned long long int) arr_33 [i_10]))) ? (((/* implicit */int) arr_47 [i_10])) : (((/* implicit */int) arr_37 [i_10])));
                            arr_59 [i_14] [i_10] = ((/* implicit */_Bool) var_4);
                            var_37 = ((/* implicit */short) ((((/* implicit */_Bool) 6U)) ? (((/* implicit */int) (unsigned short)65534)) : (((/* implicit */int) var_15))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_18 = 0; i_18 < 23; i_18 += 2) 
            {
                for (unsigned int i_19 = 0; i_19 < 23; i_19 += 4) 
                {
                    {
                        var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) arr_39 [i_19] [i_19] [i_18] [i_19]))));
                        var_39 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_61 [i_18])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_61 [i_18]))));
                        arr_66 [i_10] [i_14] [i_18] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_9)))) : (-9024574080683688202LL)));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_20 = 0; i_20 < 23; i_20 += 3) 
            {
                for (unsigned short i_21 = 0; i_21 < 23; i_21 += 3) 
                {
                    {
                        var_40 = ((/* implicit */short) (+(((/* implicit */int) (signed char)67))));
                        var_41 ^= ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                        var_42 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_37 [i_10]))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_22 = 0; i_22 < 23; i_22 += 3) 
            {
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    {
                        arr_78 [i_10] [i_14] [i_22] [i_10] [i_10] [i_10] = var_16;
                        var_43 = ((/* implicit */_Bool) max((var_43), (((/* implicit */_Bool) (+(((/* implicit */int) arr_50 [i_14] [i_22] [i_23])))))));
                        var_44 += (unsigned short)13;
                        var_45 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_45 [i_10] [i_14] [i_10])) ? (12060439924352731657ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_10] [i_10]))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_12))))))));
                        arr_79 [12U] &= ((/* implicit */signed char) (~(((((/* implicit */_Bool) (signed char)98)) ? (1553987246U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58023)))))));
                    }
                } 
            } 
        }
        var_46 = ((/* implicit */int) (-(arr_69 [i_10] [i_10] [i_10] [i_10])));
    }
    /* vectorizable */
    for (int i_24 = 0; i_24 < 10; i_24 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_25 = 0; i_25 < 10; i_25 += 1) 
        {
            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
            {
                {
                    var_47 *= ((/* implicit */unsigned int) 18446744073709551598ULL);
                    var_48 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_10 [i_24])) * (((/* implicit */int) arr_25 [i_26] [(unsigned short)16]))))));
                    arr_87 [i_24] [i_25] = ((/* implicit */signed char) ((6191489755770548514LL) <= (((/* implicit */long long int) ((/* implicit */int) var_16)))));
                    /* LoopNest 2 */
                    for (signed char i_27 = 0; i_27 < 10; i_27 += 1) 
                    {
                        for (signed char i_28 = 0; i_28 < 10; i_28 += 1) 
                        {
                            {
                                var_49 = ((/* implicit */_Bool) (signed char)87);
                                var_50 = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)(-127 - 1)))));
                                var_51 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)24542)) ? (((/* implicit */int) arr_10 [i_24])) : (((/* implicit */int) (signed char)43)))) >> (((((/* implicit */int) (signed char)63)) / (((/* implicit */int) (signed char)63))))));
                                var_52 = ((/* implicit */short) ((-2147483629) & (((/* implicit */int) (signed char)0))));
                                var_53 = ((/* implicit */long long int) ((signed char) var_13));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_29 = 0; i_29 < 10; i_29 += 2) 
        {
            for (signed char i_30 = 0; i_30 < 10; i_30 += 1) 
            {
                for (unsigned short i_31 = 2; i_31 < 6; i_31 += 3) 
                {
                    {
                        var_54 = ((/* implicit */unsigned short) (signed char)-31);
                        /* LoopSeq 3 */
                        for (unsigned int i_32 = 3; i_32 < 8; i_32 += 3) 
                        {
                            arr_104 [i_29] = arr_95 [i_32] [i_29] [i_32 - 2];
                            arr_105 [i_24] [i_29] [i_29] [i_31 + 3] [i_24] [i_30] = ((/* implicit */signed char) ((((arr_32 [i_24]) ? (((/* implicit */int) arr_72 [i_30] [i_30])) : (((/* implicit */int) arr_61 [i_30])))) << (((/* implicit */int) ((((/* implicit */int) (signed char)-59)) != (((/* implicit */int) (_Bool)0)))))));
                        }
                        for (signed char i_33 = 0; i_33 < 10; i_33 += 1) 
                        {
                            var_55 = ((/* implicit */unsigned short) max((var_55), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_85 [i_31] [i_31] [i_31] [i_31 + 3])) ? (((/* implicit */int) ((signed char) (short)0))) : (((((/* implicit */int) var_16)) + (((/* implicit */int) (signed char)30)))))))));
                            var_56 = ((unsigned int) ((((/* implicit */int) (signed char)1)) <= (((/* implicit */int) var_2))));
                            var_57 = ((/* implicit */int) ((((/* implicit */int) arr_52 [i_29] [i_29] [i_31 + 2] [i_31])) != ((-(((/* implicit */int) var_5))))));
                            arr_108 [i_24] [i_29] [i_29] [i_29] [i_24] = ((/* implicit */short) (_Bool)1);
                            var_58 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_31 + 4] [i_31 - 2] [i_31 - 2] [i_31 + 2])) ? (((((/* implicit */_Bool) arr_98 [i_24] [i_30] [i_31])) ? (((/* implicit */int) arr_74 [i_24] [i_29] [i_24] [i_24])) : (((/* implicit */int) arr_4 [i_24] [i_24] [i_24])))) : (((/* implicit */int) arr_18 [i_24] [i_24] [i_24]))));
                        }
                        for (signed char i_34 = 0; i_34 < 10; i_34 += 2) 
                        {
                            arr_112 [i_24] [i_24] [i_30] = ((/* implicit */_Bool) (-((((_Bool)0) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))));
                            var_59 = ((/* implicit */_Bool) arr_70 [i_30] [i_30] [i_30]);
                            arr_113 [i_24] [i_24] [i_24] [i_24] [i_24] = ((/* implicit */signed char) arr_15 [i_24] [i_34]);
                            arr_114 [i_24] [i_29] [i_29] [i_31 + 3] [i_34] = ((/* implicit */signed char) (~(((/* implicit */int) arr_63 [i_24] [i_29] [i_34] [i_31]))));
                        }
                    }
                } 
            } 
        } 
        var_60 = ((/* implicit */short) ((((/* implicit */_Bool) arr_45 [(unsigned short)4] [i_24] [(unsigned short)4])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_45 [i_24] [(short)20] [(signed char)20]))));
        var_61 += ((/* implicit */_Bool) (+(((/* implicit */int) arr_67 [i_24] [i_24] [(_Bool)1]))));
    }
}
