/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125845
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
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_7 [i_0 + 1] [(unsigned char)12] = ((/* implicit */unsigned int) (~(((7508081683337967970LL) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 3])))))));
                arr_8 [13LL] [i_0] = (signed char)-73;
                arr_9 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) max((arr_4 [12]), ((unsigned char)216)))) >> (((((unsigned int) arr_5 [i_0] [i_0])) - (4246426790U)))));
                arr_10 [i_0] [(signed char)7] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) ((arr_5 [10U] [i_1]) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)4)))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_1);
}
