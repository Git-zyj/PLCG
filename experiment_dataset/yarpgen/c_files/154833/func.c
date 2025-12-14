/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154833
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_12 += (+(((((/* implicit */_Bool) (-(6942367011997219758LL)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) + (((/* implicit */int) (unsigned char)112))))) : (var_2))));
                    var_13 = ((/* implicit */unsigned short) (-(((arr_4 [i_0] [i_0] [i_0 + 1]) & (((/* implicit */int) (unsigned char)27))))));
                    var_14 |= ((/* implicit */signed char) min((((unsigned int) (!(((/* implicit */_Bool) var_2))))), (((/* implicit */unsigned int) (!(((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)255))))));
}
