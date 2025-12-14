/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181694
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    var_14 += ((/* implicit */unsigned int) ((max((((4866585555268677837ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) ((unsigned int) (signed char)-116))))) >= (((/* implicit */unsigned long long int) -7708907823230725415LL))));
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        var_15 = ((/* implicit */int) max((var_15), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) != (var_8)))), (min((((/* implicit */unsigned long long int) 1845655303U)), (var_1)))))) ? (((/* implicit */int) ((_Bool) ((signed char) 4061095985U)))) : ((((_Bool)1) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)135))) >= (2777297170U)))) : (((/* implicit */int) arr_8 [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2]))))))));
                        var_16 = ((/* implicit */unsigned char) arr_1 [i_0]);
                    }
                    for (long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_17 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) max((arr_1 [i_5]), (arr_6 [i_0]))))) ? (((((/* implicit */_Bool) arr_9 [i_5])) ? ((-(arr_9 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_4] [i_5])))));
                            arr_14 [i_5] [i_4] [(short)3] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) max(((-(((((/* implicit */_Bool) -1901211474)) ? (((/* implicit */long long int) 656897906)) : (867274914289770772LL))))), (((/* implicit */long long int) arr_10 [i_2] [i_1] [i_2 + 1]))));
                            var_18 ^= ((_Bool) (+(((((/* implicit */_Bool) arr_2 [i_5])) ? (98304U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))));
                            arr_15 [i_0] [i_2 + 1] [i_4] [i_2 + 1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) * (((/* implicit */int) var_5))))) ? ((+(656897876))) : ((-(((((/* implicit */_Bool) 4294967282U)) ? (1901211473) : (656897906)))))));
                        }
                        for (int i_6 = 0; i_6 < 16; i_6 += 4) 
                        {
                            var_19 = ((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */long long int) -1901211474))));
                            var_20 -= ((/* implicit */signed char) ((int) (~(((/* implicit */int) var_6)))));
                            var_21 *= ((/* implicit */unsigned long long int) -1901211474);
                        }
                        var_22 = (_Bool)1;
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_7 = 2; i_7 < 18; i_7 += 2) 
    {
        /* LoopNest 2 */
        for (short i_8 = 0; i_8 < 20; i_8 += 3) 
        {
            for (unsigned char i_9 = 0; i_9 < 20; i_9 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 3; i_10 < 18; i_10 += 3) 
                    {
                        for (signed char i_11 = 3; i_11 < 16; i_11 += 3) 
                        {
                            {
                                arr_32 [i_11 + 1] [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [i_10 + 2] [i_7 + 1] [i_11 - 1] [i_10])) ? (((/* implicit */int) ((signed char) (unsigned short)2047))) : (((/* implicit */int) ((unsigned char) arr_23 [(unsigned short)17] [i_10] [i_11])))));
                                arr_33 [11] [11] [i_9] [11] [7LL] = ((/* implicit */unsigned char) arr_22 [i_7 + 2] [10] [i_9]);
                                arr_34 [i_7 + 2] [12U] [i_8] [12U] [i_9] [i_10] [18LL] = (-(arr_29 [i_7] [i_7 + 1] [i_11 - 3] [i_11] [i_11]));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)0))))));
                    var_24 = ((/* implicit */short) 3946742908U);
                    arr_35 [i_9] [i_8] [i_7] = ((/* implicit */unsigned char) var_12);
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 0; i_12 < 20; i_12 += 2) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                var_25 = ((((/* implicit */int) arr_30 [(_Bool)1] [i_8] [i_8] [i_9] [i_12] [i_12] [i_13])) | (((/* implicit */int) arr_26 [i_7] [(unsigned char)2] [i_9] [i_12] [i_12])));
                                var_26 = ((/* implicit */unsigned char) (~(arr_40 [i_13] [i_7 - 2])));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_14 = 0; i_14 < 20; i_14 += 1) 
        {
            for (long long int i_15 = 0; i_15 < 20; i_15 += 2) 
            {
                for (short i_16 = 0; i_16 < 20; i_16 += 4) 
                {
                    {
                        var_27 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? ((((_Bool)1) ? (((/* implicit */int) arr_41 [i_7] [(_Bool)1] [i_15] [(_Bool)1] [i_7] [i_15] [i_7])) : (1901211473))) : ((-(((/* implicit */int) arr_20 [i_15] [i_7]))))));
                        var_28 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_25 [4ULL] [i_7 + 2] [i_7 + 2]))));
                        /* LoopSeq 1 */
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            var_29 = arr_19 [5ULL];
                            arr_53 [i_7] [i_14] [i_14] [i_15] [i_17] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_7 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [(signed char)4] [11LL] [i_7 + 1]))) : (((unsigned int) var_0))));
                        }
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
    {
        arr_57 [i_18] [13ULL] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
        arr_58 [i_18] |= var_9;
        arr_59 [i_18] = ((/* implicit */short) ((_Bool) ((_Bool) var_3)));
        /* LoopNest 2 */
        for (unsigned char i_19 = 3; i_19 < 14; i_19 += 1) 
        {
            for (unsigned int i_20 = 1; i_20 < 12; i_20 += 3) 
            {
                {
                    var_30 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_18] [(unsigned char)15] [i_18])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))));
                    arr_64 [i_18] [i_19] [11LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (arr_25 [i_18] [i_18] [i_18]) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_61 [i_18] [i_19 - 2] [i_20])))))));
                }
            } 
        } 
    }
    var_31 = ((/* implicit */unsigned int) var_12);
    /* LoopNest 2 */
    for (unsigned long long int i_21 = 0; i_21 < 17; i_21 += 2) 
    {
        for (unsigned int i_22 = 2; i_22 < 15; i_22 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_23 = 0; i_23 < 17; i_23 += 3) 
                {
                    for (int i_24 = 1; i_24 < 14; i_24 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */int) ((unsigned int) (~(2U))));
                            var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_48 [i_22 + 2] [i_24 + 3]))))) ? (((/* implicit */int) ((_Bool) arr_48 [i_22 + 2] [i_24 + 2]))) : (((/* implicit */int) arr_48 [i_22 + 1] [i_24 + 2]))));
                            var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) (~((-(arr_65 [i_21]))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_25 = 1; i_25 < 16; i_25 += 2) 
                {
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned int i_27 = 0; i_27 < 17; i_27 += 1) 
                            {
                                var_35 = ((((/* implicit */_Bool) ((max((var_7), (((/* implicit */unsigned long long int) var_5)))) << (((max((((/* implicit */long long int) (_Bool)1)), (arr_65 [i_21]))) - (3719108638442595453LL)))))) ? (-1031836484) : (((/* implicit */int) (!((!(((/* implicit */_Bool) var_0))))))));
                                var_36 = ((/* implicit */int) max((var_36), (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)152))))));
                                arr_87 [i_21] [i_25] [i_25] = ((/* implicit */unsigned long long int) ((signed char) arr_50 [i_21] [i_21] [i_25] [i_26] [i_26] [i_27] [i_27]));
                                var_37 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) (unsigned char)152)))) ? (((/* implicit */unsigned long long int) ((int) (!(((/* implicit */_Bool) (unsigned char)137)))))) : ((((((_Bool)0) ? (((/* implicit */unsigned long long int) arr_47 [i_21] [i_22] [i_25] [i_26] [i_27])) : (var_1))) | (((/* implicit */unsigned long long int) max((var_10), (arr_44 [i_21] [i_21] [i_21] [i_21]))))))));
                            }
                            for (long long int i_28 = 0; i_28 < 17; i_28 += 1) 
                            {
                                var_38 = ((_Bool) (-((~(((/* implicit */int) (_Bool)0))))));
                                var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) arr_29 [i_21] [i_22] [i_25] [i_21] [i_22]))));
                                var_40 = arr_79 [i_21];
                            }
                            var_41 *= ((/* implicit */unsigned char) var_12);
                            var_42 = ((/* implicit */unsigned int) min((var_42), (((/* implicit */unsigned int) arr_50 [i_21] [(unsigned char)16] [i_21] [i_22] [i_25] [i_21] [i_25]))));
                            arr_91 [i_21] [i_25] [i_22 + 2] [i_25] [12ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_65 [i_22 - 1])) ? (arr_65 [i_22 - 1]) : (arr_65 [i_22 - 1])))) ? (((((/* implicit */_Bool) arr_65 [i_22 + 1])) ? (((/* implicit */long long int) var_0)) : (arr_65 [i_22 - 2]))) : ((+(arr_65 [i_22 - 2])))));
                            /* LoopSeq 1 */
                            for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                            {
                                arr_95 [i_26] [i_25] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_21] [i_21])) * (((/* implicit */int) arr_20 [i_21] [i_22 - 2])))))));
                                var_43 = ((/* implicit */long long int) max((var_43), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_80 [i_26] [i_21])) ? (((((/* implicit */_Bool) 3387873082U)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) arr_81 [i_25 - 1] [i_21] [i_22 - 2])) == (((/* implicit */int) var_3))))))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
