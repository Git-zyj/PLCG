/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122591
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
    var_12 = ((long long int) (+(3883014632764154323LL)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */long long int) ((0LL) <= (4611123068473966592LL)));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 4; i_2 < 17; i_2 += 3) 
                {
                    arr_9 [i_0] = ((((((/* implicit */_Bool) 4611123068473966592LL)) ? (-4611123068473966585LL) : (4611123068473966585LL))) - (var_3));
                    var_13 |= var_11;
                }
            }
        } 
    } 
    var_14 = var_5;
    /* LoopNest 3 */
    for (long long int i_3 = 3; i_3 < 12; i_3 += 2) 
    {
        for (long long int i_4 = 3; i_4 < 11; i_4 += 1) 
        {
            for (long long int i_5 = 0; i_5 < 14; i_5 += 1) 
            {
                {
                    arr_18 [i_3] = -6379455327968574234LL;
                    arr_19 [i_3] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((-33554432LL) > (9223372036854775807LL))))) < (((((/* implicit */_Bool) var_5)) ? (var_9) : (var_0)))));
                    var_15 = ((long long int) ((((/* implicit */_Bool) var_8)) ? (var_10) : (4611123068473966586LL)));
                    arr_20 [12LL] [i_3] [7LL] [i_3] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_6)) ? (var_9) : (var_10))) != (((var_7) / (var_4)))));
                }
            } 
        } 
    } 
}
