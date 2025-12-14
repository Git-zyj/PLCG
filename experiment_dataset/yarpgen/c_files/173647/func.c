/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173647
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) arr_2 [i_0]))) >= (((((/* implicit */int) arr_2 [i_0])) ^ (((/* implicit */int) var_7))))));
        arr_4 [i_0] = ((unsigned char) arr_2 [i_0]);
        var_12 = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) arr_2 [i_0])))))) < (var_8));
        arr_5 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned short) ((arr_1 [i_0] [i_0]) << (((var_8) - (3508628253444821491LL))))));
    }
    var_13 = ((/* implicit */long long int) max((((/* implicit */unsigned int) var_1)), (((((/* implicit */unsigned int) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_1))))) / ((-(2360486944U)))))));
    var_14 = ((/* implicit */short) min((((((/* implicit */_Bool) (unsigned char)98)) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_4)), ((short)22925))))) : (-4053613452659084185LL))), ((~(var_8)))));
}
