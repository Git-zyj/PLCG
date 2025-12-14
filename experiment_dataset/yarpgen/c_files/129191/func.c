/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129191
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [(unsigned short)14] [(unsigned short)2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_1 [i_1] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [(unsigned short)4])) && (((/* implicit */_Bool) (signed char)-19))))) : (((/* implicit */int) (unsigned short)8806))))) ? (((/* implicit */int) var_8)) : ((-(((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) arr_2 [i_1 - 1] [i_0])) : (((/* implicit */int) arr_2 [i_1] [i_0])))))))))));
                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) max((min((-795922039), (((int) var_11)))), (((/* implicit */int) ((((/* implicit */int) arr_1 [(short)8] [i_1])) < (((((/* implicit */int) arr_1 [6U] [6U])) << (((((/* implicit */int) arr_5 [i_0])) - (10496)))))))))))));
                var_19 *= ((/* implicit */_Bool) var_15);
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 1])) + (arr_4 [i_1] [i_1 - 1] [i_1 - 1])))) || (((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) -795922039)) || (((/* implicit */_Bool) 1680114511))))), (max((var_2), (((/* implicit */int) var_10)))))))));
            }
        } 
    } 
    var_21 += ((/* implicit */unsigned int) ((int) ((((/* implicit */unsigned long long int) var_14)) * (((5ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35470))))))));
    var_22 = (-(-5637907662535622393LL));
}
