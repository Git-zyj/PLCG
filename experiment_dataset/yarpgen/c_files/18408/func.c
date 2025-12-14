/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18408
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
    var_19 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 2035033530)))) & (1998339271621847999LL))) <= (((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_14)), (var_18)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_14)) == (((/* implicit */int) var_17)))))) : ((+(var_4)))))));
    var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) var_15))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */int) ((((/* implicit */long long int) var_11)) ^ (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))) + (min((((/* implicit */long long int) (short)5405)), (var_5)))))));
                var_22 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) 1998339271621847999LL))) ? (((/* implicit */int) ((unsigned char) arr_3 [i_0] [i_0 - 1] [i_0]))) : ((+(((/* implicit */int) arr_3 [i_0] [i_0 - 1] [i_0]))))));
                var_23 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) min((var_14), ((signed char)127)))) ? (((/* implicit */unsigned long long int) (~(var_6)))) : ((~(0ULL))))));
                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((arr_4 [(signed char)12] [i_1] [i_1]) ? (4ULL) : (((/* implicit */unsigned long long int) 19))))))) || (((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1]))))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2064252095U)) ? (var_0) : (var_13)))) ? (var_6) : (((/* implicit */long long int) 2064252108U)))) | (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_15)) ? (var_11) : (((/* implicit */unsigned int) var_2)))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)5384))))))));
    var_26 |= ((/* implicit */unsigned int) ((0ULL) >= (((/* implicit */unsigned long long int) 6561260133806803022LL))));
}
