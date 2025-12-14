/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16889
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
    var_17 = ((/* implicit */unsigned short) var_3);
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (unsigned char)0))));
                    var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned short)17892)) : (((/* implicit */int) arr_6 [i_0] [i_0 + 4] [i_1] [i_1]))))) ? (((/* implicit */int) (unsigned char)163)) : (((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_9 [i_0] [i_2] [i_1])))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) var_14);
}
