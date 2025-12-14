/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108677
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
    var_12 = ((/* implicit */unsigned int) ((unsigned char) ((unsigned int) (~(((/* implicit */int) (_Bool)1))))));
    var_13 = ((/* implicit */signed char) var_11);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */long long int) (~(min((((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)2)))), (((/* implicit */int) (unsigned char)59))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            arr_12 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) arr_0 [i_3]);
                            /* LoopSeq 4 */
                            for (short i_4 = 0; i_4 < 25; i_4 += 3) 
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_2] [i_4] = ((((((/* implicit */_Bool) arr_8 [i_3 + 1] [i_2] [i_3 + 1] [i_2])) || (((/* implicit */_Bool) arr_14 [(short)5] [i_4] [i_3 + 1] [i_3 + 1] [i_0] [i_3 + 1] [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3 + 1] [i_3] [i_3 + 1] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3 + 1] [4U] [i_3 + 1] [i_1]))) : (var_8)))));
                                arr_17 [i_0] [i_1] [i_1] [i_3] [i_4] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_13 [i_0])) ? (var_5) : (((/* implicit */unsigned long long int) arr_0 [i_2]))))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-97))) / (769232018U))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)121)) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_3] [i_4])))))))) : (((((unsigned long long int) arr_0 [i_4])) >> (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_7 [i_0] [i_3 + 1] [i_4])) : (((/* implicit */int) arr_6 [i_0] [(short)16] [i_4])))) + (13575)))))));
                            }
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                arr_20 [i_5] = ((/* implicit */unsigned char) 18335940244918999912ULL);
                                var_14 += ((/* implicit */int) (-(((unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)40037)) : (((/* implicit */int) arr_14 [(short)5] [i_1] [(short)5] [i_3] [i_1] [2U] [i_1])))))));
                            }
                            /* vectorizable */
                            for (unsigned long long int i_6 = 1; i_6 < 24; i_6 += 3) /* same iter space */
                            {
                                var_15 *= var_5;
                                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3449232913619773571LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [(_Bool)1]))) : (9381152577029585677ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_1] [i_2] [i_3] [i_6 + 1] [i_6]))) : (arr_13 [i_0])));
                                arr_23 [i_0] [i_1] [(short)12] [i_3 + 1] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_22 [i_0] [i_6 + 1] [i_6 + 1] [i_3 + 1] [i_6] [i_0] [i_0])) ? (-265044873) : (((/* implicit */int) arr_19 [i_0] [i_1] [i_2] [i_2] [i_3] [i_6]))));
                                var_17 *= ((/* implicit */short) 3248034136U);
                                arr_24 [i_0] [(unsigned short)0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_15 [(unsigned char)11] [i_0] [i_1] [i_6 + 1] [(unsigned char)11]);
                            }
                            for (unsigned long long int i_7 = 1; i_7 < 24; i_7 += 3) /* same iter space */
                            {
                                var_18 -= ((/* implicit */_Bool) var_9);
                                var_19 -= ((/* implicit */short) arr_2 [i_0]);
                                var_20 = ((/* implicit */unsigned int) ((_Bool) (-(641931186))));
                            }
                            /* LoopSeq 2 */
                            for (int i_8 = 0; i_8 < 25; i_8 += 4) 
                            {
                                var_21 |= ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)42334)) | (((/* implicit */int) arr_10 [i_8] [i_3] [7LL] [7LL]))))))))));
                                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) arr_15 [i_0] [i_1] [i_1] [(short)19] [i_8]))));
                            }
                            for (unsigned char i_9 = 1; i_9 < 23; i_9 += 4) 
                            {
                                arr_33 [i_0] [i_1] [i_3 + 1] = ((/* implicit */unsigned char) var_7);
                                var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)62629)) ? (((((/* implicit */_Bool) 2147483644)) ? (((/* implicit */int) arr_26 [i_0])) : (((/* implicit */int) arr_19 [i_0] [i_0] [i_1] [i_2] [i_3] [i_0])))) : (((((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) ^ (((/* implicit */int) (short)7168))))))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)22095)) << (((973123622751065607LL) - (973123622751065593LL))))) & (((/* implicit */int) (_Bool)1))))) : (((unsigned int) (~(arr_0 [i_0])))));
                                arr_34 [(unsigned short)12] = ((/* implicit */short) min((((((/* implicit */_Bool) (signed char)127)) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (short)3688)) : (((/* implicit */int) (unsigned short)51901)))) : (((/* implicit */int) (signed char)127)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_2] [i_0] [i_3] [i_3])))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
