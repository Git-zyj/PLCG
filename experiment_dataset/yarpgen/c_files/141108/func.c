/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141108
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
    var_18 = ((/* implicit */unsigned char) 7838180135390280649LL);
    var_19 = ((/* implicit */unsigned int) min((((/* implicit */int) var_2)), ((((-(((/* implicit */int) var_8)))) * (((/* implicit */int) ((signed char) (unsigned short)12615)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((((/* implicit */_Bool) (-(((/* implicit */int) (short)5263))))) ? (min((max((var_11), (((/* implicit */int) var_6)))), (((/* implicit */int) min((((/* implicit */short) var_15)), (arr_1 [i_0 - 1] [i_0 - 1])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_7)))) ? (min((((/* implicit */int) arr_0 [i_0 - 1])), (var_16))) : (((/* implicit */int) min(((signed char)-18), ((signed char)-26)))))));
        var_20 = ((/* implicit */unsigned int) min((var_20), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) % (((/* implicit */int) (signed char)-125))))) ? (min((arr_2 [i_0 - 1]), (var_3))) : (((/* implicit */int) ((unsigned short) var_10)))))) ? (min((min((2097151U), (((/* implicit */unsigned int) (unsigned char)179)))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [(unsigned short)6] [i_0 - 1])) % (((/* implicit */int) arr_0 [i_0 - 1]))))))) : (((/* implicit */unsigned int) min((((((/* implicit */_Bool) (signed char)-26)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_8)))), (((/* implicit */int) arr_0 [i_0 - 1])))))))));
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) 455178937))) ? (max((-455178937), (((/* implicit */int) arr_0 [i_0 - 1])))) : (((/* implicit */int) ((signed char) (unsigned short)28427)))));
    }
}
