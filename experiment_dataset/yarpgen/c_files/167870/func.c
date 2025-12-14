/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167870
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
    var_19 = ((/* implicit */signed char) var_9);
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_4 [i_0 + 1] [i_1] [i_1]))), (min((((/* implicit */unsigned int) min((((/* implicit */int) var_2)), (arr_1 [i_0])))), (arr_5 [i_0 + 1] [i_1] [10])))));
                    var_21 -= ((/* implicit */unsigned int) arr_0 [i_2]);
                    var_22 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), (var_18)))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [24]))))) ? (min((((/* implicit */unsigned int) var_2)), (arr_4 [i_0] [(short)8] [(short)12]))) : (((/* implicit */unsigned int) min((arr_1 [21LL]), (arr_0 [i_2])))))) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_6)) ? (1061913044) : (var_1))) - (((var_12) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2)))))))));
                }
            } 
        } 
    } 
}
