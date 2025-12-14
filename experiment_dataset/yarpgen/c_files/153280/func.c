/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153280
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
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_5 [i_0] &= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) < (((unsigned long long int) ((arr_0 [i_1]) <= (((/* implicit */int) (signed char)5)))))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned int) var_12))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_13)) > (arr_3 [i_1])))) : (((((/* implicit */int) var_12)) << (((3100241535U) - (3100241525U))))))), (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_2 [2] [i_1]))))));
            }
        } 
    } 
    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) var_13))));
}
