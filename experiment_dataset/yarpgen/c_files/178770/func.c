/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178770
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
    var_13 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) % (((((/* implicit */_Bool) (unsigned char)17)) ? (((var_12) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (1485070304538252016ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))));
    var_14 &= ((/* implicit */int) ((_Bool) ((unsigned int) var_4)));
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((var_12) ? (((/* implicit */int) (unsigned char)208)) : (((/* implicit */int) (_Bool)0))))) / (max((11ULL), (((/* implicit */unsigned long long int) 761971843))))))) ? (max((((((/* implicit */int) var_7)) * (((/* implicit */int) var_12)))), ((+(((/* implicit */int) (unsigned char)208)))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5)))) : (var_3)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((unsigned char) (_Bool)1))))))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned int) (~(-268745096137553058LL))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((var_2) ? (var_4) : (var_3)))))) || ((_Bool)1))))));
}
