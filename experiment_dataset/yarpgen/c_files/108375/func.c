/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108375
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [(unsigned short)11] [i_2] = ((/* implicit */unsigned short) ((-1790154737802345328LL) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_3 [i_0] [i_1])), (var_9))))))))));
                    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) ((arr_4 [i_1] [i_2]) > (((/* implicit */long long int) ((/* implicit */int) var_10))))))) <= (((arr_2 [i_0] [i_0] [i_2]) ^ (var_5))))) ? (min((((/* implicit */unsigned long long int) (-2147483647 - 1))), (((((/* implicit */_Bool) arr_3 [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_6 [i_1]))))) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1 - 1])))))));
                    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) (-(var_14)))) / ((-(arr_6 [i_1]))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_8))));
    var_20 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned long long int) var_15))))))))));
}
