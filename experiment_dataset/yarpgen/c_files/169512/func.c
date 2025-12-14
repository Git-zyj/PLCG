/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169512
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 6; i_0 += 2) 
    {
        var_17 += ((/* implicit */_Bool) ((long long int) (-(((/* implicit */int) (unsigned short)0)))));
        var_18 = ((((/* implicit */_Bool) 2452426282U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1]))) : (arr_0 [i_0 + 1]));
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) arr_1 [i_0]))));
        var_20 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0 + 3])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0 + 4])) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) var_7))));
    }
    var_21 &= ((/* implicit */unsigned long long int) var_3);
    var_22 ^= max((min((min((((/* implicit */unsigned int) var_4)), (var_13))), (var_13))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) -6817447096841045381LL))))));
    var_23 += min((((/* implicit */unsigned short) (unsigned char)140)), (var_3));
    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) max((max((((/* implicit */long long int) min((((/* implicit */short) var_11)), (var_1)))), (((((/* implicit */_Bool) (unsigned char)112)) ? (-3462857366620767908LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))), (((/* implicit */long long int) var_2)))))));
}
