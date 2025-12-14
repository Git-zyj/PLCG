/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156686
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
    for (unsigned char i_0 = 4; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        {
                            var_10 ^= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)102))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0 - 4] [i_0]))) : (var_7)));
                            var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) (-(((/* implicit */int) var_4)))))));
                            arr_12 [i_0 - 3] [i_1 - 1] [i_2] = ((/* implicit */unsigned char) (short)-24687);
                        }
                    } 
                } 
            } 
            var_12 += ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-74)) ? (((/* implicit */int) (short)5894)) : (((/* implicit */int) (unsigned char)92))));
            var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_7) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? ((+(((/* implicit */int) arr_11 [i_0 - 4] [i_0 - 4] [i_1])))) : ((-(((/* implicit */int) (unsigned char)204))))));
        }
        for (short i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            arr_16 [i_0 - 2] [i_5] [i_5] = ((/* implicit */unsigned char) (signed char)-42);
            var_14 = ((/* implicit */_Bool) arr_10 [i_5] [i_5] [i_5] [i_0] [i_0]);
            arr_17 [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */int) arr_9 [i_0 - 3] [i_0 - 3])) <= ((~(((/* implicit */int) (unsigned char)128))))));
            /* LoopSeq 1 */
            for (unsigned char i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)52)) <= (((/* implicit */int) (unsigned char)75)))))));
                arr_21 [i_0] [i_5] [(unsigned char)11] [(unsigned char)11] = (-(((/* implicit */int) arr_8 [i_0 - 2] [i_0 + 1])));
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 12; i_7 += 4) 
                {
                    for (short i_8 = 4; i_8 < 8; i_8 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_5 [i_8 + 2] [8ULL] [i_0 - 4]) : (((/* implicit */int) (short)5893)))))));
                            arr_26 [i_5] [i_6] [2] = (!(((/* implicit */_Bool) var_7)));
                            var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (unsigned char)145))));
                            arr_27 [(signed char)0] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_24 [i_0 + 1] [i_0 - 3] [(short)3] [i_8 - 1])) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (arr_4 [i_0 - 2] [i_0 - 2] [i_7])))));
                        }
                    } 
                } 
                arr_28 [i_0 - 4] [i_5] [i_6] &= ((/* implicit */_Bool) ((((/* implicit */int) (short)25888)) - (((/* implicit */int) var_5))));
            }
        }
        /* LoopNest 2 */
        for (short i_9 = 4; i_9 < 8; i_9 += 4) 
        {
            for (short i_10 = 1; i_10 < 8; i_10 += 4) 
            {
                {
                    var_18 = ((/* implicit */int) max((var_18), (((arr_5 [i_10] [i_10] [i_10 + 2]) & (((/* implicit */int) var_0))))));
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 0; i_11 < 12; i_11 += 4) 
                    {
                        for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 4) 
                        {
                            {
                                var_19 &= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_32 [i_0] [i_0] [i_0])) ^ (((/* implicit */int) (unsigned char)81)))) >> (((((/* implicit */int) arr_8 [i_0 + 1] [i_9 - 3])) + (139)))));
                                var_20 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)27))));
                            }
                        } 
                    } 
                    var_21 += (-((~(((/* implicit */int) (short)(-32767 - 1))))));
                    var_22 = ((/* implicit */_Bool) ((var_7) >> (((/* implicit */int) (unsigned char)52))));
                    /* LoopSeq 2 */
                    for (unsigned char i_13 = 0; i_13 < 12; i_13 += 4) 
                    {
                        var_23 -= var_9;
                        /* LoopSeq 3 */
                        for (unsigned char i_14 = 0; i_14 < 12; i_14 += 4) /* same iter space */
                        {
                            arr_47 [i_0 - 4] [i_0] [i_0] [i_0] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0 - 3] [i_9 + 4])) ? (((/* implicit */int) (unsigned char)87)) : (((/* implicit */int) arr_20 [i_0 - 4] [i_0 - 1] [i_9 + 2]))));
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 13230848816128846319ULL)) ? (((/* implicit */int) (unsigned char)86)) : (((/* implicit */int) (short)-5895))));
                            arr_48 [i_0] [i_0] [i_13] [6ULL] [(unsigned char)4] [0ULL] |= ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)204))))) ? (((/* implicit */int) arr_38 [i_0 - 1] [i_0 - 3] [i_14] [(short)10] [i_9] [(_Bool)1])) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)193)) : (((/* implicit */int) (unsigned char)201)))));
                            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1)))))));
                            var_26 = ((((/* implicit */int) (short)5894)) >= (((/* implicit */int) var_6)));
                        }
                        for (unsigned char i_15 = 0; i_15 < 12; i_15 += 4) /* same iter space */
                        {
                            arr_53 [i_0 + 1] [i_0 - 3] [i_10] [i_0 - 1] [i_0 - 3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))));
                            arr_54 [i_15] [i_13] [i_0] [0] [0] [i_15] &= ((/* implicit */short) var_4);
                        }
                        for (unsigned char i_16 = 0; i_16 < 12; i_16 += 4) /* same iter space */
                        {
                            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((1439775792) >> (((((/* implicit */int) (unsigned char)218)) - (191))))) : (((/* implicit */int) var_8))));
                            var_28 = ((/* implicit */_Bool) ((short) (~(((/* implicit */int) (short)-5894)))));
                            arr_59 [i_0] [i_10] [i_13] = ((/* implicit */signed char) (unsigned char)227);
                        }
                    }
                    for (unsigned char i_17 = 2; i_17 < 10; i_17 += 4) 
                    {
                        arr_64 [i_17] [i_17] [i_10] [i_9 - 3] [i_0 + 1] = ((/* implicit */unsigned char) (!(var_8)));
                        var_29 *= ((/* implicit */_Bool) 18102944263756068639ULL);
                        arr_65 [i_0] &= ((/* implicit */short) (~(((/* implicit */int) var_9))));
                    }
                }
            } 
        } 
        var_30 = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0)));
        /* LoopNest 2 */
        for (short i_18 = 0; i_18 < 12; i_18 += 4) 
        {
            for (unsigned long long int i_19 = 1; i_19 < 11; i_19 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_20 = 0; i_20 < 12; i_20 += 4) 
                    {
                        var_31 += ((/* implicit */unsigned char) (short)-10429);
                        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_52 [i_0] [i_0 - 3] [i_19 - 1] [i_0 - 3] [i_19 - 1])) : (((/* implicit */int) (short)5894))));
                    }
                    var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) -175267895))));
                    arr_75 [i_0 - 2] [i_19] [i_19] [i_19] = (unsigned char)48;
                    arr_76 [(_Bool)1] [i_19] [i_19 + 1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))) + ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (18102944263756068639ULL)))));
                    /* LoopSeq 2 */
                    for (unsigned char i_21 = 0; i_21 < 12; i_21 += 4) 
                    {
                        var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) var_5))));
                        arr_80 [i_19] [0ULL] [i_19] [0ULL] [i_0] [i_0] = (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)22))))));
                    }
                    for (short i_22 = 0; i_22 < 12; i_22 += 4) 
                    {
                        var_35 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_67 [i_0 - 4] [i_18] [i_19 - 1])) >> (((((/* implicit */int) arr_18 [i_22] [i_0 - 2] [i_0])) - (174)))));
                        arr_83 [i_0 + 1] [i_19] [i_19 + 1] [i_19 + 1] = ((/* implicit */short) 841134756);
                        arr_84 [i_19] [i_18] [i_18] [i_18] [i_19] = ((/* implicit */unsigned char) var_8);
                    }
                }
            } 
        } 
        var_36 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? ((+(((/* implicit */int) arr_18 [(unsigned char)0] [i_0] [i_0 - 2])))) : (((/* implicit */int) ((_Bool) var_8)))));
    }
    /* vectorizable */
    for (short i_23 = 0; i_23 < 13; i_23 += 4) 
    {
        var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)123)) ? (((int) 17745844586506116671ULL)) : (((/* implicit */int) (signed char)120))));
        /* LoopNest 3 */
        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
        {
            for (signed char i_25 = 2; i_25 < 12; i_25 += 4) 
            {
                for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_27 = 3; i_27 < 12; i_27 += 4) 
                        {
                            var_38 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_94 [i_23] [i_25 - 1] [i_25 - 2] [i_25 - 1] [i_27] [i_27 - 1]))));
                            arr_95 [i_23] [i_27] [i_26] [i_26] = ((/* implicit */signed char) (((-(((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) ((((/* implicit */int) (unsigned char)197)) <= (((/* implicit */int) (unsigned char)218)))))));
                            var_39 ^= ((/* implicit */_Bool) ((((((/* implicit */int) var_2)) + (2147483647))) >> (((((((/* implicit */_Bool) (short)5881)) ? (((/* implicit */int) (short)-5894)) : (((/* implicit */int) var_5)))) + (5919)))));
                            arr_96 [i_23] [i_23] [i_27] [(short)8] [i_27 - 2] |= ((/* implicit */_Bool) var_4);
                            arr_97 [(signed char)2] [(_Bool)1] [i_27] [i_26] [i_27 - 3] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_3)))));
                        }
                        arr_98 [(_Bool)1] [i_25] [i_23] [i_23] |= ((/* implicit */unsigned char) var_2);
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned char i_28 = 0; i_28 < 11; i_28 += 4) 
    {
        for (unsigned char i_29 = 0; i_29 < 11; i_29 += 4) 
        {
            {
                var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) (~(((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_101 [i_28] [i_28])))) ? (((((/* implicit */_Bool) (unsigned char)52)) ? (343799809953482976ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)112))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))))))))))));
                var_41 = ((/* implicit */short) var_0);
            }
        } 
    } 
    var_42 = var_9;
    var_43 = (~(((/* implicit */int) var_9)));
    var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-5899)) ? (((/* implicit */int) (short)-20620)) : (((/* implicit */int) var_3))));
}
