/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138485
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
    var_19 = ((/* implicit */signed char) (((((+(((/* implicit */int) var_9)))) + (((/* implicit */int) var_6)))) / ((+((-(((/* implicit */int) var_14))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned int) ((arr_1 [i_0]) ? ((~(((((/* implicit */int) (unsigned char)218)) | (((/* implicit */int) (_Bool)1)))))) : ((~(((/* implicit */int) (unsigned short)37706))))));
                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) ((_Bool) (unsigned char)229))) : (((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_1 + 1] [i_1])) ? (((/* implicit */int) arr_2 [i_0 - 2] [i_1 - 1] [i_0 - 2])) : (((/* implicit */int) arr_2 [i_0 - 2] [i_1 + 1] [i_1 - 1]))))));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_5)), (min((min((((/* implicit */unsigned long long int) 984637U)), (var_1))), (((/* implicit */unsigned long long int) var_18))))));
}
