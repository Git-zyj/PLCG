/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10184
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
    for (short i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned long long int) max((var_11), (3857367239802742275ULL)));
        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((14589376833906809338ULL) << (((3857367239802742277ULL) - (3857367239802742268ULL))))), (min((3857367239802742275ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))))))));
        arr_2 [2LL] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((-3506335609212795707LL) + (9223372036854775807LL))) << (((((/* implicit */int) arr_1 [i_0])) - (397)))))) ? (min((arr_0 [i_0]), (-3506335609212795715LL))) : (1130575032191892608LL))) - (((/* implicit */long long int) ((((/* implicit */_Bool) -3506335609212795715LL)) ? (((/* implicit */int) (short)-24047)) : (((/* implicit */int) (signed char)-113)))))));
    }
    var_13 &= ((/* implicit */long long int) var_10);
    var_14 = ((/* implicit */signed char) var_5);
    var_15 = ((long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 530436055U)))))));
}
