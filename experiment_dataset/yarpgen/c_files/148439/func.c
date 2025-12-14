/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148439
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
    var_20 = ((/* implicit */short) var_10);
    var_21 = ((/* implicit */signed char) var_17);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (~(-4744916646974748264LL)))) ? (((/* implicit */int) max(((signed char)3), ((signed char)-6)))) : (((/* implicit */int) (unsigned char)31)))), (((/* implicit */int) (unsigned char)224))));
        arr_4 [i_0] = ((/* implicit */short) max((arr_1 [i_0] [i_0]), (var_13)));
        arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (min((((/* implicit */unsigned long long int) (-(562949953421311LL)))), (((arr_1 [i_0] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-6))))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (signed char)6)) : (((/* implicit */int) arr_0 [i_0])))) * ((+(((/* implicit */int) (unsigned char)9)))))))));
    }
    var_22 = ((/* implicit */unsigned long long int) var_15);
}
