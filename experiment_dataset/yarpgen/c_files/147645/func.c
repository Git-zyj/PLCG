/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147645
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (+(((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [(signed char)7]) : (arr_1 [i_0]))) - (arr_0 [i_0])))));
        arr_3 [(unsigned short)2] [(unsigned char)2] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((arr_1 [i_0]) != ((-(arr_1 [9ULL])))))), (((((/* implicit */_Bool) (~(arr_0 [(signed char)0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_2) >= (((/* implicit */long long int) ((/* implicit */int) var_13))))))) : (arr_0 [4LL])))));
        arr_4 [i_0] = ((/* implicit */int) (~((+((~(arr_1 [i_0])))))));
    }
    var_16 = ((/* implicit */_Bool) var_7);
    var_17 = ((/* implicit */_Bool) (~(((/* implicit */int) var_7))));
    var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_4)) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_5)))));
}
