/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131127
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
    var_17 |= ((/* implicit */_Bool) var_5);
    var_18 = ((/* implicit */long long int) var_5);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_5 [i_1] &= ((/* implicit */_Bool) var_4);
                arr_6 [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) min((((/* implicit */unsigned int) min((((/* implicit */signed char) (_Bool)1)), (var_16)))), (((var_5) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)101)))))))) & (arr_1 [i_0])));
                arr_7 [i_0] [i_0] [i_0] = arr_4 [i_0] [i_0] [i_0];
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
            }
        } 
    } 
    var_19 = ((((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_15))))) != (var_10)))) >> (((((((/* implicit */_Bool) (unsigned char)190)) ? (((/* implicit */int) (unsigned char)66)) : (((/* implicit */int) (unsigned char)53)))) - (36))));
}
