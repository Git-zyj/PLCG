/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166948
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) min((((((/* implicit */int) (signed char)21)) | (((/* implicit */int) (short)24973)))), (((/* implicit */int) ((((/* implicit */int) ((signed char) 2132754671U))) < (((((/* implicit */_Bool) (short)-28426)) ? (((/* implicit */int) (short)24973)) : (((/* implicit */int) (short)-24952)))))))));
                    var_13 |= ((/* implicit */unsigned char) (-(((/* implicit */int) min((var_11), ((short)24))))));
                    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) min((((long long int) (short)2335)), (((((/* implicit */_Bool) 2172104945U)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))))));
                    var_15 = ((short) ((((/* implicit */_Bool) var_3)) ? (-8294533279970120069LL) : (var_2)));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((3266560862U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))))))));
    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))));
    var_18 = ((/* implicit */unsigned long long int) (~(var_4)));
}
