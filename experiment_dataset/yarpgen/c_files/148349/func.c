/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148349
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
    var_18 = ((/* implicit */short) ((unsigned short) ((((((/* implicit */int) var_0)) != (((/* implicit */int) var_9)))) ? (max((var_15), (((/* implicit */unsigned long long int) var_9)))) : (var_3))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)254)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
                var_20 += ((/* implicit */int) ((((/* implicit */unsigned long long int) var_16)) < (max(((-(17581278622436942618ULL))), (((/* implicit */unsigned long long int) (unsigned char)255))))));
            }
        } 
    } 
}
