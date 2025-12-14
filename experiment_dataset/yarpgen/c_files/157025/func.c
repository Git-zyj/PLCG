/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157025
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
    var_15 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 11092489880179267561ULL)) ? (1828766226) : (var_9))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_5 [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */unsigned char) arr_0 [i_0] [i_1]))))) ? (var_9) : (((((((/* implicit */int) arr_4 [i_1])) >= (((/* implicit */int) (unsigned char)243)))) ? (((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */unsigned char) (signed char)-101))))) : (((/* implicit */int) arr_3 [i_1] [i_0] [i_0]))))));
                arr_6 [i_1] &= ((/* implicit */unsigned int) (-(((/* implicit */int) min((arr_3 [i_0] [i_0] [i_0]), (arr_3 [i_0] [i_1] [i_1]))))));
                var_16 &= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 11U)) % (14140687520259568277ULL)));
            }
        } 
    } 
}
