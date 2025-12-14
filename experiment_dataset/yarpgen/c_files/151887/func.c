/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151887
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                arr_4 [i_1] = min((((/* implicit */long long int) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)190)) : (((/* implicit */int) (_Bool)0)))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_12))))))), (((long long int) max((arr_1 [i_1]), (((/* implicit */int) var_3))))));
                var_14 = ((/* implicit */unsigned long long int) min((((unsigned short) (unsigned char)232)), (((/* implicit */unsigned short) arr_3 [i_0] [10LL] [i_0]))));
                var_15 = ((/* implicit */long long int) min((var_15), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_12)) : (arr_1 [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) -35540677)))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) ^ (3004174927828005159LL)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)121))));
    var_17 = ((/* implicit */long long int) (~(var_2)));
    var_18 = ((/* implicit */short) var_8);
}
