/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111327
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
    var_16 = ((/* implicit */_Bool) ((unsigned short) (unsigned short)25));
    var_17 &= ((/* implicit */long long int) var_12);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */long long int) 16458241361211799006ULL);
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3] = ((((((/* implicit */_Bool) ((18119401230578665581ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))) ? (20ULL) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42161))) : (327342843130886034ULL))))) + (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) (unsigned char)211))))))));
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_7))))))) * (var_8)));
                        }
                    } 
                } 
            }
        } 
    } 
}
