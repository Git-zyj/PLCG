/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18725
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
    var_18 = ((/* implicit */long long int) var_8);
    var_19 = (+(min((((5218060191142350049LL) << (((var_2) - (266960610U))))), (((/* implicit */long long int) (+(((/* implicit */int) var_0))))))));
    var_20 |= ((/* implicit */long long int) var_6);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((max((((((/* implicit */_Bool) 4158574858089060940LL)) ? (-4530151145707785216LL) : (((/* implicit */long long int) 3487548432U)))), (-4470767880822969846LL))) >= (((/* implicit */long long int) ((/* implicit */int) max((var_14), (((/* implicit */unsigned short) ((short) (_Bool)0))))))));
                arr_7 [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4158574858089060940LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)0)))))))), (-894970888419434673LL)));
            }
        } 
    } 
}
