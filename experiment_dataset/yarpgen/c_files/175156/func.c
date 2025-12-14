/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175156
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
    var_13 = var_1;
    var_14 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (var_8) : (max((min((var_1), (var_3))), (((/* implicit */unsigned long long int) var_7))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 324994774612750612LL)), (min((1347103143213353505ULL), (((/* implicit */unsigned long long int) 3477283161U))))))) ? (max((((var_2) ? (var_0) : (var_3))), (((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))) : (var_4)));
                var_16 = min((var_3), (var_0));
                arr_5 [i_0] [i_0] [i_1] = ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_12)), (var_8)))) ? (var_6) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_11))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))));
            }
        } 
    } 
}
