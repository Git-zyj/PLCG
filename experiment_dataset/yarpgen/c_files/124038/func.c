/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124038
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
    var_19 = ((/* implicit */unsigned int) var_7);
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_20 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) var_13))))) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) ((var_1) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) : ((~(max((((/* implicit */int) arr_1 [(signed char)8])), (2074933593)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_4] [i_4] [i_0 + 1]))))) : ((+(((/* implicit */int) max((((/* implicit */unsigned short) arr_3 [i_1])), (var_11))))))));
                                var_22 = ((/* implicit */unsigned long long int) arr_2 [2U]);
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_6 [i_2] [i_3 + 1] [i_2] [16U]))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6))));
                                arr_13 [i_2] [i_2] = var_2;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 3) 
    {
        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_9 = 0; i_9 < 10; i_9 += 2) 
                        {
                            arr_29 [i_5] [i_9] [i_5] [(unsigned char)8] &= ((/* implicit */signed char) var_17);
                            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (_Bool)1))));
                        }
                        var_25 += ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_9)), ((((!(((/* implicit */_Bool) arr_16 [i_5])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)16)), (arr_2 [15ULL]))))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [(signed char)1] [(signed char)1] [i_8]))) : (arr_9 [i_5] [i_6] [i_7] [i_5])))))));
                        var_26 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned char i_10 = 0; i_10 < 10; i_10 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_10 [i_5] [(signed char)1] [i_8] [i_5] [i_8] [(signed char)1]))));
                            var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((signed char) var_14)))));
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1))));
                        }
                        for (signed char i_11 = 0; i_11 < 10; i_11 += 3) 
                        {
                            arr_36 [i_5] [i_5] [i_8] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_5])) < (((/* implicit */int) arr_0 [8]))))) + (((((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_14)))) / (((/* implicit */int) (_Bool)1))))));
                            var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((((/* implicit */int) min((var_0), (arr_21 [i_7] [i_8] [i_11])))) | ((~(((/* implicit */int) arr_0 [i_5])))))))));
                            var_31 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) arr_22 [i_5] [i_5] [(unsigned short)7] [i_8] [i_5] [(signed char)0]))) % (((/* implicit */int) var_4))));
                            var_32 += ((/* implicit */unsigned short) ((4455843358045648412ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)69)))));
                            var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) ((((/* implicit */_Bool) ((var_16) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_5] [i_6] [i_7] [i_7] [i_7] [i_7] [i_11]))) : (var_1)))) ? (((/* implicit */unsigned long long int) var_9)) : (min((((((/* implicit */_Bool) arr_34 [i_7] [i_6] [i_7] [i_8] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (9790658626558430185ULL))), (((unsigned long long int) arr_23 [i_7])))))))));
                        }
                        for (signed char i_12 = 1; i_12 < 9; i_12 += 1) 
                        {
                            var_34 = ((/* implicit */unsigned char) var_18);
                            arr_39 [i_5] [(unsigned short)3] [8U] [8U] [i_8] [(signed char)6] [i_8] = ((/* implicit */signed char) ((arr_19 [i_5] [(_Bool)1] [i_5]) * (((arr_19 [i_12] [i_6] [i_5]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))));
                        }
                    }
                    var_35 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_38 [i_5] [i_5] [i_5] [(signed char)7] [i_5] [i_5])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_5] [i_5] [(_Bool)1] [i_7] [i_5] [i_7])))))));
                }
                for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 10; i_14 += 2) 
                    {
                        for (unsigned int i_15 = 0; i_15 < 10; i_15 += 2) 
                        {
                            {
                                var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)24576)) ? (max((((/* implicit */int) var_0)), (-1372702130))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_26 [i_13])) : (((/* implicit */int) arr_4 [i_6] [i_6]))))))) ? ((-(((/* implicit */int) (signed char)126)))) : (max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_4)))), (((/* implicit */int) ((_Bool) arr_0 [(signed char)16])))))));
                                var_37 = ((/* implicit */unsigned int) ((((/* implicit */int) var_12)) <= (((/* implicit */int) min(((!(((/* implicit */_Bool) (signed char)120)))), ((!(((/* implicit */_Bool) var_13)))))))));
                            }
                        } 
                    } 
                    arr_47 [i_5] [i_5] = ((/* implicit */_Bool) (unsigned char)17);
                }
                for (unsigned char i_16 = 3; i_16 < 8; i_16 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_17 = 2; i_17 < 9; i_17 += 1) 
                    {
                        for (signed char i_18 = 0; i_18 < 10; i_18 += 3) 
                        {
                            {
                                var_38 = ((/* implicit */unsigned int) var_14);
                                var_39 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((((/* implicit */int) arr_17 [(unsigned char)3] [i_6] [i_6])) + (2147483647))) << (((((/* implicit */int) (unsigned char)251)) - (251)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (((var_14) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
                                arr_57 [i_5] [i_5] [i_17] [(unsigned char)5] [i_5] [(unsigned short)7] [(unsigned char)5] = ((/* implicit */unsigned short) min((15281346477123143112ULL), (18127332382813652194ULL)));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_19 = 0; i_19 < 10; i_19 += 2) 
                    {
                        var_40 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_48 [i_5] [i_5] [i_16 - 3] [i_16])), (arr_44 [i_6] [i_6] [i_16 + 2] [i_16 + 2])))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (358013436U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_19])) ? (arr_34 [i_19] [i_6] [i_19] [i_19] [(unsigned char)6]) : (arr_55 [i_19] [i_6] [i_19] [(unsigned short)6] [i_19]))))))) : (var_18)));
                        var_41 = ((/* implicit */signed char) (((+(((15467588419805831964ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) % (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-30)) * (((/* implicit */int) arr_48 [i_16] [i_16] [i_16 - 3] [i_16])))))));
                    }
                }
                var_42 &= ((/* implicit */signed char) min((((/* implicit */int) var_17)), ((-(arr_33 [i_6] [(signed char)0] [(signed char)4] [(_Bool)0] [0U])))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned long long int i_20 = 0; i_20 < 10; i_20 += 2) /* same iter space */
                {
                    var_43 = ((((/* implicit */int) var_7)) ^ (((/* implicit */int) arr_11 [(_Bool)1] [i_5] [i_6] [i_20])));
                    var_44 = ((((/* implicit */_Bool) arr_21 [4U] [4U] [8])) ? (((/* implicit */int) arr_21 [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_21 [i_5] [i_6] [i_20])));
                    var_45 = ((/* implicit */_Bool) var_13);
                }
                for (unsigned long long int i_21 = 0; i_21 < 10; i_21 += 2) /* same iter space */
                {
                    var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)-3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3))))))) ? ((~(((((/* implicit */_Bool) arr_55 [i_21] [(unsigned char)4] [i_5] [i_5] [i_21])) ? (((/* implicit */int) arr_11 [i_5] [i_6] [i_5] [10ULL])) : (((/* implicit */int) var_3)))))) : (((((/* implicit */_Bool) arr_62 [i_6] [i_6] [i_6] [(signed char)5])) ? (((/* implicit */int) max((var_14), (arr_60 [i_5] [i_5] [(unsigned char)1] [i_5])))) : (((((/* implicit */_Bool) 874655201U)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (signed char)-36))))))));
                    var_47 = ((/* implicit */signed char) (unsigned short)24600);
                    var_48 -= ((((/* implicit */_Bool) ((signed char) var_9))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(var_9))))))));
                    var_49 = ((/* implicit */signed char) ((unsigned short) ((signed char) (+(var_18)))));
                }
                /* vectorizable */
                for (unsigned long long int i_22 = 0; i_22 < 10; i_22 += 2) /* same iter space */
                {
                    var_50 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_22] [i_22] [(signed char)16] [(signed char)16])) ? (var_5) : (var_5)));
                    var_51 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)44)) || (((/* implicit */_Bool) 2979155653903719646ULL)))) ? (319411690895899445ULL) : (((/* implicit */unsigned long long int) (+(-1329332411))))));
                    /* LoopSeq 1 */
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        var_52 = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)40))));
                        var_53 = ((/* implicit */int) ((signed char) arr_27 [i_5] [i_6] [i_22] [i_22] [i_23]));
                        arr_71 [i_5] [i_23] [i_5] [i_22] [(unsigned char)6] = arr_25 [i_5] [i_5] [i_5] [i_23] [i_23];
                    }
                }
                for (unsigned long long int i_24 = 0; i_24 < 10; i_24 += 2) /* same iter space */
                {
                    var_54 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_11)), (var_18)))) ? (-2147483645) : (((/* implicit */int) ((unsigned short) arr_61 [(signed char)9] [i_6] [(unsigned char)0])))));
                    arr_76 [i_5] [i_5] [i_6] [i_5] = ((/* implicit */unsigned char) var_14);
                    arr_77 [i_5] [(signed char)4] [i_6] [(signed char)8] = ((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) == (((/* implicit */int) arr_52 [i_5] [i_6] [i_6] [i_24])))))) + (max((15467588419805831948ULL), (((/* implicit */unsigned long long int) arr_68 [i_6] [i_6] [i_6] [i_6])))))), ((((!(arr_20 [i_5] [i_5] [i_5]))) ? (min((var_18), (((/* implicit */unsigned long long int) var_7)))) : ((~(var_1)))))));
                }
                var_55 = ((/* implicit */unsigned int) ((arr_14 [i_5]) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_5])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [(unsigned short)7] [0U] [i_5] [8U] [0U]))) : (var_5)))) : (max((arr_59 [i_6] [i_5]), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_52 [(unsigned char)2] [(_Bool)0] [(_Bool)0] [(signed char)6])), (var_9))))))));
            }
        } 
    } 
    var_56 = var_0;
}
