/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156531
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
    for (short i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((~(8191LL))), (((/* implicit */long long int) ((_Bool) 8195LL)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((-8205LL) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1] [(_Bool)1])))))) && (((arr_4 [i_0] [i_0] [i_1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))))) : ((+(((((/* implicit */_Bool) arr_0 [(unsigned char)12] [i_1 - 1])) ? (-340690938) : (((/* implicit */int) arr_1 [i_0] [i_1 + 1]))))))));
                arr_6 [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)252)) <= (-340690925))))) : (((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (8200LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1] [i_1])))))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) min((arr_3 [i_1]), (((/* implicit */short) (unsigned char)231))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)41946)) * (((/* implicit */int) arr_3 [i_0]))))) : (arr_2 [i_0] [i_1]))));
                arr_8 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 1] [(_Bool)1])))))) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_1])) : (((/* implicit */int) ((unsigned short) (unsigned char)7)))));
                arr_9 [i_0] [i_1] [i_0] = var_16;
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        var_18 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) arr_10 [i_2])))));
        arr_13 [i_2] = ((/* implicit */unsigned char) arr_11 [i_2] [(unsigned char)1]);
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
    {
        arr_17 [i_3] = ((/* implicit */unsigned int) (~(((((/* implicit */int) (unsigned char)183)) / (((/* implicit */int) var_14))))));
        var_19 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) (short)-29086)) && (((/* implicit */_Bool) (short)4592)))))));
    }
}
