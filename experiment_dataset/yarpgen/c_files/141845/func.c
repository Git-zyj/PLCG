/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141845
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
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [9ULL] = ((/* implicit */unsigned int) 4445696842883999097LL);
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                arr_6 [i_0] [6LL] = ((/* implicit */short) arr_1 [i_0] [i_1]);
                arr_7 [10U] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)6571)) ? (((/* implicit */int) (short)-6572)) : (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */int) ((short) 4445696842883999118LL))) : (((((((/* implicit */int) arr_2 [i_1 - 1])) + (2147483647))) >> (((((/* implicit */int) arr_0 [i_1 - 1])) - (53)))))));
                arr_8 [i_1] [(_Bool)1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 4619608320182704707ULL)) && (((/* implicit */_Bool) 1432130572))))) < (max((((/* implicit */int) (signed char)-116)), (((int) (_Bool)1))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 4445696842883999097LL)) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) (short)14447)))))) : (((/* implicit */int) (_Bool)1))));
    var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))));
}
