/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127820
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
    var_13 = ((/* implicit */_Bool) (-(((/* implicit */int) ((short) var_10)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 3225454162153672210ULL)) ? (((/* implicit */int) arr_4 [i_1] [i_0])) : (((/* implicit */int) var_5))))) ? (max((733067521129325611LL), (((/* implicit */long long int) (signed char)-50)))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_1))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 17; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_4] = min((((unsigned short) ((7ULL) * (((/* implicit */unsigned long long int) -888846650))))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)127))))) && ((!(((/* implicit */_Bool) (unsigned char)81))))))));
                                arr_17 [i_0] [8] [3ULL] [2ULL] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((unsigned char) arr_12 [i_0] [i_2] [i_4 - 3] [i_4] [i_4 - 2]))), (((((arr_15 [i_0] [(short)8] [i_2] [i_2] [i_1] [i_0]) % (((/* implicit */unsigned long long int) arr_5 [i_0])))) << (((((/* implicit */int) max((arr_2 [i_0]), (((/* implicit */unsigned char) arr_14 [i_1] [15] [i_2] [i_1]))))) - (131)))))));
                                var_14 = ((/* implicit */unsigned long long int) (-(arr_3 [i_0] [i_0] [i_4 - 2])));
                                var_15 ^= ((/* implicit */unsigned int) (~(((long long int) (-(((/* implicit */int) (short)-32744)))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) ((long long int) max((5112498006181917240ULL), (arr_1 [i_1]))))) || (((/* implicit */_Bool) (signed char)-52)))))));
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_1] [i_0] [i_2] [i_0] [i_0])) ? (var_2) : (((/* implicit */int) arr_9 [(signed char)1] [7ULL] [i_2]))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (int i_5 = 1; i_5 < 9; i_5 += 4) 
    {
        /* LoopSeq 4 */
        for (long long int i_6 = 0; i_6 < 13; i_6 += 4) 
        {
            arr_23 [i_5] [i_5] [i_6] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) 1671484451))) ? (((int) 704857260)) : (((/* implicit */int) (short)582))))) > (((((/* implicit */_Bool) arr_15 [i_5 + 1] [i_5 - 1] [i_5 + 2] [i_5 + 4] [i_5 + 1] [i_6])) ? (arr_15 [i_5 + 2] [i_5 + 1] [i_5 + 2] [i_5 + 4] [i_5] [i_6]) : (arr_15 [i_5 + 2] [i_5 + 2] [i_5 - 1] [i_5 + 4] [i_5] [i_6]))));
            arr_24 [i_6] [i_5] [i_5] = ((/* implicit */unsigned char) ((unsigned short) arr_22 [i_6] [i_5] [i_5 + 3]));
        }
        for (unsigned int i_7 = 0; i_7 < 13; i_7 += 1) 
        {
            arr_27 [i_7] [i_5] = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) arr_13 [(short)14])) : (arr_20 [i_5] [i_5] [i_7]))), (((/* implicit */unsigned int) arr_14 [i_5 + 2] [i_5 + 4] [i_5 + 2] [i_5 + 2]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)241)), (arr_25 [i_5] [i_5 + 3] [i_7])))) ? (((/* implicit */int) arr_9 [4ULL] [3LL] [5ULL])) : ((~(((/* implicit */int) var_5))))))) : ((-(max((((/* implicit */long long int) arr_20 [i_7] [i_7] [i_5 + 4])), (68719345664LL))))));
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 2; i_8 < 12; i_8 += 2) 
            {
                for (signed char i_9 = 0; i_9 < 13; i_9 += 2) 
                {
                    {
                        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) min((((((((/* implicit */_Bool) 0LL)) ? (11994407103912368021ULL) : (((/* implicit */unsigned long long int) 1746436711)))) - (8122680332872254094ULL))), (((/* implicit */unsigned long long int) 21LL)))))));
                        /* LoopSeq 1 */
                        for (int i_10 = 0; i_10 < 13; i_10 += 4) 
                        {
                            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_5 + 4] [i_8] [i_8 - 1] [i_9])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_7 [i_8]))))) ^ (max((((/* implicit */unsigned long long int) arr_7 [i_8])), (arr_10 [i_5 + 1] [i_10] [(signed char)2] [i_5 + 2]))))))));
                            var_20 |= ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) -9083337380026579723LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-24639))) : (814807081U)))) != (((((/* implicit */_Bool) arr_6 [i_5] [i_5 + 1] [i_8 - 2] [i_8 - 1])) ? (arr_6 [i_5] [i_5 - 1] [i_8 - 2] [i_8 - 1]) : (arr_6 [i_5] [i_5 + 1] [i_8 - 2] [i_8 - 2])))));
                            arr_36 [i_5] [i_7] [i_8] [1LL] [9ULL] [(signed char)2] [i_10] = ((/* implicit */long long int) arr_9 [0] [i_7] [i_8]);
                        }
                        arr_37 [i_8 - 2] [i_7] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_0 [i_5] [i_5])) ? (((((/* implicit */_Bool) arr_31 [i_9] [i_8] [i_7] [3LL])) ? (arr_32 [i_5] [(short)2] [i_5] [i_5] [i_5] [i_5] [i_5]) : (((/* implicit */unsigned long long int) arr_0 [i_8] [i_8 - 2])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_9] [7LL] [i_9])) ? (((/* implicit */int) arr_12 [i_9] [4U] [4U] [i_9] [i_9])) : (((/* implicit */int) arr_14 [i_8] [i_8] [i_7] [i_5]))))))), (((arr_31 [i_7] [i_8 + 1] [i_7] [i_5]) >> (((arr_0 [(short)16] [i_7]) - (9019379699298501775LL)))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 13; i_11 += 4) 
        {
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)123))))) ? (((/* implicit */unsigned long long int) arr_0 [i_5] [i_11])) : (((((/* implicit */_Bool) arr_39 [i_11] [3ULL] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_11] [i_11] [i_11]))) : (arr_1 [i_11])))));
            /* LoopSeq 2 */
            for (long long int i_12 = 0; i_12 < 13; i_12 += 3) 
            {
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? ((+(var_4))) : (((/* implicit */int) arr_40 [i_5] [i_11] [i_12]))));
                /* LoopSeq 1 */
                for (int i_13 = 3; i_13 < 12; i_13 += 3) 
                {
                    var_23 += ((/* implicit */unsigned int) (short)-2453);
                    arr_46 [i_5] [i_5] [i_5 + 3] [i_5 + 4] [i_5 + 4] [i_11] &= ((/* implicit */unsigned short) arr_29 [i_5 + 2] [i_13 - 1]);
                    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_13 - 2] [i_5 + 3] [i_5 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_13 - 3] [i_12] [i_12] [i_11] [i_5 + 3]))) <= (2305842459457880064ULL))))) : ((~(arr_6 [i_13 - 2] [i_12] [(short)7] [i_5]))))))));
                }
                var_25 = ((((/* implicit */_Bool) (short)24436)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (5601581744670253464LL));
            }
            for (signed char i_14 = 2; i_14 < 12; i_14 += 1) 
            {
                var_26 = ((/* implicit */unsigned char) var_8);
                /* LoopSeq 2 */
                for (long long int i_15 = 0; i_15 < 13; i_15 += 2) 
                {
                    arr_52 [i_11] [i_5] [i_14] [i_15] [1U] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8071668093333737875LL)) ? (8093007431839685799ULL) : (((/* implicit */unsigned long long int) arr_42 [(_Bool)1] [i_14] [i_11] [i_5 + 2]))))) ? (((/* implicit */unsigned long long int) ((arr_19 [i_11]) + (((/* implicit */long long int) 2147483647))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_51 [i_14] [i_14])) : (9243682220578121787ULL)))));
                    var_27 = ((/* implicit */int) (-(2295645685U)));
                    arr_53 [i_5] [i_5] [i_5] [i_14] [i_5] [i_5 + 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2121824579)) ? (((/* implicit */unsigned int) arr_39 [i_15] [i_14 + 1] [i_5])) : (4183222189U)))) ? (((/* implicit */int) ((arr_19 [i_15]) != (((/* implicit */long long int) 28U))))) : (((/* implicit */int) ((unsigned char) arr_6 [(unsigned short)2] [(unsigned short)2] [i_14 + 1] [12])))));
                    var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_42 [i_5 + 3] [i_5] [i_14 - 2] [i_11])) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_15] [i_5]))) == (arr_50 [i_5] [i_11] [i_14] [i_11])))) : (((int) arr_19 [i_5])))))));
                }
                for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
                {
                    arr_58 [i_16] [(unsigned char)6] [i_14] [i_14] [(unsigned char)6] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_44 [9] [i_11] [i_14 + 1] [i_5 + 4] [i_14 + 1] [i_16 + 1])) ? (arr_44 [i_5 + 2] [i_5 + 2] [(unsigned short)0] [i_5 + 2] [i_14 + 1] [i_16 + 1]) : (((/* implicit */int) (short)-30020))));
                    var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_20 [i_14 - 2] [i_5 - 1] [(_Bool)1])) <= (arr_55 [i_14] [i_14 + 1] [i_14 + 1] [i_5 + 3] [i_14])));
                    var_30 = ((/* implicit */short) arr_7 [i_14]);
                }
                var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)255)) != (((/* implicit */int) (_Bool)1))));
            }
            var_32 = ((/* implicit */int) arr_31 [i_5 + 4] [i_5 + 4] [i_5] [i_5 + 4]);
            /* LoopNest 3 */
            for (unsigned char i_17 = 4; i_17 < 9; i_17 += 3) 
            {
                for (unsigned long long int i_18 = 2; i_18 < 11; i_18 += 4) 
                {
                    for (unsigned char i_19 = 1; i_19 < 12; i_19 += 4) 
                    {
                        {
                            var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) (-(1978751322))))));
                            var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_50 [i_17] [i_11] [(unsigned short)8] [i_11])) ? (((long long int) 4294967286U)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65531))))))));
                            arr_68 [(signed char)12] [i_11] [i_17] [i_17] [i_19] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) (short)14336)) << (((1861997244) - (1861997232))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_20 = 0; i_20 < 13; i_20 += 1) 
        {
            var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_5] [i_20])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_59 [(unsigned char)10] [i_20] [i_20] [i_5]))) : (var_11)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)152))))) : (((((/* implicit */_Bool) 405270506)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4503))) : (11568920638863803010ULL)))))))));
            var_36 = ((/* implicit */long long int) arr_1 [i_20]);
        }
        /* LoopNest 3 */
        for (unsigned char i_21 = 2; i_21 < 12; i_21 += 1) 
        {
            for (unsigned char i_22 = 3; i_22 < 11; i_22 += 4) 
            {
                for (unsigned char i_23 = 1; i_23 < 10; i_23 += 3) 
                {
                    {
                        arr_80 [i_5] [i_5] [i_22] = ((/* implicit */signed char) 6847353438118220728ULL);
                        arr_81 [i_23] [i_22] [11ULL] [i_22] [i_22] [(unsigned short)4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_5 - 1] [i_21 - 2] [i_5 - 1] [i_22 + 1] [i_23 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_66 [i_5] [i_21] [i_21] [9] [i_23]))) : ((-(arr_55 [i_22] [i_22] [i_21] [i_21] [i_22]))))))));
                    }
                } 
            } 
        } 
        var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10))))), (((((/* implicit */_Bool) var_8)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_5])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)9930)) + (var_0)))) : ((-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) arr_0 [i_5 + 2] [i_5])) : (12044137603457861227ULL)))))));
        var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32746)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_78 [i_5] [i_5] [i_5]))) : (arr_56 [i_5] [i_5 + 2] [12LL] [i_5])))))) ? (((((/* implicit */_Bool) ((short) 14455616060960269390ULL))) ? (((((/* implicit */_Bool) arr_45 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_5] [(short)6]))) : (arr_20 [i_5] [i_5] [3LL]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_10)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_62 [i_5] [i_5 + 2] [i_5 + 2] [i_5 - 1])))))))));
    }
    var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)43780))) & (815965206395422700LL)))) ? (((/* implicit */long long int) var_2)) : (-8579450041225726675LL)))) ? (((((/* implicit */_Bool) 3831395364U)) ? (max((var_3), (((/* implicit */long long int) -381204624)))) : (((/* implicit */long long int) ((int) var_2))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_3) : (var_8)))) || ((!(((/* implicit */_Bool) var_12))))))))));
    var_40 = ((/* implicit */int) var_6);
}
