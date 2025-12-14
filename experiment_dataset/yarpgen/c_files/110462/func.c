/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110462
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
    var_16 = ((/* implicit */unsigned long long int) 411623862927104847LL);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 6; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_17 += ((/* implicit */short) (~(((((/* implicit */_Bool) (signed char)-97)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)98))))) : (min((((/* implicit */long long int) arr_4 [i_0] [i_0] [i_1])), (var_10)))))));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) arr_6 [i_0]);
            }
        } 
    } 
    var_18 *= ((/* implicit */signed char) var_5);
    var_19 = ((/* implicit */unsigned short) (unsigned char)13);
}
