/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170340
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
    var_13 = ((/* implicit */signed char) ((var_0) * (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_8))))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (+(((/* implicit */int) (short)7)))))) && (((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
                    var_15 = ((/* implicit */unsigned int) min((var_15), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((1073741823U) ^ (((/* implicit */unsigned int) 365840798))))))) : (1073741811U)))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_8))));
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (+((~(((long long int) var_3)))))))));
    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((int) min((var_11), (((/* implicit */unsigned long long int) var_6))))))));
}
