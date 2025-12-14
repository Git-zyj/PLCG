/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176101
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
    var_15 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) ^ (((/* implicit */int) (_Bool)1))));
    var_16 |= ((/* implicit */unsigned int) max((max((((/* implicit */long long int) (signed char)0)), (1725846274199705915LL))), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 1725846274199705915LL)) || (((/* implicit */_Bool) 8753539175517727113ULL))))) / (402257558))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) var_13)), (var_12))))) : (arr_1 [(unsigned char)12] [(unsigned char)12])))))));
        var_18 = ((/* implicit */long long int) 2ULL);
        var_19 = ((/* implicit */_Bool) min((min((((((/* implicit */unsigned long long int) var_4)) & (8753539175517727113ULL))), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) -1725846274199705912LL))))), (1725846274199705911LL))))));
    }
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        var_20 |= ((/* implicit */signed char) (_Bool)1);
        var_21 = ((long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : ((+(18U)))));
        var_22 = ((((/* implicit */int) (!(((((/* implicit */_Bool) arr_2 [i_1])) && (((/* implicit */_Bool) arr_4 [i_1] [i_1]))))))) / (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_0 [7LL])) >= (((arr_4 [i_1] [i_1]) % (4915575112515646272ULL)))))));
    }
}
