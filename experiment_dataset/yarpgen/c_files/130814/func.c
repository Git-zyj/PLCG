/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130814
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 8; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 3; i_2 < 10; i_2 += 1) 
                {
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_5 [i_2] [i_1] [10ULL] [i_0]))))) + (((16124721494724918356ULL) & (((/* implicit */unsigned long long int) -1343782050154354819LL)))))) + (((((/* implicit */unsigned long long int) (+(-545695233260445149LL)))) ^ (3524688008205347134ULL)))))));
                    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_4 [i_0]) : (arr_0 [(unsigned char)8] [i_1])))) ? ((((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)-24267)))) : ((+(((/* implicit */int) (_Bool)1)))))))))));
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) -1495742365)) ? (((var_1) % (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [8ULL]))))) : (((/* implicit */long long int) 4170463748U)))))))));
                }
                var_18 = max((((((/* implicit */_Bool) arr_1 [i_0])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 + 2] [i_1 + 1] [i_0] [i_0]))))), (((/* implicit */long long int) (unsigned short)48373)));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) ((short) (_Bool)1))) && (((/* implicit */_Bool) (unsigned char)94)))))));
}
