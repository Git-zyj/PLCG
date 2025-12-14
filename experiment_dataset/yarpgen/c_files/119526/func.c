/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119526
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
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_15)) + (((/* implicit */int) var_2)))) % (((((/* implicit */_Bool) (unsigned short)2894)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11))))))), (max((((var_11) ? (var_1) : (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) >> (((/* implicit */int) var_11))))))))))));
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((max((var_5), (var_17))) && (((/* implicit */_Bool) ((((((/* implicit */int) var_7)) > (var_4))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_14))) : (((/* implicit */unsigned long long int) 1200466816))))))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_20 = (!(((/* implicit */_Bool) (-(((/* implicit */int) var_5))))));
                                arr_13 [i_3] = ((/* implicit */signed char) min((var_14), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_9)) : (var_0))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (signed char i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        arr_16 [i_0] [i_0] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (((~(((/* implicit */int) (unsigned short)26749)))) * (((/* implicit */int) arr_14 [i_0 + 1]))))) < (max((((/* implicit */unsigned long long int) arr_6 [i_0 + 1])), (((arr_11 [i_0] [i_2] [i_0] [i_5] [i_0]) >> (((/* implicit */int) var_11))))))));
                        var_21 = ((/* implicit */int) (unsigned char)127);
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (signed char)(-127 - 1)))));
                        var_23 += ((/* implicit */signed char) arr_9 [i_0] [i_0] [i_1] [i_5]);
                    }
                    /* vectorizable */
                    for (unsigned char i_6 = 0; i_6 < 14; i_6 += 4) 
                    {
                        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) arr_8 [i_0] [i_1] [i_2] [i_1]))));
                        arr_19 [i_6] [(short)2] = ((/* implicit */short) ((((((/* implicit */int) var_11)) >> (((var_1) - (3216310994844063671ULL))))) * (((((/* implicit */int) var_6)) >> (((/* implicit */int) arr_1 [i_2]))))));
                        arr_20 [i_0] [i_1] [i_2] [i_2] [i_6] = ((/* implicit */long long int) var_0);
                    }
                    for (signed char i_7 = 1; i_7 < 13; i_7 += 4) 
                    {
                        var_25 ^= (((~(((/* implicit */int) (signed char)-106)))) * (((/* implicit */int) var_6)));
                        /* LoopSeq 3 */
                        for (unsigned short i_8 = 4; i_8 < 13; i_8 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((((((/* implicit */int) (signed char)-95)) + (2147483647))) >> (((/* implicit */int) arr_14 [i_0 - 1])))) >> (((((/* implicit */int) arr_2 [i_0] [i_0])) >> (((/* implicit */int) var_3))))))), (min((min((((/* implicit */unsigned int) var_0)), (arr_18 [i_7] [i_1] [i_2] [i_8] [i_2]))), (((/* implicit */unsigned int) ((((/* implicit */long long int) arr_23 [i_0] [i_1] [(signed char)5] [i_7] [i_8] [i_8])) < (arr_0 [i_2])))))))))));
                            arr_27 [i_0] [i_1] [i_2] [i_7] [i_8] = ((/* implicit */unsigned long long int) min((((/* implicit */int) min((var_6), (arr_1 [i_7 + 1])))), (((((/* implicit */int) arr_1 [i_7 - 1])) | (((/* implicit */int) var_16))))));
                            arr_28 [i_0] [i_0] [i_0 - 2] [i_0] [i_7] [i_0 - 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (var_8)))) ? (((((((/* implicit */int) (signed char)-95)) + (2147483647))) >> ((((~(((/* implicit */int) (signed char)15)))) + (23))))) : (((/* implicit */int) (unsigned char)171))));
                            arr_29 [i_0] [i_1] [i_2] [i_7] [i_7] = (-((~(max((arr_24 [i_0] [i_0] [i_7] [i_0] [i_0]), (1460594530))))));
                        }
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            arr_33 [i_1] [i_1] [i_2] [i_0] [i_9] [i_7] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_16))))) ? (((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */int) (unsigned short)2911)))) : (((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) (short)-23211))))))))));
                            arr_34 [i_9] [i_7] [(unsigned char)7] [i_7] [i_0 + 1] = ((/* implicit */unsigned long long int) ((arr_11 [i_2] [i_2] [i_2] [i_2] [i_2]) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1576325024U)) ? (((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_7)))) : ((~(((/* implicit */int) arr_3 [i_9 - 1] [i_0] [i_2])))))))));
                            arr_35 [i_0] |= ((/* implicit */signed char) max((((((/* implicit */int) arr_25 [i_0] [i_1] [i_2] [i_9 - 1] [i_9])) >> (((max((((/* implicit */unsigned int) var_7)), (arr_23 [i_0 - 2] [i_0 - 1] [i_1] [i_2] [i_7] [i_9]))) - (2165546146U))))), ((~(((/* implicit */int) var_16))))));
                            arr_36 [i_7] [i_7] [i_7] = ((/* implicit */signed char) arr_11 [i_0] [i_1] [i_2] [i_7] [i_9]);
                            var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_0] [i_7 + 1] [i_9 - 1])) ? (((var_8) * (0ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) var_5)), (159646538)))))) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_7 + 1] [i_7 - 1] [i_0 + 2]))))))))));
                        }
                        for (short i_10 = 0; i_10 < 14; i_10 += 1) 
                        {
                            var_28 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_5 [i_0])) | (((/* implicit */int) (unsigned short)41419)))), (var_0)))) == (((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_4)), (arr_12 [i_0] [i_1])))) % (((var_12) >> (((((/* implicit */int) var_7)) - (75)))))))));
                            var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) (-(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (var_12)))) ? (((((/* implicit */int) arr_10 [i_2] [i_1])) >> (((/* implicit */int) var_6)))) : (((((/* implicit */int) (short)21)) * (((/* implicit */int) (_Bool)0)))))))))));
                        }
                        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)3702)) / (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_2)) / (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (arr_23 [i_0] [i_0 - 1] [i_1] [i_1] [i_2] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_1])))))) : (var_1))))))));
                    }
                    for (unsigned char i_11 = 2; i_11 < 11; i_11 += 3) 
                    {
                        var_31 &= ((/* implicit */unsigned int) var_7);
                        var_32 = ((/* implicit */unsigned short) arr_21 [i_0] [i_0] [i_1] [i_2] [i_11] [i_11 + 1]);
                        arr_43 [i_11] [i_2] [i_2] [i_1] [i_0] [i_11] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_38 [i_0] [i_1] [i_11] [i_1] [i_2])) ^ (((/* implicit */int) arr_38 [i_0] [i_0] [i_11] [i_0 + 2] [i_0])))) * (((/* implicit */int) ((((unsigned long long int) var_10)) >= (((/* implicit */unsigned long long int) max((arr_0 [i_11]), (((/* implicit */long long int) arr_38 [i_0] [(_Bool)1] [i_11] [(_Bool)1] [i_11 - 1]))))))))));
                        arr_44 [i_1] [i_11] = ((/* implicit */short) arr_0 [4U]);
                    }
                    /* LoopSeq 1 */
                    for (signed char i_12 = 0; i_12 < 14; i_12 += 4) 
                    {
                        arr_47 [i_0] [i_0 + 1] [i_0 - 2] [i_0] = ((/* implicit */signed char) max(((-(((/* implicit */int) arr_37 [i_0 - 1] [i_0] [i_0 - 1] [i_0 + 2] [i_0 - 2])))), (((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) >> (((((((/* implicit */_Bool) (short)15360)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_2] [i_1] [i_0]))) : (var_13))) - (4294943082U)))))));
                        var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((var_6) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_3 [i_0] [i_1] [(unsigned char)1]))))), (var_14)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 1]))) % (min((5924107399111715761ULL), (((/* implicit */unsigned long long int) -708762227)))))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) max(((short)15360), (((/* implicit */short) (signed char)94))))), (((((((/* implicit */int) arr_39 [i_0] [i_2] [i_1] [i_1] [i_0] [i_0])) + (2147483647))) >> (((arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]) - (2361177272U)))))))))))));
                        arr_48 [i_0 - 1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_11 [i_0] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_12]) == (arr_11 [i_0] [i_0 + 2] [i_0] [i_0 + 2] [i_0])))) >> (((var_8) - (17144744138950049364ULL)))));
                        arr_49 [i_0] [i_1] [i_12] [i_12] [i_12] = ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned char)255))));
                    }
                    arr_50 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_1] [i_2])) ? (((((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */unsigned long long int) 1436468709U)) : (var_14))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_18 [i_0] [i_0 - 1] [i_0 + 2] [i_0 + 2] [i_0]) > (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33766))) * (0U)))))))));
                    var_34 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0 - 2] [i_0] [i_0 - 2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned short)34389)))))) : (max((1228492733029384446LL), (((/* implicit */long long int) (signed char)-53)))))) & (((/* implicit */long long int) (+(((/* implicit */int) var_6)))))));
                }
            } 
        } 
    } 
    var_35 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 2858498592U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9)))) / (((/* implicit */int) ((short) (_Bool)1)))))) ? (6550157051958068848ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((var_8) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) < (var_1)))))));
    var_36 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_1) ^ (((((/* implicit */_Bool) 812347903)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-29)) ? (((/* implicit */unsigned long long int) -4545386068655445760LL)) : (5680309040078015064ULL))))));
}
