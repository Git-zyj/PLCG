/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157326
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
    for (long long int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        arr_2 [(short)9] = ((/* implicit */int) arr_0 [i_0] [i_0]);
        arr_3 [i_0] = ((/* implicit */int) ((((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [(unsigned char)17]) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) / (((/* implicit */long long int) arr_0 [i_0 - 2] [i_0 + 1])))) < (((((/* implicit */_Bool) (~(5809334282893677858LL)))) ? (min((arr_1 [i_0]), (((/* implicit */long long int) arr_0 [i_0] [i_0])))) : (((/* implicit */long long int) (+(3115671695U))))))));
    }
    var_18 *= ((/* implicit */_Bool) ((int) var_8));
}
