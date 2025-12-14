/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120808
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
    var_19 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)65535))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((unsigned long long int) var_4))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 24; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) var_5))));
                    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) arr_4 [i_2 - 2] [i_2 - 2] [(unsigned char)23]))));
                }
            } 
        } 
    } 
    var_22 &= ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) << ((((((-(((/* implicit */int) (unsigned short)65535)))) + (65554))) - (14)))));
}
