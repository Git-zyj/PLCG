/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147378
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
    var_17 = ((/* implicit */short) (-(((((/* implicit */int) (unsigned short)59188)) << (((((((/* implicit */_Bool) (unsigned short)57344)) ? (((/* implicit */int) (unsigned short)59206)) : (((/* implicit */int) (unsigned short)59206)))) - (59192)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_7 [i_1] [i_0] [i_0] = ((/* implicit */long long int) (unsigned short)6341);
                var_18 = min((((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) (unsigned short)6322)) : (((/* implicit */int) arr_0 [i_0] [(unsigned char)11])))), (((((/* implicit */int) var_7)) * ((-(((/* implicit */int) var_9)))))));
            }
        } 
    } 
    var_19 += ((/* implicit */unsigned short) min(((+(((/* implicit */int) (unsigned short)6327)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((_Bool) var_9)))))));
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (var_15) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned short)59195)) : (((/* implicit */int) var_6)))))));
}
