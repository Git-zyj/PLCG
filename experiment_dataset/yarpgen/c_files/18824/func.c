/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18824
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
    var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) min((1ULL), (min((12ULL), (18446744073709551614ULL))))))));
    var_12 = ((/* implicit */unsigned long long int) ((signed char) max((var_6), (((/* implicit */unsigned long long int) var_7)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_4 [i_0] [13U] [20U] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_2 [i_1] [21U] [i_1]))))), (var_3)));
                var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_8)) : (18446744073709551614ULL)))) ? (max((((/* implicit */unsigned long long int) var_0)), (arr_0 [6LL]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(unsigned char)22])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 73819527299139126ULL)) ? ((~(((/* implicit */int) arr_3 [6ULL] [6ULL])))) : (((/* implicit */int) arr_2 [(short)14] [23U] [23U]))))) : (((max((((/* implicit */unsigned long long int) var_8)), (18446744073709551601ULL))) ^ (((unsigned long long int) var_9)))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_10))));
}
