/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145824
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
    var_13 = ((/* implicit */signed char) ((var_4) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_2)))))) != (var_2)))) : (((/* implicit */int) var_9))));
    var_14 = ((((((/* implicit */_Bool) (unsigned char)13)) ? (((((/* implicit */_Bool) 22ULL)) ? (12189128114031036665ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)102))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)92))))) < (var_11));
    var_15 = ((/* implicit */unsigned char) var_8);
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_12) / (((/* implicit */int) var_0))))) ? (((var_5) / (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_2))))))), (var_11))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) ((var_2) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) ((11288188195277017189ULL) <= (((/* implicit */unsigned long long int) 5610629560889269637LL)))))))))));
                /* LoopSeq 3 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)14)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned long long int) (signed char)-110))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)168)) != (((/* implicit */int) (unsigned char)41))))) : (((/* implicit */int) (unsigned short)32952))))) : (min((((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_2] [i_3])), (11288188195277017197ULL)))));
                                var_19 += ((/* implicit */unsigned int) ((((/* implicit */int) var_1)) & ((~(((/* implicit */int) ((unsigned char) arr_11 [i_0] [i_0] [i_0] [i_3])))))));
                                var_20 = ((/* implicit */unsigned short) arr_10 [i_0] [i_1] [i_1] [6ULL] [i_3] [i_4]);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned char) (!(arr_9 [i_0] [i_0] [i_0] [i_0])));
                }
                for (signed char i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
                {
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-13568)) ? (((/* implicit */int) (signed char)25)) : (1545607055)));
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 11; i_6 += 2) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 2) 
                        {
                            {
                                arr_23 [(_Bool)1] [i_1] [(unsigned short)1] [(unsigned short)1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_5])), (arr_0 [i_0])))) ? (var_2) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [i_0] [(unsigned short)3] [i_5])))))));
                                arr_24 [7ULL] [i_1] [i_5] [i_5] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) (((~(arr_0 [i_0]))) >> (((((var_6) << (((((((/* implicit */int) var_10)) + (163))) - (44))))) - (188438557464289863LL)))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_3 [i_7])), (var_2)))) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_22 [i_7] [(signed char)10] [i_5] [i_0])) < (((/* implicit */int) arr_9 [(unsigned char)2] [i_1] [i_5] [i_6]))))))))));
                            }
                        } 
                    } 
                    arr_25 [i_5] = ((/* implicit */long long int) var_10);
                }
                for (unsigned short i_8 = 0; i_8 < 11; i_8 += 3) 
                {
                    var_23 = ((((((/* implicit */_Bool) arr_13 [i_0])) ? (((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (var_6))) >> (((((((/* implicit */_Bool) arr_26 [i_0])) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_2))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_6 [i_8] [i_1] [i_0]))))))) - (18446744073709551476ULL))));
                    var_24 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_7)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_12)) : (arr_16 [i_8]))) : (((/* implicit */long long int) ((/* implicit */int) (!(arr_9 [i_0] [i_0] [i_8] [i_1])))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_9 = 2; i_9 < 10; i_9 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) max(((unsigned char)73), ((unsigned char)72)))) ^ (((/* implicit */int) ((((/* implicit */int) arr_11 [i_9 + 1] [i_1] [i_0] [(short)1])) != (((/* implicit */int) var_9)))))));
                        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_15 [6U] [i_9 - 1] [i_8] [i_8]) << (((/* implicit */int) arr_11 [i_9 - 2] [i_9] [6] [5]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_9 - 1] [i_9 - 2] [i_9 + 1] [i_9]))) : (max((arr_16 [i_9 - 1]), (((/* implicit */long long int) var_7)))))))));
                    }
                    for (signed char i_10 = 0; i_10 < 11; i_10 += 3) 
                    {
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_0])) ? (((arr_15 [i_0] [(signed char)2] [i_8] [i_10]) >> (((/* implicit */int) var_8)))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */unsigned int) var_12)) % (var_7))) != (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))));
                        var_28 = ((/* implicit */int) var_10);
                        var_29 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_7))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_8])) | (arr_13 [(unsigned char)4])))))) & (((/* implicit */unsigned int) ((/* implicit */int) min((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_10 [i_0] [i_1] [i_8] [i_10] [i_0] [(signed char)0])))))));
                    }
                    var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) var_3)), (arr_13 [i_8])))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_1])))))));
                }
                var_31 = ((/* implicit */signed char) (((!(var_4))) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])) : (((((/* implicit */int) (unsigned char)60)) ^ (((/* implicit */int) (unsigned short)32957))))));
                /* LoopNest 3 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (int i_13 = 0; i_13 < 11; i_13 += 3) 
                        {
                            {
                                arr_39 [i_13] [i_0] [i_11] [i_11] [i_1] [i_0] = ((/* implicit */long long int) ((signed char) ((var_8) ? (var_5) : (((/* implicit */long long int) var_12)))));
                                arr_40 [i_11] [i_11] [i_1] [i_11] [i_12] [i_11] [i_13] = ((/* implicit */long long int) ((arr_32 [i_13] [(unsigned short)1] [i_0]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((var_11) - (((/* implicit */unsigned long long int) var_7)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_13] [i_13] [i_11] [i_12])))))))));
                                arr_41 [i_0] [i_0] [i_11] [i_11] = var_12;
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
