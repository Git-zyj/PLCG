/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161397
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) min((min((var_9), (((var_9) * (((/* implicit */unsigned long long int) var_3)))))), (((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_6)))) >= (min((var_2), (((/* implicit */int) var_4)))))))));
        var_10 = min((min((((/* implicit */unsigned long long int) min((var_0), (var_6)))), (min((var_1), (var_1))))), (min(((+(var_7))), (((/* implicit */unsigned long long int) min((var_2), (var_5)))))));
        var_11 = ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_9) > (var_7))))) ^ (((var_7) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))), (((/* implicit */unsigned long long int) min((var_2), (var_2))))));
        var_12 = ((/* implicit */unsigned char) ((var_2) - (((/* implicit */int) ((min((var_1), (var_7))) > (min((var_1), (((/* implicit */unsigned long long int) var_4)))))))));
    }
    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((var_8) <= (((/* implicit */long long int) var_2))))), (min((var_1), (((/* implicit */unsigned long long int) var_2))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) var_6))) < (var_3)))))) : (min((((/* implicit */unsigned long long int) min((var_4), (var_4)))), (min((var_7), (((/* implicit */unsigned long long int) var_8)))))))))));
    var_14 = ((/* implicit */unsigned long long int) ((unsigned int) ((((274877906943ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))) >> (((min((var_1), (var_9))) - (6749295786673968477ULL))))));
    var_15 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((var_9), (var_7))))))) < (((/* implicit */int) var_4))));
}
