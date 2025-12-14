/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16534
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
    var_16 = ((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) max((var_4), (((/* implicit */int) var_15))))), ((~(var_14))))), (((/* implicit */long long int) ((_Bool) (-(-1383914250486841698LL)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max(((~(((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)226)))) ? (((/* implicit */int) min((((/* implicit */short) var_15)), (var_2)))) : ((~(((/* implicit */int) (short)0))))))));
                    arr_9 [2LL] [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) arr_4 [i_1 + 1] [i_0])) == (((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned int) 0LL);
}
