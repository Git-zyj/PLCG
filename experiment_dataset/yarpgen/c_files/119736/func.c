/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119736
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
    var_10 = ((/* implicit */short) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((var_3) > (((/* implicit */int) (unsigned short)20690))))) : (((((/* implicit */int) (unsigned char)230)) % (var_3))))), (((/* implicit */int) var_0))));
    var_11 *= ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [(_Bool)1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_0)), (min((arr_0 [i_1 + 1]), (arr_0 [i_1 - 3])))));
                    var_12 = ((((/* implicit */_Bool) ((arr_3 [i_1]) >> (min((arr_3 [i_0]), (((/* implicit */unsigned long long int) (unsigned char)47))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1 - 1] [i_1 + 2] [i_0] [i_0]))) : (((((/* implicit */_Bool) ((2571812197U) << (((3950807207U) - (3950807195U)))))) ? (min((var_4), (arr_2 [i_0]))) : (((unsigned long long int) var_4)))));
                }
            } 
        } 
    } 
}
