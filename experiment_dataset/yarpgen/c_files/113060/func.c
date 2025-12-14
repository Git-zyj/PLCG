/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113060
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_14 -= ((/* implicit */long long int) 290700802);
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((int) ((unsigned int) var_12)))) & (var_1)));
        arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) var_6)) % (max((((/* implicit */unsigned int) (short)19126)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (0U)))))));
        arr_5 [11] [11] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (unsigned char)228)) >> (((arr_1 [i_0] [i_0]) - (306285247U))))))) ? (((941359142) | (((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-5017))))) && (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)171))) > (var_1))))))));
        var_15 = ((/* implicit */unsigned long long int) var_0);
    }
    var_16 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)2312)), (3025660916U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (2882756285119071772LL)))) : ((~(var_10))))) ^ (((/* implicit */unsigned long long int) 4294967295U))));
}
