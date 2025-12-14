/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151436
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
    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) -1388262656)) * (14955830485231677289ULL)))))))))));
    var_17 ^= (((-(((/* implicit */int) (signed char)71)))) > (((/* implicit */int) (_Bool)1)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 3311451107225145843LL))));
                var_18 = ((/* implicit */int) (!((_Bool)1)));
                arr_5 [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)29)) || ((_Bool)1)))) | (((/* implicit */int) (!((_Bool)1)))))) >> ((((-((-(288230376151711743LL))))) - (288230376151711712LL)))));
            }
        } 
    } 
}
