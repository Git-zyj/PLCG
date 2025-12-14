/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128296
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
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_11 &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((short) var_10))) || ((!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (arr_0 [i_0])))) ? ((+(var_10))) : (((/* implicit */unsigned long long int) arr_0 [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0])), (arr_3 [i_1]))) <= (((/* implicit */unsigned long long int) (~(var_8))))))))));
                var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) (-((-(((/* implicit */int) arr_4 [i_0] [i_1])))))))));
                var_13 = ((/* implicit */long long int) max((arr_3 [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_2 [i_1] [i_1]) <= (((/* implicit */long long int) var_8))))) >= ((+(((/* implicit */int) var_0)))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) var_6);
}
