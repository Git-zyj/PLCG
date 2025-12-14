/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15383
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
    var_10 = ((/* implicit */short) ((_Bool) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-64))))))));
    var_11 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) -800060637)), (((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned char) (signed char)64))))) ? ((((_Bool)1) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */int) var_9)))))))));
    /* LoopNest 3 */
    for (short i_0 = 4; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            for (long long int i_2 = 3; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_8 [i_2] [i_1] [i_1] [i_0 - 3] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_5 [i_1 + 1] [i_1] [i_0 + 2]), (arr_5 [i_1 + 1] [i_1] [i_0 - 2])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483636)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)64))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))) : (17058932149429513473ULL))))))));
                    var_12 = ((/* implicit */short) (_Bool)1);
                }
            } 
        } 
    } 
}
