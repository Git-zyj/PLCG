/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167934
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
    var_19 = ((/* implicit */unsigned int) var_6);
    /* LoopSeq 4 */
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (~(((var_9) / (arr_1 [i_0 + 4])))));
        arr_3 [i_0 + 3] |= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned int) (signed char)109))))) ? (max((((/* implicit */int) arr_0 [i_0 + 2] [i_0 - 2])), (var_15))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_18)))))))));
        arr_4 [i_0] [i_0 - 1] = ((/* implicit */_Bool) (-((~((~(5631462882721784698LL)))))));
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */int) var_10)) % (((/* implicit */int) var_3))))) ? (var_12) : (((var_8) ? (var_12) : (((/* implicit */unsigned long long int) arr_1 [i_0 + 4])))))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_1 [i_0]))), (((/* implicit */long long int) ((unsigned int) (short)(-32767 - 1))))))))))));
    }
    for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        var_21 = ((/* implicit */long long int) arr_5 [i_1]);
        var_22 = ((/* implicit */unsigned int) min((var_22), ((-(var_0)))));
        /* LoopSeq 3 */
        for (signed char i_2 = 0; i_2 < 24; i_2 += 1) /* same iter space */
        {
            arr_9 [i_1] [i_2] [i_1] = ((unsigned char) var_7);
            var_23 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(((/* implicit */int) var_3))))) < (max((((/* implicit */long long int) (signed char)10)), (-1852008260354179858LL)))))), (min((((((/* implicit */_Bool) var_10)) ? (15935227226162219932ULL) : (var_12))), ((+(1169821994851975181ULL)))))));
        }
        for (signed char i_3 = 0; i_3 < 24; i_3 += 1) /* same iter space */
        {
            arr_12 [i_3] [10LL] = ((/* implicit */unsigned char) ((((arr_11 [i_3]) + (var_9))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) var_16))))))));
            var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2314377445U))));
        }
        for (signed char i_4 = 0; i_4 < 24; i_4 += 1) /* same iter space */
        {
            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)239)) ? (17276922078857576435ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-11)))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 3) /* same iter space */
            {
                var_26 = (+(((/* implicit */int) arr_15 [i_5] [i_4] [i_1] [i_1])));
                /* LoopSeq 1 */
                for (unsigned int i_6 = 0; i_6 < 24; i_6 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 0; i_7 < 24; i_7 += 1) 
                    {
                        arr_22 [i_7] [(unsigned char)12] [i_4] [(unsigned short)22] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_1] [i_5] [i_6] [i_7])) || (((/* implicit */_Bool) var_15))));
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) var_2)) ? (arr_16 [i_6] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_11))))))));
                    }
                    var_28 = ((((/* implicit */_Bool) arr_5 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_4]))) : (arr_11 [i_4]));
                }
                /* LoopSeq 1 */
                for (signed char i_8 = 0; i_8 < 24; i_8 += 1) 
                {
                    var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) var_5))));
                    var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) (~(arr_13 [i_5]))))));
                }
                var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) var_6))));
                var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_19 [i_1] [i_4] [i_4])) : (((/* implicit */int) arr_19 [i_4] [i_4] [i_4]))));
            }
            for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 3) /* same iter space */
            {
                arr_28 [i_4] [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((17276922078857576434ULL) * (((/* implicit */unsigned long long int) -6)))))));
                arr_29 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((((/* implicit */int) (signed char)(-127 - 1))) % (((/* implicit */int) var_11)))) | (((/* implicit */int) ((((/* implicit */long long int) var_17)) >= (arr_11 [i_4]))))))) < (((min((((/* implicit */long long int) var_8)), (-256491823233073582LL))) / (((/* implicit */long long int) (-(((/* implicit */int) var_18)))))))));
                var_33 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) var_15)), (arr_6 [i_1] [i_4]))) >> (((arr_6 [i_4] [i_9]) - (2396578395U)))));
                var_34 = ((/* implicit */short) (~((~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) arr_5 [i_4])) : (var_0)))))));
            }
            for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 3) /* same iter space */
            {
                var_35 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_10 [i_4])))) ? (((((/* implicit */_Bool) arr_16 [i_4] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_16 [i_10] [i_10]))) : (((/* implicit */unsigned int) min((arr_10 [i_1]), (((/* implicit */int) var_8)))))));
                arr_33 [i_4] = (i_4 % 2 == 0) ? (((/* implicit */unsigned long long int) ((long long int) max((((arr_6 [(_Bool)1] [i_4]) << (((((/* implicit */int) arr_14 [i_4] [i_4] [1])) + (3812))))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_4))))))))) : (((/* implicit */unsigned long long int) ((long long int) max((((arr_6 [(_Bool)1] [i_4]) << (((((((/* implicit */int) arr_14 [i_4] [i_4] [1])) + (3812))) + (23226))))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_4)))))))));
            }
            for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (signed char i_12 = 0; i_12 < 24; i_12 += 2) 
                {
                    arr_38 [i_1] [(_Bool)1] [i_4] = ((/* implicit */signed char) ((min((arr_10 [i_11]), (arr_10 [i_11]))) >> (((((((/* implicit */_Bool) arr_21 [i_1] [i_4] [i_4] [i_12])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_21 [i_12] [i_4] [i_4] [i_1])))) + (49)))));
                    arr_39 [i_4] [(unsigned char)15] [(unsigned char)15] [i_12] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)3))))), (var_2)));
                    var_36 = ((/* implicit */unsigned int) ((((_Bool) (!(((/* implicit */_Bool) (unsigned short)65534))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)20)) / (((/* implicit */int) (unsigned char)14))))) : (arr_23 [i_1] [i_12] [i_4] [i_4] [i_4] [i_1])));
                    var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) ((((/* implicit */_Bool) min((arr_30 [i_4] [i_4]), (((/* implicit */unsigned short) var_18))))) ? (var_7) : (((/* implicit */long long int) ((((var_17) | (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_1] [i_4] [i_12]))))) + ((~(var_17)))))))))));
                    arr_40 [i_4] [i_4] [i_11] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) 1980589851U))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_34 [i_1] [i_1] [i_1] [i_1]))))) : (((/* implicit */int) ((((/* implicit */_Bool) 11739027098707351277ULL)) && ((_Bool)1))))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) arr_10 [i_1])) : (max((((/* implicit */unsigned int) arr_14 [i_4] [15U] [i_4])), (arr_6 [i_4] [i_4]))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_27 [i_4] [(unsigned short)5] [i_4]), (arr_27 [i_1] [i_4] [i_4])))))));
                }
                var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(min((var_12), (((/* implicit */unsigned long long int) -5290217661322929731LL))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (arr_13 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))))) : ((((!(((/* implicit */_Bool) (signed char)20)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_7))))) : (((/* implicit */int) var_8))))));
                var_39 = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-8127))));
            }
        }
    }
    /* vectorizable */
    for (signed char i_13 = 0; i_13 < 12; i_13 += 2) 
    {
        arr_43 [i_13] [i_13] = ((var_9) >= (((/* implicit */long long int) ((/* implicit */int) var_1))));
        arr_44 [i_13] [i_13] = ((((/* implicit */_Bool) arr_21 [i_13] [i_13] [i_13] [i_13])) ? (((/* implicit */int) arr_21 [i_13] [i_13] [i_13] [8LL])) : (((/* implicit */int) arr_21 [i_13] [i_13] [i_13] [i_13])));
    }
    for (short i_14 = 0; i_14 < 14; i_14 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_15 = 2; i_15 < 13; i_15 += 4) 
        {
            var_40 = ((/* implicit */long long int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_14] [i_14] [i_14]))) + (18446744073709551615ULL)))));
            var_41 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_14] [i_15 - 1] [i_14] [i_14]))) : (var_17))));
        }
        var_42 = ((/* implicit */unsigned long long int) max((var_42), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (+(3391615565U)))) ? ((-(((/* implicit */int) var_8)))) : (((/* implicit */int) var_10)))), (((/* implicit */int) arr_15 [i_14] [i_14] [i_14] [i_14])))))));
        var_43 = ((/* implicit */unsigned long long int) min((var_43), (((/* implicit */unsigned long long int) (unsigned char)252))));
        var_44 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) arr_6 [i_14] [(unsigned char)12])))));
    }
}
