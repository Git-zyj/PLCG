/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110246
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
    var_15 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)0)))))), ((((+(((/* implicit */int) var_8)))) + (((/* implicit */int) max((((/* implicit */signed char) var_6)), (var_0))))))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_8)))))));
                arr_5 [i_0 + 1] [i_0] = ((/* implicit */unsigned short) var_5);
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((2483142810970619988LL) != (((/* implicit */long long int) ((/* implicit */int) var_11)))))) : (((((/* implicit */int) (unsigned short)0)) << (((((/* implicit */int) var_12)) - (191)))))))) ? ((+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (2134589040344402436LL))))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0] [i_1])))))));
                var_18 = ((/* implicit */unsigned long long int) ((unsigned char) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (arr_3 [i_0])))));
            }
        } 
    } 
    var_19 |= ((/* implicit */unsigned char) (~(((unsigned long long int) var_6))));
    var_20 = (~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((unsigned long long int) var_8)))));
    var_21 = ((/* implicit */unsigned long long int) ((unsigned int) var_9));
}
