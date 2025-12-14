/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142217
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
    for (int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) ((long long int) (+(17650745026984379455ULL))));
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_1 [i_0 + 1]) : (((/* implicit */int) var_10)))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_5 [(short)9])))))));
            }
        } 
    } 
    var_21 = var_1;
    var_22 = ((/* implicit */long long int) ((((/* implicit */int) var_16)) ^ (((/* implicit */int) ((((/* implicit */int) var_14)) <= (((((/* implicit */int) var_0)) - (((/* implicit */int) var_17)))))))));
    var_23 += ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_1) : (17650745026984379455ULL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))) ? (max((((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))), (((/* implicit */unsigned long long int) var_9)))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_4)) : (var_3)))), (795999046725172166ULL)))));
    var_24 = ((/* implicit */unsigned long long int) (((!(((((/* implicit */_Bool) 795999046725172160ULL)) || (((/* implicit */_Bool) var_5)))))) ? (var_6) : (((((/* implicit */_Bool) 795999046725172151ULL)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && ((_Bool)1)))) : (((/* implicit */int) var_10))))));
}
