/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147029
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
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */int) ((((unsigned int) var_2)) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_7))))))))));
        var_11 = ((/* implicit */unsigned long long int) (~(((int) arr_2 [i_0]))));
    }
    var_12 = ((/* implicit */_Bool) max((var_12), (((233961857) == (((/* implicit */int) (unsigned short)19642))))));
}
