/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159640
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
    var_11 = ((/* implicit */unsigned short) max((((/* implicit */signed char) (!((!(((/* implicit */_Bool) (signed char)63))))))), (max(((signed char)64), ((signed char)-46)))));
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) var_3))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        var_13 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 125829120ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (12ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
        arr_2 [i_0] = (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)124))) : (arr_0 [i_0]))));
    }
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) (unsigned short)57729))))) : (((/* implicit */int) (signed char)115)))))));
}
