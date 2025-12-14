/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167016
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
    var_15 = ((/* implicit */_Bool) var_10);
    var_16 = ((/* implicit */unsigned char) var_9);
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 3; i_2 < 15; i_2 += 4) 
                {
                    var_17 = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_1 [i_0 - 2])) & (((/* implicit */int) arr_0 [i_2 - 2])))), (-1145626768)));
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1423730148U)) ? (((/* implicit */unsigned long long int) 17)) : (554153860399104ULL)));
                }
                for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    arr_10 [i_0 + 1] [0ULL] [i_1 - 3] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_1 - 2]))))) ? (min((((unsigned int) (unsigned short)4064)), (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))))) : (max(((+(arr_3 [i_3]))), (min((4294967295U), (((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_3]))))))));
                    arr_11 [i_1] [i_3] = ((((unsigned long long int) ((((/* implicit */_Bool) 18446744073709551591ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37023))) : (arr_8 [(short)15] [i_1])))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (var_7)))) ? (((/* implicit */unsigned int) min((var_3), (((/* implicit */int) (_Bool)1))))) : (max((var_13), (((/* implicit */unsigned int) (signed char)6))))))));
                }
                var_19 = ((/* implicit */unsigned short) 17U);
                /* LoopSeq 2 */
                for (unsigned char i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    arr_15 [i_0] [i_1 - 1] [i_1] = ((8U) >= (((/* implicit */unsigned int) -27703710)));
                    var_20 ^= ((/* implicit */unsigned char) ((_Bool) min((((/* implicit */unsigned long long int) arr_14 [i_1 + 2])), (16130094763624411965ULL))));
                    var_21 = ((/* implicit */int) max((((max((((/* implicit */unsigned int) (short)32758)), (1449041496U))) & (((arr_3 [15ULL]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))))), (((/* implicit */unsigned int) ((unsigned short) ((var_1) ^ (((/* implicit */int) arr_13 [i_4] [i_4] [i_4] [i_4]))))))));
                }
                for (unsigned long long int i_5 = 1; i_5 < 14; i_5 += 4) 
                {
                    var_22 ^= (_Bool)1;
                    arr_18 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) 3781886574520876601LL);
                    arr_19 [i_1] [i_1] [i_5 + 1] [i_1 + 1] = ((/* implicit */_Bool) ((arr_1 [i_0 - 3]) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)16))) & (3709835457U))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)252)) | (((/* implicit */int) (short)48)))))));
                }
            }
        } 
    } 
}
