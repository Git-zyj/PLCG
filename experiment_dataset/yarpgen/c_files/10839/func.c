/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10839
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
    var_12 = ((/* implicit */int) ((long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_11)) == (var_9)))), (((var_9) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) min((min((arr_3 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) arr_5 [i_0] [i_1])))), (((/* implicit */unsigned int) max((arr_0 [i_0] [i_1]), (((/* implicit */unsigned short) arr_1 [i_0]))))))))));
                var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((short) ((long long int) ((arr_2 [i_0] [(_Bool)1]) || (((/* implicit */_Bool) (unsigned short)23684)))))))));
            }
        } 
    } 
}
