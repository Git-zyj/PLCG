/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151753
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 24; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((min((var_4), (var_1))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) ^ (var_1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)-27548))) & (2457846273U)))));
                var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3119666851U)) ? (arr_2 [i_1] [i_1]) : (6946696615729479334ULL)))) ? (((/* implicit */int) ((_Bool) var_18))) : (((/* implicit */int) ((short) var_1))))))));
            }
        } 
    } 
    var_20 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned short) min(((signed char)-1), (((/* implicit */signed char) var_5)))))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((2147483647) >> (((((/* implicit */int) var_12)) - (53720)))))) : (0LL))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)34))) : (4294967295U))) >> (((((var_0) ? (var_13) : (11037165252265187293ULL))) - (11936354957098756342ULL))))))));
}
