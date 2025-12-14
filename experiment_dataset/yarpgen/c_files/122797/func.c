/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122797
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
    var_20 = ((/* implicit */unsigned char) ((unsigned long long int) min((min((((/* implicit */unsigned long long int) var_17)), (var_9))), (((/* implicit */unsigned long long int) (~(2620166790U)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_10 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) 1652365763))) ? (max((((unsigned long long int) arr_9 [i_2] [(short)1] [i_1] [i_0])), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)-1186)), (var_14)))))) : (((/* implicit */unsigned long long int) var_15))));
                    var_21 = ((/* implicit */unsigned int) ((short) max((((/* implicit */long long int) (short)1180)), ((-9223372036854775807LL - 1LL)))));
                }
            } 
        } 
    } 
}
