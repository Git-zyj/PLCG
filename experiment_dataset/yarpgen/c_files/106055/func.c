/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106055
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 &= ((/* implicit */short) (-(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (1508388592) : (-1508388592)))), (var_10)))));
                    var_19 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1 - 3] [i_0])) ? (((/* implicit */long long int) 972518860)) : (arr_6 [i_0] [i_1] [i_1 - 3] [i_1 + 2])))) ? (min((arr_1 [i_0] [i_1]), (((/* implicit */unsigned int) var_8)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_1 [i_0] [i_0]))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        arr_13 [i_1] [i_3] = ((/* implicit */long long int) min((((short) arr_2 [i_2] [i_1 + 2])), (var_5)));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) min((max((((/* implicit */long long int) (+(arr_0 [i_1] [i_2])))), (arr_5 [i_2] [i_1] [i_0]))), (((/* implicit */long long int) var_0)))))));
                            var_21 *= ((/* implicit */short) var_10);
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_22 *= ((/* implicit */signed char) var_16);
                            var_23 |= ((/* implicit */unsigned short) (~(18446744073709551615ULL)));
                        }
                        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            var_24 |= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 - 2] [i_6]))) - ((+(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) * (2365879102U)))))));
                            var_25 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) arr_9 [i_0] [i_1 - 1] [i_6] [i_1 - 2] [i_6] [(signed char)8]))) / (arr_0 [i_0] [i_0])));
                            arr_23 [(_Bool)1] [i_1] [i_1] [(signed char)9] [(_Bool)1] = (i_1 % 2 == 0) ? (((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */int) (!(var_3)))) << (((((/* implicit */int) max((arr_21 [i_1] [i_0] [i_1]), (((/* implicit */unsigned short) arr_2 [i_2] [i_3]))))) - (12094)))))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)80))) | (-6599412465452411469LL)))))) : (((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */int) (!(var_3)))) << (((((((/* implicit */int) max((arr_21 [i_1] [i_0] [i_1]), (((/* implicit */unsigned short) arr_2 [i_2] [i_3]))))) - (12094))) + (8840)))))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)80))) | (-6599412465452411469LL))))));
                            var_26 = ((/* implicit */int) max((var_26), ((-2147483647 - 1))));
                            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */int) (signed char)98)) + (((/* implicit */int) (unsigned char)80)))))));
                        }
                        for (unsigned short i_7 = 1; i_7 < 19; i_7 += 3) 
                        {
                            var_28 *= ((/* implicit */unsigned long long int) min((min((arr_1 [i_7 - 1] [i_1 - 2]), (8U))), (((/* implicit */unsigned int) ((unsigned short) arr_1 [i_7 - 1] [i_1 - 2])))));
                            var_29 = ((/* implicit */unsigned long long int) -348212481);
                        }
                        var_30 = ((/* implicit */unsigned char) ((((long long int) var_4)) | (((/* implicit */long long int) ((/* implicit */int) max((arr_21 [i_1 + 3] [i_1] [i_1]), (arr_21 [i_1 + 3] [(_Bool)1] [i_1])))))));
                        arr_26 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) | (4294967285U)));
                        /* LoopSeq 3 */
                        for (unsigned short i_8 = 1; i_8 < 20; i_8 += 1) 
                        {
                            arr_30 [i_1] [i_1] [i_8] [i_3] [(short)12] = ((/* implicit */_Bool) ((short) max((((/* implicit */unsigned long long int) (-(arr_7 [i_0] [i_1] [i_2])))), ((-(arr_29 [i_0] [i_1] [i_2] [i_3] [i_1] [i_8]))))));
                            arr_31 [8LL] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 + 2] [i_8 - 1]))) ^ (arr_5 [i_8 - 1] [i_1 + 2] [i_1 - 1]))));
                            var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) ((arr_7 [i_8] [i_1 + 2] [i_0]) >= (((/* implicit */long long int) (+(arr_28 [i_1 + 1] [i_8 - 1] [i_8 - 1] [i_3] [i_8])))))))));
                        }
                        for (int i_9 = 0; i_9 < 21; i_9 += 3) /* same iter space */
                        {
                            var_32 = ((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_2] [i_3] [i_0]);
                            var_33 = ((/* implicit */_Bool) ((unsigned short) min((((/* implicit */int) arr_11 [9LL] [i_1 + 1] [i_1 + 1] [i_2])), ((~(((/* implicit */int) var_13)))))));
                            var_34 = arr_8 [i_0] [i_1] [i_2] [i_3];
                            arr_35 [(unsigned char)9] [i_1] [i_2] [(unsigned char)11] [i_9] [i_9] = ((/* implicit */unsigned char) arr_18 [i_0] [i_1] [i_2]);
                        }
                        for (int i_10 = 0; i_10 < 21; i_10 += 3) /* same iter space */
                        {
                            arr_39 [i_0] [i_1] [i_1] [i_1] [i_10] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((var_15) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16384))))))))));
                            var_35 -= ((/* implicit */long long int) ((signed char) (short)-23022));
                        }
                    }
                    for (int i_11 = 2; i_11 < 20; i_11 += 2) 
                    {
                        var_36 += ((/* implicit */unsigned short) ((unsigned long long int) ((short) max(((short)-18129), (var_6)))));
                        var_37 -= ((/* implicit */signed char) ((int) ((arr_0 [(_Bool)1] [(signed char)19]) ^ (((/* implicit */int) ((8873365042846917740LL) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                        var_38 = ((/* implicit */short) min((((/* implicit */int) ((unsigned char) arr_22 [i_1]))), ((-(((/* implicit */int) min(((unsigned short)11334), (((/* implicit */unsigned short) (_Bool)1)))))))));
                        arr_42 [i_0] [i_1] [i_11] = ((/* implicit */int) min((max((-2650183923371775052LL), (((/* implicit */long long int) arr_11 [i_11] [i_11 + 1] [i_11 - 2] [i_11])))), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_0] [i_1] [i_1] [(short)17] [i_1] [i_0])) || (((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_1]))))) < (((/* implicit */int) arr_41 [i_0] [i_1 - 1] [i_1] [i_11] [i_0] [i_0])))))));
                        var_39 = ((/* implicit */unsigned short) ((short) (!((_Bool)1))));
                    }
                    for (signed char i_12 = 3; i_12 < 20; i_12 += 1) 
                    {
                        var_40 = ((/* implicit */short) (unsigned short)65535);
                        arr_46 [(short)15] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (short)-20178);
                    }
                }
            } 
        } 
    } 
    var_41 = ((/* implicit */int) min((var_41), ((+(((/* implicit */int) var_6))))));
    var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (unsigned short)8165)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)101)))) : (((/* implicit */int) (_Bool)1))));
}
