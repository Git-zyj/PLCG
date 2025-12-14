/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105873
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
    var_10 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (short)25731)) ? (((/* implicit */int) (unsigned char)49)) : (((/* implicit */int) (signed char)-46))))))));
    var_11 = ((/* implicit */_Bool) (+((((!(var_2))) ? ((~(536870911LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)181)) : (((/* implicit */int) var_7)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)226)) ? (((/* implicit */int) (unsigned char)183)) : (((/* implicit */int) (_Bool)0)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
    }
    for (unsigned short i_1 = 4; i_1 < 20; i_1 += 4) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) ((unsigned long long int) max(((+(((/* implicit */int) (unsigned char)180)))), ((-(((/* implicit */int) (_Bool)1)))))));
        var_12 &= ((/* implicit */short) (~(((/* implicit */int) ((unsigned char) (unsigned char)170)))));
    }
    var_13 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_6)), (((unsigned int) ((((/* implicit */_Bool) 17894501287050049957ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)27746))) : (var_0))))));
}
