/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140709
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
    var_10 = ((/* implicit */unsigned char) var_7);
    var_11 = ((/* implicit */unsigned int) var_2);
    var_12 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) var_1))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)145)) ? (((/* implicit */int) arr_5 [(signed char)13] [i_1 + 2] [i_1] [(signed char)13])) : (((/* implicit */int) (unsigned short)57987))))), (max((arr_3 [i_1] [i_1]), (((/* implicit */long long int) arr_0 [(short)5]))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) (unsigned short)7561)) && ((_Bool)1))))))) : (((((/* implicit */_Bool) max((arr_4 [6LL] [i_1]), (((/* implicit */unsigned short) (signed char)-115))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)57987))) + (arr_7 [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 - 1])))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 1; i_3 < 13; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            var_14 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_4 + 1] [(signed char)7])) ^ (((/* implicit */int) arr_1 [i_4 + 1] [1ULL]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (max((((/* implicit */unsigned int) min((((/* implicit */short) arr_11 [i_0] [(unsigned short)13] [i_0] [i_3 - 1] [i_4 + 1])), ((short)-22881)))), (((((/* implicit */_Bool) arr_4 [i_2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0]))) : (1445086988U)))))));
                            arr_13 [i_0] [i_1] [i_2] [i_3 + 2] [i_3] = arr_12 [(_Bool)1] [i_1 - 2] [i_1 - 2] [i_3] [i_3];
                            var_15 = ((/* implicit */unsigned char) (-(((((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_9 [i_4] [i_3] [i_3] [i_3] [i_1] [i_0])) : (((/* implicit */int) arr_1 [(unsigned char)9] [i_3])))) - (((/* implicit */int) ((15577299228640618624ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3 + 3] [i_1]))))))))));
                        }
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((1530050563U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_10 [13U] [i_3] [i_3] [i_3] [3U] [11ULL] [i_3])) : (((/* implicit */int) arr_5 [i_0] [i_1] [11U] [i_3])))))))) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_3] [i_0] [i_0] [i_0])) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_0] [i_2] [i_3])) || (((/* implicit */_Bool) 3291816042671027407LL)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_6 [i_3])), (arr_0 [i_0])))))))));
                    }
                    for (signed char i_5 = 1; i_5 < 13; i_5 += 2) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_15 [i_1 + 3] [i_1 + 1] [i_5 + 2]))))));
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_0]))))) ? ((-(arr_3 [i_0] [i_1 + 3]))) : (((/* implicit */long long int) min((max((((/* implicit */unsigned int) arr_8 [(unsigned char)0] [i_1] [i_2] [i_0])), (1530050580U))), (((/* implicit */unsigned int) (_Bool)1)))))));
                    }
                    for (signed char i_6 = 1; i_6 < 13; i_6 += 2) /* same iter space */
                    {
                        arr_18 [i_6] [i_1 + 2] [(unsigned short)10] [i_1 + 2] [i_1] = (-(arr_17 [12U]));
                        arr_19 [i_6] [i_2] [i_2] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0] [(unsigned short)0])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)42618)) ? (arr_2 [i_0] [i_2] [(_Bool)1]) : (((/* implicit */long long int) 3716235482U)))))));
                        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((min((((/* implicit */long long int) arr_9 [(unsigned char)14] [i_1] [i_0] [i_6] [i_2] [(unsigned char)8])), (arr_7 [i_1]))) + (min((((/* implicit */long long int) arr_11 [i_6] [i_2] [i_2] [i_1] [i_0])), (arr_7 [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) max((min((arr_6 [i_0]), (arr_12 [i_0] [i_1 + 2] [(unsigned char)8] [i_0] [(unsigned short)2]))), (arr_14 [i_6 - 1] [i_2] [i_1 - 1] [i_1]))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), (arr_1 [i_1] [(signed char)0])))) ? (((/* implicit */long long int) min((578731814U), (((/* implicit */unsigned int) arr_12 [(_Bool)0] [i_1] [(_Bool)1] [i_0] [(unsigned short)0]))))) : (((((/* implicit */_Bool) 3716235484U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 + 3]))) : (arr_2 [13LL] [(signed char)3] [(signed char)9]))))))))));
                    }
                    var_20 ^= ((/* implicit */unsigned short) min((((/* implicit */int) (((!(((/* implicit */_Bool) 6879520339953583426ULL)))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_1] [i_0] [i_2])), (arr_17 [(_Bool)1]))))))), ((-(((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_2] [i_1])) && (((/* implicit */_Bool) arr_9 [i_0] [(unsigned short)8] [i_0] [(_Bool)1] [i_2] [(short)12])))))))));
                    arr_20 [0U] [8LL] [(signed char)7] [i_0] = ((/* implicit */short) (unsigned char)143);
                }
                var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_11 [i_0] [i_1] [14ULL] [(_Bool)1] [i_1])) || (((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [(unsigned char)6] [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_14 [15LL] [i_1] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [10U] [(_Bool)1] [i_0]))) : (arr_2 [i_1] [i_1] [15U]))) : (arr_7 [i_0]))))));
                var_22 = ((/* implicit */long long int) (~(((/* implicit */int) max((arr_11 [i_1 - 2] [i_1] [i_1] [(signed char)12] [7LL]), (arr_11 [i_1 - 2] [i_1 - 2] [(unsigned short)4] [i_1] [0ULL]))))));
            }
        } 
    } 
}
