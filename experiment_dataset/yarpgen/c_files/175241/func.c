/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175241
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
    var_15 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) var_13))))) ^ (((/* implicit */int) ((unsigned short) var_3)))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)23)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))))) * (max((((/* implicit */unsigned long long int) var_0)), (var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) var_14)) ^ (((/* implicit */int) var_4)))) == ((-(((/* implicit */int) (_Bool)0))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_0 [i_1 + 1] [i_1])) ? (((/* implicit */int) arr_3 [i_0 - 1])) : (((/* implicit */int) arr_3 [i_0 - 2]))))));
                var_17 ^= ((/* implicit */signed char) var_12);
                arr_6 [i_0] [(signed char)4] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((var_3) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))) || (((/* implicit */_Bool) (+(arr_0 [i_1 - 1] [i_1 + 1]))))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) ((unsigned short) var_12));
}
