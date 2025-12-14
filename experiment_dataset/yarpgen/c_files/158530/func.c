/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158530
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
    var_14 = min(((~(var_13))), (var_0));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned int i_2 = 4; i_2 < 8; i_2 += 4) 
            {
                {
                    var_15 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)25327)) ? (((/* implicit */int) (short)13337)) : (((/* implicit */int) (unsigned short)20392))));
                    var_16 = ((/* implicit */short) (-(((4ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
                    arr_11 [i_0] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-13338)) ? (((/* implicit */int) (short)-13338)) : (((/* implicit */int) (unsigned char)53))))) ? (10663931626136270828ULL) : (((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned int) var_2)))))));
                }
            } 
        } 
    } 
    var_17 *= ((/* implicit */unsigned short) min((min((((((/* implicit */_Bool) var_11)) ? (var_13) : (var_0))), ((~(((/* implicit */int) (unsigned char)90)))))), ((~(((((/* implicit */_Bool) (unsigned char)52)) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) var_9))))))));
}
