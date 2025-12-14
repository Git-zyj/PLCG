/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163274
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) 18446744073709551613ULL);
        arr_3 [15] [(signed char)9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41422))) <= (var_16)))) : (((((/* implicit */_Bool) arr_0 [5])) ? (var_8) : (((/* implicit */int) var_2))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 19; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [(_Bool)1])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) var_3))));
        var_20 ^= ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_1])) <= (arr_1 [i_1])));
    }
    var_21 = ((/* implicit */signed char) max((min((((18446744073709551597ULL) - (((/* implicit */unsigned long long int) var_17)))), (((3ULL) ^ (14466792317263734534ULL))))), (((/* implicit */unsigned long long int) var_13))));
}
