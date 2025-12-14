/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176808
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
    var_13 = ((/* implicit */short) min((((/* implicit */long long int) (signed char)-24)), (1048575LL)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((long long int) (short)28)))));
        var_15 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_0 [i_0] [(unsigned char)12])) ? (((/* implicit */int) ((657733181U) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)113)))))) : (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (signed char)49)) - (31))))))), (((int) ((short) (signed char)-110)))));
    }
    for (long long int i_1 = 2; i_1 < 9; i_1 += 2) 
    {
        var_16 = var_7;
        arr_8 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */long long int) arr_2 [i_1])) <= (var_6))))))) | ((~(((unsigned int) 3637234113U))))));
    }
}
