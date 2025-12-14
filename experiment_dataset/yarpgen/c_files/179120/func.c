/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179120
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
    var_12 = ((/* implicit */unsigned int) var_0);
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) (-(min((arr_4 [i_0 + 3]), (((/* implicit */unsigned int) var_9)))))))));
                    var_14 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_8 [i_0 + 2]), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((/* implicit */int) min((((_Bool) var_9)), (((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_3 [i_2] [i_2]))))))) : (((((/* implicit */int) var_6)) & (((/* implicit */int) min((((/* implicit */signed char) var_11)), (var_8))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (unsigned char)42)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (var_0))) : (((/* implicit */long long int) min((((/* implicit */int) max(((unsigned short)7279), (((/* implicit */unsigned short) (_Bool)1))))), ((((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7)))))))));
}
