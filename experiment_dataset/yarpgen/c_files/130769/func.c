/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130769
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
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)65535)) | (((/* implicit */int) (unsigned short)0)))) < (((/* implicit */int) var_8))));
                var_13 = ((/* implicit */long long int) var_11);
                var_14 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (((~(((/* implicit */int) var_7)))) > (((/* implicit */int) ((unsigned char) var_2)))))) : (min((((((/* implicit */int) var_10)) >> (((/* implicit */int) var_7)))), (((/* implicit */int) ((90725125U) != (var_4))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (var_10))))))) ? (90725125U) : (((/* implicit */unsigned int) ((/* implicit */int) min((min((var_0), (var_9))), (((unsigned char) var_9))))))));
}
