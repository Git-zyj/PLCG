/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137902
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
    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) (~((~(((/* implicit */int) ((short) var_6))))))))));
    var_14 = ((int) (~(((int) var_4))));
    var_15 += ((/* implicit */unsigned short) var_0);
    var_16 *= ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) max((4092), (-4092)))) ? (((/* implicit */int) (short)13084)) : (((/* implicit */int) ((unsigned char) var_11)))))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) -4068)) ? (((/* implicit */int) (unsigned short)31)) : (((/* implicit */int) var_2))))), (((((/* implicit */long long int) 4092)) / (var_6)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_17 &= ((/* implicit */signed char) arr_3 [6]);
                var_18 = (+(min((18151652670328887689ULL), (((/* implicit */unsigned long long int) 1784460947U)))));
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) arr_1 [(unsigned short)0])) ? (((/* implicit */unsigned long long int) 1612564292U)) : (((unsigned long long int) arr_2 [i_0] [i_1] [i_1])))));
            }
        } 
    } 
}
