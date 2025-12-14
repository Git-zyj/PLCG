/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161003
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
    var_16 = var_4;
    var_17 = ((/* implicit */long long int) ((min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)49)) : (((/* implicit */int) var_13)))), (((/* implicit */int) var_9)))) << (((var_2) - (3131595848U)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) min((arr_5 [i_0]), (((/* implicit */unsigned int) 1610612736))))), (var_8)))) ? (((((/* implicit */_Bool) -1610612730)) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))) : (((/* implicit */unsigned int) 1631008751))));
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) arr_6 [i_2] [i_1] [i_2]))) ? ((-(arr_6 [i_2] [i_1] [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_6 [i_2] [i_1] [i_2]) > (arr_6 [i_2] [i_1] [i_2]))))))))));
                }
            } 
        } 
    } 
}
