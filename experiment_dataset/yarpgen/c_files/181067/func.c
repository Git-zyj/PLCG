/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181067
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
    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (var_12) : (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)44))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) var_15))));
                var_18 = ((/* implicit */unsigned long long int) 2839675201855834948LL);
                var_19 -= ((/* implicit */int) ((signed char) -4621982721105836070LL));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) var_9)) : ((-(((/* implicit */int) (unsigned char)188))))))) && ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (10368537096143438110ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))))));
    var_21 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) var_12)) != (min((524287ULL), (((/* implicit */unsigned long long int) -1219585142)))))))));
}
