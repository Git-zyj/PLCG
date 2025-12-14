/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188735
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
    var_14 = ((/* implicit */_Bool) var_0);
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) 10621378979782657246ULL)) ? (10621378979782657239ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_16 &= ((/* implicit */_Bool) (short)-8847);
                    var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)245)) << (((((/* implicit */int) (unsigned char)211)) - (208))))))));
                }
            } 
        } 
    } 
}
