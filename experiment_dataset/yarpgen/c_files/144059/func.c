/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144059
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
    var_20 = ((/* implicit */unsigned int) (+(max((((var_3) >> (((var_16) - (2347077273U))))), (max((((/* implicit */long long int) var_19)), (var_3)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 4; i_1 < 17; i_1 += 1) 
        {
            for (long long int i_2 = 4; i_2 < 19; i_2 += 2) 
            {
                {
                    var_21 = (+((-(((/* implicit */int) ((short) var_3))))));
                    arr_8 [i_0] = min((var_8), ((+((+(((/* implicit */int) arr_3 [i_0])))))));
                }
            } 
        } 
    } 
    var_22 = ((((/* implicit */_Bool) -3153651860970090210LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (min((((/* implicit */unsigned int) ((short) (unsigned short)2))), (4294967290U))));
}
