/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158016
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 6317689672316855957LL)) ? (((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (short)-14676)))) : (((/* implicit */int) var_2))));
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)7261))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)48148))))) : (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (signed char)17))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 21; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)58292)) ? (0ULL) : (arr_4 [i_1 - 2] [i_0]))) & (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_0] [(_Bool)1] [i_1 - 4])))))));
                arr_5 [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (arr_4 [i_0] [i_0]) : (arr_1 [i_1])))) ? (((/* implicit */unsigned long long int) (-(8971125217634011293LL)))) : (((((/* implicit */_Bool) var_3)) ? (arr_2 [i_0]) : (arr_2 [i_0]))))));
                var_14 = ((/* implicit */signed char) ((max((((/* implicit */long long int) (_Bool)1)), (arr_0 [i_0] [i_0]))) - (((/* implicit */long long int) (+(((((/* implicit */_Bool) 1048320)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9)))))))));
            }
        } 
    } 
}
