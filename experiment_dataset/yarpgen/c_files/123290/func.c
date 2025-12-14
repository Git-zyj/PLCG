/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123290
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_4 [(unsigned short)18] [(unsigned short)18] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) > (((/* implicit */int) ((((/* implicit */int) (unsigned char)11)) > (((/* implicit */int) (unsigned char)93)))))))) << (((/* implicit */int) max((((signed char) -4373948506989707298LL)), (((/* implicit */signed char) ((_Bool) (signed char)-47))))))));
                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)27)) ? (-4752178834160394066LL) : (((/* implicit */long long int) ((/* implicit */int) (short)9891))))) % (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)243)) % (((/* implicit */int) (short)16325)))))))) && (((/* implicit */_Bool) (short)24700))));
                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) arr_3 [i_0] [i_0] [i_1]))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) ((((((/* implicit */int) ((8333701498194420216LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)66)))))) <= (((/* implicit */int) (unsigned char)244)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4))));
}
