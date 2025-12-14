/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109968
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
        var_13 *= (-(((/* implicit */int) (_Bool)0)));
    }
    /* vectorizable */
    for (unsigned char i_1 = 1; i_1 < 24; i_1 += 3) 
    {
        var_14 = ((/* implicit */unsigned char) ((((-3020284964959539127LL) & (((/* implicit */long long int) var_2)))) != (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1])))));
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)29882)))))));
    }
    var_16 ^= ((/* implicit */unsigned int) max((var_0), (((/* implicit */int) ((((/* implicit */int) min(((short)286), (((/* implicit */short) (signed char)-79))))) < (var_5))))));
}
