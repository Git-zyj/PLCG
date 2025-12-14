/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103289
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
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (~((~(var_10))))))));
    var_15 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_3)), (var_7)));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 22; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */signed char) ((unsigned char) 6740082702356642758ULL));
                var_17 = ((/* implicit */unsigned short) ((unsigned char) (unsigned short)20432));
            }
        } 
    } 
}
