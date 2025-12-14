/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153602
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
    for (long long int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */long long int) arr_2 [i_1] [i_0 + 1]);
                arr_6 [i_0] [i_1] [(_Bool)0] &= ((/* implicit */unsigned char) ((((_Bool) ((short) arr_0 [(unsigned char)10] [(unsigned char)10]))) ? ((+(((/* implicit */int) var_18)))) : (((/* implicit */int) var_16))));
                var_20 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */long long int) ((/* implicit */int) var_1))) + (arr_4 [14U] [i_1] [i_1])))))) ? (((((/* implicit */_Bool) max((-1192824209), (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1] [i_0])) : (((((/* implicit */_Bool) arr_0 [8] [6])) ? (((/* implicit */int) (signed char)116)) : (((/* implicit */int) arr_1 [(unsigned short)20])))))) : ((+(((/* implicit */int) ((_Bool) var_10)))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_10);
                arr_8 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 2129364868599230741ULL))));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (var_14) : (4294967285U)))), (2129364868599230741ULL)));
    var_22 = ((/* implicit */signed char) var_11);
    var_23 = var_3;
    var_24 = ((/* implicit */unsigned char) var_2);
}
