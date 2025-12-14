/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1507
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned int) ((_Bool) (short)4094));
        var_13 = var_6;
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_1 = 3; i_1 < 24; i_1 += 2) 
    {
        var_14 = ((/* implicit */_Bool) arr_3 [i_1]);
        var_15 |= ((/* implicit */signed char) max((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (short)-4091))))), ((((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1))))));
    }
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) + (((/* implicit */int) var_5))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 3) 
    {
        arr_8 [(short)10] |= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_2 [i_2]))))));
        var_17 = ((/* implicit */int) ((((/* implicit */int) (short)1792)) < (((/* implicit */int) var_3))));
    }
}
