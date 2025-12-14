/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174550
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */_Bool) ((((((int) arr_1 [i_0])) == (((/* implicit */int) (unsigned short)57902)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) : (((((/* implicit */_Bool) (+(arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) arr_1 [i_1])) : (min((arr_2 [i_0] [i_1]), (((/* implicit */unsigned long long int) var_6))))))));
                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) arr_1 [i_0]))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) max(((-(((/* implicit */int) var_10)))), (max((var_15), (((/* implicit */int) (unsigned short)53092))))))), (((((/* implicit */_Bool) var_7)) ? (max((((/* implicit */unsigned int) var_7)), (4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_12))))))));
    var_19 = ((/* implicit */int) var_1);
    var_20 = ((/* implicit */unsigned int) (short)3510);
}
