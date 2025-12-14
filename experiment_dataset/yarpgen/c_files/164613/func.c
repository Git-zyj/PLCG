/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164613
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
    /* vectorizable */
    for (unsigned char i_0 = 4; i_0 < 16; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) <= (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_2 [8]))))));
                    var_13 *= ((/* implicit */unsigned char) ((int) var_4));
                    var_14 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (var_5)));
                }
            } 
        } 
        arr_7 [i_0] = ((/* implicit */long long int) (_Bool)1);
        var_15 = ((int) ((((/* implicit */_Bool) var_9)) ? (var_9) : (var_5)));
        arr_8 [(short)0] |= ((/* implicit */_Bool) ((unsigned char) (((_Bool)1) ? (arr_4 [4]) : (((/* implicit */long long int) var_3)))));
    }
    var_16 = ((/* implicit */int) ((((/* implicit */int) var_8)) != (var_7)));
}
