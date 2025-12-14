/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135038
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
    for (signed char i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = var_7;
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((arr_5 [(short)0]) / (arr_5 [(short)8]))) == (((/* implicit */unsigned long long int) (~(arr_3 [i_0 + 2] [(_Bool)1])))))))));
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((arr_3 [i_0 - 1] [(unsigned char)0]) / (((/* implicit */int) arr_4 [(short)8])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2] [i_0] [i_0] [i_0]))))))) * (((((/* implicit */_Bool) ((unsigned int) arr_2 [12] [12]))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) arr_5 [(_Bool)1])) ? (((/* implicit */int) arr_4 [(short)12])) : (((/* implicit */int) arr_7 [(_Bool)1] [i_2])))))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */long long int) (((+(max((((/* implicit */unsigned long long int) (short)-6563)), (var_15))))) < (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)8545)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_14))))), (max((((/* implicit */unsigned int) var_5)), (var_12))))))));
}
