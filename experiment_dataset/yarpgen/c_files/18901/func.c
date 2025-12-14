/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18901
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
    var_10 = ((/* implicit */unsigned long long int) ((var_8) & (max((((long long int) var_8)), (((var_9) / (var_7)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 2416228043603330971LL)) * (16805955275325510422ULL)));
                    var_12 = ((/* implicit */long long int) var_4);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_7)) ? (137304735744ULL) : (16805955275325510425ULL))) : ((~(18446744073709551615ULL)))))) ? (((/* implicit */unsigned long long int) (((+(var_7))) / (((var_0) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) : (3736033755426464673ULL)));
}
