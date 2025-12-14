/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112945
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
    var_15 = ((/* implicit */short) var_6);
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 7; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */unsigned int) arr_2 [i_0 + 3] [i_0 + 3])))));
        var_16 += arr_2 [i_0 + 2] [3];
        var_17 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-13558)))))) ? (((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) var_13))))) : (((/* implicit */int) ((short) 2147483647)))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
    }
    var_18 -= ((((/* implicit */_Bool) max(((+(((/* implicit */int) var_6)))), (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_0))))))) ? (var_3) : (((/* implicit */int) (!(((/* implicit */_Bool) -6477895256774312129LL))))));
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) (+(((/* implicit */int) (unsigned char)224)))))) ? (((/* implicit */long long int) var_7)) : (max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))))), (max((137438953471LL), (((/* implicit */long long int) var_14))))))));
    var_20 = ((/* implicit */unsigned short) ((int) var_4));
}
