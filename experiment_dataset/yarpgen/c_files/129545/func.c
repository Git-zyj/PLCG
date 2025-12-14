/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129545
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
    var_19 = ((/* implicit */unsigned int) var_7);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_2 [i_1])) ^ (((/* implicit */int) var_3)))) >> (((((long long int) var_2)) - (167143335592460504LL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0 + 1])) << (((arr_4 [2ULL]) - (10612636126530803385ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) var_10)) : ((-2147483647 - 1))))) : (max((((/* implicit */unsigned long long int) (_Bool)0)), (var_2))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 2147483647)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [12U]))))))));
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((2147483647) & (var_5)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))))));
            }
        } 
    } 
}
