/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13667
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
    var_19 = ((/* implicit */long long int) var_8);
    var_20 -= ((/* implicit */unsigned char) ((signed char) min((((/* implicit */unsigned long long int) var_4)), (((var_10) << (((var_0) - (1923192023U))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0 - 2]))) : (var_9)))) ^ (((((/* implicit */unsigned long long int) arr_3 [i_0 + 1])) & (var_5))))) | (((/* implicit */unsigned long long int) ((((long long int) arr_1 [i_1])) | (((/* implicit */long long int) arr_1 [i_1])))))));
                var_22 += ((/* implicit */unsigned char) ((((arr_3 [i_0]) / (arr_3 [i_1]))) >= ((~(((arr_3 [i_0]) - (((/* implicit */int) var_2))))))));
                var_23 ^= arr_1 [i_0 - 2];
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((_Bool) var_0)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned long long int) var_13))))) ? (((/* implicit */int) ((unsigned short) var_1))) : (((((/* implicit */int) var_16)) << (((((/* implicit */int) var_6)) - (17018)))))))))))));
}
