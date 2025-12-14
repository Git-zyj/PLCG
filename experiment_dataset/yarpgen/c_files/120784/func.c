/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120784
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
        for (unsigned short i_1 = 4; i_1 < 17; i_1 += 3) 
        {
            {
                arr_8 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(4294967295U)))) ? (((((/* implicit */_Bool) 4294967295U)) ? (10530796484148238854ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9936))))) : ((-(arr_3 [i_0])))));
                arr_9 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) / (min((max((((/* implicit */unsigned long long int) arr_6 [i_1])), (11ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)32767))) > (-1501247095525064754LL))))))));
                var_12 = ((/* implicit */unsigned short) 4294967271U);
                arr_10 [i_1] = ((/* implicit */short) var_9);
            }
        } 
    } 
    var_13 = min((((((((/* implicit */long long int) 4294967273U)) & (var_0))) ^ (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) var_9)));
}
