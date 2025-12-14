/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178244
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
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        arr_3 [i_0] [2] &= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 558551906910208ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)255))))) ^ (((((/* implicit */_Bool) (unsigned char)240)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
        var_14 = ((/* implicit */long long int) ((unsigned int) arr_1 [i_0]));
    }
    var_15 = ((((((var_8) - (var_1))) / (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_13))))) % (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)26995)) != (((/* implicit */int) var_4)))))))));
}
