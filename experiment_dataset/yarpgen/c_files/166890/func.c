/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166890
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
    var_20 = ((/* implicit */unsigned int) ((var_11) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (min((var_7), (((/* implicit */long long int) var_5)))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned int) ((var_18) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((576579073U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))))));
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)121))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) + (var_18)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) + (var_10)))));
        arr_3 [i_0] [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (max((arr_1 [i_0]), (((/* implicit */long long int) var_12)))) : (((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_0 [6LL])))) ? (max((var_5), (var_16))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))))))));
    }
}
