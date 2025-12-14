/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183098
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned int) 15722851136672399551ULL);
        var_12 = ((/* implicit */unsigned int) 15722851136672399551ULL);
        var_13 -= ((/* implicit */signed char) max((((/* implicit */int) arr_0 [i_0])), ((+(((/* implicit */int) var_2))))));
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned int) (unsigned char)7))))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 20; i_1 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) (short)7))))) > (15722851136672399559ULL))))));
        var_16 = 549755813856ULL;
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 20; i_2 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */short) (-((-(15722851136672399569ULL)))));
        arr_9 [i_2] = ((/* implicit */unsigned long long int) ((((761531763) ^ (((/* implicit */int) (signed char)-116)))) & (((/* implicit */int) (unsigned short)19))));
        /* LoopSeq 4 */
        for (short i_3 = 0; i_3 < 20; i_3 += 4) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) /* same iter space */
            {
                var_18 = ((/* implicit */unsigned long long int) (signed char)-121);
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42))) : (var_8)));
                arr_17 [i_2] [i_3] [i_4] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15))) * (var_0)));
            }
            for (unsigned int i_5 = 0; i_5 < 20; i_5 += 4) /* same iter space */
            {
                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) var_7))));
                var_21 -= ((/* implicit */unsigned short) 15722851136672399549ULL);
            }
            for (unsigned int i_6 = 0; i_6 < 20; i_6 += 2) 
            {
                var_22 = ((/* implicit */signed char) (unsigned char)225);
                var_23 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (short)-17833))))));
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 20; i_7 += 4) 
                {
                    for (long long int i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        {
                            arr_30 [i_2] [i_3] [i_6] [i_2] [i_8] [i_2] = ((/* implicit */unsigned char) arr_10 [i_2]);
                            arr_31 [i_2] [i_3] [i_3] [i_6] [i_6] [i_8] = ((/* implicit */unsigned long long int) arr_25 [i_2] [i_3] [i_2] [i_8]);
                        }
                    } 
                } 
            }
            arr_32 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((unsigned long long int) (short)-8666)) << (((arr_24 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) + (1421487893)))));
            var_24 = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)8666))));
        }
        for (short i_9 = 0; i_9 < 20; i_9 += 4) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned int) (signed char)-19);
            arr_35 [i_2] [i_2] = (unsigned short)11463;
        }
        for (unsigned char i_10 = 0; i_10 < 20; i_10 += 2) 
        {
            arr_38 [i_2] = ((/* implicit */signed char) var_7);
            var_26 -= ((/* implicit */unsigned long long int) var_9);
        }
        for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 4) 
        {
            var_27 = ((/* implicit */short) (+(((/* implicit */int) (signed char)-113))));
            /* LoopSeq 2 */
            for (unsigned char i_12 = 0; i_12 < 20; i_12 += 2) 
            {
                var_28 = ((/* implicit */unsigned char) var_8);
                var_29 = ((/* implicit */short) ((unsigned long long int) (~(16031441355376037288ULL))));
            }
            for (unsigned long long int i_13 = 0; i_13 < 20; i_13 += 2) 
            {
                var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)31))))) ^ (((/* implicit */int) ((((/* implicit */_Bool) (short)8668)) || (arr_37 [i_2]))))));
                arr_46 [i_2] [i_13] [i_13] [i_13] = ((/* implicit */unsigned short) arr_16 [i_2] [i_11] [i_11] [i_13]);
                /* LoopSeq 1 */
                for (unsigned int i_14 = 0; i_14 < 20; i_14 += 4) 
                {
                    var_31 = ((/* implicit */int) var_0);
                    arr_50 [i_11] [i_13] [i_11] [i_11] [i_11] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) - (arr_7 [i_2] [i_2])));
                    arr_51 [i_2] [i_2] [i_13] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? ((~(var_3))) : (((/* implicit */int) ((((/* implicit */int) arr_15 [i_2] [i_2] [i_2] [i_2])) > (((/* implicit */int) arr_11 [i_2] [i_2])))))));
                }
            }
            var_32 = ((/* implicit */unsigned short) (-((+(956540358U)))));
        }
        var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -6267826021213561520LL)) ? (var_3) : ((~(((/* implicit */int) (unsigned char)103))))));
        /* LoopNest 3 */
        for (signed char i_15 = 0; i_15 < 20; i_15 += 4) 
        {
            for (int i_16 = 0; i_16 < 20; i_16 += 2) 
            {
                for (short i_17 = 0; i_17 < 20; i_17 += 2) 
                {
                    {
                        /* LoopSeq 4 */
                        for (int i_18 = 0; i_18 < 20; i_18 += 2) 
                        {
                            var_34 = ((/* implicit */unsigned long long int) ((arr_33 [i_18] [i_18]) == (-2060160025)));
                            var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) ((9223372036854775782LL) - (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_18] [i_15] [i_2]))))))));
                            var_36 = ((/* implicit */unsigned char) ((3600667261962693262LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)64)))));
                        }
                        for (unsigned char i_19 = 0; i_19 < 20; i_19 += 4) 
                        {
                            var_37 = ((_Bool) ((signed char) arr_40 [i_15] [i_15]));
                            var_38 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((/* implicit */int) (unsigned char)98)) : (var_3)));
                            var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) ((((/* implicit */int) (unsigned char)30)) == (1089516928))))));
                        }
                        for (int i_20 = 0; i_20 < 20; i_20 += 4) 
                        {
                            arr_72 [i_17] [i_16] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55243))) * (10U)));
                            var_40 -= ((/* implicit */int) (!(((/* implicit */_Bool) arr_69 [i_2] [i_15] [i_16] [i_17] [i_20] [i_20]))));
                        }
                        for (short i_21 = 0; i_21 < 20; i_21 += 2) 
                        {
                            var_41 = ((/* implicit */int) ((0U) > (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                            arr_77 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) arr_41 [i_21] [i_15] [i_16] [i_17]);
                        }
                        var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) arr_14 [i_2] [i_2] [i_2] [i_2]))));
                        /* LoopSeq 4 */
                        for (int i_22 = 0; i_22 < 20; i_22 += 4) 
                        {
                            var_43 += ((/* implicit */int) ((((/* implicit */_Bool) arr_63 [i_2] [i_2] [i_2] [i_2] [i_2])) && (((/* implicit */_Bool) arr_63 [i_17] [i_17] [i_16] [i_17] [i_22]))));
                            var_44 = ((/* implicit */unsigned int) arr_26 [i_15] [i_17] [i_2] [i_15] [i_2]);
                        }
                        for (unsigned short i_23 = 0; i_23 < 20; i_23 += 4) /* same iter space */
                        {
                            var_45 = ((/* implicit */int) arr_76 [i_23] [i_16] [i_16] [i_15] [i_2]);
                            var_46 += ((/* implicit */int) (signed char)-80);
                        }
                        for (unsigned short i_24 = 0; i_24 < 20; i_24 += 4) /* same iter space */
                        {
                            arr_86 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((unsigned long long int) arr_18 [i_17] [i_17] [i_17] [i_17]));
                            arr_87 [i_2] [i_15] [i_2] [i_17] [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)32))));
                            var_47 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
                        }
                        for (short i_25 = 0; i_25 < 20; i_25 += 4) 
                        {
                            var_48 = ((/* implicit */unsigned long long int) max((var_48), (((/* implicit */unsigned long long int) (signed char)-68))));
                            arr_90 [i_2] [i_15] [i_2] [i_17] [i_25] = ((/* implicit */int) arr_7 [i_16] [i_17]);
                        }
                        arr_91 [i_17] [i_15] [i_2] = ((/* implicit */unsigned long long int) (-((+(arr_8 [i_16] [i_15])))));
                    }
                } 
            } 
        } 
    }
    var_49 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)243))));
}
