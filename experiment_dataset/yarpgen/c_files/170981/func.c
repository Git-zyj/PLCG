/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170981
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
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) (+(((/* implicit */int) (unsigned short)65535)))))))))));
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) 13637157001644216576ULL)))))) + ((~(min((var_12), (((/* implicit */unsigned long long int) var_10))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)1)) << (((var_8) - (3686697329U)))))) ? (((2695288608U) >> (((/* implicit */int) (unsigned short)0)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_3 [i_0] [i_0] [i_0]))))))));
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((_Bool) ((arr_0 [i_0]) & (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1] [i_1])))))))));
            }
        } 
    } 
}
