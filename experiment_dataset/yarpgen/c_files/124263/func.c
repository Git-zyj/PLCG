/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124263
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
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) (unsigned short)7936))) | (((((/* implicit */_Bool) 4250405035U)) ? (((/* implicit */int) (signed char)47)) : (((/* implicit */int) (unsigned short)7936))))))) ? (((/* implicit */long long int) var_10)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)57600)) : (((/* implicit */int) (unsigned short)57600))))) ? (((((/* implicit */long long int) 2047U)) & (var_1))) : (((/* implicit */long long int) ((int) (unsigned char)144)))))));
    var_17 = ((/* implicit */int) var_10);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_18 ^= ((/* implicit */unsigned int) max(((-(arr_4 [i_1]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 1073709056)))))));
                var_19 ^= ((/* implicit */signed char) (~(min((-1), (((/* implicit */int) (unsigned short)57600))))));
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) min((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && ((!(((/* implicit */_Bool) 2047U))))))), (((-1) + (((/* implicit */int) (signed char)-1)))))))));
                arr_6 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-83)) % (((/* implicit */int) (unsigned short)3269))));
                arr_7 [i_0] [i_0] [i_0] = ((min((((((/* implicit */_Bool) (unsigned short)53454)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) (unsigned short)12081)))), (((/* implicit */int) (signed char)0)))) * (((((/* implicit */int) (unsigned short)7936)) / (((/* implicit */int) (unsigned short)44112)))));
            }
        } 
    } 
}
