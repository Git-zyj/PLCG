/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189370
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
    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) (~(var_10))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) min((arr_3 [i_0] [i_1]), (((/* implicit */unsigned char) arr_4 [i_0] [i_1] [i_0]))))))))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */int) min((((/* implicit */unsigned int) min(((-(((/* implicit */int) (_Bool)1)))), ((+(((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))))), (min((((/* implicit */unsigned int) min((arr_1 [i_0]), (((/* implicit */unsigned short) arr_4 [i_0] [i_0] [i_0]))))), (min((arr_2 [i_1]), (3420910555U)))))));
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) (-(((/* implicit */int) var_4))));
    var_14 ^= ((/* implicit */long long int) (((+(min((((/* implicit */unsigned int) var_2)), (var_1))))) <= (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
    var_15 = ((/* implicit */_Bool) var_6);
}
