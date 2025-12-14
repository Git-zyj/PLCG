/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182014
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_13 = min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((unsigned char) var_7))), (((((/* implicit */_Bool) (unsigned short)25701)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1293800807U)))))), (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_6 [i_0]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_1] [i_1] [i_2]))))))));
                    arr_8 [(unsigned short)0] [i_1] [i_1] [(unsigned char)11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)25468)) ? (((((/* implicit */int) arr_1 [i_0 - 1])) << (((((/* implicit */int) var_11)) + (99))))) : (min((var_6), (((((/* implicit */_Bool) (short)-14724)) ? (((/* implicit */int) (unsigned short)25468)) : (((/* implicit */int) (unsigned char)144))))))));
                    var_14 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) * (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (unsigned char)93)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)17))))));
                }
            } 
        } 
    } 
    var_15 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)53)) ? (((/* implicit */int) var_5)) : ((+(((/* implicit */int) (unsigned char)76))))));
}
