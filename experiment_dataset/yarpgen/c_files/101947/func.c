/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101947
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
    var_18 = ((/* implicit */unsigned short) min((min(((+(((/* implicit */int) var_15)))), (((/* implicit */int) min((var_12), (var_12)))))), (((/* implicit */int) var_9))));
    var_19 = ((/* implicit */unsigned char) 18446744073709551609ULL);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((arr_1 [i_0 - 2] [i_0]) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)106))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_1 [i_0] [i_0 - 2]))))))) ? ((+(((arr_0 [i_0]) + (((/* implicit */unsigned long long int) 563651115U)))))) : ((~(arr_0 [i_0])))));
        var_21 = (i_0 % 2 == zero) ? (((/* implicit */unsigned int) ((arr_0 [i_0]) >> (((((((/* implicit */_Bool) var_5)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) - (18092997814259114368ULL)))))) : (((/* implicit */unsigned int) ((arr_0 [i_0]) >> (((((((((/* implicit */_Bool) var_5)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) - (18092997814259114368ULL))) - (17151967466937931863ULL))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((short) ((unsigned long long int) arr_0 [i_0])));
        arr_3 [i_0] = ((/* implicit */_Bool) var_10);
    }
    var_22 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) 563651127U)) * (((unsigned long long int) ((var_3) * (var_14))))));
    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) var_1))));
}
