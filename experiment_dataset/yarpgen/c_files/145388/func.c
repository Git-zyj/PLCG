/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145388
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_6 [i_0] [i_0] [i_0]) ^ (arr_6 [20ULL] [i_1] [i_0])))) ? ((-(arr_6 [i_0] [i_0] [i_1]))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) var_7)) : (arr_6 [i_0] [i_0] [(short)6])))));
                var_11 += ((/* implicit */short) min((((/* implicit */long long int) ((var_9) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)33)))))), (((((/* implicit */long long int) 861003939)) + (((((/* implicit */_Bool) (unsigned short)39169)) ? (arr_1 [i_0] [(short)15]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39174)))))))));
                var_12 = ((/* implicit */unsigned char) var_3);
                /* LoopSeq 3 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    var_13 = ((/* implicit */short) (+(((/* implicit */int) arr_0 [(unsigned char)20] [i_1]))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            var_14 = 861003937;
                            var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((short) arr_13 [i_1] [i_2] [5] [i_4])))));
                        }
                        for (short i_5 = 0; i_5 < 22; i_5 += 3) 
                        {
                            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-17505)) ? (((/* implicit */int) arr_11 [i_2] [i_2] [i_2] [i_2] [(short)7])) : (861003957)));
                            var_17 *= ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) 4974499483713560100LL)) ? (arr_13 [i_0] [i_0] [(unsigned char)0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (short)-9708))))));
                            var_18 = ((((/* implicit */_Bool) arr_16 [(_Bool)0] [i_3] [i_2] [i_1] [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_16 [i_0] [i_3] [(signed char)1] [(signed char)1] [(short)6])));
                        }
                        for (int i_6 = 2; i_6 < 21; i_6 += 3) 
                        {
                            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_6 - 2] [i_6 + 1])) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2]))) : (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_6 + 1] [i_3] [15U])))));
                            arr_21 [(unsigned char)17] [i_1] [i_1] [i_1] [i_6] = ((signed char) ((((/* implicit */_Bool) (short)-611)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_0)));
                        }
                        arr_22 [i_0] [i_1] [(unsigned char)8] [i_1] = ((/* implicit */unsigned short) ((unsigned int) arr_19 [i_1] [(unsigned char)18] [(unsigned char)18] [i_0] [i_1]));
                        var_20 = ((/* implicit */unsigned short) -6138123080033294875LL);
                    }
                    for (unsigned char i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        var_21 = ((/* implicit */int) min((((((/* implicit */_Bool) 861003937)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_6 [i_0] [(unsigned char)18] [i_0]))), (((/* implicit */unsigned long long int) var_7))));
                        arr_26 [17ULL] [i_7] [6U] [11LL] [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65533)) || (((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_2]))))) << (((861003941) - (861003912)))));
                        var_22 = arr_1 [i_0] [(unsigned short)9];
                        /* LoopSeq 1 */
                        for (signed char i_8 = 0; i_8 < 22; i_8 += 2) 
                        {
                            arr_29 [i_0] [i_0] [18] [i_0] [i_8] = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)39161)) | (((/* implicit */int) (signed char)30))))) ? (((var_9) % (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (((((/* implicit */unsigned int) arr_18 [20U] [(short)13] [i_2] [i_7] [i_1] [i_1] [i_1])) * (arr_10 [i_8] [2] [i_1] [i_0]))));
                            var_23 = ((/* implicit */signed char) ((((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])) <= (((/* implicit */int) var_10))));
                            arr_30 [i_0] [i_8] [i_7] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */long long int) max((var_9), (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) 861003939))))))))));
                        }
                    }
                }
                for (long long int i_9 = 2; i_9 < 21; i_9 += 1) 
                {
                    var_24 &= ((/* implicit */unsigned int) (short)7);
                    /* LoopSeq 1 */
                    for (int i_10 = 3; i_10 < 21; i_10 += 4) 
                    {
                        var_25 = ((/* implicit */_Bool) ((((((-1368608955) / (((/* implicit */int) arr_15 [i_9 + 1] [(unsigned short)9] [7U] [(signed char)11] [i_10 + 1])))) + (2147483647))) << ((((-(var_2))) - (2470499983461266746LL)))));
                        var_26 = (~(((/* implicit */int) arr_5 [(unsigned char)14] [(unsigned char)14] [(unsigned char)14])));
                        /* LoopSeq 2 */
                        for (signed char i_11 = 0; i_11 < 22; i_11 += 1) /* same iter space */
                        {
                            var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) 1697033841U))));
                            var_28 = ((/* implicit */unsigned int) max((var_28), (var_7)));
                        }
                        for (signed char i_12 = 0; i_12 < 22; i_12 += 1) /* same iter space */
                        {
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_12 [i_0])) - (((((/* implicit */int) arr_12 [i_0])) + (((/* implicit */int) var_1))))));
                            var_30 = ((/* implicit */unsigned long long int) (~(((long long int) var_7))));
                            var_31 = ((/* implicit */unsigned int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) / (var_0))));
                            var_32 = ((/* implicit */long long int) min((var_32), (max((((((((/* implicit */_Bool) arr_36 [(_Bool)1] [i_1] [(unsigned short)14] [18U] [(short)8])) ? (-1043060685503582460LL) : (((/* implicit */long long int) var_6)))) / (((/* implicit */long long int) max((4061608491U), (((/* implicit */unsigned int) var_8))))))), (((/* implicit */long long int) arr_36 [i_0] [i_1] [i_9] [i_1] [i_12]))))));
                        }
                        var_33 -= ((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_1] [i_10] [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_32 [i_1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)22654)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10))))) ? (((((/* implicit */int) arr_23 [i_0] [i_1] [i_9] [i_0] [i_9 - 2] [i_9 - 2])) | (((/* implicit */int) arr_19 [0U] [(unsigned char)4] [(_Bool)1] [0U] [i_1])))) : (((int) var_7)))))));
                    }
                }
                for (unsigned short i_13 = 0; i_13 < 22; i_13 += 2) 
                {
                    var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((-(arr_37 [i_13] [i_13]))), (((((/* implicit */long long int) ((/* implicit */int) (signed char)-11))) / (var_2)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_10)), (var_1))))) : ((-(((unsigned int) var_8))))));
                    arr_43 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) -861003938)) ? (((/* implicit */long long int) 861003939)) : (16777215LL)));
                }
                var_35 = ((/* implicit */unsigned char) var_4);
            }
        } 
    } 
    var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) var_6))));
}
