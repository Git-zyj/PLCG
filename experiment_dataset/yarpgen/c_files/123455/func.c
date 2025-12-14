/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123455
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (-(-4364989041812636710LL)));
        var_17 = ((/* implicit */unsigned int) arr_0 [i_0]);
    }
    var_18 = ((/* implicit */int) (((!((!(((/* implicit */_Bool) var_13)))))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((min((var_1), (((/* implicit */unsigned int) var_2)))) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))))) >= (min((((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned char) var_5))))), (var_8)))));
}
