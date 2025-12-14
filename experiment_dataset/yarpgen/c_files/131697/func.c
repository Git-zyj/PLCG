/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131697
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
    var_17 |= ((/* implicit */unsigned short) (((_Bool)1) ? (((16705774740529807859ULL) * (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (9640402688098236617ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
    var_18 = ((/* implicit */unsigned long long int) var_16);
    var_19 = ((/* implicit */_Bool) var_3);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [7ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned int) arr_1 [i_0])), (var_14))), (((/* implicit */unsigned int) arr_1 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)18727))) >= (((var_1) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) | (max((((/* implicit */unsigned int) (signed char)-64)), (var_13)))))));
        arr_3 [9LL] [i_0] = ((/* implicit */_Bool) 0LL);
    }
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) ((18014398509481983ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))))))));
        arr_7 [i_1] [i_1] &= ((/* implicit */short) (+(((((16705774740529807859ULL) ^ (((/* implicit */unsigned long long int) 0U)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1])))))));
    }
}
