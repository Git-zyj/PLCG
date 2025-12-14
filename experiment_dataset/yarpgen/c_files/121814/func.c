/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121814
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
    var_12 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_8))));
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned short) (signed char)-46))))) && (((/* implicit */_Bool) ((unsigned short) (signed char)-46)))))) < (((/* implicit */int) var_11))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                var_14 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 + 2] [i_1 + 2]))) >= (((((/* implicit */_Bool) 1915280864)) ? (((/* implicit */long long int) ((((/* implicit */int) var_11)) / (var_1)))) : (max((1567333765683971867LL), (((/* implicit */long long int) arr_4 [i_1 - 1]))))))));
                var_15 = ((/* implicit */signed char) ((unsigned short) ((unsigned long long int) (signed char)-46)));
            }
        } 
    } 
}
