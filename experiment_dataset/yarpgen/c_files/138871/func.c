/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138871
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
    var_16 += ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) ((((/* implicit */int) var_5)) - (var_1)))), (16U))) + (max((((/* implicit */unsigned int) var_4)), (min((((/* implicit */unsigned int) var_4)), (var_2)))))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 13; i_0 += 4) /* same iter space */
    {
        var_17 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned int) max((((/* implicit */int) (short)4)), (((((/* implicit */_Bool) (unsigned short)58307)) ? (((/* implicit */int) (unsigned short)4760)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))))) - (min((((/* implicit */unsigned int) arr_0 [i_0 + 2] [i_0 + 2])), (((unsigned int) var_3))))));
        var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) arr_0 [i_0 + 3] [i_0 + 3])), (((((/* implicit */_Bool) (unsigned short)7218)) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))))) ? (var_4) : ((~(((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) (unsigned char)241)))))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 13; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) /* same iter space */
        {
            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) 17642876796043729054ULL))));
            var_20 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_1 - 1] [i_1 + 2]))));
        }
        for (unsigned int i_3 = 0; i_3 < 16; i_3 += 3) /* same iter space */
        {
            arr_9 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4238909223U)) ? (((/* implicit */int) arr_0 [i_1] [(_Bool)1])) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((short) (unsigned char)14)))));
            /* LoopSeq 2 */
            for (short i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                var_21 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9490640879491335767ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) var_7)) : ((~(((/* implicit */int) var_15))))));
                var_22 += ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)37)) / (((/* implicit */int) ((((/* implicit */_Bool) 4083780997U)) && (((/* implicit */_Bool) 2047)))))));
                /* LoopSeq 4 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_23 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_3] [13ULL] [i_5])) ? (arr_12 [i_1] [i_1 - 1] [i_1 - 1] [i_1] [i_1]) : (((/* implicit */int) (unsigned short)33601))))) >= (((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_5] [i_4] [i_3] [i_1]))) | (arr_5 [i_4] [i_4] [i_4])))));
                    var_24 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [i_4])) ? (((/* implicit */int) arr_13 [0])) : (((/* implicit */int) arr_10 [i_1])))) | (((/* implicit */int) (unsigned short)29955))));
                    arr_14 [i_1] [i_3] [10] [i_5] = ((/* implicit */_Bool) (((+(arr_7 [i_5] [4] [4]))) + (((/* implicit */unsigned int) ((/* implicit */int) (!(var_12)))))));
                }
                for (unsigned short i_6 = 0; i_6 < 16; i_6 += 3) 
                {
                    var_25 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)241))) * (18446744073709551590ULL)));
                    /* LoopSeq 4 */
                    for (unsigned short i_7 = 2; i_7 < 13; i_7 += 2) 
                    {
                        arr_22 [i_1] [9ULL] [9LL] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_11) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (2983977022332606581LL)))) ? (((/* implicit */int) ((((/* implicit */int) var_13)) != (var_4)))) : (((/* implicit */int) ((((/* implicit */_Bool) 0U)) && (var_7))))));
                        var_26 = ((/* implicit */unsigned short) var_0);
                        var_27 = ((/* implicit */int) ((short) arr_0 [i_1 + 1] [i_1 + 1]));
                        arr_23 [i_1] [i_1] [i_7] [(short)2] [i_7] [i_4] [i_7 - 2] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_1 + 2] [i_3] [i_6])) ? (1359355907721123468LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)47647)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned short)9] [i_3]))))))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_28 *= ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) var_13))) % (-378829363093395095LL))) / (((/* implicit */long long int) var_8))));
                        var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_1 - 1] [i_1 - 1] [i_1 + 3] [(_Bool)1])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)1))));
                    }
                    for (unsigned char i_9 = 1; i_9 < 15; i_9 += 4) /* same iter space */
                    {
                        var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_9 - 1] [i_4] [i_3])) ? (((arr_15 [i_1] [i_3] [i_4] [0U] [i_9]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 + 2] [i_1 + 3]))) : (18446744073709551590ULL))) : (((/* implicit */unsigned long long int) 187381739)))))));
                        arr_28 [(unsigned char)14] [i_4] [i_4] [i_6] [i_9 + 1] [i_4] [i_3] &= ((/* implicit */unsigned long long int) arr_0 [i_4] [i_4]);
                        var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_3] [i_4] [(unsigned short)0])) && ((_Bool)1)))) * (((((/* implicit */_Bool) 6954425646344340291ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10)))))))));
                        var_32 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)49315)) % (((/* implicit */int) (signed char)-123))));
                    }
                    for (unsigned char i_10 = 1; i_10 < 15; i_10 += 4) /* same iter space */
                    {
                        var_33 *= ((/* implicit */signed char) ((arr_2 [i_1] [i_4]) / (arr_2 [i_1 + 1] [i_4])));
                        var_34 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_4] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5))));
                        var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_1 + 2] [i_1 + 3] [i_1 + 2])) ? (((/* implicit */unsigned int) arr_2 [i_4] [i_4])) : (arr_27 [i_1 + 3] [i_1 - 1] [i_1 + 2]))))));
                        var_36 = ((-1359355907721123470LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)223))));
                    }
                }
                for (unsigned short i_11 = 0; i_11 < 16; i_11 += 2) 
                {
                    var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) (unsigned char)4))));
                    /* LoopSeq 3 */
                    for (unsigned char i_12 = 1; i_12 < 15; i_12 += 4) 
                    {
                        arr_36 [(_Bool)1] [3U] [i_1] = ((/* implicit */int) (~(((arr_27 [i_3] [i_3] [(unsigned short)5]) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                        arr_37 [i_1] [i_1] [5] [5] [5] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (short)9438)) ? (3789481159U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_1] [i_1])))))));
                    }
                    for (signed char i_13 = 0; i_13 < 16; i_13 += 4) /* same iter space */
                    {
                        arr_42 [i_4] [i_4] [i_4] [i_4] [i_13] &= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_34 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_31 [i_1] [i_1 + 1] [i_4] [i_11])) : (((/* implicit */int) var_6))))) | (((((/* implicit */_Bool) (short)9135)) ? (((/* implicit */unsigned long long int) -1727765395)) : (18186322211054962709ULL)))));
                        var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_1] [i_1 + 3] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (39ULL)));
                        var_39 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)31917)) ? (arr_41 [i_11] [i_1 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [(unsigned short)14])))));
                    }
                    for (signed char i_14 = 0; i_14 < 16; i_14 += 4) /* same iter space */
                    {
                        var_40 = ((/* implicit */int) max((var_40), (((/* implicit */int) ((((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (short)32567)))) > (((/* implicit */int) arr_26 [i_1 + 2] [i_1] [i_1 - 1] [i_1 + 1] [i_1 + 3])))))));
                        var_41 = ((/* implicit */unsigned int) max((var_41), (((/* implicit */unsigned int) ((arr_33 [(unsigned short)10] [(unsigned short)10] [i_4] [(unsigned short)10] [i_4] [i_1 + 1] [(short)4]) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) arr_33 [i_1] [i_1] [i_14] [4ULL] [i_1] [i_1 + 2] [14])))))));
                        arr_45 [i_1] [i_4] [i_4] [i_4] [i_11] [i_14] |= ((/* implicit */unsigned int) ((int) var_6));
                    }
                    var_42 = ((/* implicit */_Bool) ((((/* implicit */int) arr_31 [i_1] [i_3] [i_4] [12U])) - (((/* implicit */int) ((arr_25 [i_11] [(unsigned short)6] [(_Bool)1] [i_3] [i_1]) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)241))))))));
                }
                for (unsigned short i_15 = 0; i_15 < 16; i_15 += 4) 
                {
                    var_43 = ((((((/* implicit */int) arr_20 [i_15] [i_4] [i_3] [i_1 + 2])) == (((/* implicit */int) var_7)))) && ((((_Bool)0) || (((/* implicit */_Bool) (unsigned short)16383)))));
                    var_44 &= ((long long int) arr_18 [i_1 - 1] [i_3] [i_15] [i_3] [(unsigned short)8]);
                    var_45 &= ((/* implicit */_Bool) ((var_4) * (((((/* implicit */int) (unsigned short)16220)) / (((/* implicit */int) (short)13004))))));
                    var_46 = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)47647)) & (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) 1536)) : (arr_39 [i_1 + 1] [i_3] [i_1]));
                }
            }
            for (unsigned short i_16 = 0; i_16 < 16; i_16 += 3) 
            {
                arr_51 [i_1] [i_3] [(_Bool)1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-120)) + (((/* implicit */int) arr_26 [i_1] [i_1 - 1] [i_3] [(unsigned char)11] [i_3]))));
                var_47 = ((/* implicit */unsigned int) min((var_47), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)32738))) ? (((/* implicit */int) (unsigned short)29950)) : (((/* implicit */int) arr_50 [(unsigned short)4] [i_3] [i_3])))))));
            }
        }
        var_48 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_1] [4LL]))) / (arr_25 [(_Bool)1] [(_Bool)1] [i_1] [i_1 + 2] [i_1]));
    }
    var_49 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(max((0LL), (((/* implicit */long long int) var_15)))))))));
}
