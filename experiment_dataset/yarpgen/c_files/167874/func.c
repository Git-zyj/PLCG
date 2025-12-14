/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167874
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
    var_16 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_14) : (((/* implicit */unsigned int) (-2147483647 - 1)))))) ? (((/* implicit */int) max((var_13), (((/* implicit */unsigned char) var_4))))) : (((/* implicit */int) var_7))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((max((var_5), (var_5))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_13)))))))) ? ((+(var_15))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1 + 3]))))))));
                arr_4 [i_0] [(signed char)13] = ((/* implicit */signed char) -1270708771);
                var_18 = ((/* implicit */_Bool) min((var_11), (((int) ((((/* implicit */int) arr_3 [(short)12])) * (((/* implicit */int) arr_2 [i_0] [i_0] [i_1 - 1])))))));
            }
        } 
    } 
    var_19 ^= ((/* implicit */_Bool) (-(max((var_0), (((/* implicit */long long int) (-(((/* implicit */int) (signed char)127)))))))));
    var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
    var_21 = var_15;
}
