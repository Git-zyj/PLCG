/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113987
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
    var_12 *= ((/* implicit */unsigned int) var_1);
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) max((15504069571554092891ULL), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) 15581703539238509261ULL)) || (((/* implicit */_Bool) (unsigned char)124)))))))))));
                var_14 = ((((/* implicit */_Bool) ((var_5) % (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_1))))))) ? (((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned char)255)) ? (arr_2 [10LL] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))) : (min((arr_3 [(short)6] [9LL] [i_0]), (((/* implicit */long long int) ((short) var_0))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_6))) / (((((/* implicit */long long int) var_7)) ^ (var_5)))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) -658096226))))))) : (((((/* implicit */int) var_8)) / (((/* implicit */int) ((var_4) >= (((/* implicit */int) (unsigned char)15)))))))));
    var_16 = ((/* implicit */short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))))), (var_5)));
}
