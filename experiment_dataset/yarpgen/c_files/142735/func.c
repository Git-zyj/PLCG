/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142735
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
    var_18 += ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_2)), (14092875515952066184ULL)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_19 *= ((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))));
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) arr_1 [(short)6]))));
        var_21 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) 4353868557757485431ULL))))));
    }
    var_22 *= ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_9)))) : (((((/* implicit */_Bool) 1312963085)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) : ((~(min((((/* implicit */unsigned long long int) 0LL)), (14092875515952066204ULL))))));
}
