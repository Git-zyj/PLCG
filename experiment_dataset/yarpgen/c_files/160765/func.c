/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160765
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_18 = (+((+(arr_0 [i_0]))));
        arr_4 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)182)) ? (((/* implicit */int) (unsigned char)65)) : (arr_2 [i_0])))) ? (((/* implicit */int) max(((unsigned char)164), ((unsigned char)158)))) : (((/* implicit */int) (unsigned char)182)))))));
    }
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_16)))) ? (var_4) : (((/* implicit */int) (unsigned char)200))))) ? (var_4) : (var_7)));
}
