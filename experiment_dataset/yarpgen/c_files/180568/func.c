/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180568
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
    var_20 = ((/* implicit */unsigned short) ((16777215) >> (((-16777223) + (16777223)))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned int) arr_2 [i_0]);
        arr_3 [i_0] = min((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) -16777188)) ? (((/* implicit */unsigned long long int) max((-1LL), (((/* implicit */long long int) 16777187))))) : (((arr_1 [i_0]) / (((/* implicit */unsigned long long int) -16777176)))))));
        var_22 = ((/* implicit */short) max((((((((/* implicit */_Bool) var_2)) ? (-16777223) : (-16777172))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) 16777210))))))), (((((-16777176) + (2147483647))) >> (((max((((/* implicit */unsigned long long int) var_18)), (arr_1 [i_0]))) - (18446744073709551495ULL)))))));
        var_23 = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
    }
    var_24 = ((/* implicit */_Bool) ((unsigned char) (_Bool)1));
    var_25 = ((/* implicit */signed char) (+(((/* implicit */int) ((-462498000) == (-16777176))))));
}
