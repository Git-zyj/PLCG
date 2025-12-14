/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12503
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
    var_10 = ((/* implicit */unsigned long long int) max((var_10), (var_0)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) arr_1 [i_0 + 2] [i_1 + 2]))) ^ (((/* implicit */int) min((var_5), (((/* implicit */signed char) arr_1 [i_0 + 1] [i_1 + 2])))))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) (signed char)48)) << (((/* implicit */int) (_Bool)0)))));
                var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) max(((+(((/* implicit */int) var_8)))), (min(((((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1)))))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 4 */
                            /* vectorizable */
                            for (unsigned short i_4 = 3; i_4 < 12; i_4 += 3) /* same iter space */
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */signed char) (unsigned char)127);
                                var_13 ^= var_4;
                                arr_15 [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) ((6942522057839997188ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_6))))));
                                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_0 - 1] [i_1] [i_2] [i_0] [i_4])) ? (((/* implicit */int) arr_10 [i_3] [i_0] [i_2] [i_1 - 2])) : (arr_4 [i_0] [i_0])));
                                arr_16 [i_0] [i_1] [i_1] [i_0] [i_4 - 1] [i_1] [i_0] = ((/* implicit */unsigned int) ((134215680ULL) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5)))))));
                            }
                            /* vectorizable */
                            for (unsigned short i_5 = 3; i_5 < 12; i_5 += 3) /* same iter space */
                            {
                                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_3 [i_1 + 1] [i_1] [i_1])) : (((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1] [i_1]))));
                                var_16 = ((/* implicit */short) ((var_3) ^ (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1 + 1] [i_1 + 2])))));
                            }
                            /* vectorizable */
                            for (unsigned short i_6 = 3; i_6 < 12; i_6 += 3) /* same iter space */
                            {
                                var_17 = ((/* implicit */long long int) arr_8 [i_0]);
                                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) -8173610558652048696LL)) ? (arr_11 [(unsigned char)8] [(unsigned short)8] [i_2] [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))))));
                                var_19 = ((/* implicit */_Bool) ((arr_13 [i_6 - 2] [(signed char)1] [i_6] [i_3] [i_1]) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_0] [i_3] [i_3] [i_3] [i_3]))))))));
                                var_20 = ((/* implicit */unsigned char) max((var_20), (arr_2 [i_1 + 2])));
                                var_21 -= ((/* implicit */unsigned short) (+(((arr_4 [2LL] [2LL]) % (((/* implicit */int) (_Bool)1))))));
                            }
                            /* vectorizable */
                            for (unsigned short i_7 = 3; i_7 < 12; i_7 += 3) /* same iter space */
                            {
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 15793581114737157108ULL)) ? (((/* implicit */int) arr_1 [i_0 + 2] [i_1 + 1])) : (((/* implicit */int) arr_1 [i_0 - 1] [i_1 - 2]))));
                                var_23 = ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0]))))) >= (arr_8 [i_0 - 3]));
                                var_24 = ((/* implicit */signed char) ((((/* implicit */int) arr_19 [i_0] [i_0])) / (((/* implicit */int) arr_9 [i_0]))));
                                var_25 = ((unsigned short) var_9);
                                var_26 = ((((/* implicit */_Bool) ((unsigned int) 439600875))) ? (((/* implicit */int) ((var_3) >= (((/* implicit */long long int) arr_8 [i_3]))))) : (((int) var_5)));
                            }
                            var_27 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */unsigned long long int) 3556381112219605157LL)) : (12269829108716573883ULL)));
                        }
                    } 
                } 
                var_28 = ((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), ((-(9223372036854775807LL)))));
            }
        } 
    } 
}
