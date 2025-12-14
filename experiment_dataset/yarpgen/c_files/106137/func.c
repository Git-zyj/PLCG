/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106137
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
    for (short i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */long long int) arr_4 [i_0] [i_0]);
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (+(((/* implicit */int) ((short) ((_Bool) var_4)))))))));
                var_21 = ((/* implicit */unsigned long long int) ((unsigned short) ((signed char) arr_3 [i_0 + 2])));
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (signed char)-53))) ? (((unsigned int) arr_0 [i_1])) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) -908364967)) > (2111062325329920LL)))))))) ? (((/* implicit */int) ((((int) arr_5 [i_1])) > (((/* implicit */int) arr_5 [i_1]))))) : (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0 - 2] [i_0 + 2])) >= ((+(((/* implicit */int) arr_3 [i_0 + 1])))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) -2111062325329921LL);
}
