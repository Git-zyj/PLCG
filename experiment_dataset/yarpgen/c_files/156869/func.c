/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156869
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
    var_20 = ((/* implicit */unsigned short) var_13);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) 14429282964758580490ULL)) ? (((/* implicit */int) (unsigned short)39049)) : (((/* implicit */int) (_Bool)1)))))));
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((short) arr_3 [i_1] [i_0])))) > (min((var_18), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)26486))) - (-2242789307857457832LL)))))));
                arr_6 [i_1] [7U] [i_0] = ((/* implicit */_Bool) ((unsigned char) (~(((long long int) arr_5 [6LL] [9ULL])))));
            }
        } 
    } 
    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_13)) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)26481))) : (-7651134591530585765LL)))));
}
