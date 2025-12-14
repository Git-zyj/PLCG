/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188644
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
    var_17 = (_Bool)1;
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 14; i_2 += 4) 
            {
                {
                    var_18 = var_7;
                    arr_8 [i_0] [i_1 - 2] [i_0] = ((/* implicit */signed char) (+(2938892497U)));
                    var_19 = ((_Bool) -5720143007295400667LL);
                    arr_9 [i_0] [i_0] [17ULL] = ((/* implicit */_Bool) 2825285490U);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) var_7);
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? ((((_Bool)1) ? (-6020759944329488494LL) : (((/* implicit */long long int) 1064228339)))) : (((/* implicit */long long int) ((/* implicit */int) max((var_7), ((_Bool)1)))))))) ? (((/* implicit */long long int) (-(var_5)))) : (var_10)));
}
