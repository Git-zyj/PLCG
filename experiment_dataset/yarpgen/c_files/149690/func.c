/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149690
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_10)) >> (((((/* implicit */int) (short)-19375)) + (19393))))))))) - (((/* implicit */int) (signed char)54))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (short i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (((+(arr_5 [i_0] [i_1]))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_2])) && (((/* implicit */_Bool) var_13)))))))))));
                    arr_10 [(short)3] [9ULL] = ((/* implicit */short) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_4 [i_0] [(short)7] [i_2])) : (((/* implicit */int) max(((short)21832), ((short)12747)))))), (((/* implicit */int) min((((/* implicit */unsigned char) arr_7 [i_0] [4LL])), ((unsigned char)43))))));
                }
                for (unsigned short i_3 = 1; i_3 < 17; i_3 += 4) /* same iter space */
                {
                    arr_14 [i_0] [(_Bool)1] [i_3] = ((/* implicit */short) arr_7 [5U] [5ULL]);
                    var_21 += ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_0)) ? (arr_5 [i_1] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-19357)))))))) ? (var_1) : (max((var_16), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_3]))))));
                    arr_15 [i_3] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)-51)) ? (((/* implicit */int) arr_4 [i_3 - 1] [i_3 - 1] [i_3 - 1])) : (((/* implicit */int) arr_4 [i_3 + 1] [i_3 + 1] [i_3 - 1]))))));
                    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_7 [i_0] [i_3 + 1])) : (((/* implicit */int) (_Bool)1))))) ? (((var_11) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)114)))) : (((/* implicit */int) max(((unsigned char)3), (((/* implicit */unsigned char) (signed char)-125))))))))))));
                    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) || (var_11)))), (((long long int) (signed char)114))))) ? (((((((/* implicit */int) var_15)) < (((/* implicit */int) arr_13 [(_Bool)1] [i_1] [(signed char)11] [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (3672710499U) : (4294967292U)))) : (min((((/* implicit */unsigned long long int) var_5)), (var_1))))) : (max((((/* implicit */unsigned long long int) arr_5 [i_1] [(_Bool)1])), (((var_11) ? (arr_9 [(_Bool)1] [i_3 - 1] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22067))))))))))));
                }
                for (unsigned short i_4 = 1; i_4 < 17; i_4 += 4) /* same iter space */
                {
                    arr_18 [(signed char)12] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)24339)) ? (((((/* implicit */_Bool) arr_11 [i_4 + 1] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_11 [i_4 - 1] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_11 [(_Bool)1] [(_Bool)1] [i_0] [i_4 - 1])))) : (((/* implicit */int) arr_0 [i_1]))));
                    var_24 ^= ((/* implicit */unsigned long long int) max(((short)-24339), (((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_4 + 1])))))));
                    var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((short) (_Bool)0)))));
                }
                for (unsigned short i_5 = 1; i_5 < 17; i_5 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 2; i_6 < 16; i_6 += 4) 
                    {
                        for (signed char i_7 = 3; i_7 < 17; i_7 += 1) 
                        {
                            {
                                arr_28 [i_5] [(short)16] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_2))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_6 [i_5] [i_6] [i_7])) : (((((/* implicit */int) (short)-24340)) | (((/* implicit */int) var_9))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_5] [i_7 - 3] [16LL] [(unsigned short)14] [(signed char)14] [i_7 - 3]))) : ((-(3371949018U)))))));
                                arr_29 [(_Bool)1] [i_1] [i_5 + 1] [i_5] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_3 [(_Bool)1] [i_7])), (((var_10) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0] [4U] [i_0]))) : (var_12))))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */short) min((((/* implicit */int) max((((/* implicit */short) arr_22 [i_5] [i_5] [i_5 - 1])), ((short)11132)))), (((((/* implicit */int) arr_22 [i_5] [(unsigned char)3] [i_5 - 1])) * (((/* implicit */int) arr_19 [i_5] [i_5] [i_5 - 1]))))));
                    arr_30 [i_5] = ((/* implicit */signed char) ((arr_9 [i_5] [i_1] [i_0]) >> (((((/* implicit */_Bool) min(((short)-24314), ((short)-29314)))) ? (((/* implicit */int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) arr_2 [i_0]))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_24 [i_5] [i_5] [i_5] [i_0])) : (((/* implicit */int) var_5))))))));
                    arr_31 [i_5] [i_1] [i_5 - 1] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)28)))))));
                }
                var_27 = ((/* implicit */_Bool) min((var_27), (((_Bool) ((unsigned char) (short)19375)))));
            }
        } 
    } 
}
