/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183030
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
    var_18 = 4294967287U;
    var_19 += ((/* implicit */unsigned long long int) ((((3061698661U) & (2828767266U))) > (var_4)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 4; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) ((((68240316U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [i_1] [i_0 - 4] [i_0]))))) < (((/* implicit */unsigned int) (+(((/* implicit */int) var_0)))))));
                    arr_8 [i_0 - 2] [i_0 - 2] [i_0] = min((((/* implicit */unsigned long long int) 3061698661U)), ((+(18446744073709551615ULL))));
                }
            } 
        } 
    } 
    var_21 = var_16;
    var_22 |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_11)))) == (var_5))))));
}
