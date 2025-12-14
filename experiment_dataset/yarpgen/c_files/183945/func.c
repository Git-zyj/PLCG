/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183945
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 1; i_3 < 24; i_3 += 1) 
                    {
                        var_12 = (+(((/* implicit */int) ((_Bool) ((18446744073709551615ULL) > (18446744073709551615ULL))))));
                        var_13 = ((/* implicit */short) var_0);
                    }
                    var_14 = ((/* implicit */unsigned long long int) var_0);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) var_11)), (min((3ULL), (((/* implicit */unsigned long long int) (short)-13181)))))) | (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (_Bool)1)))))))));
    var_16 = var_3;
    var_17 = ((/* implicit */short) var_8);
    var_18 = ((((/* implicit */_Bool) 1921839056)) ? (min((((/* implicit */long long int) (short)13181)), (min((var_0), (((/* implicit */long long int) (_Bool)1)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-13195)) ? (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (short)13195)))) : (((/* implicit */int) ((var_9) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13195))))))))));
}
