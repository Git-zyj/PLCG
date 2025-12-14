/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146397
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
    var_15 = ((/* implicit */unsigned long long int) ((_Bool) var_5));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((unsigned long long int) arr_0 [i_0]));
        arr_3 [i_0] [i_0 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_10))))));
    }
    for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned long long int) ((long long int) var_8))))))));
        var_17 *= ((/* implicit */unsigned long long int) ((unsigned char) ((short) ((_Bool) var_0))));
        arr_7 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) 234131008781162215ULL)) ? (-6880923581776712216LL) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))))));
    }
    var_18 &= ((/* implicit */long long int) min((var_1), (((((/* implicit */_Bool) ((signed char) var_2))) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_11) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)117)))))))))));
}
