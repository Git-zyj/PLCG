/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170147
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
    var_14 = ((((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11)))) >= ((+(((/* implicit */int) var_1)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 3961688547326428713LL)))) : (max((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (3630667951927140116LL))), (((/* implicit */long long int) var_6)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_5 [i_0] [12] = ((/* implicit */unsigned short) (-(((long long int) (unsigned short)58410))));
                var_15 = ((/* implicit */unsigned char) var_13);
                var_16 = ((/* implicit */signed char) max((((/* implicit */int) ((signed char) var_13))), (((((/* implicit */int) arr_1 [i_0] [i_0])) - (((/* implicit */int) arr_1 [10] [10]))))));
            }
        } 
    } 
}
