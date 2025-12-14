/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161164
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) var_10);
                var_16 = ((/* implicit */int) min((arr_4 [(unsigned char)8] [i_1] [i_0]), ((!(((/* implicit */_Bool) arr_5 [i_0]))))));
                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((unsigned int) var_5)) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)52702))))), (var_0)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned int) var_3)), (min((((/* implicit */unsigned int) var_15)), ((-(2666554245U)))))));
}
