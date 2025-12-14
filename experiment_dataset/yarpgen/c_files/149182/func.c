/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149182
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
    var_17 = ((/* implicit */unsigned short) var_10);
    var_18 = ((/* implicit */signed char) ((unsigned int) var_9));
    var_19 &= ((/* implicit */signed char) max(((!(((/* implicit */_Bool) var_9)))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)255)))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) 4294967295U)))))) : (((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)14)), (var_4)))) / (-656875571)))));
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) var_5))));
        var_22 = ((/* implicit */int) ((unsigned short) ((int) (!(((/* implicit */_Bool) var_15))))));
        var_23 = ((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)255)), (((((/* implicit */_Bool) max((var_14), (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
    }
}
