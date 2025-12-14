/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129809
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) (short)7095)), (((((/* implicit */_Bool) 12978702624853621168ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_0 [i_0]))))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 3063448464512176031LL)))) : (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_5)))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_0] [i_1] [19ULL]))))) - ((+((-(arr_1 [i_0])))))));
            }
        } 
    } 
    var_20 = (-(0LL));
}
