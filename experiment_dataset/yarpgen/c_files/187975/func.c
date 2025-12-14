/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187975
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
    var_13 = ((/* implicit */unsigned int) var_12);
    var_14 = ((/* implicit */unsigned short) ((((max((4729633496781878012LL), (((/* implicit */long long int) (unsigned char)23)))) | (((/* implicit */long long int) ((/* implicit */int) var_4))))) < (((/* implicit */long long int) 924371708))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0])) ? ((-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_12)))))) : (((/* implicit */int) arr_0 [i_0]))));
                arr_5 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) arr_2 [i_1] [i_0])), (arr_1 [i_0])));
                var_16 &= ((/* implicit */unsigned short) var_2);
            }
        } 
    } 
}
