/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18888
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
    var_16 = var_8;
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (~(min((max((var_12), (((/* implicit */long long int) arr_4 [i_1] [i_1] [i_0])))), (((/* implicit */long long int) arr_2 [(unsigned short)0] [i_0 + 3] [i_0 + 2]))))));
                var_17 |= ((/* implicit */unsigned char) max((((/* implicit */int) (short)-17364)), ((+(((/* implicit */int) (unsigned char)105))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)0))))) : (var_7))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))))), (max((1266415080U), (((/* implicit */unsigned int) (unsigned char)117)))))))));
    var_19 = ((/* implicit */short) var_8);
    var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) ((unsigned int) var_14))) ? ((~(var_12))) : (((/* implicit */long long int) (+(((/* implicit */int) var_11))))))) > (((((/* implicit */long long int) max((1569560505U), (((/* implicit */unsigned int) (unsigned char)117))))) / (((((/* implicit */_Bool) (signed char)-83)) ? (2719909689643108789LL) : (((/* implicit */long long int) ((/* implicit */int) (short)18922)))))))));
}
