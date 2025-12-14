/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1788
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_3)))))))) - (((long long int) var_11))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_15 = 4294967295U;
                    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) arr_9 [8U] [i_1] [i_1]))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) ((unsigned short) var_12));
    var_18 = min((((/* implicit */long long int) ((unsigned short) min((((/* implicit */long long int) 306740496U)), (var_13))))), (var_13));
    var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned short) (+(var_8)))))));
}
