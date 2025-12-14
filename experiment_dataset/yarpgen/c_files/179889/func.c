/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179889
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
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */signed char) arr_0 [i_0] [i_1]);
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((signed char) var_2));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)86)) ? (((/* implicit */int) (signed char)56)) : (1612228440)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_4))))) : ((-(((/* implicit */int) (signed char)127))))))) && (((/* implicit */_Bool) var_0))));
    var_17 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (((!(var_3))) && (((/* implicit */_Bool) var_14)))))));
    var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) (+((~(((/* implicit */int) (unsigned short)56272)))))))));
}
