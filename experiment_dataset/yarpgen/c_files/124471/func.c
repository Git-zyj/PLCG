/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124471
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
    var_20 *= ((/* implicit */_Bool) ((short) 562949953421311ULL));
    var_21 = ((/* implicit */unsigned short) var_4);
    var_22 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_13))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_23 = ((/* implicit */short) ((min((arr_2 [i_0] [i_0]), (((arr_3 [i_0] [i_0]) >> (((arr_2 [i_0] [i_0]) - (2830692775U))))))) >> (((((((arr_1 [i_0]) + (9223372036854775807LL))) >> (((arr_0 [i_0]) - (1198044333U))))) - (26244LL)))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */unsigned int) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_3 [i_0] [i_1])))))) : (((long long int) arr_3 [i_0] [i_0]))))));
                arr_6 [i_1] [2U] [2U] = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))));
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) 2003140904)) ? (((/* implicit */long long int) 4248842994U)) : (var_1))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
}
