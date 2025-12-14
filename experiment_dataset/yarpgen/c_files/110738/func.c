/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110738
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
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 1) /* same iter space */
    {
        var_13 += ((/* implicit */unsigned char) 402444451);
        var_14 = ((/* implicit */int) var_11);
        var_15 = ((/* implicit */unsigned short) ((long long int) ((unsigned short) arr_3 [i_0])));
    }
    for (unsigned int i_1 = 2; i_1 < 22; i_1 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)35004))));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_5 = 2; i_5 < 21; i_5 += 4) /* same iter space */
                        {
                            var_17 &= ((((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_17 [i_1] [i_2] [i_3] [i_2] [i_5] [i_3])), (arr_2 [i_5])))) ? (2551826919220058509ULL) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)62))) + (15894917154489493106ULL))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_1 - 1] [8] [i_1 - 1] [i_1 - 1] [8LL] [i_1]))));
                            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1 - 2])) && (((/* implicit */_Bool) (unsigned short)65535))))) : (((/* implicit */int) arr_14 [i_1] [(_Bool)1]))))) && (((((/* implicit */_Bool) min((2551826919220058509ULL), (((/* implicit */unsigned long long int) var_7))))) && (((/* implicit */_Bool) var_6))))));
                            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((~(arr_9 [i_1] [i_2]))) | ((~(-6332616061478218142LL)))))) ? (2551826919220058509ULL) : (((/* implicit */unsigned long long int) (~(((unsigned int) var_1)))))));
                            var_20 = ((/* implicit */signed char) var_1);
                        }
                        /* vectorizable */
                        for (unsigned int i_6 = 2; i_6 < 21; i_6 += 4) /* same iter space */
                        {
                            var_21 = ((var_11) == (-2410195892153600505LL));
                            var_22 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_17 [i_1] [i_2] [i_6 + 2] [i_6] [i_6] [i_6]))));
                            var_23 &= ((/* implicit */unsigned long long int) ((long long int) var_0));
                            var_24 |= ((/* implicit */unsigned long long int) ((_Bool) (~(var_9))));
                            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((signed char) arr_5 [i_1 + 1])))));
                        }
                        for (long long int i_7 = 0; i_7 < 23; i_7 += 4) 
                        {
                            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)28750))) / (-3421038894409411816LL))) | (((/* implicit */long long int) var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [(unsigned short)10]))) : (arr_7 [i_1]))))));
                            var_27 = ((/* implicit */_Bool) var_9);
                        }
                        /* LoopSeq 4 */
                        for (unsigned int i_8 = 1; i_8 < 22; i_8 += 2) /* same iter space */
                        {
                            var_28 = ((/* implicit */_Bool) max((var_28), ((!(((var_4) >= (((/* implicit */int) arr_17 [(unsigned short)0] [i_1 - 1] [i_1] [17LL] [0LL] [i_1]))))))));
                            var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967275U)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_26 [4LL] [i_2] [i_3])))))) : (arr_16 [10U] [(short)1] [i_4] [i_4] [i_4]))))));
                        }
                        for (unsigned int i_9 = 1; i_9 < 22; i_9 += 2) /* same iter space */
                        {
                            var_30 = ((/* implicit */unsigned int) (+(arr_20 [i_9] [i_4] [i_3] [i_2] [(unsigned short)21])));
                            var_31 = ((/* implicit */unsigned short) arr_7 [i_1 + 1]);
                        }
                        for (long long int i_10 = 2; i_10 < 22; i_10 += 2) 
                        {
                            var_32 = ((/* implicit */unsigned char) ((unsigned short) ((arr_5 [i_1 - 2]) | (arr_5 [i_1 + 1]))));
                            var_33 *= ((/* implicit */_Bool) ((unsigned char) ((min((9223372036854775807LL), (((/* implicit */long long int) var_3)))) <= (((/* implicit */long long int) arr_8 [i_1] [i_3] [i_10])))));
                            var_34 = var_11;
                        }
                        /* vectorizable */
                        for (unsigned int i_11 = 0; i_11 < 23; i_11 += 2) 
                        {
                            var_35 = ((unsigned char) 6332616061478218146LL);
                            var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2551826919220058523ULL)) ? (((/* implicit */int) (unsigned char)165)) : (var_4)))) + ((-(2551826919220058542ULL))))))));
                            var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) var_11))));
                            var_38 = 6332616061478218135LL;
                            var_39 *= ((/* implicit */long long int) (-(((/* implicit */int) (short)14143))));
                        }
                        var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) (short)22395))));
                    }
                } 
            } 
        } 
        var_41 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_10))));
    }
    for (unsigned long long int i_12 = 1; i_12 < 10; i_12 += 1) 
    {
        var_42 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_16 [i_12 + 1] [i_12] [i_12 + 1] [i_12] [9U])), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_12] [i_12]))) & (5917007584671104251ULL)))));
        /* LoopNest 3 */
        for (short i_13 = 4; i_13 < 11; i_13 += 4) 
        {
            for (long long int i_14 = 0; i_14 < 12; i_14 += 1) 
            {
                for (short i_15 = 2; i_15 < 11; i_15 += 2) 
                {
                    {
                        var_43 = ((/* implicit */unsigned int) min((var_43), (((/* implicit */unsigned int) (!(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (var_0))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            var_44 = ((/* implicit */_Bool) min((var_44), (((/* implicit */_Bool) (short)26833))));
                            var_45 = ((((/* implicit */long long int) ((int) 6332616061478218142LL))) + (((((arr_51 [i_12] [i_13 - 3] [i_14] [i_12] [i_14] [i_15] [i_16]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_12] [i_13] [i_13] [i_14] [i_16]))))) + (((/* implicit */long long int) var_0)))));
                            var_46 = ((/* implicit */unsigned int) arr_41 [i_12] [i_12]);
                            var_47 |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_10)) ? (arr_9 [i_15 - 2] [i_15 - 2]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) - (-9031063712702072411LL)));
                        }
                    }
                } 
            } 
        } 
    }
    var_48 = ((/* implicit */long long int) ((min((((/* implicit */int) (short)-16)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_7)))))) & (min((((/* implicit */int) var_6)), ((-(((/* implicit */int) var_10))))))));
}
