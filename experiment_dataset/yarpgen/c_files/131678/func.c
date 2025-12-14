/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131678
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
    var_11 = ((/* implicit */unsigned int) (+(min((((/* implicit */long long int) var_1)), (max((var_4), (((/* implicit */long long int) var_0))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [i_2] = ((/* implicit */signed char) ((1312908293) >> (((/* implicit */int) var_0))));
                    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_1 [i_2])) ? (var_4) : (281474976710655LL))), (((var_7) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_1]))) : (281474976710634LL)))))) ? ((~(arr_2 [(_Bool)1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_2]))) < (var_3))))))))));
                }
            } 
        } 
    } 
    var_13 += ((/* implicit */short) var_9);
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0)))))));
    var_15 = ((/* implicit */_Bool) ((var_7) ? (var_5) : (((((/* implicit */_Bool) 566099479)) ? (max((((/* implicit */unsigned long long int) (unsigned short)19424)), (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (short)-21557))))))));
}
