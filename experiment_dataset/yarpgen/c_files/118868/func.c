/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118868
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
    var_17 = ((/* implicit */int) (-(min((((var_5) + (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)64)) - (((/* implicit */int) var_10)))))))));
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (~(min((-9LL), (((/* implicit */long long int) ((var_13) > (var_5)))))))))));
    var_19 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */int) (signed char)-118)) : (((/* implicit */int) (signed char)(-127 - 1)))))), (((((unsigned int) var_5)) * (((/* implicit */unsigned int) min((((/* implicit */int) (short)-6254)), (var_8))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned char) arr_1 [i_0]);
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) min((18446744073709551608ULL), (((/* implicit */unsigned long long int) 8LL))))) && (((/* implicit */_Bool) -3207498512273648565LL))))) | (((/* implicit */int) (((!(((/* implicit */_Bool) 3892468554565864517LL)))) && (((/* implicit */_Bool) arr_0 [i_0]))))))))));
    }
    for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (-(((/* implicit */int) ((_Bool) min((arr_0 [i_1]), (((/* implicit */unsigned long long int) var_0)))))))))));
        arr_4 [i_1] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((int) (~(71987225293750272LL))))), (((long long int) ((((/* implicit */_Bool) 7ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) : (arr_0 [i_1]))))));
    }
}
