/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139855
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
    var_16 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 131064ULL)) ? (9223372036854774784ULL) : (9223372036854774784ULL))) != (((unsigned long long int) var_4)))))) != (((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32))) & (9223372036854776832ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32754)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            var_17 = ((/* implicit */unsigned long long int) (short)(-32767 - 1));
            arr_4 [i_0] [i_0] |= ((/* implicit */short) (-(((/* implicit */int) ((unsigned short) ((unsigned long long int) 18446744073709420551ULL))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        {
                            var_18 = ((((/* implicit */_Bool) (-((~(9223372036854776831ULL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 12ULL)) ? (9223372036854774784ULL) : (558446353793941504ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))));
                            arr_13 [i_2] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (16106127360ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3] [i_3] [i_3]))))))));
                            arr_14 [i_2] [i_1] [i_2] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)16320)) ? (8372224ULL) : (4575657221408423936ULL)))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((0ULL) < (2199014866944ULL)))))) : (((/* implicit */int) ((((/* implicit */int) arr_11 [4ULL] [i_1] [i_1] [i_1] [i_3] [i_4])) != (((/* implicit */int) ((unsigned short) var_4))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_5 = 1; i_5 < 13; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (((!(((/* implicit */_Bool) 18446744073709420551ULL)))) && ((!(((/* implicit */_Bool) (short)0))))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775808ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4))) : (0ULL)))) ? (((/* implicit */int) arr_11 [i_2] [13ULL] [i_2] [i_5 + 1] [12ULL] [i_2])) : (((/* implicit */int) (short)1536))))));
                            arr_21 [3ULL] [5ULL] [14ULL] [i_5] [i_2] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_5 [i_5 + 1] [i_5 - 1] [i_5 + 1])) ? (((/* implicit */int) arr_5 [i_5 + 2] [i_5 + 3] [i_5 - 1])) : (((/* implicit */int) arr_5 [i_5 + 2] [i_5 - 1] [i_5 + 1]))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 3) 
                {
                    arr_24 [(unsigned short)3] [(unsigned short)3] [i_2] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((11ULL) ^ (var_4))) >> (((17979214137393152ULL) - (17979214137393148ULL)))))) ? (((((/* implicit */_Bool) (-(17888297719915610143ULL)))) ? (max((var_4), (18446744073709551613ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32759))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_4)) ? (arr_0 [i_2] [i_0]) : (9223372036854776831ULL))))))));
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)32759)) : (((/* implicit */int) arr_11 [i_0] [(unsigned short)1] [i_0] [i_0] [i_0] [i_0])))))))) - ((-(((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_1] [i_2] [i_7])))))))));
                }
            }
            arr_25 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-((-(8372224ULL)))))) && (((((((/* implicit */int) var_14)) + (((/* implicit */int) (short)-4)))) >= (((/* implicit */int) (unsigned short)32768))))));
        }
        for (unsigned long long int i_8 = 1; i_8 < 14; i_8 += 2) 
        {
            /* LoopNest 3 */
            for (short i_9 = 0; i_9 < 16; i_9 += 2) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 3) 
                {
                    for (unsigned short i_11 = 0; i_11 < 16; i_11 += 2) 
                    {
                        {
                            arr_35 [i_0] [i_8] [i_9] [i_9] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)0);
                            arr_36 [i_8] [i_10] [i_8] [i_8] [i_11] [i_8] = ((/* implicit */short) ((((unsigned long long int) ((unsigned long long int) (short)(-32767 - 1)))) & (((16888498602639360ULL) ^ (8761733283840ULL)))));
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */unsigned short) ((16888498602639360ULL) - (max((((unsigned long long int) 18446744073709551604ULL)), (((/* implicit */unsigned long long int) arr_19 [i_0] [i_0]))))));
            arr_37 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_22 [i_8] [i_0] [i_0])) + (2147483647))) >> (((((/* implicit */int) var_5)) - (509))))))))) * (((((/* implicit */_Bool) 18446744073675997184ULL)) ? (((/* implicit */int) (unsigned short)16)) : (((/* implicit */int) (unsigned short)65519))))));
            var_22 = 18446744073709551595ULL;
            arr_38 [i_0] [i_8] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)4094)) < (((/* implicit */int) arr_16 [i_0] [i_0] [i_8] [i_8] [i_8])))) ? (((/* implicit */int) ((14ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61439)))))) : (((/* implicit */int) ((18446744073709551597ULL) != (18429855575106912255ULL))))))) != (((((/* implicit */_Bool) (short)0)) ? (1073479680ULL) : (2190433320960ULL)))));
        }
        for (unsigned short i_12 = 0; i_12 < 16; i_12 += 2) 
        {
            var_23 = ((/* implicit */unsigned short) (-(18446744073675997187ULL)));
            var_24 |= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551612ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)768))))))))), (((unsigned short) ((unsigned long long int) (unsigned short)4120)))));
            /* LoopSeq 2 */
            for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 3) 
            {
                arr_45 [(short)0] [i_0] [i_12] [i_13] = ((/* implicit */unsigned short) ((((unsigned long long int) (!(((/* implicit */_Bool) 4035225266123964416ULL))))) % ((-(((((/* implicit */_Bool) 22ULL)) ? (arr_29 [i_13] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))))));
                var_25 = ((/* implicit */unsigned long long int) ((((((unsigned long long int) 138538465099776ULL)) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_17 [i_13] [i_0] [i_0])) > (((/* implicit */int) (short)(-32767 - 1))))))))) < (((((/* implicit */_Bool) ((0ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_13] [i_0] [i_0])))))) ? (11ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)16368)))))))));
            }
            /* vectorizable */
            for (unsigned long long int i_14 = 3; i_14 < 15; i_14 += 2) 
            {
                arr_48 [i_0] [i_14] [i_12] [i_14] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)8160))));
                arr_49 [i_14] = ((/* implicit */short) (+(arr_31 [i_14 - 2] [i_14 + 1] [i_14 + 1] [i_14] [i_14 + 1] [i_14 - 2])));
                arr_50 [i_0] [i_14] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 18446744073709551593ULL)) ? (18442240474082181120ULL) : (1073479673ULL)));
                arr_51 [i_14] [i_14] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) + (2251798739943424ULL));
            }
            arr_52 [i_12] |= ((/* implicit */unsigned short) (-((((-(((/* implicit */int) arr_26 [i_0] [13ULL])))) * (((/* implicit */int) (unsigned short)21))))));
            arr_53 [i_0] [i_0] &= ((/* implicit */short) 18446744073709551612ULL);
        }
        for (unsigned short i_15 = 2; i_15 < 15; i_15 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_16 = 2; i_16 < 13; i_16 += 2) 
            {
                for (unsigned long long int i_17 = 0; i_17 < 16; i_17 += 4) 
                {
                    {
                        var_26 = ((/* implicit */short) (~(((/* implicit */int) (short)60))));
                        arr_62 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((arr_39 [i_0] [i_0] [14ULL]), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8161))) != (arr_10 [i_15 - 1] [i_16 + 2]))))));
                    }
                } 
            } 
            var_27 += ((((18446744073709551590ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)504))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (143974450587500544ULL))));
        }
        arr_63 [i_0] = ((/* implicit */short) min((18446744073709551612ULL), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_0] [i_0])) ? (1080863910568919040ULL) : (18446744073709551614ULL)))) ? (((unsigned long long int) (short)24)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65520)))))));
        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) ((short) 786432ULL)))) != (((/* implicit */int) ((((var_13) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [(unsigned short)6]))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
        arr_64 [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) ((short) (short)45)));
        arr_65 [(short)1] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))))));
    }
    var_29 = ((/* implicit */unsigned long long int) max((var_29), (((((/* implicit */unsigned long long int) ((/* implicit */int) max((((unsigned short) 17557826306048ULL)), (var_9))))) * (max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)4080)) / (((/* implicit */int) (unsigned short)61415)))))))))));
    var_30 = max((((/* implicit */unsigned long long int) (((~(var_7))) != ((+(17557826306048ULL)))))), (var_15));
}
