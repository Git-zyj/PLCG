/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103647
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
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned int) 800480437)) : (4294967295U)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_3 [i_0] [8U] [i_1])) && (((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0])))) || (((/* implicit */_Bool) max((15U), (((/* implicit */unsigned int) arr_3 [i_0] [i_0] [i_1])))))));
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) & (((/* implicit */int) var_12))))) ? (((/* implicit */int) ((var_4) >= (var_3)))) : (((((/* implicit */_Bool) arr_3 [i_0] [5] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_17))))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (_Bool)1))));
    var_24 += ((/* implicit */unsigned short) ((var_5) != (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)153)) & (min((-1055109694), (((/* implicit */int) (unsigned char)76)))))))));
}
