/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143420
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
    var_18 += ((/* implicit */unsigned int) min((max((min((var_7), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) var_15)))), (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12))))), (max((var_7), (((/* implicit */unsigned long long int) var_5))))))));
    var_19 = ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_5))))))) ? (min((var_13), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) var_2)));
    var_20 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_8)), (var_13)));
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)(-127 - 1))))))));
        var_22 = ((/* implicit */unsigned long long int) arr_3 [i_0]);
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                var_23 -= ((/* implicit */_Bool) min((((/* implicit */long long int) arr_4 [i_0 + 1] [i_2])), (min((1935981664666468512LL), (((/* implicit */long long int) arr_6 [i_1 - 2] [i_1 - 2] [i_1 - 1] [i_1 + 2]))))));
                arr_8 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_5 [i_1])) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-87))))), (((/* implicit */unsigned long long int) (-((~(1935981664666468499LL))))))));
            }
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    var_24 = ((/* implicit */signed char) (-(((/* implicit */int) min((var_15), (var_15))))));
                    var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((unsigned char) 1935981664666468499LL)))));
                    /* LoopSeq 2 */
                    for (short i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(min((-1620860656), (((/* implicit */int) arr_6 [i_0] [i_1] [i_3] [i_4]))))))) ? (((unsigned int) 1257307533U)) : (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-1)))))));
                        arr_16 [i_0 + 2] [i_4] [i_1] [i_4] [i_5] = ((/* implicit */unsigned char) max((((/* implicit */int) var_0)), (((((/* implicit */int) arr_15 [i_0 - 3] [i_0 + 2] [i_1] [i_0 + 2] [i_0 - 1])) + (((/* implicit */int) arr_15 [i_0 - 3] [i_0 + 2] [i_1] [i_0 + 2] [i_0 - 1]))))));
                        var_27 = ((/* implicit */signed char) (unsigned short)20435);
                        arr_17 [i_1] = ((/* implicit */unsigned short) max((3631069587U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)110)))))));
                    }
                    for (int i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        var_28 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) 1357286740)) : (-4365114499986277635LL))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_0 + 2])) <= (((/* implicit */int) (short)11011))))))));
                        arr_21 [i_1] [i_0] [i_0 + 2] [i_0] [i_0] = ((((/* implicit */_Bool) 1935981664666468467LL)) ? (((/* implicit */int) (short)62)) : (((/* implicit */int) (short)10996)));
                        arr_22 [i_0 - 1] [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned int) max((((/* implicit */int) arr_12 [i_1] [i_1] [i_3] [i_0 - 3])), (max((((/* implicit */int) arr_19 [i_0] [i_0] [i_1] [i_1] [i_4] [i_4] [i_6])), (var_2)))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)4313)), (3550469495U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_3] [i_4] [i_0]))) : ((-(var_12)))))));
                    }
                    var_29 -= (-(((/* implicit */int) var_9)));
                    arr_23 [i_1] [i_1 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_1])) ? (max((((/* implicit */unsigned long long int) (signed char)87)), (arr_14 [i_1]))) : (var_10)));
                }
                for (unsigned int i_7 = 0; i_7 < 13; i_7 += 3) 
                {
                    var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) > (((/* implicit */int) var_8)))))));
                    arr_26 [i_1] [i_7] [i_7] [i_7] = ((/* implicit */signed char) (+(arr_13 [i_1] [i_3] [i_3] [i_1] [i_1] [i_1])));
                    arr_27 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((18446744073709551611ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 374204999U)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (short)-25599)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_3] [i_0]))))))))) : (-4365114499986277635LL)));
                    var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) 10307206572921260382ULL))));
                }
                for (unsigned char i_8 = 0; i_8 < 13; i_8 += 3) /* same iter space */
                {
                    var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) (_Bool)1))));
                    var_33 = ((/* implicit */unsigned short) ((((/* implicit */int) var_3)) / ((-(((/* implicit */int) arr_29 [i_0] [(signed char)0] [i_0 + 2] [i_8]))))));
                }
                for (unsigned char i_9 = 0; i_9 < 13; i_9 += 3) /* same iter space */
                {
                    var_34 = ((/* implicit */unsigned long long int) ((unsigned int) arr_28 [i_0] [i_1 + 2] [i_1] [i_1] [i_0] [i_1]));
                    arr_36 [i_0 - 2] [i_1 + 1] [i_1] [i_9] = ((/* implicit */unsigned int) var_10);
                }
                var_35 = ((/* implicit */unsigned long long int) var_16);
                /* LoopSeq 2 */
                for (unsigned int i_10 = 0; i_10 < 13; i_10 += 3) 
                {
                    var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) arr_7 [(unsigned char)0]))));
                    /* LoopSeq 3 */
                    for (unsigned char i_11 = 0; i_11 < 13; i_11 += 3) /* same iter space */
                    {
                        var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((unsigned char)114), (((/* implicit */unsigned char) var_5))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_35 [i_1] [i_0] [i_0] [i_1])), (var_3))))) : (max((((/* implicit */long long int) arr_19 [i_3] [i_1] [i_0 - 3] [i_1] [10LL] [i_0] [i_0])), (1935981664666468496LL)))));
                        arr_42 [i_0] [i_1] [i_3] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)87)))))))), (max((((-1935981664666468533LL) / (arr_37 [i_3] [i_1]))), (((/* implicit */long long int) (unsigned short)2591))))));
                    }
                    for (unsigned char i_12 = 0; i_12 < 13; i_12 += 3) /* same iter space */
                    {
                        arr_47 [i_0] [i_0] [i_1] [i_3] [i_10] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) 968139338U)), (18446744073709551611ULL)));
                        var_38 = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))), (((/* implicit */int) min((((short) -1935981664666468475LL)), (((/* implicit */short) (!(((/* implicit */_Bool) var_6))))))))));
                    }
                    for (unsigned char i_13 = 0; i_13 < 13; i_13 += 3) /* same iter space */
                    {
                        var_39 ^= ((/* implicit */short) max((max((min((((/* implicit */unsigned long long int) 16646144U)), (var_13))), (((/* implicit */unsigned long long int) max((1935981664666468496LL), (1935981664666468488LL)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1357286740)) ? (((/* implicit */int) (short)-12524)) : (((/* implicit */int) (short)22093)))))));
                        var_40 = ((/* implicit */signed char) arr_0 [i_0]);
                        arr_50 [i_1] [i_1 - 1] [i_3] [i_0] [i_3] [i_13] = ((/* implicit */unsigned char) var_5);
                        var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) (unsigned char)125)), ((~((~(arr_46 [i_0] [i_1] [i_3] [i_10] [(unsigned short)0]))))))))));
                    }
                    arr_51 [i_0] [i_1] [i_3] [i_10] = ((/* implicit */unsigned short) ((9007199254740990ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-28)))));
                }
                for (signed char i_14 = 2; i_14 < 12; i_14 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_15 = 3; i_15 < 12; i_15 += 4) 
                    {
                        var_42 = ((unsigned char) (!(((/* implicit */_Bool) ((unsigned char) var_3)))));
                        var_43 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-((-(((/* implicit */int) (unsigned char)255)))))))));
                        var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (short)-12528)))), ((+(((/* implicit */int) (short)-9))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (min((((/* implicit */unsigned int) var_14)), (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (signed char)-4))))))) : (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0]))))), (((((/* implicit */_Bool) -5131443385760067352LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12543))) : (2603533343256685731ULL)))))));
                        var_45 = ((/* implicit */unsigned int) var_4);
                        var_46 = ((/* implicit */unsigned char) min((var_46), (((/* implicit */unsigned char) arr_53 [i_0] [i_0] [i_0] [i_0 - 3]))));
                    }
                    var_47 = ((unsigned int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) (+(1935981664666468467LL)))) : (min((((/* implicit */unsigned long long int) arr_33 [i_1] [i_1] [i_1])), (var_13)))));
                    var_48 *= ((/* implicit */unsigned int) (short)12512);
                }
            }
            arr_56 [i_1] = ((/* implicit */int) min((((/* implicit */short) max((((/* implicit */unsigned char) min((var_8), (arr_35 [i_0] [i_0] [i_0] [i_1])))), (arr_1 [i_0])))), (min((arr_6 [i_1 - 2] [i_1 + 2] [i_0 - 1] [i_0 + 2]), (arr_6 [i_1 + 1] [i_1 + 2] [i_0 + 1] [i_0 + 1])))));
        }
        /* LoopSeq 3 */
        for (unsigned short i_16 = 2; i_16 < 12; i_16 += 3) 
        {
            var_49 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)16383)))))));
            var_50 = ((/* implicit */int) 4032U);
            var_51 = ((/* implicit */int) arr_58 [i_16] [i_16] [6]);
        }
        for (unsigned char i_17 = 0; i_17 < 13; i_17 += 1) 
        {
            var_52 = ((/* implicit */unsigned char) min((var_52), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [(_Bool)1])) ? (((/* implicit */int) var_9)) : (48)))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))), (((/* implicit */unsigned int) (unsigned char)63)))))));
            arr_63 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (((-(((/* implicit */int) (short)-15)))) * (((/* implicit */int) arr_38 [i_17] [i_17] [i_0] [i_0] [i_0] [i_0]))))), (min((max((((/* implicit */unsigned long long int) var_14)), (var_4))), (((/* implicit */unsigned long long int) (short)-26805))))));
            var_53 *= ((/* implicit */signed char) var_12);
        }
        for (unsigned int i_18 = 0; i_18 < 13; i_18 += 4) 
        {
            var_54 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_18] [i_0] [i_0] [i_0]))) <= (max((arr_7 [i_18]), (((/* implicit */unsigned int) var_9))))));
            arr_66 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)-18)) + (((/* implicit */int) (unsigned char)34))))) : (((unsigned int) (unsigned char)113))));
        }
    }
}
