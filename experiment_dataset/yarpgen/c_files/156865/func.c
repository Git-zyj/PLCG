/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156865
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) ^ (14865958269708520159ULL)))) ? (((/* implicit */int) ((arr_5 [i_0] [i_1]) < (((/* implicit */unsigned long long int) -2041842914))))) : (((/* implicit */int) (!(var_11))))))), ((+((+(3580785804001031456ULL)))))));
                        arr_13 [i_0] [i_1] [i_2 + 1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) ((var_0) & (var_0))))) <= (((((/* implicit */_Bool) arr_9 [i_2 + 1] [i_0] [i_1 - 2])) ? (((/* implicit */int) ((((/* implicit */long long int) arr_9 [i_0] [i_0] [i_3])) <= (arr_3 [(unsigned char)9])))) : ((+(((/* implicit */int) (_Bool)1))))))));
                        var_18 = ((/* implicit */int) ((_Bool) (unsigned short)61088));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        for (unsigned long long int i_5 = 4; i_5 < 22; i_5 += 2) 
                        {
                            {
                                var_19 += ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((var_4), (((/* implicit */unsigned char) arr_7 [i_2 + 2] [i_2] [i_4 + 1]))))), (((((/* implicit */_Bool) arr_12 [i_5] [i_5] [i_4 + 1])) ? (10417851828538443105ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (arr_4 [i_5 - 2]) : (arr_9 [i_0] [i_5] [i_2]))))))));
                                arr_18 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) 14865958269708520156ULL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_4 + 1] [i_4 + 1])) * (((/* implicit */int) (unsigned short)26286))))) : (((arr_15 [i_4 + 1] [i_4 + 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_4 + 1] [i_4 + 1]))) : (var_14)))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((unsigned long long int) var_9)) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)32767))))))))));
                    var_21 = ((((/* implicit */_Bool) ((int) arr_11 [i_2 + 1] [i_1] [i_2 + 1] [i_1 - 3] [i_1] [i_1]))) ? (((long long int) arr_11 [i_2 + 2] [i_1] [i_2 - 1] [i_1 - 1] [i_2 + 2] [i_1])) : (((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_2 - 1] [i_1] [i_2] [i_1 + 1] [i_2 - 1] [i_0])) - (((/* implicit */int) var_4))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_6 = 1; i_6 < 7; i_6 += 3) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (unsigned char i_8 = 0; i_8 < 11; i_8 += 3) 
            {
                {
                    arr_27 [i_6] [i_7] [i_6] = ((/* implicit */signed char) ((((/* implicit */long long int) arr_12 [i_6] [i_6 + 1] [i_6 + 4])) | (arr_3 [i_6])));
                    /* LoopSeq 3 */
                    for (unsigned char i_9 = 0; i_9 < 11; i_9 += 1) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (short i_10 = 0; i_10 < 11; i_10 += 4) /* same iter space */
                        {
                            arr_34 [i_10] [i_6] [i_8] [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_16 [i_6] [i_6 - 1] [i_6] [i_6 + 4] [i_6]) ^ (((/* implicit */unsigned int) -471699562))))) ? (max((arr_12 [i_6] [i_6] [i_6 + 1]), (((/* implicit */unsigned int) ((((/* implicit */int) var_13)) - (((/* implicit */int) arr_20 [i_6]))))))) : (((/* implicit */unsigned int) var_10))));
                            arr_35 [i_9] [i_10] [i_8] [i_9] [i_10] [i_10] |= ((/* implicit */long long int) 772239215U);
                            var_22 = (i_6 % 2 == 0) ? (((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_24 [i_6 + 4] [i_6] [i_6 + 2]) << (((((/* implicit */int) arr_32 [i_6 + 2] [i_6 + 2] [i_6] [i_6] [i_6 - 1] [i_6 + 4] [i_6])) - (60448)))))) ? (((((/* implicit */_Bool) arr_32 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6] [i_6 + 3] [i_6 + 2] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_6 + 4] [i_6 + 3] [i_6] [i_6] [i_6 + 1] [i_6 - 1] [i_6]))) : (10417851828538443114ULL))) : (((((/* implicit */_Bool) arr_23 [i_6])) ? (10417851828538443105ULL) : (((/* implicit */unsigned long long int) arr_23 [i_6]))))))) : (((/* implicit */signed char) ((((/* implicit */_Bool) ((((arr_24 [i_6 + 4] [i_6] [i_6 + 2]) + (9223372036854775807LL))) << (((((/* implicit */int) arr_32 [i_6 + 2] [i_6 + 2] [i_6] [i_6] [i_6 - 1] [i_6 + 4] [i_6])) - (60448)))))) ? (((((/* implicit */_Bool) arr_32 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6] [i_6 + 3] [i_6 + 2] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_6 + 4] [i_6 + 3] [i_6] [i_6] [i_6 + 1] [i_6 - 1] [i_6]))) : (10417851828538443114ULL))) : (((((/* implicit */_Bool) arr_23 [i_6])) ? (10417851828538443105ULL) : (((/* implicit */unsigned long long int) arr_23 [i_6])))))));
                            arr_36 [i_6] [i_6] = ((/* implicit */unsigned long long int) var_4);
                            var_23 = ((((/* implicit */int) var_7)) >> (((((/* implicit */int) var_13)) + (17406))));
                        }
                        /* vectorizable */
                        for (short i_11 = 0; i_11 < 11; i_11 += 4) /* same iter space */
                        {
                            var_24 -= ((/* implicit */signed char) (~(((((/* implicit */int) arr_32 [i_6] [i_7] [i_9] [i_6 - 1] [i_11] [i_7] [i_7])) | (((/* implicit */int) (signed char)120))))));
                            var_25 = ((/* implicit */signed char) -2147483644);
                            var_26 ^= ((/* implicit */unsigned char) var_13);
                            arr_40 [i_6] [i_6] [i_8] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)0)) ? (5356871150688632118ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_6 + 2] [i_6 + 2] [i_6 - 1] [i_6] [i_6 + 4])))));
                        }
                        for (short i_12 = 0; i_12 < 11; i_12 += 4) /* same iter space */
                        {
                            arr_44 [i_6 + 3] [i_7] [i_6] [i_9] [i_12] = ((/* implicit */short) ((unsigned char) (unsigned char)193));
                            var_27 = ((/* implicit */_Bool) arr_29 [i_6] [i_7] [i_6] [i_9] [i_12] [i_12]);
                        }
                        arr_45 [i_6] [i_6] [i_6] [i_6] [i_8] [i_6] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_43 [i_6 + 1] [i_6 + 1] [i_6 + 3] [i_6 + 4] [(unsigned short)10])) ? (((/* implicit */int) (_Bool)0)) : (arr_43 [i_6 - 1] [i_8] [i_9] [i_9] [i_9]))) >= (((/* implicit */int) ((arr_43 [i_6 + 2] [i_9] [i_9] [i_9] [10]) != (((/* implicit */int) (unsigned char)228)))))));
                    }
                    for (unsigned char i_13 = 0; i_13 < 11; i_13 += 1) /* same iter space */
                    {
                        var_28 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [i_8]))))) == (((/* implicit */int) (unsigned short)41972))));
                        var_29 = ((/* implicit */_Bool) (signed char)74);
                        var_30 = ((/* implicit */unsigned char) ((((int) var_1)) <= (((/* implicit */int) min((((((/* implicit */int) var_12)) < (1073741824))), (((((/* implicit */int) var_1)) <= (((/* implicit */int) (_Bool)1)))))))));
                    }
                    for (unsigned char i_14 = 0; i_14 < 11; i_14 += 1) /* same iter space */
                    {
                        var_31 = ((/* implicit */signed char) var_13);
                        var_32 = var_3;
                    }
                }
            } 
        } 
    } 
}
