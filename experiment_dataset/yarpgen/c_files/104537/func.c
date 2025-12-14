/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104537
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
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        arr_3 [3LL] &= ((/* implicit */signed char) min((((/* implicit */int) arr_0 [i_0])), ((~(((/* implicit */int) ((var_15) <= (((/* implicit */unsigned long long int) 0LL)))))))));
        var_18 = ((/* implicit */long long int) ((var_17) ? (min((((/* implicit */unsigned long long int) min((3791380076557179778LL), (((/* implicit */long long int) arr_0 [i_0]))))), (min((var_13), (((/* implicit */unsigned long long int) var_2)))))) : (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (signed char)0)))), (((/* implicit */int) ((((/* implicit */int) (signed char)3)) <= (((/* implicit */int) (unsigned char)95))))))))));
    }
    var_19 &= ((/* implicit */unsigned short) ((((((/* implicit */int) var_7)) < (((/* implicit */int) var_7)))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_11)) ? (11888428215526858490ULL) : (((/* implicit */unsigned long long int) var_2)))) - (((var_14) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
}
