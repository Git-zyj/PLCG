/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110371
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
    var_14 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */short) arr_5 [i_0] [i_0] [i_1]);
                arr_7 [i_0] [i_0] |= ((/* implicit */signed char) ((((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 33554431LL)))))))) % ((((!(((/* implicit */_Bool) arr_4 [i_1])))) ? ((-(33554436LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_3 [i_1] [i_0]) : (arr_3 [i_0] [i_0]))))))));
            }
        } 
    } 
    var_15 += ((/* implicit */long long int) var_1);
    var_16 = ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (3336369886U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_12), (var_3))))) : ((+(var_8)))));
}
