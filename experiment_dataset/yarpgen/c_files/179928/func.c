/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179928
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
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (~(((var_13) | (max((((/* implicit */unsigned long long int) var_0)), (var_9))))))))));
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? ((-(var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_12))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_17 ^= ((/* implicit */_Bool) min((min((var_6), (((/* implicit */unsigned long long int) min((2005681065U), (4294967295U)))))), (((/* implicit */unsigned long long int) ((((-8339179914915989032LL) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned char)116)) - (116))))))));
                var_18 = ((/* implicit */unsigned char) (-(min((arr_3 [i_0]), (((/* implicit */int) ((_Bool) 145779068U)))))));
                arr_4 [i_0] = ((/* implicit */unsigned long long int) var_2);
            }
        } 
    } 
    var_19 |= ((/* implicit */unsigned int) var_1);
    var_20 = ((/* implicit */unsigned int) var_9);
}
