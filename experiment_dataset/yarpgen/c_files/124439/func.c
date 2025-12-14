/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124439
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
    var_10 &= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_3)))) ^ (((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_4))))))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) | (((var_0) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
    var_11 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) & (var_2)))) / (((var_0) | (((/* implicit */unsigned long long int) var_5))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        var_12 ^= ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((((/* implicit */int) var_3)) | (((/* implicit */int) var_3))))) / (var_2))) % (((((var_2) % (var_9))) ^ (((/* implicit */long long int) ((/* implicit */int) ((var_0) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))))));
        var_13 &= ((/* implicit */long long int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) < (((var_0) ^ (((/* implicit */unsigned long long int) var_8)))))))));
    }
    for (long long int i_1 = 1; i_1 < 8; i_1 += 1) /* same iter space */
    {
        arr_4 [(signed char)7] = ((/* implicit */int) var_4);
        arr_5 [8LL] = ((((((/* implicit */long long int) ((/* implicit */int) var_1))) | (var_5))) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((var_9) <= (((/* implicit */long long int) ((/* implicit */int) var_7)))))) == (((/* implicit */int) ((var_2) == (var_5)))))))));
    }
    /* vectorizable */
    for (long long int i_2 = 1; i_2 < 8; i_2 += 1) /* same iter space */
    {
        arr_9 [(short)8] = ((/* implicit */short) ((((/* implicit */long long int) ((var_8) & (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) / (((((/* implicit */long long int) ((/* implicit */int) var_4))) & (var_5)))));
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((var_9) / (var_5))))));
    }
    var_15 = ((/* implicit */signed char) var_7);
}
