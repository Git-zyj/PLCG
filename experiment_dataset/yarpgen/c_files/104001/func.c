/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104001
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
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 ^= ((unsigned char) (unsigned char)33);
                var_21 = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) (-(((/* implicit */int) (unsigned char)9))))))));
                var_22 = ((/* implicit */unsigned short) (_Bool)1);
                var_23 = ((/* implicit */_Bool) (unsigned char)0);
            }
        } 
    } 
    var_24 ^= max((1546385273), (((int) ((_Bool) 1546385255))));
    var_25 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) (unsigned char)163))))))) ? (((/* implicit */int) ((_Bool) (~(-1546385273))))) : (min((max((((/* implicit */int) (unsigned char)1)), ((-2147483647 - 1)))), (((/* implicit */int) max(((unsigned short)9566), (((/* implicit */unsigned short) (_Bool)0)))))))));
    var_26 = ((/* implicit */_Bool) (unsigned char)93);
}
