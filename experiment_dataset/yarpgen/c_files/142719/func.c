/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142719
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
    var_15 = ((/* implicit */unsigned int) (~(((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)22293))) < (-6995310373232598227LL)))) >> (((var_7) + (3971933669686249436LL)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) min((((/* implicit */long long int) arr_1 [(short)7] [i_0 - 1])), (var_7)));
        arr_3 [i_0] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [i_0] [(unsigned char)10])) : (((/* implicit */int) (unsigned short)43242))))))) ? (((/* implicit */int) max((((short) var_4)), (((/* implicit */short) ((((/* implicit */int) (signed char)3)) > (((/* implicit */int) arr_1 [i_0 + 2] [(unsigned short)10])))))))) : (((/* implicit */int) ((signed char) (~(((/* implicit */int) var_5))))))));
    }
    var_16 = ((/* implicit */unsigned char) ((short) min(((signed char)0), ((signed char)-100))));
}
