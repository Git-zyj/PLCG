/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103019
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
    var_16 = ((/* implicit */unsigned char) (signed char)84);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)84)) ? (((/* implicit */int) (signed char)-39)) : (((/* implicit */int) (signed char)-17))))) ? ((-(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) max(((unsigned char)252), (((/* implicit */unsigned char) arr_0 [i_0])))))));
        arr_2 [(signed char)2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) : (((/* implicit */int) (unsigned char)143))));
    }
    var_18 |= ((/* implicit */unsigned char) ((((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-64))))) == (((/* implicit */int) (unsigned char)175)))) ? (((((/* implicit */_Bool) max(((unsigned char)3), ((unsigned char)220)))) ? (((/* implicit */int) (signed char)-34)) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)251)) == (((/* implicit */int) (signed char)-2))))))) : (((/* implicit */int) (signed char)38))));
    var_19 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) min(((signed char)(-127 - 1)), (var_15)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0)))) : ((+(((((/* implicit */int) var_2)) - (((/* implicit */int) var_9))))))));
}
