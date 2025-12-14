/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109396
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_0]))))) >= ((-(arr_1 [i_0])))));
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))), (((long long int) (unsigned char)0)))))));
    }
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(6595701623229305674LL))))))) * (((/* implicit */int) (unsigned char)196))));
        arr_6 [i_1] = ((((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_1] [i_1]))) ? (((/* implicit */unsigned long long int) (((~(((/* implicit */int) (unsigned char)53)))) - ((-(((/* implicit */int) arr_3 [i_1] [i_1]))))))) : (max(((-(3350872672980219174ULL))), (((/* implicit */unsigned long long int) arr_4 [i_1])))));
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) && (((/* implicit */_Bool) ((unsigned long long int) arr_5 [14LL] [i_1])))))), (((min((var_13), (((/* implicit */unsigned long long int) arr_5 [i_1] [i_1])))) ^ (min((((/* implicit */unsigned long long int) var_4)), (17530864631116117203ULL)))))))));
    }
    for (unsigned long long int i_2 = 3; i_2 < 17; i_2 += 4) 
    {
        var_20 -= ((/* implicit */long long int) var_1);
        var_21 &= ((/* implicit */unsigned char) arr_8 [9ULL] [i_2]);
    }
    var_22 -= ((/* implicit */unsigned char) (~(var_3)));
}
