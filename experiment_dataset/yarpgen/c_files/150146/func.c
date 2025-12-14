/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150146
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
    var_13 = ((/* implicit */int) (-(((((/* implicit */long long int) ((/* implicit */int) var_0))) / (((9221120237041090560LL) / (var_6)))))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) arr_1 [i_1]))))) ? ((-(((((/* implicit */_Bool) arr_1 [3])) ? (arr_4 [(unsigned char)14]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (var_1)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (arr_0 [(short)2] [(short)2]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0])))))));
            arr_6 [i_0] [i_1] [2LL] = ((/* implicit */_Bool) ((arr_3 [i_1] [15U]) ? (((((/* implicit */_Bool) 12722194582128764999ULL)) ? (5724549491580786608ULL) : (((/* implicit */unsigned long long int) -673412121)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [21] [5])) ^ (((/* implicit */int) arr_3 [i_0] [i_1])))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_2 = 3; i_2 < 21; i_2 += 2) 
            {
                arr_10 [(short)10] [i_1] [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_0 [(_Bool)1] [i_0])) ? (arr_4 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [(short)14] [i_1] [(short)14] [(short)14])))))));
                var_14 = var_1;
            }
            for (long long int i_3 = 3; i_3 < 18; i_3 += 2) 
            {
                arr_15 [i_0] [i_1] [i_3 + 1] |= arr_1 [i_0];
                var_15 = ((/* implicit */long long int) arr_9 [(unsigned char)18] [i_1] [(unsigned char)18]);
                var_16 = ((/* implicit */long long int) max((((((/* implicit */int) arr_13 [i_3 - 1] [i_3 + 3])) + (((/* implicit */int) arr_13 [i_3 + 4] [i_3 + 3])))), (((((/* implicit */_Bool) arr_13 [i_3 + 1] [i_3 - 3])) ? (((/* implicit */int) arr_13 [i_3 - 1] [i_3 - 3])) : (((/* implicit */int) (_Bool)1))))));
                var_17 = ((/* implicit */_Bool) arr_4 [(signed char)5]);
            }
            /* LoopNest 3 */
            for (long long int i_4 = 1; i_4 < 19; i_4 += 2) 
            {
                for (unsigned short i_5 = 0; i_5 < 22; i_5 += 2) 
                {
                    for (signed char i_6 = 0; i_6 < 22; i_6 += 2) 
                    {
                        {
                            arr_26 [i_0] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_2 [i_0]))));
                            arr_27 [i_0] [(short)20] [i_0] [i_5] = (-((+(arr_18 [i_4 + 1] [i_4 + 3] [i_4 + 1]))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_7 = 0; i_7 < 22; i_7 += 2) 
        {
            arr_32 [i_0] [i_0] [i_0] = min(((!(arr_3 [i_7] [i_0]))), (((((/* implicit */int) arr_30 [i_0] [(unsigned char)15] [i_7])) == (((/* implicit */int) arr_12 [i_0] [i_0])))));
            var_18 = ((/* implicit */_Bool) (short)32050);
            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3834784885159074866LL)) || (((/* implicit */_Bool) 1254176988260870175LL))));
        }
        /* vectorizable */
        for (short i_8 = 2; i_8 < 20; i_8 += 2) 
        {
            var_20 -= ((/* implicit */_Bool) (+(2610467356U)));
            arr_35 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-32050)) ? (((/* implicit */int) arr_3 [i_8 + 2] [i_0])) : (((/* implicit */int) arr_3 [i_8 - 1] [(_Bool)1]))));
            /* LoopNest 2 */
            for (unsigned char i_9 = 0; i_9 < 22; i_9 += 2) 
            {
                for (signed char i_10 = 3; i_10 < 21; i_10 += 2) 
                {
                    {
                        arr_40 [i_0] [i_0] [i_8] [i_9] [i_10 - 2] = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
                        var_21 = ((/* implicit */signed char) (~(arr_17 [i_0] [i_0] [i_8 - 1])));
                        /* LoopSeq 2 */
                        for (unsigned int i_11 = 0; i_11 < 22; i_11 += 2) 
                        {
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (+(((/* implicit */int) arr_13 [i_8 - 1] [i_10 - 3])))))));
                            var_23 = ((/* implicit */_Bool) (+(arr_11 [i_8 + 1] [i_8 + 2] [i_8 + 1])));
                            var_24 = ((/* implicit */unsigned int) arr_39 [i_0] [i_8 - 2] [16U] [i_9] [i_10] [(_Bool)1]);
                        }
                        for (unsigned int i_12 = 1; i_12 < 19; i_12 += 2) 
                        {
                            arr_46 [i_12] [i_12] = ((/* implicit */unsigned int) (-((+(((/* implicit */int) (_Bool)1))))));
                            var_25 = ((/* implicit */int) (+(arr_17 [i_10] [i_9] [i_8])));
                        }
                        arr_47 [(unsigned char)2] [i_0] = ((/* implicit */unsigned long long int) arr_16 [i_10 - 3] [i_10 - 3] [(short)12] [i_8 - 2]);
                    }
                } 
            } 
        }
        arr_48 [i_0] = ((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0]);
        arr_49 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_25 [i_0])) > (((/* implicit */int) arr_24 [i_0] [i_0] [i_0]))))) * (((arr_25 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
        arr_50 [i_0] = ((/* implicit */short) (+(((((/* implicit */long long int) ((((/* implicit */unsigned int) arr_28 [i_0])) / (arr_19 [i_0])))) * (((2295360474665286440LL) / (var_6)))))));
        arr_51 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) arr_22 [i_0] [i_0])), ((~(arr_8 [i_0])))));
    }
    for (unsigned int i_13 = 0; i_13 < 13; i_13 += 2) 
    {
        arr_54 [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? ((-(((/* implicit */int) arr_22 [i_13] [i_13])))) : (((/* implicit */int) arr_16 [i_13] [6U] [i_13] [i_13]))))) ? (((((/* implicit */_Bool) arr_24 [i_13] [i_13] [(signed char)7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_13] [i_13]))) : (((((/* implicit */unsigned long long int) -673412132)) / (12722194582128764997ULL))))) : (((((arr_14 [(_Bool)1]) || (((/* implicit */_Bool) arr_43 [i_13])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61228))) : ((+(11122478949006542739ULL)))))));
        arr_55 [(short)7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_18 [i_13] [i_13] [i_13]), (arr_18 [i_13] [i_13] [i_13])))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_21 [20LL] [i_13] [i_13] [i_13] [i_13]))))) ? ((~(((/* implicit */int) var_7)))) : (((/* implicit */int) ((673412102) == (((/* implicit */int) var_7))))))) : (((((/* implicit */_Bool) arr_12 [i_13] [i_13])) ? (((/* implicit */int) (signed char)65)) : (((/* implicit */int) arr_45 [i_13] [i_13] [i_13] [i_13] [(short)0] [i_13]))))));
        var_26 = ((/* implicit */signed char) var_5);
    }
    for (unsigned char i_14 = 0; i_14 < 23; i_14 += 2) 
    {
        var_27 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_57 [i_14])) ? (((((/* implicit */_Bool) var_0)) ? (arr_57 [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_14]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)7)) % (((/* implicit */int) var_7)))))))));
        var_28 = ((/* implicit */long long int) ((((/* implicit */int) (short)-32067)) < (((/* implicit */int) (_Bool)1))));
    }
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        var_29 = ((/* implicit */_Bool) ((((arr_0 [i_15] [i_15]) <= (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) << (((((/* implicit */int) (short)32640)) - (32614)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */short) var_5)), (arr_39 [(unsigned char)0] [(unsigned short)14] [(unsigned short)14] [i_15] [i_15] [i_15]))))))) : (((((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) arr_31 [i_15] [(_Bool)1] [i_15]))))) & (((((/* implicit */int) arr_20 [i_15] [(unsigned short)18] [i_15] [(_Bool)1])) - (((/* implicit */int) arr_25 [i_15]))))))));
        arr_60 [i_15] = ((/* implicit */int) ((((arr_42 [(short)1] [(short)1] [(short)1] [i_15] [i_15]) + (9223372036854775807LL))) >> (((((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12))))) - (((((/* implicit */_Bool) var_3)) ? (4418790188428611566ULL) : (13936207512628510699ULL))))) - (14027953885280940056ULL)))));
        var_30 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_15])) ? (max((((/* implicit */long long int) (short)-27707)), (3834784885159074857LL))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28486))) / (3456194802U))))))) / (((min((((/* implicit */unsigned long long int) (unsigned char)77)), (18446744073709551606ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-21))))));
        arr_61 [i_15] = ((1172124511U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-19))));
    }
    var_31 = ((/* implicit */short) var_3);
    /* LoopNest 3 */
    for (unsigned int i_16 = 2; i_16 < 19; i_16 += 2) 
    {
        for (long long int i_17 = 3; i_17 < 19; i_17 += 2) 
        {
            for (unsigned long long int i_18 = 0; i_18 < 20; i_18 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_19 = 2; i_19 < 17; i_19 += 2) 
                    {
                        arr_73 [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_17])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : ((((!((_Bool)1))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)32037))))) : (max((((/* implicit */unsigned long long int) arr_18 [(short)13] [i_17 - 2] [i_17])), (8924911937323184396ULL)))))));
                        arr_74 [(unsigned short)6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 320261591U)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_21 [(_Bool)1] [i_19] [i_18] [i_16 - 1] [i_16 - 1])) || (((/* implicit */_Bool) arr_7 [i_16] [i_17] [(_Bool)1] [(_Bool)1]))))) : (((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) (unsigned char)7)))))))) ? (((/* implicit */int) ((((/* implicit */int) arr_20 [(unsigned char)4] [9ULL] [i_18] [i_18])) != (((/* implicit */int) arr_20 [(_Bool)1] [7] [i_17] [i_16]))))) : (max(((~(((/* implicit */int) var_5)))), (((/* implicit */int) min((((/* implicit */signed char) var_4)), (arr_72 [i_16] [(unsigned char)13] [i_16] [i_16 + 1]))))))));
                        /* LoopSeq 2 */
                        for (long long int i_20 = 3; i_20 < 17; i_20 += 2) 
                        {
                            var_32 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_75 [(unsigned short)7] [i_20 - 1] [19LL] [i_19] [i_20 - 3] [i_20] [i_20])) ? (((/* implicit */unsigned long long int) arr_42 [(unsigned short)18] [i_20 - 2] [(unsigned short)1] [i_19] [i_20])) : (arr_75 [i_16] [i_20 + 2] [2U] [2LL] [i_19] [2LL] [i_19])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_77 [i_16] [i_20 + 3] [i_18] [i_18] [i_20]))) : (arr_42 [i_16] [i_20 + 1] [i_18] [i_19] [i_20 + 1])));
                            arr_78 [(unsigned char)8] [i_16] [(unsigned char)7] [i_17 - 2] [(unsigned char)8] [i_16] [(unsigned char)8] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_68 [i_20] [i_19 - 1] [i_17 + 1] [i_16])) ? (arr_44 [i_16] [i_19] [i_20 - 1]) : (((((/* implicit */_Bool) arr_68 [i_17 - 2] [19LL] [i_19] [i_20])) ? (arr_44 [i_16 + 1] [i_18] [i_18]) : (arr_44 [(short)12] [i_19] [(short)10])))));
                        }
                        /* vectorizable */
                        for (short i_21 = 0; i_21 < 20; i_21 += 2) 
                        {
                            var_33 &= ((/* implicit */unsigned int) var_0);
                            var_34 = ((/* implicit */unsigned int) ((arr_20 [i_19] [i_19] [i_19] [i_19 - 2]) ? (((/* implicit */long long int) -3622644)) : (((((/* implicit */_Bool) arr_21 [9U] [i_17] [i_18] [i_19] [i_21])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_56 [i_16 - 2])))))));
                        }
                        var_35 = ((/* implicit */_Bool) max(((+(arr_75 [i_16 + 1] [i_16] [i_16 + 1] [i_16 - 2] [i_16] [i_16] [i_16 - 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1760070274981790277LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)10), (((/* implicit */signed char) arr_79 [i_16] [i_17] [14ULL] [i_19] [16] [i_17])))))) : (((((/* implicit */_Bool) -3622665)) ? (((/* implicit */unsigned int) var_3)) : (arr_37 [i_16] [10U] [i_18] [18ULL]))))))));
                    }
                    arr_81 [i_16] [i_16] [i_16] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_41 [i_17 - 3] [i_17 - 3] [i_17 - 3] [i_17 - 2] [3U])))) ? (((((/* implicit */_Bool) arr_12 [i_16 + 1] [i_17 - 3])) ? (-272320398) : (((/* implicit */int) arr_12 [i_16 - 2] [i_17 - 2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_76 [(unsigned char)13] [i_17] [i_18] [i_18] [8] [10U]) + (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_18])))))))))));
                    arr_82 [i_16] [(unsigned char)0] [i_18] [12LL] = ((/* implicit */short) var_1);
                }
            } 
        } 
    } 
}
