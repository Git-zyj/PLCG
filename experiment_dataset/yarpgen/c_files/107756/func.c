/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107756
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_15 ^= arr_5 [i_2];
                    var_16 &= ((/* implicit */int) arr_6 [i_0] [(unsigned short)2] [i_2] [i_1]);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned short) max((var_5), (((/* implicit */unsigned int) min((((((/* implicit */int) var_12)) + (((/* implicit */int) var_0)))), (((/* implicit */int) ((unsigned short) 2147483640))))))));
    var_18 = ((/* implicit */_Bool) var_6);
    var_19 = ((((long long int) max((((/* implicit */unsigned short) (unsigned char)192)), ((unsigned short)54913)))) * (((/* implicit */long long int) ((((/* implicit */int) var_0)) * ((-(((/* implicit */int) var_1))))))));
}
