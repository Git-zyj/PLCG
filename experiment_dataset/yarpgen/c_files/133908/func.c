/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133908
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
    var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)13434)) ? (-6776489539851719387LL) : (((/* implicit */long long int) ((/* implicit */int) var_17)))))) ? (var_1) : (((/* implicit */int) var_5)))) ^ ((+(((/* implicit */int) var_17))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((-1LL) - (((/* implicit */long long int) ((/* implicit */int) var_17)))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            var_19 = ((/* implicit */unsigned long long int) var_2);
            arr_6 [i_1] = ((/* implicit */unsigned char) (-((+(((/* implicit */int) var_3))))));
        }
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) /* same iter space */
    {
        arr_10 [i_2] [i_2] = ((/* implicit */short) (+(((/* implicit */int) (signed char)48))));
        var_20 = ((/* implicit */short) ((((/* implicit */int) var_4)) - (((/* implicit */int) (signed char)-49))));
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (arr_7 [i_2] [i_2]) : (arr_7 [i_2] [i_2])));
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)67)) << (((/* implicit */int) (short)0))))) && (((/* implicit */_Bool) ((6LL) << (((/* implicit */int) (signed char)48)))))));
        /* LoopSeq 1 */
        for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            arr_13 [i_3] [i_2] [i_2] = ((/* implicit */long long int) arr_9 [i_2]);
            arr_14 [i_2] [i_2] = ((/* implicit */_Bool) ((58105324) >> (((((/* implicit */int) (unsigned char)211)) - (193)))));
        }
    }
    for (unsigned char i_4 = 0; i_4 < 23; i_4 += 3) /* same iter space */
    {
        arr_18 [i_4] = ((/* implicit */short) max((950369416890981082LL), (((/* implicit */long long int) ((((/* implicit */int) var_17)) == (((/* implicit */int) (_Bool)1)))))));
        var_23 += ((unsigned short) (signed char)43);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            var_24 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-42)) ? (-5633704827633967496LL) : (((/* implicit */long long int) 524287U))));
            /* LoopSeq 3 */
            for (short i_6 = 0; i_6 < 23; i_6 += 2) 
            {
                var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-7460)) ? (-5902801582414747838LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)0)) + (((((/* implicit */int) (short)24159)) >> (((((/* implicit */int) (unsigned char)228)) - (207)))))));
                arr_26 [i_5] [i_5] [i_4] = ((/* implicit */unsigned char) (~(8LL)));
                var_27 ^= ((/* implicit */unsigned short) (-(var_13)));
            }
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                var_28 *= ((/* implicit */_Bool) (unsigned short)13434);
                var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) var_0))));
                /* LoopSeq 1 */
                for (unsigned char i_8 = 1; i_8 < 22; i_8 += 1) 
                {
                    var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_7]))) >= (11LL)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) 2385653149U)))))));
                    var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_8 [i_7])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_7])) ? (arr_15 [i_4] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)198))))))));
                }
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                arr_35 [i_5] [i_5] [i_5] [i_5] = ((((/* implicit */_Bool) arr_4 [i_5])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_4 [i_5])));
                arr_36 [i_5] [i_9] = ((/* implicit */short) 19LL);
            }
            arr_37 [i_5] [i_5] [i_5] = ((((/* implicit */_Bool) var_12)) ? (arr_15 [i_4] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))));
            /* LoopNest 2 */
            for (unsigned char i_10 = 3; i_10 < 20; i_10 += 2) 
            {
                for (unsigned short i_11 = 3; i_11 < 22; i_11 += 3) 
                {
                    {
                        var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_11] [i_11 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_10 - 1] [i_10 - 1] [i_11 + 1] [i_11 - 2]))) : (-1LL)));
                        arr_45 [13LL] [i_5] [13LL] [i_11] [2U] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5633704827633967498LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_5]))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_4] [i_4] [2ULL]))) / (arr_39 [i_4] [i_5] [i_10])))));
                        var_33 = ((/* implicit */unsigned int) arr_29 [i_5] [i_10] [i_5]);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_12 = 0; i_12 < 23; i_12 += 3) 
        {
            /* LoopNest 2 */
            for (short i_13 = 0; i_13 < 23; i_13 += 1) 
            {
                for (signed char i_14 = 0; i_14 < 23; i_14 += 3) 
                {
                    {
                        var_34 += ((3661745423571209947ULL) << (((((((/* implicit */int) (short)22463)) | (((/* implicit */int) var_7)))) + (122))));
                        /* LoopSeq 1 */
                        for (long long int i_15 = 3; i_15 < 21; i_15 += 3) 
                        {
                            var_35 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_4] [(signed char)8])) ? (((/* implicit */int) var_15)) : (var_13)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_15 - 3] [i_15 - 3] [i_15] [i_15 - 3] [2ULL]))) : (arr_56 [i_15] [i_14] [i_13] [i_12] [i_4])));
                            arr_59 [i_4] [i_14] [i_14] [i_14] [i_15] [i_15 + 2] = ((/* implicit */short) (+(((/* implicit */int) arr_44 [i_15] [i_15 - 1] [i_15] [i_15]))));
                            arr_60 [i_4] [i_12] [i_13] [i_14] [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((-7742795697889355695LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) (unsigned char)192))))));
                        }
                        var_36 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)211))));
                        arr_61 [i_4] [i_12] [i_13] [i_14] = ((/* implicit */_Bool) arr_46 [i_13] [i_14]);
                    }
                } 
            } 
            var_37 |= ((/* implicit */_Bool) (+(((/* implicit */int) arr_50 [i_4] [i_4] [i_4]))));
            arr_62 [i_4] [i_12] [i_12] &= ((/* implicit */int) ((((/* implicit */_Bool) arr_52 [i_12] [i_4])) ? (0U) : (((/* implicit */unsigned int) 2047))));
        }
        var_38 = ((/* implicit */short) ((((/* implicit */_Bool) 2161102801U)) && (((((/* implicit */unsigned long long int) 1824076252U)) < (min((((/* implicit */unsigned long long int) var_0)), (arr_52 [i_4] [i_4])))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_16 = 0; i_16 < 24; i_16 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_17 = 1; i_17 < 22; i_17 += 2) 
        {
            var_39 = ((/* implicit */unsigned int) min((var_39), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2769957308U)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_14))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_63 [i_16] [i_17]))) : (((((/* implicit */_Bool) 7742795697889355712LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_12)))))));
            arr_68 [i_16] [i_17] [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (arr_64 [i_17]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_66 [i_16] [i_16]))) : (3003501974135016033LL))))));
            /* LoopSeq 2 */
            for (long long int i_18 = 2; i_18 < 23; i_18 += 2) 
            {
                var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_69 [i_18 + 1] [i_18] [i_17 + 1] [i_17 - 1])) ? (10759460449297799169ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)30659)))));
                var_41 |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) ? (4095ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) >> (((4294443009U) - (4294443005U)))));
            }
            for (short i_19 = 0; i_19 < 24; i_19 += 3) 
            {
                arr_75 [i_19] [i_17] [i_17] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)3125)) && (((/* implicit */_Bool) 4294967284U)))))));
                arr_76 [i_19] [i_17] = ((/* implicit */unsigned long long int) (unsigned char)82);
            }
        }
        for (int i_20 = 2; i_20 < 21; i_20 += 3) 
        {
            arr_79 [i_16] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_63 [i_20] [i_20 + 3]))) / (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) ^ (arr_72 [i_20] [i_20] [i_16])))));
            arr_80 [i_20 - 2] [i_20 + 3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_66 [i_20 - 2] [i_20 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (2857496083U)));
            arr_81 [i_16] [i_16] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)213)) ? (((/* implicit */unsigned long long int) 37303037U)) : (15476978950078645971ULL)));
            arr_82 [i_16] [i_16] [i_16] = ((/* implicit */signed char) ((arr_64 [i_20 + 2]) - (10759460449297799169ULL)));
        }
        var_42 = ((/* implicit */unsigned long long int) max((var_42), (((/* implicit */unsigned long long int) var_2))));
    }
    var_43 = ((/* implicit */_Bool) var_15);
}
