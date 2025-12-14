/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133641
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
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((signed char) ((_Bool) ((int) (signed char)42)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_18 *= ((/* implicit */_Bool) ((int) (signed char)-36));
                var_19 *= ((/* implicit */unsigned short) (short)15098);
                var_20 = ((/* implicit */unsigned char) (unsigned short)8054);
                var_21 -= ((/* implicit */unsigned short) (signed char)-10);
            }
        } 
    } 
    var_22 = ((/* implicit */short) (signed char)121);
}
