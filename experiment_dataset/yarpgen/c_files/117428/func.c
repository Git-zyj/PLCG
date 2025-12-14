/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117428
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((var_7) >= (((/* implicit */unsigned long long int) var_6))))) : ((+(((/* implicit */int) var_0))))));
    var_11 *= ((/* implicit */int) (!(((/* implicit */_Bool) 4294967268U))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned char) max(((+(((arr_2 [i_0]) ? (((/* implicit */unsigned long long int) 28U)) : (arr_0 [i_0] [i_0]))))), (((/* implicit */unsigned long long int) 2600801707U))));
        var_13 -= ((/* implicit */short) var_9);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 11; i_1 += 4) 
    {
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_3 [i_1]) : (arr_3 [i_1])));
        var_15 = ((/* implicit */int) arr_4 [i_1]);
        var_16 ^= ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) << (((arr_3 [12ULL]) + (2406910566202299372LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 + 3]))) : (((((/* implicit */_Bool) (unsigned char)173)) ? (((/* implicit */long long int) 22U)) : (arr_3 [4ULL]))));
    }
    var_17 = ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_3))) != (((((/* implicit */_Bool) 4831924941615425167LL)) ? (-2336377341273630768LL) : (-2336377341273630768LL))))) ? (((((((/* implicit */int) var_3)) < (((/* implicit */int) var_0)))) ? (((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-41)) ? (4294967273U) : (28U))))));
}
