/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165498
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
    var_15 ^= ((((/* implicit */_Bool) -1LL)) ? (((((/* implicit */_Bool) 736813872)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1)));
    var_16 |= ((((/* implicit */_Bool) var_10)) ? (var_9) : (var_12));
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) ((var_4) == (var_4))))))) : (((((/* implicit */_Bool) ((var_12) | (((/* implicit */long long int) var_8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_10))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_18 = ((/* implicit */_Bool) max((max((-8735898749875060493LL), (-1607059818939837788LL))), (((((/* implicit */_Bool) var_9)) ? (arr_2 [i_0]) : (arr_2 [i_0])))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((int) min((8735898749875060507LL), (((/* implicit */long long int) (unsigned short)14557)))));
    }
}
