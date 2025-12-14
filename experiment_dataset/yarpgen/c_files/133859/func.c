/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133859
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
    var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) ((((/* implicit */int) var_6)) << (max((((/* implicit */int) min((((/* implicit */unsigned short) var_8)), (var_9)))), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)26232)))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 6; i_1 += 3) 
        {
            {
                var_12 ^= ((/* implicit */unsigned int) var_2);
                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) (~(((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0] [i_1]))))) ? (((/* implicit */long long int) max((arr_3 [i_1 + 1]), (((/* implicit */unsigned int) (_Bool)1))))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */long long int) var_1)) : (var_10))))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1 + 4])))));
                var_14 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (_Bool)1)), ((~(((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (var_1) : (var_3)))))));
            }
        } 
    } 
}
