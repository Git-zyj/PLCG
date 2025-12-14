/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137511
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
    for (unsigned short i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 7; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned short) ((signed char) max((arr_1 [i_0 - 1]), (arr_1 [i_0 - 3]))));
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    arr_6 [0ULL] &= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) > (max((max((arr_1 [i_0]), (((/* implicit */int) var_3)))), (((/* implicit */int) arr_5 [(unsigned char)2]))))));
                    var_17 = ((/* implicit */unsigned long long int) ((unsigned char) (!(((/* implicit */_Bool) arr_3 [i_2] [i_1 + 3])))));
                }
                for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    var_18 += ((/* implicit */long long int) max(((-(var_13))), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_9)) ? (var_9) : (var_10))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        arr_12 [i_0] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */int) (_Bool)1)) == (1478299788))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 3) 
                        {
                            arr_15 [i_0] [i_1] [i_3] [i_0] [i_5] = ((/* implicit */unsigned int) var_3);
                            arr_16 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 + 3] [i_1 + 2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_4 [i_1 + 1] [i_0] [i_1 - 1] [i_1 + 1]))));
                        }
                        for (unsigned long long int i_6 = 3; i_6 < 9; i_6 += 2) 
                        {
                            arr_20 [i_0] [i_0] = 0LL;
                            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)5411)) || (((/* implicit */_Bool) var_10)))))));
                            arr_21 [i_6] [(short)8] [i_6] [i_4] [i_4] &= ((/* implicit */unsigned char) ((unsigned int) var_11));
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_1 - 1])) ? (arr_0 [i_0 - 3] [i_1 + 2]) : (((/* implicit */unsigned int) arr_1 [i_0 - 2])))))));
                        }
                    }
                    /* LoopSeq 4 */
                    for (int i_7 = 2; i_7 < 9; i_7 += 2) 
                    {
                        arr_24 [6LL] [i_0] [i_0] [i_7] [i_0] [i_0] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_14))))));
                        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) 5031783982478761739ULL))));
                    }
                    /* vectorizable */
                    for (long long int i_8 = 1; i_8 < 7; i_8 += 2) 
                    {
                        var_22 &= ((/* implicit */signed char) (+(((((/* implicit */unsigned long long int) 8191U)) - (18446744073709551610ULL)))));
                        var_23 -= ((/* implicit */unsigned char) var_1);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 3) 
                        {
                            arr_29 [i_0] [i_1] [i_3] [i_8] [i_0] = ((/* implicit */unsigned short) (-(arr_28 [i_0] [i_1] [i_3] [i_0 - 1] [i_8 + 1])));
                            arr_30 [i_0] [i_1] [i_3] [i_8] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned short) var_5)));
                            arr_31 [i_0] [i_1] [i_3] [i_8] [0ULL] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))));
                        }
                    }
                    for (short i_10 = 0; i_10 < 10; i_10 += 2) 
                    {
                        var_24 *= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 0LL)) ? (((((/* implicit */_Bool) 0LL)) ? (16LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-106)))))));
                        var_25 ^= ((/* implicit */short) max((((/* implicit */int) (signed char)11)), (max(((-2147483647 - 1)), (((/* implicit */int) (unsigned char)0))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_11 = 2; i_11 < 6; i_11 += 1) 
                        {
                            arr_36 [i_10] [i_10] [i_3] [6ULL] [i_11] &= ((/* implicit */int) min((((/* implicit */unsigned long long int) ((_Bool) (+(((/* implicit */int) (signed char)-112)))))), (16543429093764580193ULL)));
                            arr_37 [i_0] [i_0] [i_3] [i_10] = ((/* implicit */unsigned char) max((max((((2780621144U) * (var_1))), (((((/* implicit */_Bool) var_15)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))), (((((/* implicit */_Bool) (-(var_1)))) ? (134217727U) : (((/* implicit */unsigned int) ((var_9) / (2147483647))))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_12 = 2; i_12 < 6; i_12 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((unsigned short) var_15)))));
                            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)161)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_13)))) ? (arr_2 [i_0 + 1] [i_0 - 1] [i_0 + 1]) : (((((/* implicit */int) var_14)) - (((/* implicit */int) (_Bool)0))))));
                            var_28 += ((((/* implicit */int) arr_22 [i_0 - 3] [(signed char)7] [(signed char)7] [i_1 - 1] [i_12])) - (((/* implicit */int) var_12)));
                            var_29 = ((/* implicit */int) ((((/* implicit */_Bool) arr_35 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 - 1] [i_0 - 3])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_0] [i_0] [i_0 - 2] [i_0] [i_0 + 1] [i_0 - 1])))));
                        }
                        var_30 = ((/* implicit */unsigned long long int) (((-(arr_2 [i_1 + 3] [i_10] [i_10]))) & (((((/* implicit */_Bool) var_7)) ? (arr_2 [i_1 + 1] [i_1 + 1] [i_1]) : (((/* implicit */int) var_4))))));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_14 = 0; i_14 < 10; i_14 += 2) 
                        {
                            arr_45 [i_0] [i_13] [i_3] [i_1] [i_0] [i_0] = max((((((/* implicit */int) ((((/* implicit */unsigned int) arr_26 [i_0] [i_0] [i_3] [i_13] [i_14])) >= (var_1)))) % (((/* implicit */int) (unsigned short)240)))), ((~(((/* implicit */int) var_5)))));
                            arr_46 [i_0] [7ULL] [i_3] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((7568906782487185898ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (12ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)188)) & (((/* implicit */int) (short)26575)))))))) ? (((/* implicit */int) ((_Bool) (unsigned char)68))) : (((/* implicit */int) ((_Bool) arr_8 [i_0]))));
                            var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) (-(((/* implicit */int) var_8)))))))))));
                            arr_47 [i_0] [i_14] [i_1] [i_0] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) & (var_2))));
                            arr_48 [i_0] [i_1] [i_3] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) ((short) (signed char)56)))) ? (((((/* implicit */_Bool) arr_10 [i_0 + 1])) ? (((/* implicit */int) arr_27 [i_0 - 2] [i_1] [i_1] [i_1] [i_1 + 1] [i_3] [i_13])) : (((/* implicit */int) arr_27 [i_0 + 1] [i_0] [i_1] [i_1] [i_1 + 2] [i_3] [i_14])))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((((/* implicit */int) (unsigned char)9)) << (((319280603) - (319280592))))) : (((/* implicit */int) arr_33 [i_1 + 2]))))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 1) 
                        {
                            arr_53 [i_0] [i_3] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((signed char) (-(((/* implicit */int) var_14)))))) + (((/* implicit */int) ((unsigned short) arr_43 [i_0] [i_1] [i_1] [i_1 - 1] [i_0 - 3])))));
                            arr_54 [i_1] [i_3] [i_0] [(signed char)3] = ((/* implicit */signed char) min((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) / (var_7))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)59399)) : (((/* implicit */int) (short)-28570)))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_16 = 0; i_16 < 10; i_16 += 2) 
                        {
                            arr_58 [i_0] [i_16] [i_3] [i_3] [i_3] &= ((/* implicit */_Bool) (-(var_2)));
                            var_32 = ((/* implicit */int) var_1);
                            var_33 = ((/* implicit */signed char) (-(2147483647)));
                            var_34 = ((/* implicit */unsigned char) ((unsigned long long int) arr_19 [i_0 + 1]));
                        }
                        arr_59 [i_0] = ((/* implicit */unsigned long long int) var_14);
                        var_35 = (+(((((/* implicit */_Bool) arr_44 [i_13] [i_1] [i_3] [i_13])) ? (((/* implicit */int) arr_44 [i_3] [i_3] [i_3] [i_3])) : (((/* implicit */int) var_12)))));
                        arr_60 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) var_4))));
                    }
                }
            }
        } 
    } 
    var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */int) (unsigned char)4)))) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((long long int) var_2))));
}
