/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117403
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */_Bool) var_1);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 22; i_3 += 3) 
                    {
                        arr_8 [9] [i_3] [i_2] [i_3] = ((/* implicit */int) ((long long int) (+(((/* implicit */int) var_3)))));
                        var_12 &= ((((/* implicit */_Bool) var_1)) ? (arr_3 [i_2 + 3] [i_1] [i_3 + 1]) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)4012))))));
                        /* LoopSeq 4 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_12 [i_0] [i_3] [i_2] [i_3] [i_0] = ((/* implicit */signed char) var_7);
                            var_13 = ((/* implicit */int) (unsigned char)38);
                            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_3] [i_3] [i_3] [i_3])) ? (arr_9 [i_2] [i_2] [i_2] [i_2] [i_3 + 2] [i_2] [i_3]) : (arr_9 [i_0] [i_0] [i_0] [i_0] [i_3 - 1] [11] [i_3])));
                            var_15 = (_Bool)1;
                            var_16 = ((/* implicit */unsigned long long int) (~(var_4)));
                        }
                        for (int i_5 = 1; i_5 < 22; i_5 += 4) 
                        {
                            var_17 = arr_14 [i_5] [i_3] [i_2 + 2];
                            arr_15 [i_3] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_3 [i_0] [19ULL] [19ULL])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_5] [i_0] [i_2] [i_0] [i_0])))))));
                            var_18 = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)30)) >> (((arr_3 [(unsigned char)23] [(unsigned char)23] [i_3]) + (539339019))))) < (((((/* implicit */_Bool) arr_14 [i_3] [i_3] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (var_4)))));
                        }
                        for (int i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            arr_18 [i_0] [i_1] [i_3] [i_3] [i_6] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (arr_7 [i_6] [i_1] [i_3 - 1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) arr_5 [i_3 + 1] [i_3 + 1] [i_2 + 2] [i_3 + 1]))));
                            var_19 = ((/* implicit */int) arr_11 [i_3 - 1] [(_Bool)1] [16LL] [i_1] [i_1] [16LL] [i_1]);
                        }
                        for (unsigned int i_7 = 3; i_7 < 22; i_7 += 4) 
                        {
                            var_20 = ((/* implicit */int) arr_0 [i_3 + 1] [i_7 - 1]);
                            arr_23 [i_3] [i_3] [i_2] = ((/* implicit */unsigned long long int) (-(arr_5 [i_0] [7U] [i_0] [i_3 + 2])));
                            var_21 ^= ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (!(var_7)))));
                            var_22 = ((/* implicit */int) min((var_22), (((int) arr_21 [i_3] [i_3] [i_7 + 1] [i_3] [i_3]))));
                        }
                        /* LoopSeq 4 */
                        for (unsigned short i_8 = 0; i_8 < 24; i_8 += 2) 
                        {
                            var_23 = ((/* implicit */long long int) (~(arr_19 [i_0] [i_2 - 1] [(signed char)2] [i_0] [i_0] [(signed char)2])));
                            arr_26 [4] [i_3] [i_1] [i_1] [i_2] [i_3 - 1] [i_1] = ((((/* implicit */int) arr_4 [i_2 + 2])) - (((/* implicit */int) arr_4 [i_2 - 1])));
                            arr_27 [i_1] [i_3] [i_2] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (var_1) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)16)) / (arr_3 [i_0] [i_0] [i_0]))))));
                        }
                        for (signed char i_9 = 3; i_9 < 22; i_9 += 3) 
                        {
                            var_24 -= ((((/* implicit */int) arr_10 [(unsigned char)17] [i_0] [i_2 + 1] [(unsigned char)17] [i_9 - 1])) != (((/* implicit */int) arr_10 [i_2] [i_0] [i_2 + 2] [15U] [i_9])));
                            var_25 = ((/* implicit */signed char) arr_29 [i_9] [i_2] [i_9] [i_9 - 2] [i_2] [i_2 + 3]);
                            arr_31 [i_3] = ((/* implicit */int) arr_11 [i_0] [i_2 - 2] [i_2] [i_2] [i_2] [i_2] [i_9 + 1]);
                        }
                        for (long long int i_10 = 1; i_10 < 22; i_10 += 2) 
                        {
                            arr_34 [i_0] [i_1] [i_0] [i_3] [i_10 + 1] = (+(((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_2] [13ULL] [i_1] [i_1])));
                            var_26 = ((/* implicit */int) ((var_7) ? (arr_20 [i_1] [i_0] [i_1] [i_0] [i_1] [i_1] [i_0]) : (arr_20 [i_10] [i_10] [i_3] [i_3 + 2] [i_2] [i_1] [(unsigned short)3])));
                        }
                        for (long long int i_11 = 1; i_11 < 22; i_11 += 2) 
                        {
                            arr_38 [i_3] [i_1] = ((/* implicit */_Bool) (~(arr_1 [i_2 + 3])));
                            arr_39 [i_3] = ((/* implicit */int) ((arr_25 [i_11] [i_11] [i_11 + 1] [i_11 + 2] [i_11]) == (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned char i_12 = 3; i_12 < 20; i_12 += 2) 
                        {
                            var_27 = ((/* implicit */long long int) var_6);
                            var_28 = ((/* implicit */_Bool) (((!((_Bool)1))) ? (2031616) : (((/* implicit */int) arr_2 [i_0]))));
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            arr_45 [i_0] [i_3] [19ULL] [i_3] [19ULL] = ((arr_7 [i_0] [i_1] [i_3 + 2] [i_3] [i_13]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_3] [i_1] [i_1] [i_1] [i_3] [i_3] [i_0])))))));
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_6) ? (1865074756) : (-2031617)))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_43 [i_1] [i_3] [i_3] [i_3] [i_2 - 2] [i_1] [i_0]))))) : (arr_20 [(_Bool)1] [i_13] [i_13] [i_13] [i_3 - 1] [i_3 + 1] [i_3 + 1])));
                        }
                        for (int i_14 = 4; i_14 < 23; i_14 += 3) 
                        {
                            var_30 = ((/* implicit */_Bool) (+(((/* implicit */int) ((2031608) >= (2031616))))));
                            var_31 ^= ((/* implicit */long long int) (((!(arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) (unsigned char)147))))));
                        }
                    }
                    for (int i_15 = 1; i_15 < 23; i_15 += 4) 
                    {
                        arr_51 [i_1] = ((_Bool) (~(arr_19 [i_0] [i_15 - 1] [i_1] [14ULL] [i_15 - 1] [i_15])));
                        /* LoopSeq 1 */
                        for (int i_16 = 2; i_16 < 22; i_16 += 4) 
                        {
                            var_32 = (+(((/* implicit */int) (unsigned char)225)));
                            arr_56 [i_0] [i_1] [i_0] [i_2] [i_15] [i_16 + 2] = ((/* implicit */unsigned long long int) min((((/* implicit */int) max((arr_48 [i_0] [i_1] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_16 - 2]), (arr_48 [i_16 + 2] [i_15] [i_15] [i_2 + 3] [i_0] [i_0])))), ((+(((/* implicit */int) var_6))))));
                        }
                        arr_57 [i_2] = var_8;
                        var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((max((-2031617), (((/* implicit */int) (signed char)127)))) ^ (((arr_21 [i_2] [i_2] [i_2] [i_2] [2ULL]) | (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */int) var_9)) & (arr_1 [i_2 + 1]))))) : (((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) arr_52 [i_15] [i_15 - 1] [i_15 - 1] [i_15 - 1])) : (((/* implicit */int) arr_52 [i_15] [i_15] [i_15 + 1] [i_15 - 1])))))))));
                    }
                    arr_58 [i_1] [i_0] = ((long long int) var_5);
                    var_34 = ((/* implicit */int) max((var_34), (((((((/* implicit */_Bool) arr_46 [(unsigned short)1] [i_2] [i_2 - 2] [i_2 - 2] [i_2 + 1] [i_2 - 2])) ? (arr_46 [i_2] [i_2 - 2] [i_2 - 1] [i_2] [i_2 + 3] [i_2 - 1]) : (arr_46 [i_2 - 2] [i_2 + 3] [i_2] [i_2 + 2] [i_2 + 3] [i_2 + 2]))) + (max((((/* implicit */int) var_2)), (arr_46 [i_2] [i_2] [i_2] [i_2] [i_2 + 1] [i_2 + 3])))))));
                    var_35 = ((/* implicit */int) max((var_35), ((~(((((((var_4) + (2147483647))) << (((((arr_30 [i_2] [i_1] [i_1] [i_1] [i_0] [i_0] [9]) + (1703880335))) - (31))))) & (((((/* implicit */_Bool) var_8)) ? (-2031617) : (((/* implicit */int) (_Bool)1))))))))));
                }
            } 
        } 
    } 
    var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) var_5))))))) : (((((/* implicit */unsigned long long int) var_0)) | (((var_8) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)29)))))))));
    var_37 = ((/* implicit */int) ((((/* implicit */int) (unsigned char)11)) <= (((/* implicit */int) min((((((/* implicit */_Bool) 2147483642)) || (((/* implicit */_Bool) 1211266137)))), ((!(((/* implicit */_Bool) -1666896926)))))))));
    var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) - (0ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) != (-2147483625))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((int) (signed char)117)) <= (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) (_Bool)0)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) -2031617)) : (var_1)))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
}
