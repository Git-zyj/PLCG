/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125757
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_20 -= ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_3)))) ? (((/* implicit */int) (short)780)) : (((/* implicit */int) var_15)))), (((/* implicit */int) ((7769105475009209921ULL) != (9080454689042472794ULL))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_21 = ((/* implicit */int) (unsigned char)154);
            var_22 = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-94))));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 8; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    {
                        var_23 -= ((/* implicit */unsigned char) (-(arr_6 [i_2 - 1] [i_2 + 1] [i_2 + 2] [(_Bool)1])));
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_4 [i_0]) ? (9366289384667078840ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((((/* implicit */_Bool) 9080454689042472775ULL)) ? (((/* implicit */int) (unsigned char)166)) : (((/* implicit */int) (short)3668)))) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_0]))));
                        arr_9 [i_0] [i_0] [i_2 - 1] [(_Bool)1] = ((/* implicit */unsigned short) arr_8 [i_0] [i_2 - 1] [i_0] [i_0]);
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (short)16110)) <= (((/* implicit */int) var_10))))) - (((/* implicit */int) arr_5 [(unsigned char)2] [i_2 + 2] [i_2 + 3]))));
                        var_26 = (!(var_6));
                    }
                } 
            } 
            var_27 &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [(signed char)9])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_2 [i_0] [i_1])))) < (((/* implicit */int) ((unsigned short) var_2)))));
        }
        /* vectorizable */
        for (short i_4 = 4; i_4 < 9; i_4 += 3) 
        {
            var_28 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) - (((/* implicit */int) arr_2 [i_0] [i_4]))))) == (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (9366289384667078840ULL)))));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 11; i_5 += 3) 
            {
                for (unsigned char i_6 = 0; i_6 < 11; i_6 += 4) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_29 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0]))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29470))) - (865661846884527919ULL))));
                            arr_22 [i_0] [i_4] [i_6] [i_6] [i_6] [i_7] &= ((/* implicit */_Bool) var_3);
                            var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((arr_6 [i_4] [i_4] [i_4 + 1] [i_6]) - (((((/* implicit */_Bool) var_19)) ? (var_3) : (((/* implicit */unsigned long long int) arr_19 [i_6] [i_0] [i_6] [8LL] [i_5] [i_0] [i_6])))))))));
                            arr_23 [9U] [i_0] [i_5] [i_6] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)3668)) >= (((((/* implicit */_Bool) 9080454689042472794ULL)) ? (arr_19 [i_0] [i_4 + 2] [i_5] [i_5] [7U] [7U] [i_0]) : (((/* implicit */int) (unsigned short)38776))))));
                            var_31 = (((-(((/* implicit */int) (short)-16110)))) / (((/* implicit */int) var_12)));
                        }
                    } 
                } 
            } 
            arr_24 [6LL] |= ((/* implicit */unsigned short) (+(((/* implicit */int) var_14))));
        }
        var_32 = ((/* implicit */unsigned int) ((144772458) - (((/* implicit */int) (short)-16111))));
        var_33 = ((/* implicit */short) max((((/* implicit */int) var_13)), (((((/* implicit */_Bool) min((var_16), (((/* implicit */unsigned short) arr_14 [(unsigned short)10] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) var_10))))))));
        /* LoopSeq 2 */
        for (signed char i_8 = 1; i_8 < 8; i_8 += 2) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (signed char i_9 = 1; i_9 < 8; i_9 += 4) 
            {
                var_34 = (-(((var_17) - (((/* implicit */unsigned int) ((/* implicit */int) var_9))))));
                arr_29 [i_0] [i_0] [(unsigned short)2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_10)) : (((var_11) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_27 [i_0] [i_8 - 1] [i_9]))))));
                var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) ((int) ((unsigned short) var_14))))));
                var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-3662)) ? (((/* implicit */unsigned long long int) var_8)) : (arr_12 [i_8 - 1] [i_8 - 1] [i_9 - 1])));
                arr_30 [(short)7] [i_8 - 1] [i_9] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (short)16117)) ? (((/* implicit */int) (short)18816)) : (((/* implicit */int) (unsigned char)151)))) : (((/* implicit */int) arr_10 [i_0]))));
            }
            /* vectorizable */
            for (unsigned short i_10 = 0; i_10 < 11; i_10 += 4) /* same iter space */
            {
                arr_33 [i_10] [i_0] [i_10] [i_0] = ((/* implicit */_Bool) 9366289384667078818ULL);
                var_37 = (unsigned char)98;
                var_38 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_11 [i_0] [i_0]))));
                arr_34 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_0]))))) : (((/* implicit */int) var_11))));
            }
            for (unsigned short i_11 = 0; i_11 < 11; i_11 += 4) /* same iter space */
            {
                var_39 = (-(((((/* implicit */_Bool) min((9080454689042472776ULL), (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */int) var_11)) : ((-(((/* implicit */int) var_15)))))));
                /* LoopSeq 3 */
                for (int i_12 = 2; i_12 < 7; i_12 += 1) 
                {
                    var_40 = ((/* implicit */unsigned long long int) var_0);
                    var_41 = ((/* implicit */short) min((var_41), ((short)16108)));
                }
                for (short i_13 = 0; i_13 < 11; i_13 += 1) 
                {
                    var_42 = ((/* implicit */long long int) arr_11 [i_0] [i_0]);
                    var_43 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) var_5))) ? ((+(-6354946993247387258LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)11)))))) != (min((((/* implicit */unsigned long long int) arr_11 [i_8 + 3] [i_0])), (9080454689042472776ULL)))));
                    /* LoopSeq 1 */
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        var_44 -= (!(((/* implicit */_Bool) ((((/* implicit */int) min((var_9), (var_2)))) - (((var_8) - (((/* implicit */int) arr_35 [i_0] [i_11]))))))));
                        var_45 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((long long int) var_15))) ? (((var_18) - (((/* implicit */int) var_4)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_15 [i_0] [i_8 + 3] [i_0]))))))), ((-(((/* implicit */int) var_13))))));
                        var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 9366289384667078840ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-16111))) : (299048262U))), (((/* implicit */unsigned int) arr_27 [i_0] [i_13] [i_14]))))) ? (min((((/* implicit */int) (!(((/* implicit */_Bool) -162988864))))), (((((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_40 [i_11] [i_11] [i_11] [i_11])))))) : (var_18)));
                        arr_46 [i_0] [i_8] [i_8] [i_13] [i_11] &= ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */int) var_16)) - (((/* implicit */int) arr_40 [i_8] [i_11] [i_8] [i_0]))))) ? (-144772464) : (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_1)))))))));
                        arr_47 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned short) var_0)))));
                    }
                    var_47 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((-219483585) - (arr_17 [i_8 + 1] [i_0])))), (((var_3) - (((/* implicit */unsigned long long int) 2319954400U))))));
                }
                for (int i_15 = 0; i_15 < 11; i_15 += 4) 
                {
                    var_48 = ((/* implicit */_Bool) (-(((((arr_26 [i_8 - 1] [i_11] [i_0]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)16117)))) | (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_37 [i_0] [i_15] [i_15])) : (((/* implicit */int) var_5))))))));
                    arr_50 [i_0] [i_8 + 1] [i_0] [i_0] [i_8] = ((/* implicit */signed char) ((((/* implicit */int) arr_11 [i_8] [i_0])) | (((/* implicit */int) ((((((((/* implicit */int) var_13)) + (2147483647))) >> (((arr_44 [i_0] [i_0] [3ULL] [3ULL] [i_15]) + (198109421))))) < (((((/* implicit */int) arr_0 [i_0])) >> (((/* implicit */int) var_6)))))))));
                    var_49 = ((((/* implicit */_Bool) 9080454689042472776ULL)) ? (arr_12 [i_0] [(unsigned short)9] [i_15]) : (((/* implicit */unsigned long long int) ((((unsigned int) var_12)) + (((/* implicit */unsigned int) (-(((/* implicit */int) arr_25 [i_0] [i_8] [i_8])))))))));
                }
            }
            arr_51 [i_0] = ((/* implicit */unsigned long long int) var_4);
        }
        /* vectorizable */
        for (long long int i_16 = 0; i_16 < 11; i_16 += 4) 
        {
            arr_54 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)92))) ? (var_18) : ((-(((/* implicit */int) var_6))))));
            arr_55 [i_16] [i_16] |= arr_14 [i_0] [i_0] [i_0] [i_16];
        }
    }
    /* LoopSeq 1 */
    for (signed char i_17 = 0; i_17 < 20; i_17 += 1) 
    {
        var_50 = ((/* implicit */short) ((((/* implicit */_Bool) 230093033)) ? (((/* implicit */int) (unsigned char)104)) : (1769225714)));
        arr_59 [i_17] = ((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 162988850)))))))) ? ((+(((((/* implicit */_Bool) arr_58 [i_17])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_7)))))) : (arr_57 [i_17]));
        /* LoopNest 2 */
        for (unsigned short i_18 = 0; i_18 < 20; i_18 += 4) 
        {
            for (unsigned short i_19 = 2; i_19 < 19; i_19 += 4) 
            {
                {
                    arr_66 [i_17] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_65 [i_19] [(unsigned char)11] [i_17]))) : (var_3))))) : (max((arr_62 [i_17]), (((var_14) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_60 [i_17] [i_18] [i_19 - 2]))))))));
                    var_51 *= ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) arr_57 [i_19 + 1])) ? (arr_57 [i_19 - 1]) : (arr_57 [i_19 - 1]))));
                    /* LoopSeq 1 */
                    for (unsigned short i_20 = 3; i_20 < 17; i_20 += 1) 
                    {
                        arr_69 [i_17] [i_17] [i_18] [i_18] [i_20] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) var_12)), (9366289384667078841ULL)))))) ? (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_11))) == (var_19))) || ((!(((/* implicit */_Bool) var_1))))))) : (((/* implicit */int) (!(((9080454689042472786ULL) >= (((/* implicit */unsigned long long int) arr_67 [i_17])))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
                        {
                            arr_72 [i_17] [(unsigned char)14] [(unsigned char)14] [i_20] [i_20 + 2] [i_21] = ((/* implicit */long long int) ((var_11) ? (((/* implicit */unsigned int) 162988874)) : (((var_19) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                            var_52 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_12)) : (arr_57 [i_19 + 1])))) ? (((((/* implicit */_Bool) 9366289384667078811ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_64 [i_17] [i_17] [i_17])) : (((/* implicit */int) var_12))))))), (((((/* implicit */unsigned long long int) min((var_8), (((/* implicit */int) arr_58 [i_21]))))) + (((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_65 [i_18] [(short)4] [i_21 - 1]))) : (arr_61 [i_18] [i_19])))))));
                            var_53 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((min((((/* implicit */int) (signed char)115)), (-1769225714))) / (((/* implicit */int) ((unsigned short) 9366289384667078841ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)103)) || (((/* implicit */_Bool) 9080454689042472775ULL))))) | (((/* implicit */int) (unsigned char)173))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) + (9080454689042472824ULL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_60 [i_17] [i_18] [i_19]))) + (arr_61 [i_17] [(_Bool)1]))) : (min((arr_68 [i_17]), (((/* implicit */unsigned long long int) arr_65 [i_17] [i_18] [i_19 - 2]))))))));
                            var_54 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)29)) ? (((((9080454689042472775ULL) + (((/* implicit */unsigned long long int) 3486095365U)))) - (((9366289384667078822ULL) + (((/* implicit */unsigned long long int) 162988842)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)138)))));
                            var_55 = ((/* implicit */long long int) ((((/* implicit */unsigned int) max(((-(((/* implicit */int) var_14)))), (((/* implicit */int) var_1))))) <= (min((((var_14) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_60 [i_19] [i_18] [i_17]))) : (arr_63 [15LL] [15LL]))), (((((/* implicit */_Bool) (unsigned char)104)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33819))) : (3134192191U)))))));
                        }
                    }
                }
            } 
        } 
        var_56 = ((/* implicit */int) max((9366289384667078822ULL), (((/* implicit */unsigned long long int) (unsigned short)31721))));
        arr_73 [i_17] [(_Bool)1] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)100))) | (((arr_68 [i_17]) >> (((arr_63 [i_17] [i_17]) - (3919406590U))))))) >> (((/* implicit */int) (_Bool)1))));
    }
    var_57 = ((/* implicit */short) max((((/* implicit */long long int) -1769225699)), (-9184470981079857946LL)));
    var_58 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_15))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)138)) ? (((/* implicit */unsigned long long int) -52709674114909645LL)) : (231658907385576471ULL)))) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)50378))))))) : (min((((/* implicit */unsigned long long int) var_5)), (var_3)))));
    var_59 = ((/* implicit */int) var_11);
}
