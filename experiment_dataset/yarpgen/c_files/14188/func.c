/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14188
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
    var_20 = ((/* implicit */signed char) ((((int) ((((/* implicit */int) (unsigned char)128)) ^ (((/* implicit */int) var_17))))) > (((/* implicit */int) var_15))));
    var_21 = ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) arr_5 [i_2] [i_1] [i_0]);
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) : (((((/* implicit */_Bool) var_11)) ? (arr_3 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) var_15)) ^ (((/* implicit */int) (unsigned char)157)))) : (((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_9))))))))));
                    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) var_12))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned char) min((var_6), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_5)))) && (((/* implicit */_Bool) var_13))))));
}
