/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109455
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
    var_12 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) var_3)) == (6618477721978790106ULL)))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0 + 2] = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((arr_2 [i_1]) >> (((((/* implicit */int) var_4)) + (205))))) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))), (min((arr_2 [i_1]), ((+(0U)))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (min((((int) (short)(-32767 - 1))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)242)) : (((/* implicit */int) arr_3 [i_0])))))) : (((/* implicit */int) var_9))));
                var_13 = ((/* implicit */unsigned int) min((var_4), (((/* implicit */short) max((arr_0 [i_0 + 3] [i_0 - 1]), (arr_0 [i_0 + 1] [i_0 + 3]))))));
            }
        } 
    } 
    var_14 = ((/* implicit */short) max((var_14), (var_4)));
}
