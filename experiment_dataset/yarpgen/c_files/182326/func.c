/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182326
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
    var_20 = ((/* implicit */unsigned long long int) (short)-1);
    var_21 = ((/* implicit */short) var_9);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_10)))))))));
                    arr_6 [i_2] = ((/* implicit */long long int) min(((+(((/* implicit */int) var_3)))), (((arr_1 [i_1] [i_1]) ? ((-(543532222))) : (((/* implicit */int) ((_Bool) -543532223)))))));
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((arr_5 [i_0] [i_0] [i_1] [i_2]) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_5 [i_0] [i_1] [i_2] [i_2]) && (((/* implicit */_Bool) (unsigned char)9)))))) : (min((var_7), (var_7))))))));
                    arr_7 [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min(((-(-543532223))), (arr_2 [i_1] [i_0]))))));
                    var_24 *= (-((+(((/* implicit */int) ((-358409492) > (((/* implicit */int) var_0))))))));
                }
            } 
        } 
    } 
}
