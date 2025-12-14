/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158895
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned long long int) min(((_Bool)0), ((_Bool)0)));
        /* LoopSeq 1 */
        for (long long int i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            var_16 *= ((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) arr_3 [i_1 - 1] [i_1 + 1])))));
            arr_6 [i_0] [(_Bool)1] [i_1] |= ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1 + 2])))))));
        }
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_9 [i_2] = ((/* implicit */_Bool) (((_Bool)0) ? (((((/* implicit */_Bool) (signed char)24)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-27))))) : (max((3106540792129138443ULL), (((/* implicit */unsigned long long int) (signed char)-24)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)246)))));
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) arr_1 [i_2]))))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2]))))))))));
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */int) max((arr_2 [i_2] [i_2]), (arr_2 [i_2] [i_2])))) ^ (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_2 [i_2] [i_2]))))))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 1; i_3 < 23; i_3 += 4) 
    {
        for (unsigned long long int i_4 = 1; i_4 < 23; i_4 += 4) 
        {
            {
                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) min(((_Bool)1), (((3106540792129138443ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3 + 1] [i_3 + 1]))))))))));
                var_20 = ((/* implicit */signed char) ((((arr_10 [i_3 - 1]) | (arr_10 [i_3 - 1]))) ^ (arr_10 [i_3 - 1])));
                arr_14 [i_3] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3 - 1])) ? (((/* implicit */int) arr_11 [i_3 - 1])) : (((/* implicit */int) arr_11 [i_3 - 1]))))) ? (((((/* implicit */_Bool) (signed char)24)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_3 - 1])) ? (((/* implicit */int) arr_11 [i_3 + 1])) : (((/* implicit */int) arr_11 [i_3 + 1]))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 3) 
    {
        for (signed char i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            for (signed char i_7 = 1; i_7 < 10; i_7 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) (signed char)-82)), (((((/* implicit */_Bool) 4208366875U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_7]))) : (15340203281580413191ULL))))) * (((/* implicit */unsigned long long int) (-(((((/* implicit */int) (signed char)3)) - (((/* implicit */int) (signed char)-3))))))))))));
                    /* LoopSeq 2 */
                    for (long long int i_8 = 0; i_8 < 12; i_8 += 2) 
                    {
                        var_22 += ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) min((((/* implicit */signed char) arr_5 [i_7])), (arr_21 [i_8]))))))) - (min((min((15340203281580413173ULL), (((/* implicit */unsigned long long int) (signed char)-11)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) 1845968709)) : (arr_28 [i_6] [i_7] [i_8]))))))));
                        var_23 = (-(((271421727U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
                        var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned short) arr_17 [i_7 - 1])))))));
                    }
                    for (short i_9 = 2; i_9 < 11; i_9 += 2) 
                    {
                        arr_32 [i_7] [i_6] [i_7] [i_9] = ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_3 [i_7] [i_9]))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (signed char i_10 = 1; i_10 < 10; i_10 += 2) 
                        {
                            arr_36 [i_5] [i_7] [i_10 + 2] = ((/* implicit */_Bool) ((((/* implicit */int) arr_29 [i_7] [i_7 - 1] [i_7 + 1] [i_9] [i_9 - 1] [i_7])) >> (((/* implicit */int) arr_29 [i_7] [i_7] [i_7 + 2] [i_7 + 1] [i_9 - 1] [i_7]))));
                            var_25 = ((/* implicit */int) max((var_25), ((+(arr_26 [i_6] [i_9 - 2] [i_10] [i_10])))));
                            var_26 = ((/* implicit */long long int) ((((/* implicit */int) arr_27 [i_7] [i_10 + 2] [i_10])) < (((/* implicit */int) arr_29 [i_6] [i_9] [i_10] [i_10 + 2] [i_10] [i_7]))));
                            arr_37 [i_5] [i_6] [i_7 + 2] [i_7 + 1] [i_7] [i_9] [i_10] = arr_11 [i_7 - 1];
                            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_9] [i_10 + 2]))) : (arr_33 [i_7] [i_10 + 1] [i_10] [i_10] [i_10]))))));
                        }
                        for (unsigned short i_11 = 4; i_11 < 9; i_11 += 2) /* same iter space */
                        {
                            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_9 - 2])) ? (((((/* implicit */_Bool) arr_17 [i_9 + 1])) ? (((/* implicit */int) arr_17 [i_9 - 1])) : (((/* implicit */int) arr_17 [i_9 - 2])))) : (((/* implicit */int) arr_17 [i_9 - 1]))));
                            var_29 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4208366869U)) ? (((/* implicit */int) (signed char)-24)) : (((/* implicit */int) (short)-3462)))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_12 = 4; i_12 < 9; i_12 += 2) /* same iter space */
                        {
                            arr_43 [i_5] [i_7] [i_6] [i_7 + 2] [i_9] [i_12] [i_12] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) 2099564572U)))) && (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && (((/* implicit */_Bool) arr_10 [i_7]))))));
                            arr_44 [i_5] [i_5] [i_5] [i_6] [i_7] [i_9] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-24)) * (((/* implicit */int) (_Bool)0))));
                        }
                    }
                    var_30 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_5] [i_7] [i_7 + 1] [i_7 - 1] [i_7] [i_7] [i_7])) ? (arr_35 [i_6] [i_6] [i_6] [i_7 + 1] [i_7] [i_7] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) (short)-3462))))))));
                    var_31 += ((/* implicit */unsigned long long int) var_6);
                    arr_45 [i_7] [i_6] [i_7] [i_7 - 1] = ((/* implicit */unsigned int) ((((arr_29 [i_6] [i_7] [i_7] [i_7 + 2] [i_7] [i_7]) ? (((/* implicit */int) arr_29 [i_5] [i_6] [i_6] [i_7 - 1] [i_7 - 1] [i_7])) : (((/* implicit */int) arr_29 [i_6] [i_6] [i_7] [i_7 - 1] [i_7] [i_7])))) ^ (((/* implicit */int) arr_29 [i_6] [i_6] [i_7 + 1] [i_7 + 1] [i_7] [i_7]))));
                }
            } 
        } 
    } 
}
