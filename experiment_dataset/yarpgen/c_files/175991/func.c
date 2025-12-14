/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175991
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
    var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) var_13))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (min(((~(10317397207346656380ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_14)), (var_0))))))));
    var_20 = ((/* implicit */unsigned char) var_3);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 7; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 10; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_21 *= ((/* implicit */_Bool) min((((((long long int) arr_4 [i_2])) & (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 + 3]))))), (((/* implicit */long long int) ((short) arr_3 [i_0 + 3] [i_1 - 3])))));
                    arr_8 [i_2] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_0 + 3] [i_1 + 1])) ? (((/* implicit */long long int) arr_3 [i_0 + 3] [i_0 + 3])) : (arr_7 [i_0 + 1] [i_0 - 1] [i_1 - 1])))) ? (((/* implicit */long long int) min((arr_3 [i_0 + 4] [i_0 + 4]), (arr_3 [i_0 - 1] [i_0 + 3])))) : (((arr_7 [i_0 + 3] [i_0 + 2] [i_1 + 1]) ^ (((/* implicit */long long int) arr_3 [i_0 + 4] [i_0 + 1])))));
                }
            } 
        } 
    } 
}
