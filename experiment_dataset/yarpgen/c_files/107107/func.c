/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107107
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
    for (long long int i_0 = 4; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
        var_19 += ((/* implicit */unsigned long long int) ((signed char) ((unsigned long long int) (unsigned char)245)));
        var_20 += ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_1 [i_0 - 3] [i_0]))))));
        arr_3 [i_0] &= ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)15098)) >> (((((/* implicit */int) (signed char)127)) - (106))))) * (((((/* implicit */_Bool) (signed char)-39)) ? (((/* implicit */int) (signed char)-28)) : (((/* implicit */int) (unsigned short)61510))))));
    }
    var_21 = max((((short) ((((/* implicit */_Bool) (short)24930)) ? (((/* implicit */int) (signed char)5)) : (((/* implicit */int) (unsigned char)120))))), (((/* implicit */short) (signed char)-77)));
    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) min((18446744073709551595ULL), (8660692712408177336ULL))))));
}
