/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124249
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) (+(((((/* implicit */_Bool) var_8)) ? (-1) : (max((var_9), (((/* implicit */int) var_2))))))));
        var_10 = ((/* implicit */unsigned long long int) -8407450728685544335LL);
        var_11 = (-(((((/* implicit */unsigned int) var_9)) - (var_4))));
    }
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+((+(var_9)))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-78)), (min((var_5), ((unsigned char)83)))))) : (var_9)));
}
