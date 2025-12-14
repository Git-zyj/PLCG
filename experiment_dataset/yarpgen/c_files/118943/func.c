/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118943
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
    var_17 = ((/* implicit */long long int) var_4);
    var_18 = ((/* implicit */long long int) (unsigned char)31);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) -1735454648))) ? (4418692434946119350LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46994)))))) ? (6729509297765935478LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0]))))))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_2 = 0; i_2 < 24; i_2 += 1) /* same iter space */
            {
                arr_7 [i_1] [i_1] = (!(((_Bool) (_Bool)1)));
                /* LoopNest 2 */
                for (unsigned int i_3 = 2; i_3 < 23; i_3 += 1) 
                {
                    for (unsigned long long int i_4 = 4; i_4 < 21; i_4 += 2) 
                    {
                        {
                            var_20 += 6ULL;
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (-(arr_10 [i_4] [i_2] [(unsigned short)6] [i_2] [i_0] [i_0]))))));
                            arr_14 [i_0] [i_1] [i_0] [i_0] = (!(((/* implicit */_Bool) (unsigned char)112)));
                            arr_15 [i_1] = ((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_0] [i_0] [i_1]);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 1) 
                {
                    var_22 = ((/* implicit */unsigned short) var_5);
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [i_0] [i_1])) ? (((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [i_0] [i_0]))));
                    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(var_11)))) / (arr_10 [i_0] [i_0] [i_2] [i_2] [i_5] [i_0]))))));
                    arr_18 [i_0] [i_1] [(signed char)5] [i_1] = ((/* implicit */short) (((_Bool)0) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) (unsigned char)247))));
                }
            }
            for (long long int i_6 = 0; i_6 < 24; i_6 += 1) /* same iter space */
            {
                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((4294967295U), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_19 [i_0] [(_Bool)1] [i_0] [i_6])))))))) ? (((/* implicit */int) arr_16 [i_6] [i_0] [i_0])) : (((((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_1])) ? ((~(((/* implicit */int) (signed char)-18)))) : (((/* implicit */int) arr_13 [i_6] [i_6] [i_1] [i_0] [i_0] [i_0] [i_0]))))));
                var_26 += ((/* implicit */signed char) arr_12 [i_6] [(_Bool)1] [i_1] [(_Bool)1] [i_0]);
                arr_21 [i_1] [i_1] [i_1] [11LL] = ((((/* implicit */int) ((unsigned short) (~(((/* implicit */int) (short)8404)))))) != (((/* implicit */int) ((unsigned short) ((unsigned short) (unsigned short)0)))));
            }
            var_27 = ((/* implicit */unsigned char) ((_Bool) arr_2 [i_1] [i_1] [i_1]));
            var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_0 [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) 0ULL)))))) : (((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) % (((/* implicit */int) ((3148028247U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_1] [21LL] [i_0] [i_0] [i_0]))))))))));
            arr_22 [i_1] = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_0] [i_0]);
        }
        for (unsigned int i_7 = 0; i_7 < 24; i_7 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_8 = 0; i_8 < 24; i_8 += 1) 
            {
                arr_27 [i_7] [i_7] = ((/* implicit */long long int) 1837800423);
                var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) arr_1 [i_0]))));
            }
            arr_28 [i_0] [i_0] [18U] &= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_24 [i_0] [i_0] [12U])) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (-7657440329651822580LL))) / (((/* implicit */long long int) ((/* implicit */int) arr_24 [(_Bool)1] [i_7] [(_Bool)1])))));
        }
        arr_29 [i_0] [i_0] = ((/* implicit */unsigned int) min((max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_9 [(_Bool)1] [(_Bool)1])))), (((/* implicit */int) var_7)))), (((/* implicit */int) min((arr_19 [i_0] [i_0] [i_0] [i_0]), (((var_15) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))))))))));
        arr_30 [i_0] = ((/* implicit */long long int) (-(((unsigned long long int) max((((/* implicit */unsigned short) var_2)), (var_3))))));
    }
    for (short i_9 = 0; i_9 < 17; i_9 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_10 = 2; i_10 < 13; i_10 += 3) 
        {
            for (unsigned short i_11 = 0; i_11 < 17; i_11 += 2) 
            {
                for (short i_12 = 0; i_12 < 17; i_12 += 1) 
                {
                    {
                        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_10 - 2] [i_10 + 1] [i_10 + 3] [i_10 - 2] [i_10 + 1] [i_10 + 4])) ? (((((/* implicit */_Bool) arr_5 [i_9] [i_10] [i_11])) ? (arr_10 [i_12] [i_12] [i_11] [i_12] [23U] [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_16)))))))) ? ((((~(((/* implicit */int) (unsigned short)0)))) / (((/* implicit */int) ((unsigned char) 4154381048U))))) : (((/* implicit */int) ((signed char) var_10)))));
                        arr_41 [i_10] [8U] [i_10] = ((/* implicit */unsigned long long int) arr_34 [i_10] [3] [i_10]);
                        /* LoopSeq 2 */
                        for (signed char i_13 = 0; i_13 < 17; i_13 += 2) 
                        {
                            arr_44 [i_12] [i_10] [i_10] [i_9] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) ((arr_19 [i_9] [i_10] [i_11] [i_12]) || (((/* implicit */_Bool) arr_32 [i_9]))))), (arr_5 [i_10] [i_10] [i_10 + 4]))))));
                            var_31 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((long long int) (unsigned char)255)), (((/* implicit */long long int) arr_38 [i_9] [i_9] [i_9] [i_9]))))) ? (((unsigned long long int) arr_42 [i_9] [i_10] [i_11] [2LL])) : ((+(arr_8 [i_13])))));
                        }
                        for (unsigned long long int i_14 = 3; i_14 < 13; i_14 += 3) 
                        {
                            var_32 = ((/* implicit */unsigned char) var_14);
                            var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) arr_45 [i_9] [(_Bool)1] [(_Bool)1] [i_11] [(_Bool)1]))));
                            var_34 = ((/* implicit */unsigned char) max((var_34), ((unsigned char)2)));
                        }
                        var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_0 [(_Bool)1])))) || (((/* implicit */_Bool) ((((/* implicit */long long int) 4154381048U)) / ((((_Bool)0) ? (7865931247295298807LL) : (arr_42 [i_9] [i_9] [i_9] [i_9]))))))));
                    }
                } 
            } 
        } 
        var_36 = (_Bool)1;
        /* LoopNest 2 */
        for (unsigned long long int i_15 = 0; i_15 < 17; i_15 += 3) 
        {
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_17 = 0; i_17 < 17; i_17 += 1) 
                    {
                        for (unsigned short i_18 = 3; i_18 < 14; i_18 += 2) 
                        {
                            {
                                var_37 = ((/* implicit */unsigned char) (!((!(arr_6 [i_15] [i_15] [i_15] [i_15])))));
                                arr_57 [i_9] [i_9] [i_9] [i_9] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_50 [i_15] [i_18])) ? (((((/* implicit */_Bool) arr_46 [i_9] [i_15] [i_9] [i_15] [i_15] [i_18 - 1])) ? (arr_46 [11] [i_15] [i_15] [i_17] [i_15] [i_18 + 1]) : (arr_46 [i_9] [i_18] [i_9] [i_17] [i_15] [i_18 - 3]))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -7138521328385248649LL)) ? (-8063439057094756131LL) : (-3858479355004682417LL))) | (((/* implicit */long long int) (-(arr_47 [i_18] [i_17] [i_16] [i_15] [(_Bool)1])))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_19 = 1; i_19 < 16; i_19 += 3) 
                    {
                        for (unsigned int i_20 = 0; i_20 < 17; i_20 += 3) 
                        {
                            {
                                var_38 = ((/* implicit */long long int) (+(((/* implicit */int) var_13))));
                                arr_64 [i_15] [i_16] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((arr_17 [i_15] [i_15]) ? (arr_51 [i_9] [i_9]) : (((/* implicit */long long int) 1772888109U)))) != (((((/* implicit */long long int) ((/* implicit */int) var_7))) | (arr_48 [2LL] [i_15] [i_16])))))) != (((((/* implicit */_Bool) arr_35 [i_19])) ? ((~(((/* implicit */int) var_10)))) : (((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) arr_3 [i_19] [i_15])))))))));
                            }
                        } 
                    } 
                    var_39 = var_5;
                }
            } 
        } 
    }
    for (unsigned short i_21 = 3; i_21 < 15; i_21 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
        {
            var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) min((((/* implicit */long long int) arr_38 [i_21] [i_22] [i_21] [i_22])), (((max((arr_51 [i_22] [i_22]), (((/* implicit */long long int) var_7)))) << (((((/* implicit */int) max((var_10), (var_10)))) - (142))))))))));
            arr_70 [i_21] [i_21] [i_21] = ((/* implicit */short) max(((signed char)-80), (((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_2)))))));
            var_41 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)102)) && (((((/* implicit */_Bool) (unsigned char)250)) && (((/* implicit */_Bool) arr_11 [i_22] [i_22] [(unsigned short)20] [i_22] [i_22] [i_21] [i_21 - 1]))))));
            var_42 = ((/* implicit */long long int) ((unsigned long long int) (signed char)-113));
            var_43 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_8 [(unsigned short)20])))) ? (var_11) : ((-(((((/* implicit */_Bool) (unsigned short)65535)) ? (var_11) : (arr_60 [i_22])))))));
        }
        arr_71 [i_21] [i_21] = ((/* implicit */long long int) (((_Bool)1) ? (3716505213U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        var_44 = ((/* implicit */unsigned long long int) min((var_44), ((+(((18446744073709551599ULL) - (((/* implicit */unsigned long long int) arr_37 [4LL] [i_21]))))))));
        arr_72 [i_21] = ((/* implicit */signed char) (+((-(((/* implicit */int) max((((/* implicit */unsigned short) (short)23445)), ((unsigned short)29527))))))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_23 = 3; i_23 < 9; i_23 += 1) 
    {
        var_45 -= max((((arr_42 [i_23] [i_23] [i_23] [i_23 - 2]) / (arr_42 [i_23] [i_23] [i_23] [i_23 - 1]))), ((+(arr_42 [i_23] [i_23] [3ULL] [i_23 + 1]))));
        var_46 = ((/* implicit */unsigned int) min(((+(((/* implicit */int) (_Bool)0)))), ((-(((/* implicit */int) arr_35 [i_23]))))));
        arr_77 [i_23] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 1845520322U)) ? (arr_49 [i_23] [i_23]) : (arr_49 [i_23] [i_23])))));
    }
    var_47 -= ((/* implicit */unsigned char) var_5);
}
