/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12471
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
    var_10 |= ((/* implicit */unsigned int) var_1);
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        arr_2 [(short)22] |= ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_1 [(unsigned short)20] [(unsigned short)20]), (((/* implicit */unsigned char) var_1))))) || (((/* implicit */_Bool) max((arr_0 [i_0 - 1]), (((/* implicit */unsigned int) arr_1 [i_0 - 1] [i_0 - 1])))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        arr_10 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */signed char) ((max((((/* implicit */unsigned int) var_8)), (arr_0 [i_1]))) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_6)))))))));
                        arr_11 [i_0 - 2] [i_1] [(signed char)20] [i_3] [i_0] = ((/* implicit */_Bool) ((3289532925U) >> (((4294967291U) - (4294967269U)))));
                        var_11 = ((/* implicit */int) var_2);
                        var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) var_3))));
                    }
                    for (long long int i_4 = 1; i_4 < 23; i_4 += 4) /* same iter space */
                    {
                        arr_14 [i_0] [i_0] = ((/* implicit */int) (~(4U)));
                        arr_15 [(_Bool)1] [i_1] [i_0] [i_4] = ((/* implicit */int) var_2);
                    }
                    for (long long int i_5 = 1; i_5 < 23; i_5 += 4) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (short i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            var_13 = ((/* implicit */unsigned char) ((signed char) ((3289532921U) << (((((/* implicit */int) (unsigned short)65535)) - (65514))))));
                            var_14 = ((/* implicit */_Bool) ((((min((1005434371U), (((/* implicit */unsigned int) var_7)))) * (((/* implicit */unsigned int) ((var_8) - (((/* implicit */int) arr_20 [i_0] [i_1] [i_0] [i_0] [i_5 - 1] [(unsigned short)1]))))))) - (((4U) - (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) / (var_8))))))));
                            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [(unsigned char)21] [i_5] [(unsigned char)14])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((var_0) | (((/* implicit */long long int) 4294967291U)))))))))))));
                            var_16 |= ((/* implicit */unsigned short) (short)-26120);
                            arr_21 [i_0] [(signed char)8] [i_2] [i_1] [i_0] [i_0] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) max((var_2), (((/* implicit */long long int) (unsigned short)65533)))))) | (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_16 [i_5 - 1] [(signed char)15] [i_5] [i_5 - 1])) : (((/* implicit */int) arr_9 [i_0] [21ULL] [i_5] [i_5 + 1] [i_5 - 1]))))));
                        }
                        for (int i_7 = 3; i_7 < 22; i_7 += 4) 
                        {
                            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((int) (unsigned char)16))))))))));
                            var_18 = ((/* implicit */short) (unsigned char)203);
                            var_19 = ((/* implicit */unsigned char) min((var_19), (((unsigned char) ((((/* implicit */_Bool) (unsigned short)3)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65523))))))));
                        }
                        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((short) (unsigned char)150))) : (((/* implicit */int) ((var_8) <= (var_6)))))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_1 [(short)7] [i_0])) << (((((/* implicit */int) var_1)) + (61))))))))))))));
                    }
                    var_21 = ((/* implicit */signed char) min((((((unsigned int) 15U)) - (((/* implicit */unsigned int) max((var_6), (2147483647)))))), (((unsigned int) (unsigned char)244))));
                    var_22 = ((/* implicit */signed char) ((unsigned int) (+(var_8))));
                    arr_24 [i_2] [i_2] [i_1] [i_2] |= var_4;
                }
            } 
        } 
        var_23 = ((/* implicit */int) min((var_23), (min((var_8), (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)-25)) ? (((/* implicit */int) (signed char)-81)) : (((/* implicit */int) var_1))))))))));
    }
}
