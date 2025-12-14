/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121354
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
    var_14 = ((/* implicit */unsigned long long int) ((var_4) ^ (((/* implicit */long long int) max(((-(((/* implicit */int) var_7)))), (((/* implicit */int) var_9)))))));
    var_15 = min((((/* implicit */unsigned int) var_0)), ((-(var_2))));
    var_16 = ((/* implicit */unsigned long long int) var_9);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */int) ((long long int) ((((/* implicit */unsigned long long int) max((var_1), (arr_3 [i_1])))) < (((unsigned long long int) -5924732822341715124LL)))));
                var_18 += ((/* implicit */_Bool) var_13);
                var_19 *= ((/* implicit */unsigned char) ((var_10) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0])) ? (((/* implicit */long long int) arr_2 [i_0])) : (min((arr_3 [6LL]), (arr_3 [i_0]))))))));
                var_20 = ((/* implicit */unsigned long long int) (((_Bool)0) ? (arr_3 [i_1]) : (((((/* implicit */_Bool) 2885558506596294061ULL)) ? (-2625164469021961855LL) : (((/* implicit */long long int) 1359491704U))))));
            }
        } 
    } 
}
