/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132771
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) && (((((/* implicit */int) arr_0 [i_0])) >= (((/* implicit */int) arr_1 [i_0]))))));
        var_15 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)29103))) / (18446744073709551615ULL)))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) == (var_12))))));
        /* LoopSeq 4 */
        for (short i_1 = 0; i_1 < 19; i_1 += 4) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned int) ((short) arr_4 [i_1] [i_0]));
            var_17 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(short)2]))) : (var_0))))));
            var_18 = ((/* implicit */long long int) ((_Bool) arr_0 [16ULL]));
            var_19 = ((/* implicit */unsigned int) ((unsigned short) (-(3))));
        }
        for (short i_2 = 0; i_2 < 19; i_2 += 4) /* same iter space */
        {
            var_20 = ((/* implicit */int) var_7);
            var_21 = ((int) 3);
            /* LoopNest 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        {
                            var_22 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((-7) + (((/* implicit */int) var_6))))) ? (arr_14 [i_2] [i_2] [i_3] [i_3] [i_5] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_5])))));
                            var_23 = ((/* implicit */_Bool) (unsigned short)65535);
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (arr_14 [i_5] [i_2] [1] [(unsigned short)2] [i_5] [i_4]) : (((/* implicit */long long int) -1993233944))));
                            var_25 *= ((/* implicit */unsigned int) (short)-29114);
                        }
                    } 
                } 
            } 
            /* LoopSeq 4 */
            for (unsigned short i_6 = 3; i_6 < 17; i_6 += 2) 
            {
                var_26 |= ((/* implicit */_Bool) ((arr_11 [i_6 + 1] [i_6 + 1] [i_6] [(signed char)4] [i_6]) ? (((/* implicit */int) (short)29094)) : (((/* implicit */int) arr_11 [i_6 - 2] [i_6 + 1] [i_6] [i_6] [i_6]))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 19; i_7 += 4) 
                {
                    for (unsigned int i_8 = 0; i_8 < 19; i_8 += 1) 
                    {
                        {
                            arr_22 [(signed char)1] [i_2] [i_6 - 2] [i_7] [i_6] [i_8] = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)0))));
                            var_27 = ((/* implicit */unsigned char) ((arr_0 [i_2]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_8]))));
                            arr_23 [i_0] [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_10)) : (-4)))) ^ (arr_3 [i_7] [i_6 + 1] [i_8])));
                            var_28 = ((/* implicit */short) ((unsigned long long int) arr_15 [i_0] [i_2] [i_6 + 2] [i_6] [i_0]));
                        }
                    } 
                } 
                var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_0]))) : (0LL)))) && (((/* implicit */_Bool) arr_21 [i_0] [i_2] [i_6] [i_6 + 1] [i_6])))))));
            }
            for (unsigned short i_9 = 0; i_9 < 19; i_9 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_10 = 0; i_10 < 19; i_10 += 1) 
                {
                    var_30 = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned short) arr_0 [i_0])));
                    var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -907849739)) ? (((/* implicit */unsigned long long int) 1073741824U)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) ^ (arr_18 [i_0])))));
                }
                for (unsigned char i_11 = 0; i_11 < 19; i_11 += 3) 
                {
                    var_32 ^= ((/* implicit */_Bool) arr_25 [i_0] [i_11]);
                    arr_34 [i_0] [i_2] [i_9] [i_11] = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_2] [i_0] [i_11]);
                    var_33 = ((/* implicit */unsigned long long int) ((signed char) var_9));
                }
                arr_35 [i_0] [i_2] [i_0] [i_2] = ((/* implicit */unsigned char) (short)29113);
            }
            for (unsigned char i_12 = 0; i_12 < 19; i_12 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_13 = 0; i_13 < 19; i_13 += 3) 
                {
                    for (short i_14 = 2; i_14 < 18; i_14 += 2) 
                    {
                        {
                            var_34 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) arr_21 [i_0] [i_2] [i_12] [i_13] [i_14])) - (((/* implicit */int) arr_29 [i_0] [i_0])))));
                            arr_42 [i_14] [i_13] [i_12] [i_2] [i_0] = ((/* implicit */unsigned short) var_4);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_15 = 3; i_15 < 18; i_15 += 2) 
                {
                    var_35 = ((/* implicit */short) (-(((/* implicit */int) (short)0))));
                    /* LoopSeq 1 */
                    for (signed char i_16 = 0; i_16 < 19; i_16 += 1) 
                    {
                        var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) -5LL))) ? (((/* implicit */long long int) ((((/* implicit */int) (short)-9220)) & (((/* implicit */int) var_13))))) : (arr_26 [i_0] [i_2] [i_12] [i_15 - 1])));
                        var_37 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_2] [i_15])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                        var_38 |= ((/* implicit */short) var_11);
                    }
                    var_39 += ((/* implicit */short) (-(((((/* implicit */int) (unsigned char)14)) << (((var_12) - (10887288824114360267ULL)))))));
                    /* LoopSeq 4 */
                    for (long long int i_17 = 2; i_17 < 17; i_17 += 2) 
                    {
                        var_40 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 576460752303357952ULL)) ? (((/* implicit */int) (short)13625)) : (((/* implicit */int) var_3)))))));
                        arr_53 [i_15] [i_2] [i_12] [i_15 + 1] = ((signed char) 4LL);
                        var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) ((((/* implicit */int) arr_39 [i_0] [i_0] [i_0] [i_0] [i_0] [(signed char)10])) >= ((+(((/* implicit */int) arr_20 [i_0])))))))));
                        var_42 = ((/* implicit */unsigned short) (+(arr_44 [i_15] [i_15] [i_15])));
                    }
                    for (unsigned int i_18 = 0; i_18 < 19; i_18 += 4) 
                    {
                        arr_56 [i_12] [i_15] [i_12] [i_12] [i_12] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) (unsigned short)65535)))));
                        arr_57 [i_0] [i_2] [i_12] [i_15 - 1] [i_15] [i_18] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3018746198U)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)1))));
                        var_43 = ((/* implicit */int) ((((/* implicit */_Bool) ((-8427416434307205327LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)-120)))))) ? (((/* implicit */unsigned long long int) 1276221116U)) : ((~(arr_27 [i_2] [i_15 + 1] [i_18])))));
                    }
                    for (unsigned short i_19 = 0; i_19 < 19; i_19 += 1) 
                    {
                        var_44 = ((/* implicit */signed char) (~(arr_40 [i_0] [i_2] [i_12] [i_15 - 1] [6U])));
                        var_45 &= ((/* implicit */unsigned int) ((arr_32 [i_0] [(unsigned char)1]) - (((/* implicit */long long int) ((/* implicit */int) (short)-13644)))));
                        var_46 = ((/* implicit */unsigned short) max((var_46), (((/* implicit */unsigned short) (-(((/* implicit */int) ((var_12) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))))));
                        var_47 -= var_10;
                        var_48 -= ((/* implicit */int) -1LL);
                    }
                    for (signed char i_20 = 0; i_20 < 19; i_20 += 2) 
                    {
                        var_49 = ((/* implicit */signed char) min((var_49), (((/* implicit */signed char) (-(((((/* implicit */_Bool) var_1)) ? (arr_8 [i_20] [(unsigned char)6] [(unsigned char)12] [4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)72))))))))));
                        arr_62 [i_15] [i_12] [i_0] [i_15] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) <= (arr_30 [i_0] [i_2] [i_12])));
                        var_50 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (signed char)-124)) ? (((/* implicit */unsigned long long int) var_11)) : (arr_30 [i_0] [i_12] [i_15 - 1])))));
                        var_51 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)15))));
                    }
                    var_52 = arr_43 [i_0] [i_0] [i_0];
                }
                arr_63 [i_0] [(unsigned short)8] [i_0] = ((/* implicit */unsigned short) ((int) var_1));
            }
            for (short i_21 = 0; i_21 < 19; i_21 += 1) 
            {
                var_53 = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_17 [i_0] [i_21])))) - (((/* implicit */int) ((_Bool) 3838455944U)))));
                var_54 = ((/* implicit */int) max((var_54), ((~(((/* implicit */int) arr_48 [i_21] [i_21]))))));
            }
        }
        for (signed char i_22 = 2; i_22 < 18; i_22 += 3) 
        {
            var_55 = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) 1735333146))) != (((/* implicit */int) ((4LL) != (((/* implicit */long long int) ((/* implicit */int) (short)23365))))))));
            var_56 = ((/* implicit */int) min((var_56), (((/* implicit */int) var_13))));
            var_57 = ((/* implicit */int) (unsigned short)712);
            var_58 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)32767)) >> (((((((/* implicit */_Bool) arr_40 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_25 [i_0] [i_22])) : (((/* implicit */int) arr_5 [i_0] [i_0])))) - (51)))));
        }
        for (short i_23 = 0; i_23 < 19; i_23 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_24 = 0; i_24 < 19; i_24 += 2) 
            {
                var_59 += ((/* implicit */unsigned long long int) (_Bool)1);
                arr_73 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_9))))));
            }
            var_60 = ((unsigned long long int) arr_52 [i_23] [i_23]);
            var_61 = ((/* implicit */unsigned int) min((var_61), (((/* implicit */unsigned int) ((unsigned short) var_8)))));
        }
    }
    var_62 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) min((var_7), (((unsigned char) var_2))))) : (((((/* implicit */int) (unsigned char)169)) >> (((var_4) - (1478103812)))))));
    /* LoopSeq 1 */
    for (short i_25 = 0; i_25 < 11; i_25 += 3) 
    {
        var_63 -= ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_27 [i_25] [i_25] [i_25]), (((/* implicit */unsigned long long int) (~(var_5))))))) ? (((/* implicit */int) (short)5435)) : (((/* implicit */int) (_Bool)1))));
        arr_77 [i_25] [10U] = ((/* implicit */unsigned long long int) max((((/* implicit */int) max(((unsigned short)56324), (((/* implicit */unsigned short) (signed char)123))))), (max((((/* implicit */int) var_7)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_20 [i_25]))))))));
    }
}
