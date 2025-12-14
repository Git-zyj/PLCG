/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171683
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
    var_15 = ((/* implicit */_Bool) (-(min((((((/* implicit */_Bool) 9030388696073820137LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29899))) : (-5902140370809684014LL))), (((/* implicit */long long int) (short)19833))))));
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) var_14))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            {
                var_17 -= ((/* implicit */long long int) min((max((((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (var_7))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0] [i_0]))))))), (max((((/* implicit */unsigned int) arr_0 [i_1 - 2] [i_1 - 2])), (var_7)))));
                arr_4 [i_0] [16] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((-5902140370809684014LL), (((/* implicit */long long int) arr_3 [i_1] [i_1 + 1] [i_1 - 2]))))) ? (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))))), (((((/* implicit */_Bool) 1040187392U)) ? (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_1])) : (var_9))))) : (((/* implicit */unsigned long long int) min((max((var_4), (((/* implicit */long long int) arr_3 [i_0] [i_1] [i_1 - 1])))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)45881)) >> (((/* implicit */int) (_Bool)1))))))))));
                arr_5 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) (signed char)-24)), (-1)));
                var_18 = ((/* implicit */unsigned long long int) (~(max((-6469860032372786125LL), (((/* implicit */long long int) (unsigned short)19654))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */unsigned long long int) var_14)) : ((+(((var_10) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_9)))))));
}
