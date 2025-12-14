/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122517
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
    var_17 = ((/* implicit */unsigned long long int) var_16);
    var_18 = ((/* implicit */short) ((unsigned short) (unsigned char)221));
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0 - 3] [i_0] [i_0] = (~(((((/* implicit */_Bool) arr_7 [i_0 - 3] [i_0 - 1] [(unsigned char)4] [i_0 - 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [3LL] [i_0 - 3] [i_0 - 3] [i_0 - 3])))));
                    var_19 *= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((arr_3 [(unsigned char)3]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [7LL])))))) != (((3659390016946602216ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0])))))))) * (((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) (+((((~(var_16))) >> (((((/* implicit */int) var_13)) + (16221)))))));
    var_21 = ((/* implicit */short) (+(((/* implicit */int) var_9))));
}
