/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104843
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((((/* implicit */_Bool) 6890099877328983356ULL)) ? (((arr_2 [i_0] [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49447))))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (var_6))) | (((/* implicit */unsigned long long int) var_8)))));
        arr_4 [i_0] = ((/* implicit */unsigned int) var_7);
        var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) arr_2 [i_0] [i_0]))));
    }
    var_11 = ((/* implicit */_Bool) min((var_11), (((((var_9) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) != (((/* implicit */unsigned long long int) ((unsigned int) var_8)))))));
    var_12 = ((/* implicit */unsigned char) var_3);
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (5173389184696435509LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)165)))))) ? ((-(((/* implicit */int) var_7)))) : (((/* implicit */int) min((var_2), (var_1))))))) | (var_6)));
}
