/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163776
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
    var_16 = ((/* implicit */long long int) -1621651457);
    var_17 = ((/* implicit */_Bool) (+(((/* implicit */int) var_6))));
    var_18 -= ((((((/* implicit */int) ((var_11) != (((/* implicit */long long int) ((/* implicit */int) var_7)))))) <= ((+(((/* implicit */int) (unsigned short)9420)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((var_11) ^ (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-47))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) 85517472U)) ? (4070286244U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)172))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) 1621651448)) > (var_11)))))))));
                    arr_6 [i_1] = ((/* implicit */unsigned long long int) ((arr_2 [i_1]) % (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)105))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_2 + 1])) || (((/* implicit */_Bool) arr_2 [i_0]))))) : (((((/* implicit */int) arr_3 [i_0] [i_1] [i_2])) % (1621651452))))))));
                    var_20 -= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 4070286260U)) && (((/* implicit */_Bool) 9292328201312851355ULL)))))) == (((((/* implicit */_Bool) var_8)) ? (arr_5 [i_0] [(short)0] [i_2 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
                }
            } 
        } 
    } 
}
