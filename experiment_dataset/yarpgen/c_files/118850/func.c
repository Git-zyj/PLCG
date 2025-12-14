/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118850
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
    var_10 = max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)7041)) ? (((/* implicit */int) (unsigned short)3472)) : (((/* implicit */int) (unsigned short)58508)))))))), ((unsigned short)58512));
    var_11 = ((/* implicit */_Bool) (~((~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)28)) : (((/* implicit */int) var_3))))))));
    var_12 = ((/* implicit */long long int) var_6);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_5)), ((unsigned short)62041)))) : (((/* implicit */int) ((unsigned char) arr_3 [(signed char)21]))))) <= (((/* implicit */int) ((signed char) arr_0 [i_1 + 1] [i_1 - 1])))));
                    arr_6 [i_2] = (+(((/* implicit */int) (unsigned char)33)));
                    var_14 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (~((+(1497318658U)))))), ((+(arr_5 [i_1 + 2])))));
                }
            } 
        } 
    } 
}
