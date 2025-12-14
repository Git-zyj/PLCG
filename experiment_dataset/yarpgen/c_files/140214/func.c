/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140214
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
    for (unsigned char i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        var_19 = arr_0 [i_0];
        arr_3 [i_0] = ((/* implicit */int) (!(((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)127)), (arr_0 [i_0])))) || (((/* implicit */_Bool) ((int) (signed char)127)))))));
        arr_4 [i_0] = 1000247755;
        var_20 = ((/* implicit */int) (signed char)-127);
    }
    var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min(((signed char)29), (((/* implicit */signed char) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)108)) / (var_12)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (5276558870707559009ULL))))))));
    var_22 = ((/* implicit */signed char) max(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_14) : (((/* implicit */int) (unsigned char)6))))))), (((((/* implicit */_Bool) min((((/* implicit */int) var_15)), (var_13)))) || (((/* implicit */_Bool) -458446474678610525LL))))));
    var_23 = ((/* implicit */unsigned long long int) var_4);
}
