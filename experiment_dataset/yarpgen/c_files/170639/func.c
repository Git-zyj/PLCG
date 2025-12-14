/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170639
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
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [i_0] [(short)14] &= ((/* implicit */unsigned int) min((((long long int) min((((/* implicit */unsigned int) var_9)), (134217727U)))), (((/* implicit */long long int) ((unsigned int) 15199689044848964798ULL)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    var_13 += ((/* implicit */short) ((((/* implicit */_Bool) (+(4214131228U)))) ? (((var_1) | (var_10))) : (((/* implicit */unsigned long long int) 805306368U))));
                    var_14 += ((/* implicit */unsigned long long int) ((var_5) ? ((~(1296955289486076092LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 + 2])))));
                }
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) min((((/* implicit */unsigned int) var_5)), (((((/* implicit */_Bool) var_12)) ? (var_11) : (((unsigned int) 805306366U))))));
}
