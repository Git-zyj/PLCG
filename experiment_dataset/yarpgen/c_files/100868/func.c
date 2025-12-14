/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100868
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) >> (((((/* implicit */int) var_6)) >> (((var_3) + (250009692)))))));
        var_16 = ((/* implicit */unsigned int) var_5);
        arr_5 [i_0] = ((/* implicit */unsigned char) ((long long int) ((((unsigned long long int) var_8)) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))));
        arr_6 [i_0] [i_0] = var_6;
        arr_7 [i_0] = ((/* implicit */unsigned int) ((unsigned short) var_2));
    }
    for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        arr_11 [i_1] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */int) var_11)) >> (((((/* implicit */int) ((signed char) var_2))) + (54))))));
        arr_12 [i_1] = ((/* implicit */int) var_6);
        var_17 = ((/* implicit */signed char) var_8);
    }
    var_18 = ((/* implicit */unsigned char) ((int) ((((/* implicit */int) ((unsigned short) var_1))) - (((/* implicit */int) ((15407165106573415713ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)73)))))))));
}
