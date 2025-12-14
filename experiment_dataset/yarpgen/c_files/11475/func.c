/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11475
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
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) max((var_5), ((+(((((/* implicit */unsigned int) ((/* implicit */int) var_15))) / (var_4))))))))));
    var_20 = (~(((long long int) ((2351774487996602673LL) | (2351774487996602670LL)))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_1] &= ((/* implicit */signed char) ((unsigned short) (+(((/* implicit */int) arr_1 [i_0 - 2] [i_0])))));
                arr_6 [i_0] [i_0] [i_0 + 1] = ((/* implicit */long long int) ((short) ((short) -2351774487996602662LL)));
                arr_7 [i_0] [i_0] = ((int) max((4116413148U), (arr_0 [i_0] [i_1])));
            }
        } 
    } 
    var_21 -= ((/* implicit */unsigned int) var_0);
}
