/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183337
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
    var_17 ^= ((/* implicit */long long int) var_8);
    var_18 = ((/* implicit */_Bool) var_12);
    var_19 = ((/* implicit */unsigned int) min((max((((/* implicit */long long int) (signed char)110)), (((var_3) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)94))))))), (((/* implicit */long long int) var_16))));
    var_20 = ((/* implicit */unsigned char) ((_Bool) (unsigned char)162));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_0] = (+((~(((532575944704LL) << (((((-532575944704LL) + (532575944738LL))) - (26LL))))))));
                arr_8 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)94)) ? (((/* implicit */int) (unsigned char)161)) : (((/* implicit */int) (unsigned char)97))))));
                var_21 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_1 [i_1 + 2])) + (((/* implicit */int) arr_1 [i_1 - 1])))) >> (((/* implicit */int) arr_1 [i_1 - 1]))));
                var_22 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_3 [i_1 + 2])))) ? (((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (arr_3 [i_1 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)64451)))))));
            }
        } 
    } 
}
