/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147716
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
    var_10 = ((/* implicit */unsigned char) var_7);
    var_11 = ((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))))) & (var_3))), (((/* implicit */unsigned long long int) var_4))));
    var_12 = ((/* implicit */signed char) var_5);
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) (+(var_5)))) ? (min(((-(0ULL))), (((((/* implicit */unsigned long long int) var_2)) * (var_9))))) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)18))))) : (((unsigned long long int) 0))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */short) (signed char)(-127 - 1));
                var_15 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 1]))) : (var_5))), (((/* implicit */long long int) ((((/* implicit */int) var_6)) | ((~(((/* implicit */int) arr_1 [i_0 - 2])))))))));
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    var_16 = ((/* implicit */unsigned short) ((_Bool) var_9));
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_17 = ((/* implicit */int) max(((+((+(var_8))))), (((/* implicit */unsigned long long int) arr_10 [i_0 - 2] [i_1] [i_0 - 2] [i_4] [i_4] [i_2] [i_4]))));
                            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) min((arr_8 [i_2]), (((((/* implicit */unsigned long long int) var_2)) + ((-(var_8))))))))));
                            arr_12 [i_4] [i_3] [i_3] [i_1] [i_0] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) ((unsigned short) 18446744073709551605ULL)))))));
                            arr_13 [i_3] [i_2] [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_1 - 2])) : (((/* implicit */int) arr_1 [i_1])))) * (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127)))))));
                        }
                        var_19 *= ((/* implicit */long long int) arr_6 [i_3] [i_2] [i_1 - 1]);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        arr_17 [i_0] [i_1] [i_2] [i_5] [4] [i_0] = ((/* implicit */signed char) (~(var_2)));
                        var_20 = (+(((/* implicit */int) var_4)));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 2) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 16; i_7 += 2) 
                        {
                            {
                                arr_22 [i_7] [(signed char)7] [(signed char)7] [i_2] [i_1] [i_0] [i_0 + 1] = ((/* implicit */signed char) (+((+(((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */unsigned long long int) var_2))))))));
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)1)))))))) + ((+(((/* implicit */int) var_7))))));
                                arr_23 [i_7] [i_6] [i_2] [i_1] |= ((/* implicit */signed char) min((((((-10) > (((/* implicit */int) (signed char)-127)))) ? (((/* implicit */int) arr_7 [i_6] [i_1] [i_0 + 2] [i_0 - 2])) : (arr_15 [i_0 + 1] [i_0 + 1] [i_1 - 1] [i_6] [i_7] [i_0 + 1]))), (((/* implicit */int) min(((signed char)-127), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)255))))))))));
                                arr_24 [i_0] [(signed char)2] [i_2] [i_6] [i_7] = ((/* implicit */unsigned char) var_1);
                            }
                        } 
                    } 
                }
                for (int i_8 = 0; i_8 < 16; i_8 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_9 = 1; i_9 < 13; i_9 += 3) 
                    {
                        for (unsigned char i_10 = 1; i_10 < 12; i_10 += 3) 
                        {
                            {
                                arr_35 [i_0 + 2] [i_0 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((~(9ULL))) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_0])))))))) ? (arr_27 [i_0 - 1] [i_0] [i_0] [i_0]) : (((((/* implicit */int) var_6)) << (((((((/* implicit */int) arr_3 [i_1 + 1])) + (37))) - (26)))))));
                                var_22 = (((!(arr_30 [i_0] [i_1 - 2] [15]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_5 [i_0 - 1] [i_8] [i_9]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) arr_4 [i_0 + 1])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [12] [12] [i_8]))) != (var_8)))))));
                                var_23 = ((/* implicit */_Bool) max((var_23), (arr_14 [i_9] [i_8] [i_0] [i_0])));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned long long int) ((arr_21 [i_1 - 2] [i_0 - 2] [i_0]) && (arr_4 [i_1 - 2])));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) arr_9 [4] [(unsigned char)6] [i_1 - 2] [(signed char)0] [i_11]);
                        arr_38 [i_8] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)30))));
                        var_26 = ((/* implicit */_Bool) (-((-(var_3)))));
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 3) 
                    {
                        arr_42 [i_0 - 1] [i_12] = (~(((((/* implicit */int) (short)0)) % (((/* implicit */int) (_Bool)1)))));
                        var_27 = ((/* implicit */int) (((~(((((/* implicit */_Bool) var_1)) ? (18446744073709551596ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0 + 2] [i_0] [i_0 + 2] [i_8] [i_12] [i_12]))))))) - (((var_8) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_1 + 1] [i_0 + 2] [(unsigned char)2] [i_0 + 2])))))));
                    }
                    arr_43 [i_8] [i_1] [i_0] [i_0 - 2] = ((((((((/* implicit */int) (signed char)1)) <= (((/* implicit */int) (signed char)122)))) && (((/* implicit */_Bool) (unsigned char)15)))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_20 [i_1 - 1] [i_1] [i_0 - 2] [i_0] [i_0 - 1] [i_0]) < (arr_20 [i_1 - 1] [i_1] [i_0 - 2] [5] [i_0] [i_0 - 1]))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) + (((/* implicit */int) (signed char)110))))) ? ((-(var_5))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) > (((/* implicit */int) arr_33 [6])))))))));
                    var_28 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) - (((((/* implicit */_Bool) arr_40 [i_1] [(_Bool)1])) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)0)), (var_5)))) : (((((/* implicit */_Bool) var_5)) ? (arr_8 [2ULL]) : (((/* implicit */unsigned long long int) arr_2 [(unsigned char)11] [i_1 - 2]))))))));
                }
                for (unsigned char i_13 = 0; i_13 < 16; i_13 += 4) 
                {
                    arr_46 [i_13] [i_0 + 1] [i_0 + 1] [i_0] = ((/* implicit */short) var_2);
                    var_29 -= ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((arr_0 [11]), (((/* implicit */signed char) arr_36 [i_0 - 1] [i_1] [i_0 - 1] [i_1])))))))) > (((/* implicit */int) (_Bool)1))));
                }
                /* LoopSeq 1 */
                for (unsigned short i_14 = 1; i_14 < 13; i_14 += 3) 
                {
                    var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) (~((-(((/* implicit */int) arr_44 [i_0 - 2] [(signed char)8])))))))));
                    arr_50 [i_0] [i_1 - 2] [i_0] = ((/* implicit */_Bool) (-(var_3)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_15 = 0; i_15 < 16; i_15 += 1) 
                    {
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_14]))))) - (min(((-(var_5))), (((((/* implicit */_Bool) var_4)) ? (arr_5 [i_1] [i_1] [(unsigned short)0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)127))))))))))));
                                var_32 = ((/* implicit */int) (((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_51 [i_0]))))))) > (((/* implicit */int) var_1))));
                                arr_55 [i_16] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                                var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (9223372036854775808ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65531)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) (signed char)-116)))))))) : (var_5))))));
                            }
                        } 
                    } 
                    var_34 = (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_8)))) ^ (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (18446744073709551615ULL) : (var_9)))))));
                    var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_49 [i_0 + 1] [i_1 - 2] [i_0 + 2] [i_1])) ? (var_3) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_54 [i_1 + 1] [i_0 - 2])) - (((/* implicit */int) arr_54 [i_1 - 2] [i_0 + 2])))))));
                }
            }
        } 
    } 
}
