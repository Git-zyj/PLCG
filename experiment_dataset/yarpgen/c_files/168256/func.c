/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168256
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
    var_18 = var_12;
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) ((1429046483U) ^ (0U)));
                    var_20 = ((/* implicit */unsigned int) min(((((~(var_2))) % (((arr_2 [i_1] [i_0]) ^ (18446744073709551612ULL))))), (((((((/* implicit */_Bool) 2268697315U)) ? (var_9) : (var_15))) | (min((var_15), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_1]))))))));
                    arr_9 [i_0] [i_1] [i_1] [i_2] = 20ULL;
                }
            } 
        } 
    } 
    var_21 = var_16;
}
