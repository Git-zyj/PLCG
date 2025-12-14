/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114395
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 *= ((/* implicit */signed char) (+(((((/* implicit */int) arr_6 [i_0])) >> (((/* implicit */int) arr_6 [i_2]))))));
                    var_17 *= min((var_6), (((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_0])) <= (((/* implicit */int) var_3))))));
                    arr_9 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) != (arr_8 [i_2] [i_2]))))) > (min((arr_8 [i_2] [4ULL]), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_2]))))));
                }
            } 
        } 
    } 
    var_18 ^= (+(max((min((((/* implicit */unsigned long long int) var_9)), (var_14))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 10445726333581398439ULL))))))));
    var_19 = ((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned long long int) ((var_12) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_7))))))))));
}
