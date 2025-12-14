/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163971
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (((+(arr_0 [i_0]))) < (arr_0 [i_0 - 1])))) != (((((((((/* implicit */_Bool) var_3)) ? (arr_0 [i_0]) : (arr_0 [i_0 - 1]))) + (2147483647))) << (((((arr_0 [i_0 - 1]) + (526273371))) - (29)))))));
        arr_2 [i_0] = ((((/* implicit */_Bool) ((unsigned int) ((unsigned long long int) (unsigned short)65523)))) && (((_Bool) arr_1 [i_0])));
        arr_3 [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) -616924794)) ? (-616924799) : (((/* implicit */int) (unsigned short)2928)))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) (~(arr_1 [i_1]))))));
        arr_6 [i_1] = ((/* implicit */unsigned char) var_8);
        var_12 ^= ((/* implicit */long long int) var_9);
    }
}
