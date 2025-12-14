/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186369
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
    var_16 = ((/* implicit */unsigned long long int) min((var_9), (((/* implicit */short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) > (var_8))), ((!(((/* implicit */_Bool) var_2)))))))));
    var_17 = (-(max((min((-3625385480329699844LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) ((((/* implicit */_Bool) -3625385480329699833LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)96))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 7; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
                arr_4 [i_0 + 2] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                var_19 = ((/* implicit */short) (+(((var_13) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4145472580358576746LL)) ? (((/* implicit */int) arr_2 [i_0 - 3] [(signed char)5] [i_1])) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_0 + 1])))))))));
                var_20 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned long long int) -4145472580358576744LL)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13706))) & (var_13)))))));
            }
        } 
    } 
}
