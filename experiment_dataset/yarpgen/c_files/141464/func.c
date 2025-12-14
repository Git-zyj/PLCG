/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141464
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
    var_20 = ((/* implicit */short) ((long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))), ((~(((/* implicit */int) var_11)))))));
    var_21 = ((max((((714367190U) / (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), ((-(3580600089U))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_10)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */int) max((((/* implicit */unsigned int) (unsigned char)127)), (3580600071U)));
                arr_5 [i_0] = ((/* implicit */unsigned char) arr_3 [(unsigned short)6] [i_1]);
                var_22 = ((/* implicit */unsigned long long int) ((unsigned short) var_18));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */short) ((unsigned char) ((unsigned char) var_12)));
            }
        } 
    } 
    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) min((((/* implicit */unsigned int) var_3)), (714367184U))))) ? (262143U) : (((/* implicit */unsigned int) var_4))));
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) 262116U)) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_17)), ((unsigned short)6697)))) : (((((((/* implicit */int) var_13)) + (2147483647))) >> (((((/* implicit */int) (short)-5622)) + (5626))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((var_2), (((/* implicit */long long int) var_1))))))))));
}
