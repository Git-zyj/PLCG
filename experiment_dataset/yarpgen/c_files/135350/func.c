/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135350
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
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) >> (((((/* implicit */int) var_1)) - (30)))))) ? (((/* implicit */int) var_10)) : ((-(((/* implicit */int) var_0))))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_10 [i_1] [13U] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) 9223372036854775786LL)) / (((((/* implicit */_Bool) (+(1943068966)))) ? (((7296922687575952494ULL) - (((/* implicit */unsigned long long int) -9223372036854775787LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)184)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-37)))))))));
                    arr_11 [i_1] [i_2] = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)195)), (var_8)))) && (((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) var_3)) : (arr_9 [20] [20]))))))), ((-(((/* implicit */int) arr_6 [i_0 + 3] [i_1] [i_2]))))));
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */int) var_9);
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_2 [i_3 - 1]) ? (((/* implicit */int) arr_5 [i_0 + 3] [i_3 - 1])) : (((/* implicit */int) arr_2 [i_3 - 1]))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((/* implicit */int) var_8))) + (-9223372036854775786LL))), (((/* implicit */long long int) max((arr_1 [i_0 + 1]), (arr_0 [2] [2]))))))) : (arr_4 [i_3])));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) 1336930312)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40642))) : (arr_14 [i_0] [i_1] [i_0] [(unsigned char)7] [i_0])));
                        var_19 = ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) var_11)) : (9223372036854775807LL))) & (((/* implicit */long long int) ((var_14) & (var_13)))))), (((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_9 [i_0] [i_0])) ? (((/* implicit */int) arr_8 [i_0] [(short)12])) : (((/* implicit */int) arr_5 [i_0] [i_0])))))))));
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (((!((_Bool)1))) ? (((((/* implicit */_Bool) 2314519173U)) ? (arr_4 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0 + 2]))))) || (((((/* implicit */_Bool) arr_8 [i_2] [i_4])) && (arr_6 [(signed char)16] [i_1] [i_2])))));
                        var_21 = ((/* implicit */unsigned int) min((min((arr_7 [i_0 - 1]), (arr_7 [i_0 + 1]))), (min((arr_3 [i_0 - 1] [i_0 + 4]), (arr_3 [i_0 + 1] [i_0 - 1])))));
                    }
                    /* vectorizable */
                    for (signed char i_5 = 2; i_5 < 18; i_5 += 1) 
                    {
                        arr_18 [i_5] [i_1] [i_1] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [(unsigned char)13] [i_5 + 1] [i_5 - 1] [(_Bool)1] [(short)11])) < (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5))))));
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 + 4])) ? (arr_4 [i_0 + 4]) : (arr_16 [i_0 + 3])));
                    }
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((10223848910575634389ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0])))))) ? (((/* implicit */int) ((((/* implicit */long long int) (-(var_13)))) > (max((-7520784854451776777LL), (((/* implicit */long long int) arr_5 [i_0 - 1] [i_0 - 1]))))))) : (((/* implicit */int) ((arr_4 [i_0 + 1]) >= (arr_4 [i_0 + 1]))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */int) var_5);
}
