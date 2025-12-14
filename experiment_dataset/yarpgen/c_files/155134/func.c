/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155134
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned short)384)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (1388241686U)))));
                var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(arr_2 [i_1]))))));
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(_Bool)0])) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) arr_0 [i_0] [i_1]))))) || (((/* implicit */_Bool) ((unsigned char) (short)-21691)))));
                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) max((((/* implicit */int) ((((/* implicit */int) (short)4080)) == (((/* implicit */int) arr_0 [i_0] [i_0]))))), (((((/* implicit */int) arr_0 [i_0] [i_1])) + (((/* implicit */int) arr_0 [i_0] [i_1])))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) var_0);
    var_18 = ((/* implicit */long long int) var_10);
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
}
