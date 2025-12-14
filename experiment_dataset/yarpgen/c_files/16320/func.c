/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16320
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
    var_12 = ((/* implicit */_Bool) ((int) 9458241688599649790ULL));
    var_13 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)6063)))))))) | (((/* implicit */int) (_Bool)0))));
    var_14 = ((/* implicit */unsigned long long int) min((min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-30))) : (7176745267882414944LL))), (((/* implicit */long long int) 1971924153U)))), (((/* implicit */long long int) var_4))));
    var_15 -= var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 4; i_1 < 20; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) arr_6 [i_0] [i_1] [i_1])))))));
                    var_17 = ((/* implicit */long long int) ((_Bool) ((((((/* implicit */_Bool) arr_4 [i_2] [i_0] [i_2])) ? (((/* implicit */int) arr_8 [i_2] [i_2] [i_1] [i_0])) : (((/* implicit */int) arr_6 [i_1] [i_1 - 3] [i_1])))) % (((/* implicit */int) arr_6 [i_1] [i_0] [i_1])))));
                }
            } 
        } 
    } 
}
