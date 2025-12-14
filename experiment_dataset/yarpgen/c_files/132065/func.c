/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132065
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
    var_19 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (442710407U)));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned long long int) ((short) (~(arr_0 [i_0 + 4]))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    {
                        arr_11 [i_0] [i_0 + 2] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((long long int) 0ULL)) < (((/* implicit */long long int) 4294967295U))));
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1074975673975821540LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-16675))));
                    }
                } 
            } 
        } 
    }
    var_22 = max((((((/* implicit */_Bool) min((var_9), (var_5)))) ? (var_3) : (((((/* implicit */_Bool) var_3)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))), (((/* implicit */unsigned long long int) var_2)));
}
