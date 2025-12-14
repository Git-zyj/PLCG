/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163521
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */short) var_1);
                    var_15 |= ((/* implicit */unsigned char) var_8);
                    var_16 = ((/* implicit */_Bool) var_3);
                    arr_8 [(unsigned char)9] [i_1] [13ULL] = ((/* implicit */unsigned char) (unsigned short)28166);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) var_9);
    var_18 ^= ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) (unsigned short)37389)), (var_2))) - (((/* implicit */unsigned long long int) (((-(var_0))) * (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)12))) / (var_13))))))));
    var_19 ^= ((/* implicit */unsigned short) var_6);
    var_20 = ((/* implicit */unsigned char) min(((short)2047), ((short)2047)));
}
