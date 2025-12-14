/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139508
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
    for (signed char i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        var_10 = ((/* implicit */unsigned char) var_8);
        var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_1 [(short)2] [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (min((4135658683409568950LL), (max((-4135658683409568950LL), (((/* implicit */long long int) (unsigned short)36559)))))) : (((/* implicit */long long int) var_2)))))));
        var_12 = ((/* implicit */int) (unsigned short)25675);
        arr_2 [(signed char)19] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) (unsigned short)28996)), (arr_1 [i_0] [i_0]))), (((/* implicit */unsigned long long int) var_7)))))));
    }
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) min((var_7), (((/* implicit */long long int) var_2))))) ? (var_6) : (min((((/* implicit */long long int) var_4)), (min((var_9), (((/* implicit */long long int) (unsigned short)36559))))))));
}
