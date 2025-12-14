/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111465
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_4 [i_1] [(signed char)10] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
                arr_5 [i_1] = ((/* implicit */int) 1301721068U);
                var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) ? (((/* implicit */int) (unsigned char)87)) : (((/* implicit */int) var_6))))) == (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) : (var_4))))))));
            }
        } 
    } 
    var_12 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)227)) ? (((/* implicit */int) (signed char)-76)) : (((/* implicit */int) (signed char)76))));
}
