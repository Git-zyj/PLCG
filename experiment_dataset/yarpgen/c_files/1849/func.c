/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1849
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
    var_19 = ((/* implicit */unsigned int) (!(((var_1) > (min((((/* implicit */unsigned long long int) 2087615850U)), (18446744073709551615ULL)))))));
    var_20 = ((/* implicit */int) ((short) (+(((/* implicit */int) var_14)))));
    var_21 = ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_15)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) min((var_18), (((/* implicit */unsigned char) (signed char)-21)))))));
                var_22 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) 12U)) | (-1LL)))), (min((6023777452494036407ULL), (((/* implicit */unsigned long long int) arr_1 [i_0 + 1]))))));
            }
        } 
    } 
    var_23 = ((/* implicit */int) var_5);
}
