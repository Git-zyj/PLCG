/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169338
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
    var_12 = ((/* implicit */unsigned char) min((((/* implicit */int) (signed char)28)), (1417165699)));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551612ULL)) ? (((/* implicit */int) arr_0 [i_0 - 2] [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 1]))))) ? (((/* implicit */int) (!(arr_0 [i_0 - 1] [i_0 - 1])))) : (((((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 1])) | (((/* implicit */int) var_6)))))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            arr_5 [i_0 + 1] [i_0] [i_0] = ((/* implicit */unsigned char) min(((-(((/* implicit */int) arr_0 [i_1 - 1] [i_1])))), (min((((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)32767)))), (((((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) & (((/* implicit */int) arr_0 [i_0] [i_1 + 1]))))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                var_14 = ((/* implicit */unsigned char) (((+(((/* implicit */int) var_11)))) == (((/* implicit */int) ((((/* implicit */_Bool) 385166617U)) || (((/* implicit */_Bool) arr_1 [i_0])))))));
                var_15 *= ((/* implicit */_Bool) var_10);
                var_16 = arr_0 [i_2] [i_2];
                arr_10 [i_0] [i_1] = ((signed char) ((((/* implicit */int) (unsigned short)0)) + (((/* implicit */int) (unsigned char)144))));
            }
            arr_11 [i_0] = ((/* implicit */unsigned char) ((_Bool) min((((((/* implicit */long long int) ((/* implicit */int) var_1))) / (var_7))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)112)) ? (arr_7 [i_0] [i_1]) : (((/* implicit */int) (short)27623))))))));
            arr_12 [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) min(((~(var_8))), (((int) var_7))))), (((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1])) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) var_10)) : (953600325U))) : (((/* implicit */unsigned int) arr_4 [i_0 - 2]))))));
        }
    }
    for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
    {
        arr_16 [i_3] = ((/* implicit */unsigned int) (-((~((~(((/* implicit */int) arr_9 [i_3] [i_3] [i_3] [i_3]))))))));
        /* LoopSeq 2 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (+((~(((/* implicit */int) var_6)))))))));
            /* LoopNest 3 */
            for (unsigned char i_5 = 0; i_5 < 10; i_5 += 3) 
            {
                for (signed char i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    for (signed char i_7 = 2; i_7 < 9; i_7 += 1) 
                    {
                        {
                            var_18 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min(((short)-21420), ((short)21419))))));
                            arr_28 [i_3] [i_4] [i_4] [i_3] [i_6] [i_6] = ((/* implicit */unsigned long long int) (-((((!(((/* implicit */_Bool) (unsigned short)58485)))) ? (9223372036854775791LL) : (((/* implicit */long long int) ((((/* implicit */int) (short)-21438)) * (((/* implicit */int) (short)-21450)))))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (short i_8 = 0; i_8 < 10; i_8 += 1) 
            {
                for (unsigned int i_9 = 1; i_9 < 8; i_9 += 1) 
                {
                    {
                        arr_33 [i_3] [i_4] [i_4] [i_8] [(_Bool)1] = ((/* implicit */_Bool) min((var_7), (((/* implicit */long long int) min((arr_4 [i_4 - 1]), (((/* implicit */int) arr_19 [i_9 + 2])))))));
                        arr_34 [i_3] [i_4] [2U] [i_8] [i_9] [i_9] = ((/* implicit */unsigned int) min((((/* implicit */long long int) min((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (var_8) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) arr_0 [0] [i_8]))))), (min(((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_3]))) : (var_7))), (((/* implicit */long long int) (~(131071U))))))));
                        var_19 *= ((/* implicit */unsigned int) (+(3309883714335728991ULL)));
                        arr_35 [i_3] [5] [i_8] [i_3] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)16005)) != (((/* implicit */int) (_Bool)1)))))) | (min((((var_2) | (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_22 [i_3] [i_8] [i_9])))))))));
                    }
                } 
            } 
            arr_36 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 18097843070893760826ULL)))))) | (min(((-(arr_31 [i_3] [8]))), (((/* implicit */unsigned long long int) arr_25 [i_3] [i_3] [i_3] [i_3]))))));
            arr_37 [(unsigned short)0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((arr_15 [i_4 - 1] [i_4 - 1]), (((/* implicit */short) (_Bool)1))))), (((unsigned long long int) (-(var_7))))));
        }
        /* vectorizable */
        for (unsigned short i_10 = 1; i_10 < 7; i_10 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_11 = 1; i_11 < 8; i_11 += 2) 
            {
                arr_44 [i_3] [i_3] [i_10] = ((/* implicit */signed char) (~(((/* implicit */int) arr_43 [i_10 - 1] [i_10] [i_11 + 2] [i_11 - 1]))));
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */int) arr_42 [i_10 + 3] [i_10 + 3] [i_10 + 2])) & (((/* implicit */int) arr_42 [i_10 - 1] [i_10 + 3] [i_10 + 3])))))));
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (short)32758))));
            }
            for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (short i_14 = 0; i_14 < 10; i_14 += 1) 
                    {
                        {
                            var_22 ^= ((/* implicit */unsigned char) var_8);
                            arr_53 [i_3] [i_3] [i_3] [i_12] [i_13] [i_13] [i_10] = ((/* implicit */long long int) ((((unsigned int) var_3)) == (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_10 + 1] [i_10 + 1] [i_10 - 1])))));
                        }
                    } 
                } 
                arr_54 [i_3] [i_3] [i_10] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)111)) ? (var_8) : (((/* implicit */int) (unsigned short)0))))) ? (((((/* implicit */long long int) var_0)) ^ (var_7))) : (((/* implicit */long long int) ((arr_43 [i_12] [i_10] [i_10] [i_3]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)25391)))))));
                var_23 += ((/* implicit */unsigned short) (+((-(9223372036854775807LL)))));
            }
            arr_55 [i_10] [i_10 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)73)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))));
        }
        arr_56 [i_3] = ((/* implicit */int) ((((/* implicit */unsigned int) min((arr_7 [i_3] [i_3]), (arr_7 [i_3] [i_3])))) / (min((((unsigned int) (_Bool)1)), (((/* implicit */unsigned int) (_Bool)1))))));
        /* LoopNest 2 */
        for (unsigned long long int i_15 = 4; i_15 < 6; i_15 += 4) 
        {
            for (short i_16 = 1; i_16 < 9; i_16 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_17 = 2; i_17 < 9; i_17 += 3) /* same iter space */
                    {
                        arr_67 [i_3] [i_3] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-6987)) || (((/* implicit */_Bool) (unsigned short)8))));
                        arr_68 [i_3] [i_15 + 3] [i_16] [i_15 + 3] = ((/* implicit */unsigned short) min(((~(((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))), ((-(((/* implicit */int) min((((/* implicit */short) var_5)), ((short)26236))))))));
                        arr_69 [i_3] [i_3] [i_15] [i_16] [i_16] [i_17 + 1] = ((((/* implicit */_Bool) (-(1442834618)))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_6)) * (((/* implicit */int) var_5))))) ? (arr_66 [i_15 + 4] [i_15 + 2] [i_3] [i_3]) : (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_2 [i_16 + 1] [i_17] [i_17 - 1])), (((unsigned int) var_11))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_18 = 2; i_18 < 9; i_18 += 3) /* same iter space */
                    {
                        var_24 = ((/* implicit */signed char) ((((/* implicit */int) arr_60 [i_16 - 1] [i_15 - 3])) <= ((-(((/* implicit */int) arr_22 [i_15 - 2] [i_16 - 1] [i_18]))))));
                        arr_73 [1ULL] [i_15] [i_15 + 3] [i_16] [i_18] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_42 [i_16 - 1] [i_16 + 1] [i_15 + 4]))));
                    }
                    arr_74 [i_3] [i_3] [i_16 - 1] [i_3] = (~(((/* implicit */int) (signed char)-124)));
                    arr_75 [i_16 - 1] [i_3] = ((((/* implicit */_Bool) (+(507943076U)))) ? (min((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) || (((/* implicit */_Bool) (short)-16030))))), (((((/* implicit */int) (short)-1)) % (((/* implicit */int) arr_50 [i_3])))))) : (var_10));
                }
            } 
        } 
        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) min((-1LL), (((/* implicit */long long int) min((min((var_0), (((/* implicit */int) (short)-16030)))), (((/* implicit */int) min((((/* implicit */short) var_1)), (arr_42 [i_3] [i_3] [i_3]))))))))))));
    }
    for (unsigned short i_19 = 0; i_19 < 16; i_19 += 4) 
    {
        var_26 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) min((arr_77 [i_19]), (var_8)))))) ? (((((((/* implicit */_Bool) arr_2 [(unsigned short)19] [i_19] [i_19])) && (((/* implicit */_Bool) arr_4 [i_19])))) ? (((((/* implicit */_Bool) 9223372036854775787LL)) ? (4294967295U) : (((/* implicit */unsigned int) var_4)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)16005)) == (((/* implicit */int) var_6)))))))) : (((/* implicit */unsigned int) min((min((var_4), (((/* implicit */int) (short)16013)))), (((((/* implicit */_Bool) -2020480990)) ? (((/* implicit */int) (short)-19710)) : (((/* implicit */int) (signed char)-14)))))))));
        arr_78 [i_19] &= ((/* implicit */unsigned int) ((unsigned char) var_0));
        arr_79 [i_19] [i_19] = ((/* implicit */_Bool) min((((/* implicit */long long int) var_4)), (((((((/* implicit */int) var_6)) != (var_8))) ? (((arr_8 [i_19] [i_19] [i_19] [i_19]) << (((((arr_76 [i_19]) + (5072538844287802123LL))) - (35LL))))) : (((/* implicit */long long int) arr_77 [i_19]))))));
    }
    var_27 = ((/* implicit */unsigned int) min((var_7), (((/* implicit */long long int) (+(((/* implicit */int) min((var_11), (((/* implicit */signed char) var_6))))))))));
}
