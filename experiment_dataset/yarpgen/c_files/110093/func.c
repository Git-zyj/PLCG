/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110093
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
    var_16 = ((/* implicit */unsigned long long int) var_5);
    var_17 = ((/* implicit */unsigned char) var_2);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) arr_2 [i_1 + 3] [i_1 - 1]))));
            var_19 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                arr_8 [i_0] [i_0] [i_1] = ((/* implicit */signed char) arr_0 [i_0]);
                /* LoopSeq 4 */
                for (unsigned short i_3 = 3; i_3 < 11; i_3 += 1) /* same iter space */
                {
                    var_20 += ((/* implicit */signed char) min((((((((/* implicit */_Bool) var_5)) ? (arr_3 [i_3 + 2]) : (var_8))) - (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)47))))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13226))) > (16995519222814208700ULL))))));
                    arr_11 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_2 [i_3 - 3] [i_1 - 1]))) ? (16995519222814208695ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_2 [i_3 - 1] [i_1 - 1])), ((unsigned char)248)))))));
                    /* LoopSeq 1 */
                    for (signed char i_4 = 0; i_4 < 13; i_4 += 1) 
                    {
                        arr_14 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_3);
                        arr_15 [(short)8] [(short)8] [i_2] [(short)8] [i_2] [(short)8] [i_0] = ((/* implicit */unsigned short) 18413448627451709965ULL);
                        arr_16 [i_3] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) arr_0 [i_0]);
                        arr_17 [i_4] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_3 + 1] [i_1 + 3])) | (((/* implicit */int) arr_4 [i_3 - 2] [i_1 + 2]))));
                    }
                }
                for (unsigned short i_5 = 3; i_5 < 11; i_5 += 1) /* same iter space */
                {
                    var_21 *= ((/* implicit */unsigned int) (signed char)121);
                    arr_21 [i_0] [i_0] = ((/* implicit */int) arr_20 [i_0] [i_2] [i_1] [i_0] [i_0]);
                }
                for (unsigned short i_6 = 3; i_6 < 11; i_6 += 1) /* same iter space */
                {
                    var_22 = ((/* implicit */long long int) ((((/* implicit */int) (((+(((/* implicit */int) (short)3)))) >= (((/* implicit */int) arr_13 [i_6 + 1] [(short)5] [i_0] [i_0] [i_0] [i_0]))))) * (((/* implicit */int) (unsigned short)32))));
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [2U] [i_1 - 1] [i_1 + 1] [i_6 - 1] [i_6 + 2])) ? (((/* implicit */int) (signed char)-112)) : (((/* implicit */int) arr_20 [(_Bool)1] [i_1 - 1] [i_1 + 1] [i_6] [i_6 + 2]))))), (max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_6 + 1])), (16995519222814208693ULL))))))));
                    var_24 ^= ((/* implicit */unsigned long long int) var_2);
                    /* LoopSeq 1 */
                    for (signed char i_7 = 0; i_7 < 13; i_7 += 3) 
                    {
                        arr_27 [i_0] = var_4;
                        arr_28 [i_1] [i_1] [i_0] = ((/* implicit */signed char) (_Bool)0);
                        arr_29 [i_0] [i_1] [12ULL] [i_6] [i_7] |= ((/* implicit */signed char) (-(arr_26 [(unsigned char)4])));
                        var_25 = ((/* implicit */int) arr_22 [i_0] [i_1] [i_1] [i_0]);
                    }
                }
                for (unsigned short i_8 = 3; i_8 < 11; i_8 += 1) /* same iter space */
                {
                    arr_32 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_0] [i_2] [i_1] [i_1 + 2] [i_0])) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))))) : (max((683207697784356660LL), (((/* implicit */long long int) (signed char)127))))));
                    arr_33 [i_8 - 2] [i_0] [i_0] [i_0] = (+(((/* implicit */int) (signed char)52)));
                }
            }
        }
        arr_34 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_1 [i_0]))));
    }
    for (unsigned char i_9 = 0; i_9 < 13; i_9 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((3513835078U) ^ (((/* implicit */unsigned int) max((((/* implicit */int) (signed char)52)), (262166195))))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)120))))) : (min((((unsigned int) arr_30 [i_9] [i_9])), (((/* implicit */unsigned int) arr_20 [(unsigned char)12] [i_9] [(short)8] [i_9] [i_9]))))));
        arr_37 [i_9] = ((/* implicit */int) arr_18 [i_9] [i_9] [i_9]);
        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_9])) % (((/* implicit */int) arr_12 [i_9]))))) / (min((max((((/* implicit */unsigned int) arr_2 [i_9] [i_9])), (arr_0 [(short)0]))), (((/* implicit */unsigned int) arr_19 [i_9] [i_9] [i_9] [i_9] [i_9])))))))));
    }
}
