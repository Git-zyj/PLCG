/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161749
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
    var_13 = ((/* implicit */int) ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (var_11)))), (min((var_0), (((/* implicit */unsigned int) var_12)))))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_0] [17] = ((/* implicit */long long int) (!(((((/* implicit */int) var_5)) < (var_8)))));
                    arr_7 [i_0] = ((/* implicit */unsigned short) var_11);
                }
            } 
        } 
    } 
}
