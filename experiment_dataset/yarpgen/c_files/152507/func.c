/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152507
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_4 [i_0] = (i_0 % 2 == zero) ? (((/* implicit */long long int) max((((max((((/* implicit */int) var_15)), (var_2))) >> (((max((((/* implicit */unsigned long long int) arr_3 [i_0])), (var_6))) - (18446744073709551563ULL))))), (((arr_0 [i_0]) & (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_1 [i_0])))))))))) : (((/* implicit */long long int) max((((max((((/* implicit */int) var_15)), (var_2))) >> (((((max((((/* implicit */unsigned long long int) arr_3 [i_0])), (var_6))) - (18446744073709551563ULL))) - (18446744073709551601ULL))))), (((arr_0 [i_0]) & (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_1 [i_0]))))))))));
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)67)) / (arr_0 [i_0])))) ? (((/* implicit */int) (unsigned char)0)) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [(signed char)12])) : (((/* implicit */int) arr_3 [(unsigned char)8])))))))))));
        arr_5 [i_0] = min((var_4), (arr_0 [i_0]));
        var_19 = ((/* implicit */long long int) ((((arr_1 [i_0]) >> (((((((/* implicit */_Bool) 15U)) ? (-1348783876) : (arr_0 [i_0]))) + (1348783936))))) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) max((arr_2 [i_0]), (var_11)))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((unsigned short) var_14)))));
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_3 [18LL])) : (((/* implicit */int) arr_3 [10ULL])))))));
    }
    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) 2147483642))));
    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) max((var_9), (var_14))))));
    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) var_2))));
}
