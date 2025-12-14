/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172844
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                var_14 -= ((/* implicit */unsigned long long int) min((arr_3 [(unsigned short)6]), (((((/* implicit */_Bool) 195210350U)) ? (22U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) arr_0 [i_1])) >= (var_13)))))))));
                var_15 = ((/* implicit */unsigned short) min((((long long int) var_9)), (((/* implicit */long long int) (+(((/* implicit */int) var_11)))))));
                arr_6 [i_0] [i_0] [i_1] = min((((/* implicit */signed char) ((((/* implicit */long long int) arr_2 [i_1 + 2] [i_0 + 1])) != (var_13)))), (arr_4 [i_0 - 3]));
                var_16 = ((/* implicit */short) (signed char)-89);
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((min((var_13), (((/* implicit */long long int) var_11)))) * (((/* implicit */long long int) ((/* implicit */int) var_0)))))) * (min((((var_9) * (((/* implicit */unsigned long long int) 0U)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) % (((/* implicit */int) var_0)))))))));
}
