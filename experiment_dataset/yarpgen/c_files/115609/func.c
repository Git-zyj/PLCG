/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115609
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
    for (long long int i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_1 [i_0])) ? (869578872U) : (arr_0 [i_0] [i_1])))));
                var_11 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) -1268739688)))))) == (((((/* implicit */_Bool) arr_3 [i_0 + 2])) ? (arr_2 [i_0 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 2])))))));
                var_12 = ((/* implicit */unsigned long long int) (-(((869578872U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))))));
                arr_5 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)99))))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0]))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) var_5);
}
