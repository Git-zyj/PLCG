/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122845
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
    var_16 = ((/* implicit */unsigned long long int) (((((_Bool)1) ? (1549153511U) : (((/* implicit */unsigned int) 1007817899)))) ^ (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 17583596109824ULL)) ? (134217664) : (128))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) arr_0 [i_0]);
        var_17 = ((/* implicit */unsigned short) (((((!(((/* implicit */_Bool) arr_0 [i_0])))) ? (arr_0 [i_0]) : (((arr_1 [i_0]) | (arr_0 [i_0]))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) ((unsigned char) arr_0 [i_0])))))))));
    }
    var_18 = ((/* implicit */int) var_9);
}
