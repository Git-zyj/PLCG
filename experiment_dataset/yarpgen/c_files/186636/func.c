/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186636
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
    var_11 = ((/* implicit */signed char) max((7062997841933592303ULL), (((/* implicit */unsigned long long int) ((short) var_3)))));
    var_12 = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_3 [i_0]))))) && (((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0 - 1])))))));
                var_14 = ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_2 [i_0 + 2])), (((11383746231775959314ULL) - (((/* implicit */unsigned long long int) arr_2 [i_0 - 1]))))));
            }
        } 
    } 
    var_15 ^= ((/* implicit */short) var_6);
    var_16 = ((/* implicit */short) ((((var_1) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)45027)) == (((/* implicit */int) (unsigned char)255)))))))) ? (((var_0) << (((var_1) - (1756385545U))))) : (((/* implicit */unsigned int) (~((~(((/* implicit */int) var_7)))))))));
}
