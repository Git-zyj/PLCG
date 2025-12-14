/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114729
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
    var_12 = ((/* implicit */int) ((((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned short) (short)4020))))) ? ((~(((/* implicit */int) var_1)))) : (((((/* implicit */int) (unsigned short)11)) & (var_8))))) <= (((((/* implicit */_Bool) ((unsigned long long int) var_8))) ? (((((/* implicit */_Bool) (unsigned char)26)) ? (var_5) : (((/* implicit */int) var_0)))) : (var_8)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 7; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_13 |= ((((/* implicit */_Bool) ((int) (unsigned short)23914))) ? ((+(((/* implicit */int) var_3)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [(short)7])) || (((/* implicit */_Bool) (short)-4036))))));
                    arr_7 [i_0] [6] [(_Bool)1] [i_1] = ((/* implicit */signed char) min(((short)4022), ((short)4014)));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */_Bool) ((((var_8) + (2147483647))) >> (((((((/* implicit */int) var_4)) * (((/* implicit */int) (_Bool)1)))) - (2037)))));
    var_15 = ((/* implicit */int) min((max((((/* implicit */unsigned long long int) min((var_6), (var_8)))), (((unsigned long long int) (unsigned char)49)))), (((/* implicit */unsigned long long int) min(((+(((/* implicit */int) (short)16256)))), ((+(((/* implicit */int) var_0)))))))));
}
