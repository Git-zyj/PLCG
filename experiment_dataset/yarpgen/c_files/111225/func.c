/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111225
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) ((unsigned char) arr_0 [i_1])))) || (((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [7ULL] [i_2]))) - (arr_0 [i_0]))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) * (((/* implicit */int) (signed char)127))))))))));
                        arr_8 [i_0] [(signed char)13] [(signed char)13] [i_1] [(signed char)2] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2 + 2] [i_3]))));
                        var_18 += ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (unsigned short)65530)), (3105207575U)));
                        var_19 ^= ((/* implicit */unsigned char) -1334078509428817193LL);
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) arr_4 [i_3] [i_2] [i_3])) ? (((/* implicit */unsigned long long int) arr_6 [i_0] [i_3] [i_2 + 2] [i_2 + 1])) : (var_1)))))));
                    }
                    arr_9 [i_0] [i_1] [i_0] [i_2 + 2] = ((/* implicit */long long int) max(((-(arr_4 [i_0] [i_2 + 1] [16U]))), ((-(arr_4 [i_0] [i_2 + 1] [i_2 - 1])))));
                    arr_10 [i_0] [i_0] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2 - 1] [i_0] [i_2 + 1]))) : (((((/* implicit */_Bool) arr_2 [i_2 + 1] [i_0] [i_2 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2 + 1] [i_0] [i_2 + 2]))) : (var_11)))));
                }
            } 
        } 
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [4ULL] [(unsigned short)14] [(unsigned char)4])))))));
        var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))) | ((~(max((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_11)))))));
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)30680))))) ? (((arr_7 [i_0] [i_0] [i_0] [i_0]) & (((/* implicit */unsigned long long int) 1189759721U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-89)))))))));
    }
    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_13))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)70))) : (var_12)));
}
