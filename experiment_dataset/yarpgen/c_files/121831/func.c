/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121831
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
    var_14 |= ((/* implicit */unsigned int) (unsigned short)43068);
    var_15 = ((/* implicit */int) (short)-1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) max((1891494946U), (((/* implicit */unsigned int) (short)-31153))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)27629), (var_1))))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))));
                var_17 = ((/* implicit */int) (+(((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) 255)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-12))) : (4227858432U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)16)))))));
                var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) max((var_12), ((short)-10742)))))))));
            }
        } 
    } 
}
