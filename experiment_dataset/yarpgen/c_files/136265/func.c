/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136265
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
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_0)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (var_11)))) ? (max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8)))), (((/* implicit */int) (unsigned char)74)))) : (max((((var_6) ? (((/* implicit */int) (unsigned char)173)) : (((/* implicit */int) var_2)))), (((/* implicit */int) ((var_11) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(9223372036854775807LL)))) ? (((((/* implicit */_Bool) var_8)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-111))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)74)) ? (((/* implicit */int) (short)21670)) : (((/* implicit */int) (short)-21669)))))))) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (var_7))) : (((((/* implicit */_Bool) (unsigned char)228)) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        arr_2 [i_0] [i_0] = ((/* implicit */int) arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            arr_9 [(unsigned char)7] = ((/* implicit */_Bool) ((int) ((((/* implicit */int) (unsigned short)22225)) > (arr_3 [i_1]))));
            arr_10 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)105)) >> (((((/* implicit */int) var_1)) + (52)))));
        }
        for (signed char i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 22; i_4 += 2) 
            {
                for (short i_5 = 0; i_5 < 22; i_5 += 4) 
                {
                    {
                        arr_18 [i_1] = ((/* implicit */short) ((min((arr_7 [i_5] [i_3] [(unsigned char)1]), (((((/* implicit */_Bool) (short)21659)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned char)7)))))) | (min((((((/* implicit */_Bool) arr_8 [i_1] [i_3] [i_4])) ? (arr_7 [i_3] [i_4] [i_5]) : (((/* implicit */int) (unsigned char)182)))), (-1943342994)))));
                        arr_19 [i_5] = ((/* implicit */long long int) min(((signed char)-1), (((/* implicit */signed char) (((_Bool)1) && (((/* implicit */_Bool) 788370633)))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 3; i_6 < 18; i_6 += 3) 
                        {
                            arr_23 [i_3] [i_3] = ((/* implicit */short) arr_11 [i_1]);
                            arr_24 [i_6 - 3] [i_5] [i_4] [i_3] [i_3] [i_1] [i_1] = ((/* implicit */unsigned char) ((max((-2093173543), (((/* implicit */int) arr_13 [i_6 + 3] [i_6 + 2] [i_6 - 3])))) <= (((/* implicit */int) (short)21657))));
                            var_15 = ((/* implicit */unsigned char) (short)-21670);
                        }
                    }
                } 
            } 
            arr_25 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((3904248809833876589ULL) >> (((var_11) - (1384373686137451759ULL)))))) ? (((((/* implicit */_Bool) (unsigned char)9)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [(_Bool)1] [i_3] [i_3]))))) : (((/* implicit */unsigned long long int) arr_8 [(short)10] [i_1] [(short)10]))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_3))))) : (arr_20 [i_1] [i_1] [i_1] [i_3] [i_3])));
        }
        /* LoopNest 3 */
        for (short i_7 = 0; i_7 < 22; i_7 += 1) 
        {
            for (long long int i_8 = 0; i_8 < 22; i_8 += 2) 
            {
                for (short i_9 = 3; i_9 < 21; i_9 += 4) 
                {
                    {
                        arr_34 [i_1] [i_7] [i_8] [i_8] = ((/* implicit */int) arr_1 [(_Bool)1]);
                        arr_35 [i_7] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_9] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)33))) : (((((/* implicit */_Bool) arr_27 [i_9])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1])))))));
                        arr_36 [i_1] [i_1] [i_8] [i_7] = ((/* implicit */unsigned short) arr_31 [i_1] [i_7]);
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_15 [i_1] [i_1] [i_1])))))))));
        arr_37 [i_1] = arr_32 [i_1];
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_10 = 0; i_10 < 22; i_10 += 3) 
        {
            var_17 = ((/* implicit */unsigned char) arr_4 [i_1]);
            /* LoopSeq 2 */
            for (signed char i_11 = 0; i_11 < 22; i_11 += 4) 
            {
                /* LoopSeq 1 */
                for (short i_12 = 0; i_12 < 22; i_12 += 4) 
                {
                    var_18 = ((/* implicit */signed char) arr_0 [i_1]);
                    arr_48 [i_1] [i_10] [i_1] [i_12] = ((/* implicit */short) arr_3 [i_1]);
                    arr_49 [(_Bool)1] [(_Bool)1] [i_11] [i_12] = ((/* implicit */unsigned char) var_8);
                }
                arr_50 [i_11] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_11] [i_10] [i_1])) ? (arr_8 [i_1] [i_1] [i_11]) : (arr_8 [i_1] [i_1] [(signed char)0])));
            }
            for (int i_13 = 0; i_13 < 22; i_13 += 4) 
            {
                arr_54 [i_1] [i_10] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7))));
                var_19 = ((/* implicit */signed char) 580239465);
                arr_55 [i_1] [i_10] [i_13] = var_5;
                arr_56 [i_1] = ((var_7) << (((arr_7 [i_1] [i_1] [i_13]) - (2126511160))));
            }
            arr_57 [i_10] [i_10] [i_10] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_14 [i_10] [i_10]))));
            /* LoopNest 2 */
            for (short i_14 = 2; i_14 < 20; i_14 += 3) 
            {
                for (short i_15 = 4; i_15 < 19; i_15 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_16 = 1; i_16 < 19; i_16 += 4) 
                        {
                            arr_66 [i_1] [i_1] [i_1] [i_15] [i_16] = ((/* implicit */_Bool) ((((/* implicit */int) (short)22880)) + (((/* implicit */int) var_4))));
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [(unsigned char)13] [i_10] [i_14 + 1] [i_15 + 3])) ? (arr_38 [i_16] [i_10]) : (((/* implicit */int) arr_52 [i_14 + 1] [i_14] [i_14 - 1]))));
                        }
                        for (int i_17 = 4; i_17 < 20; i_17 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 8795606599000272049LL)) ? (((/* implicit */int) (signed char)-118)) : ((~(((/* implicit */int) (short)6))))));
                            arr_69 [i_1] [i_10] [i_14] [i_1] [i_14] [i_1] [i_1] = ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned char)185)) : (-1));
                        }
                        arr_70 [i_15 - 3] [i_14] [i_10] [i_1] = (-(((/* implicit */int) arr_13 [i_14 + 2] [i_14 - 1] [i_14 + 1])));
                    }
                } 
            } 
        }
    }
    for (signed char i_18 = 0; i_18 < 17; i_18 += 3) 
    {
        arr_75 [(signed char)1] = ((/* implicit */_Bool) arr_46 [i_18] [i_18] [i_18] [i_18]);
        var_22 = ((((/* implicit */_Bool) min((arr_8 [5ULL] [i_18] [i_18]), (((/* implicit */long long int) (signed char)53))))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_59 [i_18] [i_18] [i_18])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) : (max((((/* implicit */int) (short)25425)), (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9)))))));
        arr_76 [i_18] = ((/* implicit */int) arr_51 [21LL] [i_18]);
    }
}
