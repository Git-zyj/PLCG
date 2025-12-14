/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117588
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */_Bool) var_5);
                var_14 -= ((/* implicit */signed char) ((short) max(((unsigned short)54849), (((/* implicit */unsigned short) var_5)))));
                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) min((var_7), (((/* implicit */unsigned char) var_4)))))));
            }
        } 
    } 
    var_16 -= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_8)), (var_11)));
    var_17 = ((/* implicit */_Bool) (unsigned short)65525);
}
