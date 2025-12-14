/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142489
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
    for (long long int i_0 = 4; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 10; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_1] [i_1] = (~(((/* implicit */int) ((((/* implicit */long long int) arr_0 [i_0] [i_1])) >= (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-7560)))))))));
                arr_8 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (signed char)117)) <= (((/* implicit */int) (signed char)34))))) >> (((arr_5 [i_0] [i_0] [i_0]) - (5922437917494103140ULL)))));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    var_10 = ((/* implicit */short) ((((((/* implicit */int) (short)32767)) - (((/* implicit */int) var_0)))) & (((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        var_11 = ((/* implicit */unsigned int) (~(7796222236055804242LL)));
                        var_12 = ((/* implicit */short) ((((((/* implicit */int) arr_4 [i_0 - 3] [i_1 + 1] [i_3])) - ((-(((/* implicit */int) var_2)))))) >> (((((/* implicit */int) var_6)) - (11896)))));
                    }
                    arr_15 [i_0] [i_1] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_3 [i_0] [i_1 - 3] [i_0 - 1])) ? (((/* implicit */int) arr_3 [i_0] [i_1 + 1] [i_0 - 3])) : (((/* implicit */int) arr_3 [i_0] [i_1 - 4] [i_0 + 1]))))));
                    arr_16 [i_0] [i_0] [i_0] [i_0] = arr_3 [i_0] [i_1] [i_2];
                    /* LoopSeq 2 */
                    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) /* same iter space */
                    {
                        var_13 *= ((/* implicit */unsigned char) ((unsigned long long int) (+(((((/* implicit */int) arr_6 [i_0])) + (((/* implicit */int) arr_9 [i_0] [i_0] [i_0])))))));
                        arr_19 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_0 - 1])) / (((/* implicit */int) arr_11 [i_0] [i_0] [i_0 - 4]))))) ? (((((/* implicit */_Bool) ((unsigned char) arr_4 [i_0] [i_0] [i_4]))) ? (((((/* implicit */_Bool) 160026802U)) ? (((/* implicit */int) (unsigned short)13128)) : (arr_14 [i_0]))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))) : ((-(((/* implicit */int) var_4))))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 1) /* same iter space */
                    {
                        var_14 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0])) : ((((~(((/* implicit */int) (_Bool)1)))) | (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_5])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))))))));
                        arr_22 [i_5] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_0 - 4] [i_1 - 1])))))) / (((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_0] [i_1])) / (arr_10 [i_5] [i_2] [i_0] [i_0])))) ? (1423298973U) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_2 [i_0]) >= (((/* implicit */int) var_2))))))))));
                        arr_23 [i_0] [i_0] [i_1] [i_5] [i_0] [i_5] = ((/* implicit */unsigned char) max((((9223372036854775807LL) ^ (((/* implicit */long long int) ((/* implicit */int) (short)16380))))), (((/* implicit */long long int) ((_Bool) arr_17 [i_5] [i_5] [i_5] [i_1 - 2])))));
                        arr_24 [i_5] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_6 [i_0 - 2])) - (((/* implicit */int) var_5)))) & ((~(((/* implicit */int) arr_6 [i_0 - 1]))))));
                        arr_25 [i_0] [i_5] [i_2] [i_2] = ((/* implicit */long long int) (+(max(((-(arr_0 [i_2] [i_1]))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_0] [i_0])))))))));
                    }
                }
            }
        } 
    } 
    var_15 = var_0;
    var_16 = ((/* implicit */_Bool) ((int) (+((((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4)))))));
}
