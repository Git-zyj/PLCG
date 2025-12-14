/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111195
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)20853)) : (((/* implicit */int) var_0))))) ? ((+(6ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-62)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)177))) : (var_4))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)25)) ? (((/* implicit */int) (unsigned short)52218)) : (((/* implicit */int) (unsigned short)52218)))))));
                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52218))) ^ (3655514402106153012ULL))))))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned char)32))))))) ? (((((/* implicit */_Bool) (unsigned short)13300)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)168)))) : (((/* implicit */int) var_0))));
            }
        } 
    } 
}
