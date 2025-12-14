/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124084
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
    var_18 = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)57342))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7)))))))), ((unsigned short)27036)));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)41052))));
        arr_3 [i_0] = arr_0 [(unsigned char)7];
        arr_4 [(signed char)7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) << (((((/* implicit */int) var_2)) + (37)))))) ? (-2465064472725530140LL) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)206)))))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -874156181)) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) var_6))))) ? (((((/* implicit */int) var_0)) + (((/* implicit */int) var_3)))) : (((/* implicit */int) arr_1 [(unsigned short)10])))))));
    }
    var_19 = ((/* implicit */unsigned short) min((var_19), ((unsigned short)51693)));
}
