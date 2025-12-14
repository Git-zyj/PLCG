/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161280
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned int) var_6);
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (!((!(((/* implicit */_Bool) var_4)))))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (~(3795839149619754937LL)));
    }
    var_20 = ((/* implicit */int) -2006868480471783600LL);
    var_21 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21214))) ^ (max((11574097238750566817ULL), (((/* implicit */unsigned long long int) (unsigned char)232)))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))));
}
