/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16033
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
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)0) ? (262144) : (-262149)))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) -1863617301)) : (-8624627844128630454LL)))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) | (arr_3 [i_0] [i_0 - 1] [i_1]))) | (((/* implicit */unsigned long long int) var_3))))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_2 [i_0] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])), (arr_3 [i_0] [i_0] [i_0 + 1])))))))) : (max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [9]))) / (arr_3 [i_1] [i_1] [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)112)) ? (((/* implicit */unsigned int) 433273778)) : (3346158138U))))))));
            }
        } 
    } 
    var_10 |= ((/* implicit */unsigned int) var_2);
}
