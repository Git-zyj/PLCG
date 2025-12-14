/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124405
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */int) arr_1 [i_1 - 2]);
                var_18 += ((/* implicit */short) arr_0 [(unsigned short)17] [i_0 - 1]);
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    arr_7 [1LL] [i_1] [i_1] [i_1] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (arr_3 [i_0 + 1]) : (arr_3 [i_0 - 2]))), (((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0]))));
                    var_19 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_2] [i_2]))) / (2147483584U))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) 0LL))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2])) ? (0LL) : (((/* implicit */long long int) arr_3 [i_0])))))))))));
                    var_20 = ((/* implicit */int) ((131071U) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)-5627)))));
                    /* LoopSeq 2 */
                    for (int i_3 = 1; i_3 < 20; i_3 += 3) 
                    {
                        var_21 += ((/* implicit */unsigned int) arr_1 [i_0]);
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) /* same iter space */
                        {
                            arr_13 [i_0] [i_1] [i_2] [(_Bool)1] [(_Bool)1] [i_2] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_0 - 1])) ? (((((/* implicit */_Bool) arr_6 [i_0 - 1])) ? (arr_6 [i_0 - 1]) : (arr_6 [i_0 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0 - 2])) || (((/* implicit */_Bool) arr_6 [i_0 - 2]))))))));
                            var_22 = ((/* implicit */unsigned int) arr_4 [i_1] [i_2] [i_3] [i_4]);
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) arr_9 [i_0 + 1] [i_1 + 1] [i_3] [i_4]))));
                            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) arr_10 [i_0] [i_1 - 2] [i_0] [i_3 - 1] [i_0]))));
                            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) (short)-32759))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 21; i_5 += 1) /* same iter space */
                        {
                            var_26 = ((/* implicit */signed char) max((arr_11 [i_0] [i_1 - 1] [i_2] [15U] [i_5]), (((max((-1LL), (9223372036854775807LL))) == (((/* implicit */long long int) ((/* implicit */int) (short)-13493)))))));
                            arr_16 [i_0] [i_5] [i_2] [i_5] [i_0] = ((/* implicit */short) ((((((/* implicit */int) (unsigned short)1928)) < (-872740978))) ? (((((/* implicit */long long int) ((int) arr_15 [i_5]))) / (((arr_11 [i_0] [i_1 - 2] [i_2] [i_0] [i_5]) ? (((/* implicit */long long int) ((/* implicit */int) (short)-18733))) : (-1LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)60513)) > (((/* implicit */int) (signed char)84))))))));
                            var_27 = ((/* implicit */short) ((arr_11 [18] [i_0] [i_0 - 1] [i_1 + 1] [i_1 + 1]) ? (((((/* implicit */_Bool) max((arr_6 [i_0]), (((/* implicit */long long int) arr_3 [i_2]))))) ? (((/* implicit */long long int) (~(arr_2 [i_2] [i_3 + 1] [i_5])))) : (((((/* implicit */_Bool) 872740978)) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_5]))) : (-23LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0 - 1] [i_3 - 1] [i_1 - 1] [i_3] [i_5])) ? (arr_10 [i_0 - 1] [i_3 + 1] [i_1 - 2] [i_3 + 1] [i_5]) : (arr_10 [i_0 - 2] [i_3 - 1] [i_1 + 1] [i_3 - 1] [i_5]))))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 21; i_6 += 1) /* same iter space */
                        {
                            var_28 = ((/* implicit */unsigned long long int) max((((((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_6 [(unsigned short)10]) : (((/* implicit */long long int) -1755582296)))) % (((/* implicit */long long int) arr_14 [i_0] [i_1] [i_0] [i_2] [(_Bool)1] [i_3 + 1] [i_6])))), (((/* implicit */long long int) arr_11 [11] [i_1] [(short)1] [i_1] [11]))));
                            arr_19 [i_0] [i_1] [i_2] [9U] [14U] = ((/* implicit */int) min((((/* implicit */long long int) -1755582320)), (0LL)));
                            var_29 ^= ((/* implicit */_Bool) max((min((((/* implicit */long long int) arr_8 [(unsigned char)2] [i_1 + 1] [i_1] [i_1 + 1] [i_1] [i_1 - 2])), (26LL))), (((/* implicit */long long int) arr_14 [i_0] [i_0] [i_1] [i_0] [i_3] [i_1] [i_6]))));
                            var_30 ^= ((/* implicit */int) 556189395978175961LL);
                            arr_20 [(unsigned short)8] [i_3] [i_6] = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((arr_0 [i_1 - 2] [i_3 + 1]), (arr_0 [i_1 + 1] [i_3 - 1])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 - 2] [i_3 - 1]))) + (4398046511100ULL)))));
                        }
                        arr_21 [i_0] [i_0] [17] = ((/* implicit */unsigned char) 18446739675663040513ULL);
                    }
                    for (unsigned short i_7 = 2; i_7 < 19; i_7 += 3) 
                    {
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1386556560)) ? (((/* implicit */unsigned long long int) 706146321)) : (1886445387024810725ULL)));
                        /* LoopSeq 4 */
                        for (unsigned int i_8 = 1; i_8 < 18; i_8 += 1) 
                        {
                            var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) arr_14 [i_0] [i_1] [16] [i_2] [(unsigned short)8] [i_1 + 1] [i_1 - 2]))));
                            var_33 += ((/* implicit */unsigned int) ((max((((((/* implicit */int) arr_1 [12])) / (arr_10 [i_0] [i_1] [i_0] [i_7] [i_7]))), (arr_23 [i_0 + 1] [i_0]))) > (((/* implicit */int) min((((short) arr_3 [(unsigned char)16])), (((/* implicit */short) ((((/* implicit */int) arr_22 [i_0] [i_0 - 1] [i_0] [i_0] [i_0])) == (((/* implicit */int) (unsigned short)29326))))))))));
                            var_34 -= ((/* implicit */_Bool) arr_17 [i_0] [i_8] [i_2] [i_0] [i_8] [i_2]);
                            arr_26 [i_7] = ((/* implicit */_Bool) (unsigned short)1937);
                        }
                        for (unsigned char i_9 = 0; i_9 < 21; i_9 += 2) /* same iter space */
                        {
                            var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 271563073)) ? (arr_3 [i_0 - 2]) : (min((153405985), (((/* implicit */int) (signed char)-104))))));
                            arr_29 [i_7] = arr_4 [5U] [i_7] [i_1 - 2] [i_1 - 2];
                        }
                        for (unsigned char i_10 = 0; i_10 < 21; i_10 += 2) /* same iter space */
                        {
                            arr_32 [i_7] [i_2] [i_2] [i_2] = ((/* implicit */int) arr_2 [i_0 - 2] [i_1] [i_0]);
                            arr_33 [i_0 - 2] [i_7] [i_2] [i_7] [i_10] = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_14 [i_0] [i_1] [i_2] [i_7] [i_7] [i_10] [i_10]), (((/* implicit */unsigned int) arr_23 [i_7] [i_7]))))) ? (max((((/* implicit */int) arr_1 [i_0])), (arr_23 [i_7] [i_7]))) : (((/* implicit */int) min(((_Bool)0), ((_Bool)0))))))), (max((((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_10])) > (((/* implicit */int) arr_9 [i_0] [i_1 - 2] [i_2] [i_7]))))), (arr_27 [i_7] [i_7] [i_7] [i_7] [i_0 - 1])))));
                        }
                        for (short i_11 = 0; i_11 < 21; i_11 += 2) 
                        {
                            var_36 = ((/* implicit */unsigned int) arr_8 [i_11] [i_7] [i_2] [i_1] [i_0] [i_0 + 1]);
                            arr_36 [i_7] [i_1] = ((/* implicit */unsigned long long int) max((arr_25 [i_0] [i_1 - 2] [i_2] [i_7] [i_7] [i_11]), (((/* implicit */long long int) max((((/* implicit */int) (_Bool)0)), (((((/* implicit */_Bool) (unsigned short)60553)) ? (((/* implicit */int) (_Bool)0)) : (-153405960))))))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned short i_12 = 0; i_12 < 21; i_12 += 2) 
                        {
                            arr_39 [i_0] [i_1] [i_7] [i_7 - 1] [i_0] = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_7] [i_7] [i_7] [i_7 + 2] [i_7 - 1] [i_7]))) / (9223372036854775804LL))) <= (min((((/* implicit */long long int) arr_8 [(short)10] [i_7] [i_7 - 2] [i_7] [i_7 + 2] [i_7])), (arr_37 [i_2] [i_7] [i_7] [i_7] [i_7 - 2])))));
                            var_37 = ((/* implicit */short) ((14883721303832692180ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_0] [i_1] [i_7 - 2] [i_7 - 2] [i_12])))));
                        }
                        for (long long int i_13 = 1; i_13 < 20; i_13 += 3) 
                        {
                            arr_42 [i_7] = ((/* implicit */unsigned long long int) max((max((921980127U), (((/* implicit */unsigned int) arr_5 [3ULL] [i_1] [i_0 - 2] [i_0])))), (((/* implicit */unsigned int) (_Bool)1))));
                            var_38 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_27 [i_0] [i_7] [i_2] [i_7] [i_13 + 1])) ? (arr_27 [i_0 - 1] [i_7] [i_2] [i_7] [i_13 + 1]) : (arr_27 [i_0 + 1] [i_7] [i_2] [i_7] [(short)18]))) | (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_8 [i_13 + 1] [i_13 + 1] [i_13 - 1] [i_13 - 1] [i_13 + 1] [i_13 + 1])), (min((((/* implicit */unsigned short) arr_30 [i_7] [i_1] [i_1] [i_1])), ((unsigned short)39686)))))))));
                            arr_43 [i_7] = ((/* implicit */short) max((min((((/* implicit */unsigned int) arr_5 [i_1] [i_1] [i_7 + 2] [i_7 - 2])), (arr_24 [(unsigned char)17] [i_2] [i_7 + 1] [i_7] [i_2]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-104)) ? (((/* implicit */int) (_Bool)1)) : (-1560629194))))));
                        }
                        for (int i_14 = 2; i_14 < 17; i_14 += 2) 
                        {
                            arr_47 [i_0] [i_1 - 2] [i_2] [i_14] [i_14] &= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_28 [i_0 - 1] [i_0 - 1] [i_1 + 1] [i_7] [i_0] [(short)14] [i_14 + 4])) > (max((((/* implicit */int) (_Bool)1)), (-153405960)))))) | (((/* implicit */int) ((_Bool) max((arr_15 [i_2]), (((/* implicit */short) arr_46 [i_0] [i_0] [(unsigned short)19] [i_2] [(short)3] [i_14]))))))));
                            arr_48 [i_7] [i_1 + 1] [0LL] [i_7] [i_14] = max((((/* implicit */long long int) ((_Bool) 1843721781U))), (max((((/* implicit */long long int) 2147483647)), (-5LL))));
                        }
                    }
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_15 = 4; i_15 < 20; i_15 += 3) 
    {
        arr_51 [i_15] = ((/* implicit */unsigned short) (_Bool)1);
        var_39 &= ((/* implicit */int) ((((((/* implicit */_Bool) 1516615402)) ? (-1560629194) : (((/* implicit */int) (_Bool)1)))) >= (((((/* implicit */int) arr_41 [i_15 + 1] [i_15 + 1])) % (((/* implicit */int) arr_41 [i_15 - 2] [i_15 + 1]))))));
    }
    /* LoopNest 2 */
    for (long long int i_16 = 0; i_16 < 16; i_16 += 3) 
    {
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            {
                arr_57 [i_16] = ((/* implicit */unsigned short) max((((int) 921980135U)), (((/* implicit */int) (_Bool)1))));
                arr_58 [i_16] [i_17] [i_17] = ((/* implicit */unsigned int) ((arr_14 [i_16] [i_17] [i_17] [i_16] [i_17] [i_16] [i_16]) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_30 [i_16] [i_17] [i_16] [i_16])) ? (((/* implicit */int) arr_30 [i_16] [i_17] [i_17] [i_17])) : (((/* implicit */int) arr_30 [i_16] [i_17] [i_17] [i_16])))))));
                var_40 ^= ((/* implicit */unsigned short) (_Bool)1);
            }
        } 
    } 
    var_41 += ((((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) (_Bool)1))))) / (((/* implicit */int) var_11)));
}
