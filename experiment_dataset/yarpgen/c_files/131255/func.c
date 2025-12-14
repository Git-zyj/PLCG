/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131255
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
    for (long long int i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 4294967295U)) * (7ULL)))) ? (min((((((/* implicit */int) (short)-7860)) + (((/* implicit */int) arr_1 [i_0])))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_1 [i_0])))))) : (((/* implicit */int) ((short) arr_1 [i_0 - 1])))));
        var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((var_3) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) (_Bool)1)))))));
        arr_2 [i_0] = ((/* implicit */short) (_Bool)1);
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)13)))), (((/* implicit */int) min(((_Bool)0), ((_Bool)1))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */_Bool) 5780227221647755627ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-1470472094579582535LL)))))) : ((+(arr_0 [i_0])))));
    }
    var_14 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) & (0U)))) ^ (max((((/* implicit */unsigned long long int) var_3)), (var_0))))) ^ (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)8191)), (4294967274U))))));
    var_15 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_2)))));
}
