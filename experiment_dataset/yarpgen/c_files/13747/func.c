/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13747
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
    var_18 |= ((/* implicit */signed char) (unsigned short)10275);
    var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_3))));
    var_20 |= ((/* implicit */unsigned int) 34359734272ULL);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (~(((arr_0 [(_Bool)1] [i_0]) >> (((arr_0 [i_0 + 3] [i_0]) - (1207230407)))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            arr_7 [(unsigned char)18] [i_0] [i_0] = ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned short)62153)));
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                for (int i_3 = 3; i_3 < 19; i_3 += 1) 
                {
                    {
                        arr_14 [i_2] [i_2] = ((signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-5328)) : (((/* implicit */int) var_17))));
                        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5)))))));
                        var_22 *= ((/* implicit */short) (((!(((/* implicit */_Bool) var_6)))) || (((/* implicit */_Bool) var_1))));
                    }
                } 
            } 
        }
    }
    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 1; i_5 < 12; i_5 += 1) 
        {
            arr_20 [i_4] [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) ((signed char) var_7))) + (2147483647))) >> (((((/* implicit */int) var_1)) - (8685)))))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) ((short) (+(((/* implicit */int) arr_5 [i_4] [(unsigned char)1]))))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_6 = 3; i_6 < 10; i_6 += 2) 
            {
                arr_25 [i_6] = ((/* implicit */signed char) (_Bool)1);
                var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_24 [i_5 + 1] [i_6])) == (((((/* implicit */int) var_6)) & (((/* implicit */int) arr_3 [i_6 - 2] [i_5] [i_4]))))))))));
                /* LoopSeq 3 */
                for (unsigned short i_7 = 2; i_7 < 11; i_7 += 2) 
                {
                    arr_29 [i_7] [i_6] [i_6] [i_4] = ((/* implicit */unsigned short) var_15);
                    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)63770)) : (((/* implicit */int) var_5))))))) ? (((/* implicit */unsigned long long int) ((unsigned int) (signed char)(-127 - 1)))) : (((((/* implicit */unsigned long long int) ((arr_9 [i_7] [i_7] [i_7] [i_4]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6))))) % ((-(arr_26 [i_5] [i_7 + 2]))))))))));
                }
                for (signed char i_8 = 0; i_8 < 13; i_8 += 2) /* same iter space */
                {
                    var_25 = ((/* implicit */signed char) (-(((var_2) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767)))))));
                    arr_33 [2LL] [4U] [i_8] [i_8] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [(_Bool)1] [i_6 - 1] [i_5] [1U])) ? (((/* implicit */int) ((((/* implicit */_Bool) 1559899265)) || (((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_4] [i_5])) << (((((((/* implicit */int) var_5)) + (151))) - (18))))))))) : (((((/* implicit */int) ((short) arr_24 [i_5] [i_4]))) / ((~(((/* implicit */int) var_1))))))));
                    var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) var_7))));
                }
                for (signed char i_9 = 0; i_9 < 13; i_9 += 2) /* same iter space */
                {
                    arr_36 [i_6] [(signed char)12] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) max((var_0), ((~(arr_10 [i_4])))))) : ((~(arr_8 [17LL] [i_9])))));
                    var_27 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)37))));
                }
                arr_37 [i_6 + 3] [(unsigned short)7] [i_6] [i_6 + 3] = ((/* implicit */short) (~(arr_26 [i_5 - 1] [i_6 + 2])));
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 1; i_10 < 10; i_10 += 2) 
                {
                    for (unsigned char i_11 = 0; i_11 < 13; i_11 += 4) 
                    {
                        {
                            var_28 = arr_1 [i_6];
                            var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) arr_5 [i_11] [i_11]))));
                            arr_45 [i_4] [i_6] [i_6] [i_10] [i_6] = ((/* implicit */signed char) (~(((((/* implicit */int) arr_9 [i_6 + 1] [i_6] [i_6] [i_5 - 1])) >> (((var_7) + (91140207)))))));
                            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) arr_44 [i_5 + 1] [i_5 + 1] [i_6] [i_4] [i_6 + 3] [i_6 + 3]))));
                        }
                    } 
                } 
            }
        }
        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_9)));
        /* LoopSeq 4 */
        for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 2) 
        {
            arr_50 [(short)2] = ((var_2) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_4] [i_12]))));
            var_32 ^= ((/* implicit */long long int) max((((/* implicit */unsigned int) ((signed char) arr_4 [i_12] [i_4]))), (((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))));
            arr_51 [i_4] [i_12] [i_12] = ((/* implicit */unsigned char) (~(((max((arr_46 [i_4] [i_4] [i_4]), (13505550823429967168ULL))) << (((((/* implicit */int) ((short) arr_26 [i_4] [i_12]))) + (19042)))))));
            var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) ((((/* implicit */int) var_1)) >> (((/* implicit */int) (!(((var_0) >= (((/* implicit */unsigned int) arr_27 [i_4] [i_4]))))))))))));
        }
        for (short i_13 = 3; i_13 < 12; i_13 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_14 = 2; i_14 < 11; i_14 += 2) 
            {
                var_34 = ((/* implicit */long long int) var_17);
                /* LoopSeq 2 */
                for (unsigned short i_15 = 0; i_15 < 13; i_15 += 2) 
                {
                    var_35 -= ((/* implicit */short) (~(arr_34 [i_13 - 2] [i_14 - 1] [i_14] [(signed char)2] [i_4] [i_14])));
                    var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) arr_32 [i_14] [i_15] [i_15] [6LL] [i_15]))));
                }
                for (int i_16 = 0; i_16 < 13; i_16 += 2) 
                {
                    var_37 = ((/* implicit */int) var_5);
                    arr_64 [i_4] [(unsigned short)8] = ((/* implicit */int) ((unsigned short) (~(((((/* implicit */int) arr_58 [10U] [10U] [1ULL] [i_16])) << (((var_0) - (810335172U))))))));
                    var_38 -= ((/* implicit */short) arr_17 [i_4] [1]);
                }
            }
            arr_65 [i_4] = ((/* implicit */unsigned char) ((unsigned short) arr_42 [i_13 - 3] [i_4] [i_4] [i_4]));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned long long int i_17 = 0; i_17 < 13; i_17 += 1) 
            {
                arr_69 [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) var_0);
                arr_70 [i_4] = ((/* implicit */long long int) arr_18 [12LL] [i_13]);
            }
            for (long long int i_18 = 0; i_18 < 13; i_18 += 2) 
            {
                var_39 = ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) (short)9966)) | (((/* implicit */int) var_12)))))) || (((/* implicit */_Bool) arr_60 [i_13] [9LL] [i_13] [i_13 - 1] [i_13 + 1])));
                var_40 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_4)))))))));
                arr_73 [i_4] [i_4] [i_4] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_5 [i_4] [i_4]))))) > (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_60 [i_18] [i_18] [i_13] [i_4] [i_4]))) ^ (7656097444574762654ULL))))))));
            }
            for (unsigned long long int i_19 = 1; i_19 < 10; i_19 += 2) 
            {
                var_41 -= ((/* implicit */int) ((arr_40 [i_13] [i_13]) << (((((((/* implicit */_Bool) arr_35 [i_19 - 1] [i_13 - 1])) ? (((/* implicit */unsigned long long int) arr_27 [7U] [7U])) : (var_15))) - (1232439708ULL)))));
                var_42 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) - (((((((/* implicit */_Bool) var_12)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))))));
            }
        }
        for (unsigned short i_20 = 2; i_20 < 12; i_20 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (signed char i_21 = 0; i_21 < 13; i_21 += 4) 
            {
                arr_80 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) arr_44 [i_4] [i_4] [i_4] [i_20] [10] [10]);
                var_43 = ((/* implicit */short) (!(((((/* implicit */_Bool) arr_57 [i_20 - 1] [i_20] [i_20 - 2] [i_20 + 1])) || (((/* implicit */_Bool) (~(var_0))))))));
            }
            /* vectorizable */
            for (_Bool i_22 = 0; i_22 < 0; i_22 += 1) 
            {
                var_44 -= ((/* implicit */unsigned char) (~(((/* implicit */int) var_1))));
                arr_83 [(unsigned short)7] [i_20] [i_22] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_57 [i_4] [i_20] [i_20] [i_22 + 1])) != (((/* implicit */int) (unsigned char)219))))) >= (((((((/* implicit */int) var_14)) + (2147483647))) << (((arr_46 [i_4] [i_20] [i_22 + 1]) - (16396333386437950436ULL)))))));
            }
            var_45 -= ((/* implicit */short) (~(var_10)));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_23 = 0; i_23 < 13; i_23 += 1) 
            {
                arr_88 [i_20] [i_23] [(signed char)1] = ((/* implicit */_Bool) var_16);
                arr_89 [i_4] |= ((/* implicit */short) ((arr_84 [i_20 - 2] [i_20 - 2] [i_20] [i_20]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_56 [i_20 + 1] [i_20 + 1] [(unsigned short)5] [(short)6])))));
                var_46 = ((/* implicit */short) max((var_46), (((/* implicit */short) (~(((/* implicit */int) var_5)))))));
                var_47 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_58 [i_20 - 2] [i_20 + 1] [i_20 - 2] [i_20 - 1]))));
            }
        }
        for (unsigned short i_24 = 2; i_24 < 12; i_24 += 2) /* same iter space */
        {
            var_48 -= ((/* implicit */short) (((!(((/* implicit */_Bool) ((arr_71 [(unsigned char)1] [i_24] [i_24] [i_24]) / (((/* implicit */int) arr_72 [i_24] [i_4] [i_4] [i_4]))))))) ? (max((((/* implicit */long long int) arr_17 [i_24 + 1] [i_24 - 1])), (144115188075855864LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_78 [i_24] [i_4])))));
            arr_92 [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_6))));
        }
        /* LoopNest 2 */
        for (long long int i_25 = 0; i_25 < 13; i_25 += 2) 
        {
            for (unsigned short i_26 = 0; i_26 < 13; i_26 += 1) 
            {
                {
                    var_49 = ((/* implicit */_Bool) min((var_49), (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)237))))) == (((/* implicit */int) var_8))))))));
                    var_50 = ((/* implicit */unsigned int) max((var_50), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_4] [i_4])) ? (var_7) : (((/* implicit */int) arr_98 [i_4] [i_4] [i_4] [i_4]))))), (((arr_8 [i_4] [i_25]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-3)))))))) ? (134217727U) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_4] [i_25] [i_26] [i_25])))))))));
                }
            } 
        } 
        var_51 = ((/* implicit */unsigned long long int) max((var_51), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((short) (unsigned short)63770)))))))))));
    }
    var_52 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)17)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))));
}
