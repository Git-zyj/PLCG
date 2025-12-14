/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106255
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
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                var_17 ^= ((/* implicit */signed char) ((long long int) (short)12177));
                arr_5 [10U] [i_0] [i_0] |= ((/* implicit */unsigned char) ((_Bool) (~(arr_2 [i_0]))));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_7))))))))), (((min((var_6), (((/* implicit */unsigned long long int) (unsigned char)144)))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)10543)) + (((/* implicit */int) (unsigned char)82)))))))));
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((var_10) ^ (((/* implicit */unsigned long long int) ((int) ((var_10) == (var_10))))))))));
    var_20 = ((/* implicit */unsigned char) var_16);
}
