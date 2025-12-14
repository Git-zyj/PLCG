/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136633
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (unsigned short)25933);
        var_10 -= ((/* implicit */short) (unsigned short)25937);
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 20; i_2 += 1) 
            {
                {
                    var_11 |= ((/* implicit */unsigned short) (-(((/* implicit */int) ((_Bool) arr_5 [i_2 - 1])))));
                    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_1 [i_1 - 1]), (arr_1 [i_1 - 1])))) ? (((long long int) arr_5 [i_1 + 1])) : (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_1 - 1])) >> (((1923867435U) - (1923867408U))))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (int i_3 = 2; i_3 < 21; i_3 += 1) 
        {
            var_13 ^= arr_11 [i_3] [i_0];
            var_14 = ((/* implicit */unsigned char) 1206705029);
        }
        for (short i_4 = 1; i_4 < 19; i_4 += 3) 
        {
            var_15 = ((/* implicit */unsigned short) ((unsigned char) (unsigned short)47553));
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_5 = 2; i_5 < 19; i_5 += 1) 
            {
                var_16 = ((/* implicit */unsigned char) 987314082);
                arr_18 [i_0] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(unsigned short)5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_5 + 3] [i_4]))) : (arr_6 [i_5] [i_4 + 3] [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1206705042)) ? (((/* implicit */int) arr_5 [i_0])) : (1206705029)))) : (arr_16 [i_5] [i_0] [i_0])));
                arr_19 [i_5] [i_5] [i_5] [i_0] = ((/* implicit */unsigned char) arr_16 [i_0] [i_0] [(unsigned short)9]);
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_4 - 1] [i_4 + 3] [i_4 + 3])) ? (((/* implicit */int) arr_9 [i_0] [i_4 + 1] [i_5 + 1])) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_13 [i_0] [i_4])) : (arr_1 [i_4])))));
            }
            for (unsigned int i_6 = 1; i_6 < 21; i_6 += 1) 
            {
                arr_22 [i_6 + 1] [i_4] [i_0] [i_0] &= ((/* implicit */unsigned char) (~(((/* implicit */int) max(((unsigned short)25933), (((/* implicit */unsigned short) arr_20 [i_4 + 3] [i_4 + 1])))))));
                var_18 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 9223372036854775800LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)56436))));
            }
            var_19 = ((/* implicit */long long int) (unsigned char)1);
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_20 = (unsigned short)9433;
            var_21 = ((/* implicit */unsigned short) (+(max((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)56089))))), (((((/* implicit */_Bool) (unsigned short)39603)) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_0] [i_7]))) : (-9223372036854775800LL)))))));
        }
    }
    /* LoopSeq 1 */
    for (unsigned short i_8 = 4; i_8 < 16; i_8 += 2) 
    {
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 18; i_9 += 3) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (unsigned int i_11 = 0; i_11 < 18; i_11 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_12 = 0; i_12 < 18; i_12 += 2) 
                        {
                            var_22 = ((/* implicit */long long int) (~(0U)));
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (signed char)93)) : (((/* implicit */int) (signed char)40))))) ? (((/* implicit */int) arr_3 [i_8 - 4])) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)26420)) : (((/* implicit */int) ((unsigned char) (short)-3618)))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_13 = 4; i_13 < 17; i_13 += 1) 
                        {
                            arr_43 [i_8] [i_9] [i_8] [i_9] &= ((/* implicit */unsigned short) arr_31 [i_9]);
                            arr_44 [i_13] [i_9] [i_10] [10U] [(unsigned char)13] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)56096))));
                            arr_45 [i_13] = (~(((/* implicit */int) arr_34 [i_13 - 4] [i_9] [i_10] [(unsigned char)10] [i_13] [(unsigned char)10])));
                        }
                        arr_46 [i_8 - 3] [i_8] [i_9] [i_8 - 3] [i_11] [i_11] = ((/* implicit */unsigned short) (_Bool)1);
                        var_24 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_28 [i_11] [i_8 - 1])) == (arr_14 [i_8]))))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (short i_14 = 0; i_14 < 18; i_14 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_47 [15LL] [i_11] [0] [i_10] [i_8 - 1]))));
                            arr_50 [i_8] [i_9] [i_10] [i_9] [i_14] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_23 [i_11] [i_8 - 1]))));
                            var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)39603)) << (((arr_1 [i_10]) - (930313308)))))) ? (((((/* implicit */_Bool) (unsigned short)9433)) ? (551679173U) : (arr_17 [i_10] [i_9] [i_14]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_8]))))))));
                        }
                        for (long long int i_15 = 1; i_15 < 17; i_15 += 2) 
                        {
                            arr_53 [8] [i_10] [8] [(unsigned char)17] [i_8] &= ((/* implicit */unsigned short) arr_0 [i_8 + 1]);
                            arr_54 [i_11] [i_11] [i_10] [i_9] [i_8] = ((/* implicit */long long int) arr_49 [i_15] [i_15] [i_10] [i_11] [i_10] [i_8] [i_8]);
                            var_27 = (-(((((/* implicit */int) arr_48 [i_8] [i_8] [i_10] [i_11] [i_8] [i_8 + 2])) << (((((/* implicit */int) arr_48 [i_8] [i_9] [i_10] [i_11] [i_10] [i_8 + 2])) - (31632))))));
                            arr_55 [i_8] [i_8 - 3] [i_8 - 4] [i_11] [i_15] [i_8] [i_9] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_11])) ? (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned long long int) arr_17 [i_8 - 4] [i_10] [i_8])) : (12559143582610509553ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2110730924))))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-26)) && (((/* implicit */_Bool) arr_52 [i_15] [i_11] [i_10] [i_9] [i_8 + 2]))))))))));
                        }
                        for (unsigned short i_16 = 0; i_16 < 18; i_16 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned short) max(((~(((((((/* implicit */int) arr_56 [i_8 - 3] [i_8] [i_8] [i_8] [i_8] [i_8])) + (2147483647))) << (((((/* implicit */int) arr_36 [i_8] [i_9] [i_10] [i_11] [i_10])) - (227))))))), (((/* implicit */int) min(((unsigned short)39603), (((/* implicit */unsigned short) ((_Bool) 36028796482093056ULL))))))));
                            var_29 ^= (~(((((/* implicit */int) arr_4 [i_8 - 3])) ^ (arr_21 [i_8 - 4] [i_8]))));
                        }
                        for (signed char i_17 = 0; i_17 < 18; i_17 += 3) 
                        {
                            arr_61 [i_17] [i_17] [i_10] [i_17] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_3 [i_9])) ? (3673690394591656456LL) : (arr_12 [i_8]))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)34183)) ? (arr_59 [i_8] [i_9] [i_9] [(unsigned char)1] [i_11] [i_11] [i_17]) : (((/* implicit */int) (signed char)47)))))))) ? (((/* implicit */int) arr_4 [i_8])) : (((/* implicit */int) (signed char)30))));
                            arr_62 [i_17] [i_17] [i_17] [i_11] [i_17] [17U] [(short)17] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_8] [i_8 - 4])) ? (((/* implicit */int) arr_13 [i_8] [i_8 - 3])) : (((/* implicit */int) arr_13 [7LL] [i_8 - 3]))))));
                            arr_63 [i_9] [i_9] [i_17] [i_9] [i_9] [i_9] = ((int) ((unsigned short) arr_36 [i_17] [i_11] [i_10] [i_9] [i_8]));
                            var_30 = ((/* implicit */unsigned short) (+(((long long int) arr_4 [i_8 - 3]))));
                            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) (~(((/* implicit */int) (_Bool)1)))))) ? (min((((/* implicit */int) arr_40 [i_8] [i_8] [i_8] [i_17] [i_8 + 1])), (arr_0 [i_11]))) : (((int) ((((/* implicit */_Bool) arr_36 [i_17] [i_11] [i_10] [i_9] [i_8])) ? (((/* implicit */int) (unsigned short)8719)) : (((/* implicit */int) var_4)))))));
                        }
                    }
                } 
            } 
        } 
        arr_64 [i_8] = ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_35 [i_8 - 2] [i_8] [i_8])) % (((/* implicit */int) arr_35 [i_8 + 1] [i_8 - 3] [i_8 - 3]))))));
        arr_65 [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_8 [i_8] [i_8])) ? (((/* implicit */int) (unsigned short)56818)) : (arr_0 [i_8])))))) ? (((((/* implicit */_Bool) arr_10 [i_8 - 1] [i_8 - 4] [i_8])) ? (((/* implicit */int) arr_34 [i_8] [i_8 + 1] [i_8 - 2] [i_8 + 1] [i_8] [i_8])) : (((/* implicit */int) arr_34 [i_8 - 3] [i_8] [i_8] [i_8 + 1] [i_8] [(unsigned char)17])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_26 [i_8] [i_8 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)39)))))))))));
        var_32 = ((/* implicit */unsigned short) max((var_32), (((unsigned short) (+(((/* implicit */int) arr_52 [i_8] [i_8 + 2] [i_8] [i_8 - 4] [i_8])))))));
        var_33 = ((/* implicit */short) min((max((arr_24 [i_8 - 3] [i_8 + 1]), (arr_24 [i_8 + 2] [i_8 - 1]))), (((/* implicit */unsigned short) arr_31 [(_Bool)1]))));
    }
    var_34 = ((/* implicit */short) var_7);
    var_35 = ((/* implicit */int) 3408496401U);
}
