/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155652
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (+(var_4))))) ? (((/* implicit */int) var_19)) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) 1903625298U)) || (((/* implicit */_Bool) var_0))))) != (((/* implicit */int) (!(((/* implicit */_Bool) 6012819935820566305LL))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_19))) + (var_1)))) ? (min((((/* implicit */int) (unsigned short)65535)), (3))) : ((((!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535))))) : (((/* implicit */int) var_19))))));
                    var_22 = ((/* implicit */int) var_9);
                }
            } 
        } 
    } 
}
