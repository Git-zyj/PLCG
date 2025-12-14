/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128470
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
    var_19 = ((/* implicit */_Bool) var_5);
    var_20 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_9), (((/* implicit */short) (unsigned char)0)))))) | (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)236))) : (16640232539997976535ULL))))) ^ (max((((unsigned long long int) (unsigned char)48)), (min((4473265797719200360ULL), (((/* implicit */unsigned long long int) (_Bool)0)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 *= ((/* implicit */unsigned char) ((((/* implicit */int) ((var_16) > (18446744073709551602ULL)))) << (((((unsigned long long int) var_11)) - (138ULL)))));
                var_22 = var_8;
            }
        } 
    } 
}
