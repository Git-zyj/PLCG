/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138665
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
    var_13 = ((/* implicit */unsigned char) (+(var_1)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 3) /* same iter space */
                    {
                        var_14 = ((/* implicit */signed char) arr_4 [i_0] [i_0] [i_0]);
                        arr_9 [i_0] [i_3] [i_2] [i_2] = ((/* implicit */_Bool) (signed char)-95);
                        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)94)) | ((-(((/* implicit */int) (signed char)-95))))))) ? ((-(var_1))) : (max((max((((/* implicit */unsigned int) (signed char)72)), (arr_5 [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned int) var_12))))));
                    }
                    for (int i_4 = 0; i_4 < 10; i_4 += 3) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (int i_5 = 0; i_5 < 10; i_5 += 3) 
                        {
                            var_16 = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_0])))) < (((/* implicit */int) arr_11 [i_4]))));
                            var_17 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((unsigned char) 14701919547411693726ULL))) ? (((/* implicit */int) max((((/* implicit */short) (signed char)68)), ((short)7)))) : (max((var_8), (((/* implicit */int) arr_1 [i_5]))))))));
                            arr_16 [i_0] [i_0] [i_2] [i_4] [i_2] = ((649936339) % (((/* implicit */int) (signed char)96)));
                        }
                        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 2) /* same iter space */
                        {
                            arr_19 [i_0] [i_1] [i_1] [i_4] [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) min((((signed char) var_8)), (max((arr_3 [i_6]), (((/* implicit */signed char) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
                            arr_20 [i_4] [i_4] [i_4] [i_4] [i_4] [(signed char)0] = ((/* implicit */signed char) max((max((((((/* implicit */_Bool) (signed char)-83)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-95)))), (((((/* implicit */int) arr_3 [i_0])) - (((/* implicit */int) arr_3 [i_4])))))), (((/* implicit */int) (unsigned short)65535))));
                            arr_21 [i_6] [i_4] [7] [i_4] [i_0] = ((unsigned char) (-(((/* implicit */int) ((((/* implicit */int) (signed char)3)) < (((/* implicit */int) (unsigned short)26901)))))));
                            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_18 [i_0] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_6])) : (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)26901)))) ? (min((arr_8 [i_6] [i_6] [i_6] [(signed char)6]), (((/* implicit */int) var_4)))) : ((-(((/* implicit */int) var_10)))))))))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 10; i_7 += 2) /* same iter space */
                        {
                            arr_26 [i_4] = ((/* implicit */int) max((((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-4)), ((unsigned short)0))))) / (7975507621895820250LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [(signed char)1])) ? (((/* implicit */int) ((((/* implicit */int) arr_11 [i_4])) == (((/* implicit */int) arr_11 [i_4]))))) : (((((/* implicit */int) (signed char)94)) ^ (((/* implicit */int) arr_25 [i_4] [i_4])))))))));
                            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) (signed char)3)), ((unsigned char)194))))));
                            var_20 = ((/* implicit */int) max((max((((((/* implicit */_Bool) var_5)) ? (1059880501852986115LL) : (((/* implicit */long long int) arr_23 [i_0] [i_0] [i_2] [i_2] [i_7])))), (((/* implicit */long long int) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) arr_25 [i_4] [i_4]))))))), (((/* implicit */long long int) max((arr_17 [i_0] [i_0]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_12))))))))));
                            var_21 = ((/* implicit */short) ((var_1) == (((/* implicit */unsigned int) max((((/* implicit */int) arr_11 [i_4])), (var_8))))));
                        }
                        var_22 = ((/* implicit */long long int) max((((((((/* implicit */_Bool) 1692954850)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)92))) : (9207360681090765579ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_4), (((/* implicit */short) var_12)))))))), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (short)-15771)))) ? (((/* implicit */int) (signed char)-95)) : (arr_23 [i_0] [i_1] [i_1] [i_0] [i_4]))))));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 10; i_8 += 3) /* same iter space */
                    {
                        var_23 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))));
                        arr_29 [i_8] [i_8] [i_8] [i_0] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned short)20132)))) ? (((((/* implicit */_Bool) (signed char)-37)) ? (((/* implicit */int) (unsigned char)48)) : (((/* implicit */int) (unsigned char)49)))) : (((/* implicit */int) (unsigned char)255))));
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_2])) ? (1495455660U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                        arr_30 [i_8] = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned char) arr_8 [i_0] [i_0] [i_8] [i_8])))));
                        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (+((((_Bool)1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10)))))))));
                    }
                    for (signed char i_9 = 0; i_9 < 10; i_9 += 3) 
                    {
                        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((short) (signed char)-95)))));
                        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-15777)))))))) ? (((/* implicit */int) (unsigned short)63648)) : ((-(((/* implicit */int) min((((/* implicit */unsigned char) arr_18 [i_0] [(unsigned char)5] [i_0] [i_2] [i_0])), (arr_10 [i_0] [i_9]))))))));
                    }
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 10; i_10 += 1) 
                    {
                        for (unsigned int i_11 = 2; i_11 < 9; i_11 += 3) 
                        {
                            {
                                var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) min((((/* implicit */long long int) max(((~(((/* implicit */int) var_4)))), ((~(((/* implicit */int) var_12))))))), ((-(((((/* implicit */_Bool) (signed char)-96)) ? (arr_40 [i_0] [i_0] [i_2] [i_10] [i_11]) : (((/* implicit */long long int) var_9)))))))))));
                                var_29 ^= ((/* implicit */int) arr_10 [i_0] [i_0]);
                                var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((arr_7 [i_0] [i_11] [i_11 + 1] [i_0]), (arr_7 [i_1] [i_0] [i_0] [i_1])))), (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0] [i_0])) ? (var_7) : (((/* implicit */unsigned long long int) var_8)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 0; i_12 < 10; i_12 += 4) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 10; i_13 += 1) 
                        {
                            {
                                var_31 = ((/* implicit */short) max(((+(arr_40 [i_0] [i_1] [i_2] [i_12] [i_13]))), (((/* implicit */long long int) var_2))));
                                var_32 = ((/* implicit */long long int) arr_41 [i_13] [i_0] [i_0] [i_0] [i_0] [i_0]);
                            }
                        } 
                    } 
                    arr_47 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)38609)) ? (((/* implicit */int) (unsigned short)63644)) : (((/* implicit */int) (unsigned char)206))));
                }
            } 
        } 
    } 
    var_33 ^= ((/* implicit */unsigned long long int) var_8);
    var_34 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)61))));
}
