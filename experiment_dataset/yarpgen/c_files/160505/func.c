/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160505
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
    var_15 = var_10;
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            {
                arr_5 [i_1 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 6195103143955417264ULL)) ? (var_3) : (var_2))), (6074038128899378376ULL)))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))))), (min((((/* implicit */unsigned long long int) -8506583437518325905LL)), (6074038128899378376ULL))))))));
                var_16 = ((/* implicit */short) 6074038128899378376ULL);
            }
        } 
    } 
    var_17 = ((/* implicit */int) min((((unsigned int) var_7)), (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) == (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))));
    var_18 = ((/* implicit */unsigned char) min((var_3), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_10) / (var_10)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (801816300827114068ULL) : (((/* implicit */unsigned long long int) var_6))))))))));
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((var_6) >> (((var_1) - (6610419945712202575LL))))))));
}
