/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135069
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
    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) var_3))));
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (unsigned char)138))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_19 *= (!(((/* implicit */_Bool) ((signed char) var_1))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((long long int) arr_1 [i_0])) + (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_1 [i_0])))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_15)), (var_4)))) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (max((((((/* implicit */long long int) ((/* implicit */int) var_2))) & (var_11))), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) (-(((/* implicit */int) var_8)))))));
        arr_4 [0ULL] [i_0] = ((/* implicit */int) 4503599627370464LL);
        var_20 = ((/* implicit */unsigned short) ((unsigned char) arr_0 [i_0] [i_0]));
    }
    var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_3)), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_15)) : (var_11))))))));
}
