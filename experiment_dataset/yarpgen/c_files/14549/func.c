/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14549
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
    var_10 = ((/* implicit */int) max((var_10), (((/* implicit */int) ((var_1) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44701))))))));
    var_11 = ((/* implicit */short) var_5);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) var_3);
                    var_13 -= ((/* implicit */unsigned char) arr_3 [i_2]);
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) ((((unsigned long long int) arr_4 [i_0] [i_1] [i_0])) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))) : (var_7)));
                    var_15 = ((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0])) ^ (((/* implicit */int) arr_6 [i_0] [i_2]))));
                    var_16 &= ((/* implicit */unsigned short) arr_2 [i_2]);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) var_3);
    var_18 = ((/* implicit */_Bool) ((signed char) ((long long int) var_3)));
}
