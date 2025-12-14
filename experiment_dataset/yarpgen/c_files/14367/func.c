/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14367
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned long long int) min((var_14), (max((((/* implicit */unsigned long long int) min((var_8), (((/* implicit */int) (unsigned char)69))))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((arr_2 [(unsigned char)12]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)168))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0] [i_0])))))))))));
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((6041933944554378212LL) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
                {
                    {
                        arr_14 [i_1] [i_1] [i_1] [i_2] [i_2] = (~(((((/* implicit */int) arr_13 [i_1 + 1] [i_1 - 1])) | (var_8))));
                        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)4)))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 2) /* same iter space */
                        {
                            arr_17 [(signed char)10] [i_1] [i_2] [i_3] [i_4] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_10 [i_1] [i_1 + 1] [i_2] [i_3]))));
                            arr_18 [i_4] [i_1] [(_Bool)1] [i_1] [i_4] [i_1 - 1] [i_1] |= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 6041933944554378212LL)) ? (17) : (((/* implicit */int) (unsigned char)66))))) < (((((/* implicit */_Bool) (unsigned char)69)) ? (((/* implicit */unsigned int) ((arr_9 [i_0] [i_0]) ? (((/* implicit */int) arr_5 [i_0] [i_4] [i_0])) : (((/* implicit */int) (unsigned char)66))))) : (((((/* implicit */_Bool) var_1)) ? (arr_7 [i_4] [i_1] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)66)))))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 2) /* same iter space */
                        {
                            arr_22 [i_0] [i_0] [i_0] [i_5] [i_0] [i_0] [i_5] |= ((/* implicit */unsigned int) ((arr_13 [i_1 - 2] [i_2 - 1]) ? (((/* implicit */int) (unsigned char)55)) : (((/* implicit */int) arr_13 [i_1 + 1] [i_2 - 1]))));
                            arr_23 [i_0] [i_0] [i_5] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65524)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_2 + 1] [i_0] [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)73))))) : ((+(var_10)))));
                        }
                        /* LoopSeq 2 */
                        for (signed char i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            arr_26 [i_0] [i_1] [i_0] [i_3] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((16458516907849868951ULL), (((/* implicit */unsigned long long int) (unsigned char)74))))) ? (((/* implicit */int) arr_8 [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [7U] [7U] [i_2 + 1] [7U] [7U] [7U]))))))))));
                            var_17 = ((/* implicit */unsigned short) arr_11 [4] [4] [i_2] [i_3] [i_6]);
                        }
                        for (unsigned short i_7 = 3; i_7 < 15; i_7 += 3) 
                        {
                            var_18 |= ((/* implicit */short) var_6);
                            var_19 = ((/* implicit */unsigned short) (+(((arr_27 [i_7] [i_7] [i_2 - 1] [i_7] [i_7] [i_3] [i_2 - 1]) ? (((/* implicit */int) arr_27 [i_7 - 3] [i_7 + 1] [i_7] [i_7] [i_7] [i_7] [i_2 - 1])) : (((/* implicit */int) arr_27 [2] [i_7] [i_7 - 2] [i_7] [i_7] [i_7] [i_2 - 1]))))));
                            var_20 = ((/* implicit */_Bool) min((6041933944554378211LL), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_20 [i_0] [8U] [i_2 - 1] [i_3] [i_3] [i_2 - 1])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_1 - 1] [i_2] [i_1] [i_7 - 3]))))) / (((var_5) >> (((-1331511170) + (1331511179))))))))));
                            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) min((((long long int) ((((/* implicit */_Bool) 1331511183)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_13 [i_1] [i_0]))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)66))))))))));
                        }
                    }
                } 
            } 
        } 
    }
    for (int i_8 = 0; i_8 < 20; i_8 += 2) 
    {
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (-((~(((/* implicit */int) arr_30 [i_8])))))))));
        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (~((~(((/* implicit */int) var_4)))))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_9 = 0; i_9 < 24; i_9 += 2) 
    {
        for (unsigned char i_10 = 0; i_10 < 24; i_10 += 3) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) var_10))));
                    arr_39 [i_9] [i_11] [(_Bool)1] [i_9] = ((/* implicit */short) -1331511170);
                    var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3224762163U)) ? (1331511188) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) 2938977500055480188ULL)) ? (((/* implicit */int) (unsigned short)18641)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_33 [i_9] [i_10] [i_11])))))));
                    arr_40 [(_Bool)1] [i_9] [i_11] [i_11] |= ((/* implicit */unsigned char) (((+(var_5))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_9] [i_10] [i_11])))));
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    var_26 = ((/* implicit */unsigned int) ((unsigned char) ((unsigned char) (~(((/* implicit */int) (_Bool)1))))));
                    var_27 = ((/* implicit */_Bool) var_12);
                }
                for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 2) 
                {
                    var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((arr_35 [i_9] [i_10] [i_13]) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned short)52028)) - (52023)))))) ? (((unsigned long long int) arr_35 [i_13] [i_10] [i_9])) : (((/* implicit */unsigned long long int) arr_35 [i_9] [i_10] [i_13])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 0; i_14 < 24; i_14 += 1) 
                    {
                        for (unsigned char i_15 = 1; i_15 < 23; i_15 += 2) 
                        {
                            {
                                var_29 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_9] [i_9] [i_13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-80))) : (var_2)))) ? (((/* implicit */int) ((_Bool) 0ULL))) : (((/* implicit */int) var_4))))) ? ((((!((_Bool)0))) ? (min((((/* implicit */int) (unsigned char)201)), (var_7))) : (((/* implicit */int) arr_51 [i_15 + 1] [i_10] [i_13] [i_14] [i_15])))) : ((-(((/* implicit */int) (_Bool)1)))));
                                arr_53 [i_9] |= ((/* implicit */_Bool) ((unsigned char) arr_42 [i_9] [i_10] [22ULL] [5U]));
                                var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) (-(((/* implicit */int) min((arr_50 [1ULL] [i_15] [i_15] [i_15 + 1] [i_15 + 1] [7LL] [i_15 - 1]), (arr_50 [(_Bool)1] [i_13] [(_Bool)1] [i_15 + 1] [i_15 - 1] [i_15] [i_15 - 1])))))))));
                            }
                        } 
                    } 
                }
                var_31 = ((/* implicit */_Bool) var_7);
                var_32 = ((((/* implicit */_Bool) min((arr_44 [i_10] [i_10] [i_9]), (((/* implicit */unsigned long long int) arr_49 [(_Bool)1] [i_9] [i_9] [i_10]))))) ? (((((/* implicit */_Bool) var_8)) ? (arr_44 [i_9] [i_9] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_9]))))) : (((arr_44 [i_9] [i_9] [i_10]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_10]))))));
                var_33 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-36))))) : ((-(((((/* implicit */_Bool) arr_44 [i_9] [i_9] [i_9])) ? (-5556625380650818359LL) : (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_10])))))))));
            }
        } 
    } 
}
