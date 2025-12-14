/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104028
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
    var_15 = ((((/* implicit */_Bool) (((-(((/* implicit */int) (_Bool)1)))) & (((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (signed char)1))))))) ? (8191) : ((-(var_3))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            {
                var_16 ^= ((/* implicit */long long int) 1806529704);
                var_17 = ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (-3165158807354840802LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)14))))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-53)) >= (((/* implicit */int) (unsigned char)158))))))))) | (((/* implicit */int) arr_3 [i_0]))));
                arr_6 [i_1] = ((/* implicit */unsigned char) (-(arr_2 [i_1] [i_1 + 2])));
                var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned int) var_11)) + ((+(74939587U)))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */long long int) min(((~(((/* implicit */int) (unsigned char)160)))), (-8175)))) & ((((_Bool)0) ? (((((/* implicit */long long int) var_11)) ^ (-2726295129718524638LL))) : (var_13)))));
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)97)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (3644981198U)))), (max(((~(var_9))), (((/* implicit */unsigned long long int) var_12)))))))));
    var_21 = ((/* implicit */unsigned short) var_0);
}
