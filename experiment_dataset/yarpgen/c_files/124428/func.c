/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124428
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((arr_2 [i_1 - 1]) % (((/* implicit */int) max(((short)3359), ((short)-25002))))))), ((((+(var_10))) - (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_1 - 1])))))))));
                    var_15 = ((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_2] [i_2]))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((unsigned long long int) ((int) (unsigned char)147))))))));
    var_17 = ((/* implicit */unsigned short) var_7);
}
