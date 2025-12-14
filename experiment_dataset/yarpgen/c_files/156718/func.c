/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156718
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
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? ((+(var_8))) : (((/* implicit */long long int) var_9)))))));
    var_14 = min((min((((/* implicit */unsigned long long int) min((var_12), (((/* implicit */signed char) var_7))))), (((var_5) * (((/* implicit */unsigned long long int) var_9)))))), (((/* implicit */unsigned long long int) var_7)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */long long int) 36028797018832896ULL);
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_10)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_3 [i_0]))));
                arr_7 [i_0] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_6)), (334851514U)))) && (((/* implicit */_Bool) (-(arr_2 [i_0])))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1])))))));
                arr_8 [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */long long int) var_2)) : (16911433728LL)))) ? (((((/* implicit */int) var_12)) & (var_2))) : ((-(((/* implicit */int) arr_0 [i_1] [i_0])))))) <= (((/* implicit */int) var_7))));
            }
        } 
    } 
}
