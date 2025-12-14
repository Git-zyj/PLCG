/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188162
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
    var_18 &= ((/* implicit */unsigned long long int) ((short) (-9223372036854775807LL - 1LL)));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        var_19 -= ((/* implicit */short) ((int) (-((-(arr_0 [(signed char)10]))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))))), ((~((~(arr_0 [i_0])))))));
    }
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        var_20 = ((/* implicit */_Bool) arr_4 [i_1]);
        arr_6 [i_1] = ((/* implicit */long long int) (~(((int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_5 [(signed char)5])))))));
        var_21 = ((/* implicit */unsigned int) (~(((long long int) ((_Bool) 9223372036854775801LL)))));
        var_22 = ((/* implicit */short) (-(((unsigned long long int) ((unsigned long long int) arr_4 [i_1])))));
    }
}
