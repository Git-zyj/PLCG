/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184677
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
    var_12 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_1))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_13 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (arr_5 [i_0] [i_1])))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */long long int) arr_5 [i_1] [i_0])) : (arr_2 [i_1]))) : (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_1] [i_0])) * (((/* implicit */int) arr_4 [i_0]))))))) : (((((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_1] [i_1]))))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1]))) : (arr_2 [i_0]))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_2 [i_1]) : (arr_2 [i_0])))))));
                arr_6 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_1 [i_0] [i_1])))) << (((((((/* implicit */_Bool) 505524856U)) ? (16674055697614182727ULL) : (((/* implicit */unsigned long long int) 494896072)))) - (16674055697614182704ULL)))))) ? (((/* implicit */long long int) ((((arr_0 [i_1] [i_0]) || (arr_0 [i_0] [i_1]))) ? (arr_5 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) || (arr_0 [i_0] [i_0])))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */long long int) arr_5 [i_0] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1])))))))));
            }
        } 
    } 
}
