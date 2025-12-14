/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126608
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] = (((!(((/* implicit */_Bool) arr_4 [i_2] [i_1] [i_2])))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))) || (((/* implicit */_Bool) var_3))))) : ((((!(((/* implicit */_Bool) 0)))) ? (-4) : (var_12))));
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) /* same iter space */
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))))), (var_8))))));
                        /* LoopSeq 2 */
                        for (int i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            arr_14 [i_1] [i_3] [4LL] [2ULL] [i_2] [i_1] [i_0] = ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_5)), (arr_5 [(unsigned short)7])))) ? ((-(-1))) : ((-(var_7))));
                            var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */int) (!((!(((/* implicit */_Bool) var_4))))))) - (((/* implicit */int) ((short) ((var_6) + (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))))));
                            var_14 = ((/* implicit */long long int) arr_3 [i_4]);
                            arr_15 [0U] [i_1] [i_2] [(unsigned char)12] [3LL] [i_4] = ((/* implicit */_Bool) var_5);
                        }
                        for (unsigned int i_5 = 0; i_5 < 13; i_5 += 2) 
                        {
                            arr_18 [5LL] [5LL] [(_Bool)1] [i_3] [5LL] [i_3] = 12;
                            var_15 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_3)) ? (var_11) : (arr_9 [i_2] [i_2] [i_2] [i_2] [i_5]))) < (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_11))))));
                        }
                        var_16 = ((/* implicit */short) (unsigned char)1);
                        var_17 &= ((/* implicit */signed char) (+(((/* implicit */int) ((arr_7 [i_3] [(unsigned short)8] [i_2] [5ULL]) == (((/* implicit */int) var_2)))))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 13; i_6 += 2) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned short) max(((((!(((/* implicit */_Bool) var_12)))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned short)48337)))), (-13)));
                        var_19 = max((((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) arr_20 [12LL] [12LL] [i_2] [i_6] [(unsigned char)11] [i_6]))) - ((~(-9)))))), (arr_9 [i_2] [i_1] [i_0] [i_6] [10ULL]));
                    }
                    for (unsigned char i_7 = 0; i_7 < 13; i_7 += 2) /* same iter space */
                    {
                        arr_23 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((var_11) - (var_6))))))));
                        var_20 = ((/* implicit */unsigned short) arr_0 [8]);
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (signed char i_8 = 0; i_8 < 13; i_8 += 2) 
                        {
                            var_21 = ((/* implicit */int) var_0);
                            var_22 = ((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_10))))) + (((arr_9 [(signed char)6] [i_1] [(signed char)6] [i_7] [i_7]) - (arr_9 [i_0] [i_1] [(short)5] [i_0] [(unsigned short)5])))));
                            var_23 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)224)))))));
                            arr_27 [i_0] [i_1] [i_0] [i_0] [6] = ((/* implicit */long long int) ((arr_19 [i_8] [i_8] [i_8] [i_8] [i_8]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [(unsigned short)1] [i_1] [i_2] [i_7]))))))));
                        }
                        for (unsigned int i_9 = 0; i_9 < 13; i_9 += 2) 
                        {
                            arr_30 [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_7)))) ? (((/* implicit */unsigned int) ((arr_28 [i_0] [i_1] [8] [i_7] [i_9] [i_1] [i_7]) << (((((var_4) + (5643111566341246640LL))) - (14LL)))))) : (((1265187922U) + (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
                            arr_31 [i_0] [i_0] [i_1] [i_2] [(short)3] [i_9] |= ((/* implicit */long long int) var_3);
                            arr_32 [i_0] [(unsigned char)0] [(unsigned char)0] [(unsigned char)0] [i_9] = ((/* implicit */unsigned int) (~(((((/* implicit */int) max((arr_5 [(unsigned short)12]), (((/* implicit */unsigned short) var_5))))) + (((/* implicit */int) (unsigned char)34))))));
                            var_24 = ((/* implicit */_Bool) max((((/* implicit */unsigned short) ((var_0) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */long long int) var_7)))))))), (arr_12 [i_0] [i_1] [9] [i_7] [9])));
                            arr_33 [i_0] [i_1] [i_2] [i_7] [i_9] [(unsigned char)10] = ((/* implicit */unsigned char) arr_24 [i_0] [2] [7ULL] [2] [i_7] [i_0] [2]);
                        }
                        for (short i_10 = 0; i_10 < 13; i_10 += 2) 
                        {
                            arr_38 [i_0] [i_1] [(signed char)7] [i_2] [0U] [i_10] &= ((/* implicit */short) (_Bool)1);
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (unsigned short)14177))));
                        }
                    }
                    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1012143437U)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_3)), (arr_1 [i_2])))))))) : (var_4)));
                    var_27 = ((/* implicit */_Bool) max((2872548644944272550ULL), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)241))))), (max((((/* implicit */unsigned int) var_2)), (var_8))))))));
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max(((signed char)-45), (((/* implicit */signed char) var_0))))) ? (((var_0) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3)))) : ((+(((/* implicit */int) var_5)))))) < (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5)))))))));
}
