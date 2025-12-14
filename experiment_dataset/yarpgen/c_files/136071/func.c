/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136071
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_0 [i_0] [i_0])))) ? ((~(((/* implicit */int) (signed char)-58)))) : (((/* implicit */int) (unsigned char)255))));
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) var_3))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */unsigned long long int) (~(arr_0 [(signed char)20] [i_0])))))))));
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (signed char)-55)) : (((/* implicit */int) var_12))));
    }
    var_21 = ((/* implicit */signed char) var_13);
}
