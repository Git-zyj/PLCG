/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130339
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [(unsigned char)20] |= ((/* implicit */unsigned char) ((unsigned int) 2242598007U));
        var_13 = (+((-(var_11))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_14 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_9)) ? (arr_8 [i_0] [2] [(_Bool)1] [i_1]) : (arr_8 [i_0] [i_0] [(_Bool)0] [i_2]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(_Bool)1] [i_2])))));
                    var_15 += min((((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned char) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [(unsigned char)14])) || (((/* implicit */_Bool) arr_1 [20U])))))) : (((((/* implicit */_Bool) var_6)) ? (arr_8 [i_0] [i_2] [(unsigned char)8] [i_2]) : (((/* implicit */unsigned long long int) 2242598025U)))))), (((/* implicit */unsigned long long int) (+(arr_7 [i_0] [i_0] [i_1] [(_Bool)1])))));
                }
            } 
        } 
    }
    for (unsigned short i_3 = 4; i_3 < 20; i_3 += 3) 
    {
        arr_14 [(unsigned char)6] &= ((/* implicit */unsigned char) ((min((arr_2 [2U]), (arr_2 [4ULL]))) >> (((((((/* implicit */_Bool) arr_5 [i_3])) ? (max((2052369288U), (arr_7 [i_3] [i_3] [i_3] [8ULL]))) : (min((((/* implicit */unsigned int) var_12)), (2052369284U))))) - (2052369288U)))));
        arr_15 [i_3] [i_3 - 4] = ((/* implicit */unsigned int) ((_Bool) ((unsigned int) 1692597797U)));
        arr_16 [6] &= arr_13 [(unsigned char)4];
        arr_17 [4LL] [i_3] = ((/* implicit */long long int) min((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)9))))) ? (var_9) : (((((/* implicit */_Bool) arr_9 [i_3] [i_3] [i_3] [(unsigned char)8])) ? (arr_9 [(_Bool)1] [i_3] [i_3 - 4] [(_Bool)1]) : (arr_1 [i_3]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_3] [i_3 - 1])) ? (((/* implicit */int) arr_3 [i_3] [i_3 - 2])) : (((/* implicit */int) arr_3 [i_3] [i_3 - 2])))))));
        var_16 = ((/* implicit */unsigned char) ((((((arr_8 [i_3] [i_3 + 1] [i_3] [i_3]) + (((/* implicit */unsigned long long int) 1692597776U)))) / (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_3])) + (((/* implicit */int) (short)-18922))))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2246521745U)) ? (4294967295U) : (4294967295U)))) ? ((-(arr_9 [i_3 - 1] [i_3] [i_3 - 1] [i_3]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [(unsigned char)23] [(_Bool)1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_4))))))))));
    }
    var_17 = ((/* implicit */unsigned int) var_1);
}
