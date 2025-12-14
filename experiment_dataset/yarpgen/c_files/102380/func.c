/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102380
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
    var_13 = ((/* implicit */_Bool) var_2);
    var_14 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_7)))) / (((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) / (var_5))) + (((/* implicit */unsigned long long int) ((551908446U) * (551908446U))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_6 [(unsigned char)0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) ((unsigned long long int) var_4)))) ? (((/* implicit */int) min(((unsigned short)37778), (((/* implicit */unsigned short) arr_5 [i_0 + 2]))))) : ((~((+(((/* implicit */int) (signed char)118))))))));
                arr_7 [i_1] [i_0 - 1] = ((/* implicit */short) ((int) min((((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0])) && (((/* implicit */_Bool) var_11))))), (arr_2 [i_0 + 1] [i_0]))));
            }
        } 
    } 
}
