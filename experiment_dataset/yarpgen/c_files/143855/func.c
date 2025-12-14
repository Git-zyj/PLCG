/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143855
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
    var_10 = ((/* implicit */int) max((var_10), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6))))));
    var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) var_3))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */short) (-(max((((/* implicit */unsigned int) arr_1 [i_0])), (max((357380614U), (((/* implicit */unsigned int) arr_1 [i_0]))))))));
        var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) (signed char)-115))));
        arr_3 [(signed char)0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_1 [i_0]) ^ (((/* implicit */int) var_4))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-115)), (arr_0 [i_0]))))))) ? ((-(((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [(unsigned short)8] [i_0])) : (((/* implicit */int) var_9)))))) : (((((/* implicit */int) (signed char)37)) * (((-23) / (-984749422)))))));
    }
}
