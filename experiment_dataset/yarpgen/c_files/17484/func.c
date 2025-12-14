/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17484
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_1 [i_0]) + (((arr_1 [(signed char)11]) >> (((arr_1 [i_0]) - (81758344)))))))) && (((/* implicit */_Bool) arr_1 [i_0]))));
        var_13 ^= ((/* implicit */unsigned char) arr_1 [i_0]);
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((arr_1 [i_0]) == (((/* implicit */int) ((4902745639168547971ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))))))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
    }
    var_15 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) > (-2662294392254269369LL)));
    var_16 += ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) & (((4902745639168547971ULL) & (((/* implicit */unsigned long long int) 322811950)))))) & (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_6)) >> (((/* implicit */int) var_7)))) | (((((/* implicit */int) var_12)) << (((var_10) - (490223071)))))))));
    var_17 = var_0;
}
