/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116089
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
    var_17 -= var_2;
    var_18 = ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_1)) ? (max((var_8), (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_15)) < (min((17722252087562362083ULL), (((/* implicit */unsigned long long int) var_5)))))))));
    var_19 = ((/* implicit */int) var_1);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_6 [3U] [i_0] [i_0] [i_0] = min((((/* implicit */unsigned int) var_3)), ((~(((unsigned int) (short)-13564)))));
                    var_20 = min((-9189394344076042849LL), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(short)11] [(short)11]))) == (min((var_2), (((/* implicit */unsigned int) arr_3 [i_2]))))))));
                }
            } 
        } 
        var_21 *= ((/* implicit */long long int) (-(((int) arr_2 [i_0] [i_0]))));
        arr_7 [i_0] = ((/* implicit */signed char) min((max((((/* implicit */long long int) (signed char)77)), (arr_0 [i_0] [i_0]))), (((/* implicit */long long int) max(((signed char)-101), (((/* implicit */signed char) arr_3 [i_0])))))));
        var_22 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(arr_4 [i_0]))))));
    }
    var_23 |= ((/* implicit */_Bool) var_2);
}
