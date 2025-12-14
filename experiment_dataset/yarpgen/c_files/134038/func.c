/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134038
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
    var_17 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_14)), (var_15)))) && (((/* implicit */_Bool) var_16))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) / (var_9)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)46242)) ? (((/* implicit */int) (unsigned short)48919)) : (((/* implicit */int) (unsigned short)16617))))) : (min((var_3), (var_16)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            arr_7 [i_1] [i_1] [i_1] = var_6;
            /* LoopSeq 2 */
            for (long long int i_2 = 2; i_2 < 14; i_2 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_3 = 1; i_3 < 13; i_3 += 3) 
                {
                    arr_12 [i_1] [10ULL] [i_1] [(unsigned short)4] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_6 [i_0]) : (((/* implicit */unsigned long long int) var_8)))))));
                    arr_13 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_2) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */int) var_11)))))))) ? (((((/* implicit */unsigned long long int) var_3)) + (min((arr_6 [(unsigned short)6]), (((/* implicit */unsigned long long int) var_3)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_12))) : (((/* implicit */long long int) (~(((/* implicit */int) var_7))))))))));
                    arr_14 [i_1] = var_3;
                    var_18 = var_0;
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_4 = 3; i_4 < 14; i_4 += 1) 
                    {
                        arr_18 [13LL] [i_1 + 2] [i_1 + 1] [i_1] [i_1 + 1] = ((/* implicit */signed char) ((var_10) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_2 - 2] [i_2] [14LL] [i_2 - 2] [i_1] [i_1 + 1] [i_1])))));
                        var_19 *= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_4)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                        var_20 = ((/* implicit */unsigned int) (+(var_1)));
                    }
                    for (unsigned short i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        arr_23 [i_1] [i_1] [i_2] [(unsigned char)3] [(signed char)9] = ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) arr_9 [i_1 - 1] [i_3 + 2] [10U])) : (var_5))) | (((long long int) var_1)));
                        var_21 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (unsigned short)18615)) : (((/* implicit */int) (unsigned short)48891))))));
                    }
                }
                arr_24 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_21 [i_0] [12LL] [i_2 - 1] [i_1 - 1] [i_1]))) ? (((((/* implicit */_Bool) arr_17 [i_2 + 1] [i_2] [i_2] [i_2] [i_2 - 2] [i_1 - 1] [i_0])) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : ((+((+(var_5)))))));
            }
            for (long long int i_6 = 3; i_6 < 14; i_6 += 1) 
            {
                arr_29 [i_0] [i_1 + 2] [i_6] [i_1] = var_6;
                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_28 [i_0] [i_1 + 2] [i_6]))) / (var_2))) >= (((/* implicit */long long int) ((/* implicit */int) arr_28 [(unsigned short)10] [i_1] [i_6 - 1]))))))));
                var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_9))) ? (arr_10 [i_1 - 1] [i_1 - 1] [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (var_9) : (((/* implicit */int) (unsigned short)16620)));
                arr_30 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) var_16);
                var_24 ^= ((/* implicit */int) ((((/* implicit */_Bool) (-(var_1)))) ? (((/* implicit */unsigned long long int) var_16)) : (var_10)));
            }
            arr_31 [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) (unsigned short)47946)) > (((/* implicit */int) (unsigned short)16632)))))));
        }
        for (unsigned short i_7 = 3; i_7 < 14; i_7 += 4) 
        {
            /* LoopSeq 3 */
            for (signed char i_8 = 0; i_8 < 15; i_8 += 3) 
            {
                var_25 = (-(((/* implicit */int) ((unsigned short) var_9))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_9 = 0; i_9 < 15; i_9 += 1) 
                {
                    arr_38 [i_9] [i_7] [i_7] [i_0] = ((/* implicit */int) arr_27 [i_0] [i_7 - 1] [i_8] [i_9]);
                    /* LoopSeq 1 */
                    for (unsigned short i_10 = 3; i_10 < 13; i_10 += 1) 
                    {
                        arr_41 [i_0] [i_7 - 3] [i_7] [1ULL] [i_9] [i_7] [7LL] = ((/* implicit */unsigned int) (+(arr_37 [i_10 + 2] [(unsigned short)10] [i_10 + 2] [i_10] [i_10 - 2] [i_10 - 3])));
                        arr_42 [i_0] [i_7] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_1))))) : (((((/* implicit */int) var_7)) >> (((((/* implicit */int) var_0)) - (48713)))))));
                    }
                }
            }
            for (int i_11 = 0; i_11 < 15; i_11 += 4) 
            {
                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((+(6106270880652340454ULL))), (((/* implicit */unsigned long long int) var_12))))) && (((/* implicit */_Bool) var_14))));
                arr_45 [(unsigned short)6] [(unsigned short)6] [i_11] [i_7] = ((/* implicit */unsigned short) arr_22 [i_0] [i_0] [i_0] [i_0]);
                arr_46 [i_7] [i_7] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_13) : (((/* implicit */long long int) var_9))))) ? (((((/* implicit */_Bool) var_6)) ? (var_13) : (arr_37 [i_7 - 2] [(signed char)12] [(_Bool)1] [i_11] [i_11] [i_11]))) : (((var_1) + (((/* implicit */long long int) var_15)))));
            }
            /* vectorizable */
            for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 3) 
            {
                /* LoopSeq 4 */
                for (unsigned int i_13 = 0; i_13 < 15; i_13 += 1) 
                {
                    arr_53 [i_7] [i_7 - 2] [i_12] [i_13] [i_13] [i_13] = ((/* implicit */unsigned int) var_5);
                    /* LoopSeq 1 */
                    for (unsigned short i_14 = 0; i_14 < 15; i_14 += 3) 
                    {
                        arr_56 [i_7] [i_7 - 3] [12LL] [i_7 - 3] [i_14] [i_13] [i_13] = arr_50 [(unsigned short)1];
                        arr_57 [i_7] [i_7] [i_7] [i_7 - 2] [i_7 + 1] = ((/* implicit */unsigned int) var_12);
                    }
                }
                for (unsigned short i_15 = 0; i_15 < 15; i_15 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_16 = 0; i_16 < 15; i_16 += 1) /* same iter space */
                    {
                        arr_63 [i_7] [i_7 - 2] [i_0] [i_12] [i_7 - 2] [i_0] [i_7] = ((/* implicit */_Bool) (+(((var_2) / (((/* implicit */long long int) ((/* implicit */int) var_14)))))));
                        arr_64 [i_0] [i_7] [i_0] = ((/* implicit */unsigned char) ((var_3) / (((/* implicit */long long int) ((/* implicit */int) var_11)))));
                        arr_65 [i_0] [i_7] [(unsigned short)5] = ((/* implicit */unsigned int) ((signed char) var_1));
                        arr_66 [i_0] [i_7 - 1] [i_12] [i_15] [i_16] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */int) var_6))));
                    }
                    for (unsigned short i_17 = 0; i_17 < 15; i_17 += 1) /* same iter space */
                    {
                        arr_69 [i_12] [i_7] [i_15] [i_12] [i_7] [i_0] = var_13;
                        arr_70 [i_7] [i_15] [i_12] [i_7] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_62 [i_0] [i_7 - 3] [i_12] [i_7 + 1] [i_17]))));
                    }
                    var_27 ^= ((/* implicit */unsigned short) arr_54 [i_0] [i_7 - 2] [i_7 + 1] [i_15] [9U] [i_7]);
                    arr_71 [i_0] [i_7] [i_0] [i_0] = ((/* implicit */signed char) ((arr_2 [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
                }
                for (unsigned short i_18 = 0; i_18 < 15; i_18 += 1) /* same iter space */
                {
                    arr_74 [(signed char)5] [i_7] [i_12] [i_7] [i_12] [i_18] = ((/* implicit */unsigned long long int) ((var_15) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                    var_28 = ((/* implicit */unsigned long long int) (~(var_13)));
                }
                for (unsigned short i_19 = 0; i_19 < 15; i_19 += 1) /* same iter space */
                {
                    arr_77 [i_7] [i_12] [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_0] [i_7 - 2] [i_0] [i_7 - 2]))) | (var_10)));
                    /* LoopSeq 1 */
                    for (unsigned char i_20 = 2; i_20 < 11; i_20 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned int) (+(var_5)));
                        arr_81 [i_0] [i_7 - 2] [i_12] [i_12] [i_7] [i_20] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_3 [i_20 - 2]))));
                        arr_82 [i_7] [(_Bool)1] [i_7] [i_7] [i_19] [i_20] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_25 [i_7] [i_7] [i_7 - 3] [(unsigned short)12]))));
                        var_30 = ((/* implicit */unsigned short) (-(var_16)));
                    }
                    arr_83 [i_0] [i_7] = ((/* implicit */long long int) ((var_15) >> (((((((/* implicit */_Bool) var_14)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) - (2603074647U)))));
                }
                arr_84 [i_0] [i_7] [i_12] [i_7 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_7 - 3] [i_7 + 1])))));
            }
            arr_85 [i_7] [i_7] = ((unsigned short) var_5);
        }
        arr_86 [i_0] = ((/* implicit */unsigned long long int) var_12);
        arr_87 [i_0] = ((/* implicit */unsigned short) (+(min((var_13), (var_3)))));
    }
}
