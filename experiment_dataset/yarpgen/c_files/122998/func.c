/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122998
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
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (!(var_15)))) : (((((/* implicit */int) var_11)) * (((/* implicit */int) var_17))))))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_19)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_21 += (~(((/* implicit */int) arr_4 [i_0])));
                var_22 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1]))))) == ((~((((_Bool)0) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) var_17))))))));
                var_23 &= ((/* implicit */long long int) max(((~(((/* implicit */int) max((arr_4 [i_0]), (arr_1 [i_1] [i_0])))))), (((((/* implicit */_Bool) ((unsigned short) 3249614611U))) ? (((/* implicit */int) (signed char)-25)) : (((/* implicit */int) arr_2 [i_0] [(signed char)2] [i_0]))))));
                var_24 *= ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [12] [i_0]))))) * (((/* implicit */int) arr_1 [(signed char)8] [i_0])));
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) var_10);
}
