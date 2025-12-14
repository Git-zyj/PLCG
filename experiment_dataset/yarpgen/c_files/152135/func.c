/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152135
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
    var_14 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (unsigned short)30120)) ? (((/* implicit */int) (unsigned short)24567)) : (((/* implicit */int) (signed char)0)))), (((/* implicit */int) max((max((((/* implicit */unsigned short) (signed char)32)), ((unsigned short)25051))), (((/* implicit */unsigned short) (signed char)-112)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) 1919073563U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)28))) : (9836043389016307944ULL))));
        var_15 = ((/* implicit */_Bool) (unsigned short)40966);
    }
    var_16 = ((/* implicit */short) (signed char)7);
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned short) (signed char)-32))), (18446744073709551615ULL)))) ? (((/* implicit */long long int) ((((/* implicit */int) ((0) <= (1366577025)))) % (((/* implicit */int) max((((/* implicit */short) (signed char)118)), ((short)768))))))) : (max((((/* implicit */long long int) ((int) 18446744073709551608ULL))), (min((((/* implicit */long long int) -6)), (0LL)))))));
}
