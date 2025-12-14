/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161413
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_8) ^ (((/* implicit */unsigned long long int) min((-1), (((/* implicit */int) (unsigned char)235)))))))) ? ((+(((/* implicit */int) arr_0 [i_0 - 1])))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) var_3)) ? (arr_1 [i_0 - 1] [i_0]) : (arr_1 [i_0] [i_0]))) : (((/* implicit */int) arr_0 [i_0]))))));
        var_10 = max((((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 1])) ? (arr_1 [i_0] [i_0 - 1]) : (((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) ((-23) != (((/* implicit */int) (unsigned short)65525))))));
        var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 1])) ? (4294967294U) : (((/* implicit */unsigned int) arr_1 [i_0] [1]))))), (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (549739036672ULL) : (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0 - 1])))))))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 1) /* same iter space */
    {
        var_12 *= 941119310U;
        var_13 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((18446743523970514943ULL) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_1])))))))) ? ((-(4294967295U))) : (((/* implicit */unsigned int) var_9))));
    }
    for (unsigned long long int i_2 = 2; i_2 < 17; i_2 += 1) /* same iter space */
    {
        var_14 -= ((/* implicit */long long int) (+((-(min((-1360473936), (((/* implicit */int) var_3))))))));
        var_15 = ((/* implicit */_Bool) 9223372036854775807LL);
    }
    var_16 = ((/* implicit */long long int) var_2);
}
