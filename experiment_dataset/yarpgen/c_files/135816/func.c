/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135816
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
    var_15 = ((/* implicit */unsigned int) max(((-(((/* implicit */int) max((((/* implicit */unsigned char) var_9)), (var_6)))))), (((/* implicit */int) var_8))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 13; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)1004)))))) >= (6503824324355817021LL)));
                    var_17 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) 783197052365261488LL)))))));
                }
            } 
        } 
    } 
    var_18 |= ((/* implicit */_Bool) var_9);
}
