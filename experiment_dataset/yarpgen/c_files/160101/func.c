/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160101
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
    var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)253))) ? (((/* implicit */int) max(((unsigned char)17), (((/* implicit */unsigned char) var_12))))) : (((/* implicit */int) var_6))))), (((((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */unsigned long long int) var_15)) : (var_11))) * (var_4)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) ^ (max((arr_3 [2ULL] [i_0] [i_0]), (((/* implicit */unsigned long long int) (unsigned char)2)))))), (((/* implicit */unsigned long long int) ((arr_4 [i_0]) ? (((/* implicit */int) var_18)) : (((/* implicit */int) max(((unsigned char)17), (arr_2 [i_0] [i_1] [i_1])))))))));
                var_22 ^= ((/* implicit */short) ((arr_4 [i_0]) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) var_13))))))) : (((((/* implicit */_Bool) arr_1 [i_1] [i_1 + 2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (!(arr_4 [i_0]))))))));
            }
        } 
    } 
    var_23 ^= ((/* implicit */unsigned int) var_19);
    var_24 = ((/* implicit */unsigned char) var_12);
}
