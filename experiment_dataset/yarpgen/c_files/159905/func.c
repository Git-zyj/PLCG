/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159905
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
    var_18 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_1) : (var_17)))) ? (((/* implicit */unsigned long long int) min((var_9), (((/* implicit */long long int) var_11))))) : (((9795366769808031856ULL) * (9795366769808031856ULL))))), (((/* implicit */unsigned long long int) 9223372036854775787LL))));
    var_19 = ((/* implicit */unsigned char) var_10);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9795366769808031856ULL)) ? (arr_4 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))), (arr_1 [i_1])))) ? (max((((arr_1 [i_0]) / (((/* implicit */unsigned long long int) arr_2 [17])))), (238737355535565246ULL))) : (((/* implicit */unsigned long long int) max((var_9), (((/* implicit */long long int) arr_3 [i_0] [i_0] [i_1])))))));
                var_21 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_7)), ((-(18446744073709551615ULL)))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) (-(max((14235236680149919684ULL), (((/* implicit */unsigned long long int) max((65536LL), (6754587544411326516LL))))))));
}
