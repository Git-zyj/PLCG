/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123419
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
    var_17 = ((/* implicit */signed char) min((max(((-(var_4))), (((/* implicit */long long int) var_12)))), (((/* implicit */long long int) (-((+(var_14))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned short) (signed char)-1);
                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)9)) ? (3670517814371502928ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-12))))) <= (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) | (var_11))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((-1LL) <= (((/* implicit */long long int) ((/* implicit */int) var_13))))))))))))));
                arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [(unsigned char)11] [i_1])))))) != (((4496689874900166006ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))));
                arr_5 [i_0] = ((/* implicit */int) arr_2 [i_1] [i_1] [i_0]);
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (10516941647271271935ULL) : (((/* implicit */unsigned long long int) max((27LL), (((/* implicit */long long int) 2044)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)1)) ? (14771467605115829825ULL) : (((/* implicit */unsigned long long int) -7LL))))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) var_16);
}
