/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152220
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
    var_20 = ((/* implicit */unsigned char) ((((var_16) <= (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_11)), ((unsigned short)3)))) || (((_Bool) (unsigned short)0)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (~(((((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)1), (var_4))))) * (((unsigned int) (_Bool)1))))));
        arr_3 [i_0] [(signed char)3] = ((/* implicit */short) min((((((var_16) + (2147483647))) >> (((((/* implicit */int) max((arr_0 [i_0] [i_0]), (((/* implicit */short) (_Bool)1))))) - (10927))))), (((/* implicit */int) ((unsigned short) max((((/* implicit */long long int) (_Bool)1)), (var_15)))))));
    }
}
