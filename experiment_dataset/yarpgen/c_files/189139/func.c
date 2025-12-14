/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189139
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
    for (unsigned char i_0 = 4; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_9 [i_0 - 1] [(_Bool)1] [i_1] = ((/* implicit */unsigned short) ((unsigned int) var_1));
                    var_10 = ((/* implicit */unsigned char) arr_5 [i_0] [i_1] [i_2]);
                    arr_10 [5LL] [i_1] [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 + 2] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (4115615631U))) % (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_1), (arr_2 [i_0] [i_0 - 4])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))) : (((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)30744))) ? (((((/* implicit */_Bool) (unsigned short)4915)) ? (arr_8 [13ULL] [i_1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)247))))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        var_12 = ((/* implicit */signed char) var_6);
                        arr_13 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_3)) + (((/* implicit */int) var_2)))) != (((((/* implicit */int) var_6)) * (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5))))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            var_13 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_17 [(unsigned short)21] [i_0 - 4] [i_0 + 2] [i_0] [i_1] [(unsigned short)21]))))), (var_3)));
                            arr_18 [i_0] [i_1] [i_2] [i_1] [i_3] [i_3] [i_4] = ((signed char) ((unsigned char) min((((/* implicit */long long int) arr_0 [(signed char)19])), (-292345500250941014LL))));
                            var_14 = arr_17 [i_0] [i_1] [i_2] [i_3] [i_3] [i_0];
                        }
                        for (signed char i_5 = 1; i_5 < 21; i_5 += 2) 
                        {
                            arr_23 [(short)3] [i_1] [(signed char)15] = ((/* implicit */unsigned char) (signed char)-27);
                            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_6 [i_1] [i_3]), (((/* implicit */short) arr_2 [(_Bool)1] [i_1]))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 - 2])) * (((/* implicit */int) arr_15 [i_3] [i_5 + 1])))))));
                        }
                        arr_24 [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) max((((((((((/* implicit */_Bool) arr_5 [(signed char)1] [i_1] [(signed char)1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0]))) : (-6840078599616222960LL))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) 179351667U)) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) var_2)))) - (82))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_0 + 1] [i_0 + 1] [i_1] [i_3])) ? (((/* implicit */int) (!(var_9)))) : (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)232)), ((unsigned short)62433)))))))));
                        arr_25 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) > (arr_5 [i_0] [i_1] [i_3]))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_2 [(signed char)2] [(signed char)2]))) ^ (var_4))))))));
                    }
                    for (signed char i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        arr_28 [i_0] [i_0] [i_1] [i_6] = ((/* implicit */_Bool) 179351664U);
                        arr_29 [(short)1] [i_1] [i_1] [i_6] = (~(min((6840078599616222960LL), (((/* implicit */long long int) ((signed char) var_4))))));
                    }
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned char) var_4);
}
