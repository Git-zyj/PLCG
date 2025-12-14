/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137851
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
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) max((var_5), (((/* implicit */unsigned short) arr_2 [i_0]))))) >= ((((!(((/* implicit */_Bool) -381740079)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)56200)) && ((_Bool)1)))) : (((/* implicit */int) var_5))))));
        var_15 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)50909)) : (((/* implicit */int) (unsigned short)35836))))) ^ (((var_13) ? (-2162897450653768427LL) : (((/* implicit */long long int) arr_1 [(unsigned char)20]))))))), (max((((/* implicit */unsigned long long int) (_Bool)1)), (max((13627701908432913891ULL), (((/* implicit */unsigned long long int) arr_0 [(unsigned short)16] [i_0]))))))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_8 [i_1] = ((/* implicit */unsigned char) ((short) max((((/* implicit */unsigned char) ((arr_7 [i_0] [i_1]) < (4819042165276637724ULL)))), (arr_2 [i_0]))));
            var_16 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))));
            var_17 = max((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 214546902)))))) % (max((((/* implicit */unsigned long long int) (short)14348)), (arr_6 [i_1] [i_0] [i_1]))))), (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_3 [i_1])), (var_14)))), (max((arr_6 [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) var_6)))))));
        }
        for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (int i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                var_18 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) ((((/* implicit */int) var_7)) % (((/* implicit */int) var_3)))))))));
                /* LoopSeq 2 */
                for (signed char i_4 = 2; i_4 < 21; i_4 += 1) 
                {
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(((unsigned int) arr_0 [i_2] [i_0]))))) >= (((max((((/* implicit */unsigned long long int) arr_15 [i_2] [i_2])), (var_1))) % (arr_6 [i_2] [i_2] [i_2])))));
                    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned short)23985))))) ? (max((((/* implicit */unsigned int) var_3)), (4149852228U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((int) var_14)))))))));
                    var_21 = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */int) arr_2 [i_4 - 2])) <= (((/* implicit */int) arr_2 [i_4 - 2]))))), (((((/* implicit */int) (short)-14348)) & (((((/* implicit */_Bool) arr_3 [8ULL])) ? (214546886) : (-1854547949)))))));
                    arr_17 [i_0] [i_2] [i_4] [i_0] |= ((/* implicit */_Bool) (+(max((2516041112778128414ULL), (((/* implicit */unsigned long long int) 214546862))))));
                    var_22 ^= ((/* implicit */unsigned char) (unsigned short)8560);
                }
                /* vectorizable */
                for (unsigned short i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    var_23 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_3 [i_3])) ? (5573037960713354386ULL) : (arr_7 [i_0] [i_0]))));
                    var_24 = (i_2 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_10 [i_2])) + (2147483647))) >> (((((/* implicit */int) arr_10 [i_2])) + (8518)))))) : (((/* implicit */unsigned long long int) ((((((((/* implicit */int) arr_10 [i_2])) - (2147483647))) + (2147483647))) >> (((((((/* implicit */int) arr_10 [i_2])) + (8518))) - (34871))))));
                }
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -65136543)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) var_7))) / (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)15)), (var_9))))))) : ((+(max((arr_6 [i_2] [i_2] [i_6]), (((/* implicit */unsigned long long int) arr_20 [i_6] [i_0] [i_0]))))))));
                var_26 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_2] [i_6]))) <= (((((/* implicit */_Bool) arr_5 [i_2])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_2] [i_2] [i_0])))))));
                var_27 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23164))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)205))) & (18446744073709551594ULL))))));
                var_28 = ((/* implicit */long long int) max((((/* implicit */short) (!(((/* implicit */_Bool) var_4))))), (((short) var_0))));
            }
            arr_22 [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5)))))))) ? ((+(((((/* implicit */_Bool) arr_15 [18] [i_2])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) arr_5 [i_2])))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) max(((short)0), ((short)-11779))))))));
        }
        for (unsigned char i_7 = 0; i_7 < 22; i_7 += 1) /* same iter space */
        {
            var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((((/* implicit */int) max((arr_12 [i_0] [i_7] [i_0] [i_0]), (arr_12 [i_0] [i_7] [i_0] [i_7])))) >> (((((/* implicit */_Bool) 1222424244)) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)42347)))))))));
            /* LoopSeq 1 */
            for (signed char i_8 = 0; i_8 < 22; i_8 += 1) 
            {
                var_30 = ((/* implicit */unsigned short) max((((((/* implicit */long long int) -214546865)) / (var_10))), (((/* implicit */long long int) ((((/* implicit */int) arr_26 [i_8])) >> (((((/* implicit */int) var_7)) + (2383))))))));
                var_31 = ((int) max((((/* implicit */unsigned long long int) ((var_10) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_8] [i_0])))))), (arr_14 [i_0] [i_0] [i_0] [i_0])));
                var_32 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_12 [i_0] [i_7] [i_0] [i_8])) >> (((((/* implicit */int) arr_3 [i_7])) - (225))))) * (((/* implicit */int) (!(arr_12 [i_0] [i_7] [i_0] [i_8]))))));
            }
        }
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        arr_29 [i_9] = ((/* implicit */unsigned char) (((+(((var_8) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)162))))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) <= (var_8))))))));
        var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) max((((((unsigned long long int) arr_27 [(unsigned char)6])) | (max((4819042165276637719ULL), (((/* implicit */unsigned long long int) var_0)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (12873706112996197244ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))) ? (arr_28 [24ULL] [24ULL]) : (((/* implicit */int) ((((/* implicit */_Bool) arr_27 [(unsigned char)8])) && (((/* implicit */_Bool) arr_27 [(unsigned char)8])))))))))))));
    }
    /* vectorizable */
    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) /* same iter space */
    {
        var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) -2162897450653768452LL))));
        var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) ((unsigned short) (+(arr_31 [(short)6])))))));
    }
    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) /* same iter space */
    {
        var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) max((12873706112996197251ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))));
        /* LoopSeq 2 */
        for (long long int i_12 = 0; i_12 < 25; i_12 += 1) 
        {
            var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_0))) | (arr_31 [(_Bool)1]))))))));
            arr_37 [i_11 + 1] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_12)) ? (15819503935776776251ULL) : (arr_30 [12ULL])))));
            arr_38 [i_11] [i_12] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_30 [(short)6])))) + (max((var_10), (((/* implicit */long long int) arr_27 [2])))))));
        }
        for (unsigned long long int i_13 = 1; i_13 < 24; i_13 += 1) 
        {
            arr_42 [i_13] [i_13] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((max((((/* implicit */int) arr_32 [i_13 + 1])), (939118604))) >> (((max((((/* implicit */unsigned long long int) var_13)), (arr_35 [i_13 + 1] [i_11]))) - (564565834977155461ULL))))))));
            var_38 &= ((/* implicit */unsigned int) max((max((arr_35 [i_13 + 1] [i_11 + 1]), (((/* implicit */unsigned long long int) arr_32 [i_13 + 1])))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_39 [i_11] [(_Bool)0] [i_11 + 1])))))));
            /* LoopNest 2 */
            for (long long int i_14 = 3; i_14 < 24; i_14 += 1) 
            {
                for (short i_15 = 0; i_15 < 25; i_15 += 3) 
                {
                    {
                        var_39 = ((/* implicit */unsigned short) ((((unsigned int) max((((/* implicit */long long int) (unsigned short)42372)), (-6542738449128041811LL)))) % ((+(((var_14) / (var_14)))))));
                        var_40 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) 13627701908432913887ULL)) ? (((/* implicit */int) ((unsigned short) (unsigned char)105))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_34 [i_11 + 1] [i_13])))) == (((arr_43 [i_11] [i_13 + 1] [i_15]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18259))) : (var_11))))))));
                        arr_48 [i_13] [i_15] = ((/* implicit */unsigned long long int) (+(-2162897450653768421LL)));
                        var_41 -= ((/* implicit */_Bool) arr_35 [i_13 + 1] [i_13 + 1]);
                    }
                } 
            } 
        }
    }
    var_42 += ((/* implicit */_Bool) max((((/* implicit */unsigned short) var_7)), (var_2)));
}
