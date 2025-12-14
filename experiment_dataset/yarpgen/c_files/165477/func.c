/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165477
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)63))) : (-2792531620340333383LL)))), (((var_4) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))))) ? (((var_8) + (165782323U))) : (var_8)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_17 = ((/* implicit */signed char) arr_1 [i_0 - 2]);
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 9; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_18 *= ((/* implicit */signed char) ((((/* implicit */unsigned int) (+(((/* implicit */int) max((((/* implicit */unsigned char) arr_3 [i_0] [i_0] [i_0])), ((unsigned char)0))))))) | (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) arr_11 [i_0] [i_3] [i_2] [(unsigned char)8] [i_0])) : (((/* implicit */int) (_Bool)1))))), (arr_2 [i_0] [i_0] [i_0])))));
                                var_19 = ((/* implicit */unsigned long long int) min(((signed char)3), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_4 [i_1] [i_0 - 1] [i_2] [i_3 - 1])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        for (int i_6 = 1; i_6 < 11; i_6 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0 + 1] [i_0 + 1] [1LL] [i_0] [i_0])) && (((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)232)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_0 [i_1]))))))))));
                                arr_18 [i_0 - 2] [i_1] [i_0 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_5] [i_6 - 1])) ? (((/* implicit */int) min(((signed char)-68), ((signed char)0)))) : (((/* implicit */int) (unsigned char)255))))) ? ((~(max((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_2])), (arr_14 [i_0] [i_0] [i_0 + 2] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                                arr_19 [i_1] [i_1] [i_1] [i_5] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-26)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) & (var_9))) : (((/* implicit */unsigned long long int) ((int) arr_16 [i_0] [i_0] [i_0] [i_0] [(signed char)4])))))) ? (((unsigned long long int) var_15)) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)118)) >= (((/* implicit */int) (unsigned char)255)))) ? (((/* implicit */unsigned int) max((arr_17 [7ULL] [i_1] [i_2] [i_2] [i_2]), (((/* implicit */int) arr_11 [i_0] [i_0] [(_Bool)1] [i_5] [(unsigned short)7]))))) : (((((/* implicit */_Bool) arr_13 [i_0 + 1] [i_1] [i_2] [i_5] [i_6] [i_2])) ? (var_8) : (arr_15 [i_0] [i_2] [i_0 + 1] [i_5] [i_1])))))));
                                arr_20 [i_0 + 2] [i_0 - 2] [i_0 + 2] [i_1] [i_2] [i_5] [i_0 - 2] = ((/* implicit */unsigned char) ((arr_13 [i_0] [i_1] [i_2] [i_1] [6] [i_5]) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)246))) >= (487406760628116873ULL)))) : (((/* implicit */int) ((arr_14 [i_0] [5LL] [(signed char)9] [i_6 - 1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-77)))))))))));
                                var_21 = ((/* implicit */long long int) (-(((/* implicit */int) arr_8 [i_0] [(_Bool)1] [i_1] [i_0]))));
                            }
                        } 
                    } 
                    arr_21 [i_2] [i_1] [i_2] [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((max((arr_9 [i_1]), (((/* implicit */long long int) arr_3 [i_0] [i_1] [i_2])))), (((/* implicit */long long int) max((arr_12 [i_0] [i_1] [i_0]), (((/* implicit */short) (unsigned char)255)))))))), (((max((arr_13 [i_0 - 2] [i_0 + 1] [i_0 - 2] [i_0 + 1] [(unsigned short)9] [2ULL]), (((/* implicit */unsigned long long int) arr_4 [i_1] [i_1] [i_1] [i_1])))) ^ (((/* implicit */unsigned long long int) min((var_5), (((/* implicit */long long int) (unsigned char)0)))))))));
                }
                arr_22 [i_1] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) (((~(8126464U))) != (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 2]))) * (440066847U))))))));
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 12; i_7 += 3) 
                {
                    for (int i_8 = 0; i_8 < 12; i_8 += 1) 
                    {
                        {
                            arr_28 [i_1] [i_7] [i_1] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_4 [i_1] [i_0 + 1] [i_1] [i_0 + 1])) ? (var_8) : (((/* implicit */unsigned int) arr_4 [i_1] [i_1] [i_7] [(_Bool)0])))), (((/* implicit */unsigned int) ((signed char) arr_4 [i_1] [i_7] [i_7] [i_7])))));
                            /* LoopSeq 3 */
                            for (unsigned int i_9 = 2; i_9 < 11; i_9 += 2) /* same iter space */
                            {
                                var_22 = ((/* implicit */_Bool) max((((/* implicit */int) (signed char)(-127 - 1))), (1337609347)));
                                var_23 = ((/* implicit */int) min((var_23), ((-(((/* implicit */int) (!(((/* implicit */_Bool) max((arr_4 [i_9] [4ULL] [i_7] [8LL]), (((/* implicit */int) (_Bool)1))))))))))));
                                arr_33 [i_0] [i_1] [i_0] [(signed char)1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_5 [i_0] [i_1] [i_7]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)14)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_14 [i_0 - 1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_29 [(unsigned short)5] [(unsigned short)5] [i_7] [i_8] [i_1] [i_9] [10ULL]))))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-9))) != (arr_25 [i_1] [i_1] [i_7] [i_8] [i_7]))))))) : (((((/* implicit */_Bool) 2777877737733751248ULL)) ? (9869099229197717071ULL) : (((/* implicit */unsigned long long int) 2875798160U))))));
                            }
                            for (unsigned int i_10 = 2; i_10 < 11; i_10 += 2) /* same iter space */
                            {
                                var_24 = ((/* implicit */signed char) arr_32 [i_0] [i_1] [i_1] [i_7] [i_7] [i_1] [i_10]);
                                var_25 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_31 [i_0] [i_1] [i_0 + 1] [i_0 + 1] [i_10 - 2]) : (((/* implicit */unsigned long long int) (-(7136795010855089782LL))))))) ? (638190192) : ((+((+(((/* implicit */int) arr_23 [i_10] [i_1] [(_Bool)1] [i_1]))))))));
                                var_26 += ((/* implicit */int) (_Bool)1);
                                arr_38 [i_0 - 1] [i_1] [i_7] [i_0 - 1] [10LL] = min((((((/* implicit */_Bool) ((var_8) + (arr_15 [i_0] [i_1] [i_0] [i_8] [i_0])))) ? (var_9) : (((/* implicit */unsigned long long int) min((4699143404357666647LL), (((/* implicit */long long int) (unsigned char)9))))))), (((/* implicit */unsigned long long int) max((((signed char) (unsigned char)23)), (((/* implicit */signed char) ((((/* implicit */_Bool) -4699143404357666647LL)) || (((/* implicit */_Bool) arr_11 [(signed char)8] [6LL] [10LL] [i_8] [i_8])))))))));
                            }
                            for (unsigned int i_11 = 2; i_11 < 11; i_11 += 2) /* same iter space */
                            {
                                var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_15 [i_11] [i_11 - 1] [i_8] [i_8] [11ULL])), (993788740142189840LL)))))))));
                                arr_41 [i_1] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (signed char)74)) ? (arr_25 [i_1] [i_11] [i_11 - 1] [i_11 - 2] [i_11 + 1]) : (4ULL))), (((/* implicit */unsigned long long int) arr_39 [i_0] [(signed char)10] [i_0] [i_0 - 2] [i_0]))));
                                var_28 = ((/* implicit */signed char) min((((/* implicit */long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(unsigned char)0] [i_1] [(unsigned char)0]))) + (var_8)))))), (((((/* implicit */_Bool) ((signed char) arr_10 [i_0] [i_1] [i_7] [i_8] [i_11]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_0 + 1] [i_0 + 1] [i_0 - 1] [(unsigned char)5] [i_0 - 1]))) : (max((((/* implicit */long long int) 2096126712U)), (arr_32 [i_0] [i_0 + 2] [i_1] [i_7] [i_7] [i_1] [i_11])))))));
                                arr_42 [i_0] [i_0 - 1] [i_1] [i_0] [i_0 - 1] [i_0] [6ULL] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (min((arr_40 [i_8] [i_8] [i_8] [i_8] [i_1] [i_8] [i_8]), (((/* implicit */unsigned long long int) arr_9 [2U])))) : (((/* implicit */unsigned long long int) (+(arr_15 [i_8] [i_8] [i_8] [i_8] [i_8]))))))));
                                arr_43 [i_1] [i_7] = ((/* implicit */signed char) max((arr_14 [i_0] [i_1] [i_0 + 1] [i_8]), (max((arr_14 [i_7] [i_1] [i_0 + 1] [i_8]), (arr_14 [i_0] [i_1] [i_0 + 1] [(unsigned short)1])))));
                            }
                            arr_44 [i_0] [i_1] [(signed char)9] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) ((signed char) arr_17 [i_0] [i_1] [i_7] [i_1] [i_0]))))));
                        }
                    } 
                } 
                var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((unsigned long long int) arr_13 [i_0] [i_1] [(signed char)2] [i_0 - 1] [i_0 + 2] [i_0])))));
            }
        } 
    } 
    var_30 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned long long int) var_13))))) ? (((unsigned long long int) var_7)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)5)) ? (var_0) : (((/* implicit */int) var_14)))))))) ? (var_9) : (((((/* implicit */_Bool) min((((/* implicit */short) (signed char)-14)), ((short)-16384)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)254)), (var_6)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_15)) : (var_9))))));
}
