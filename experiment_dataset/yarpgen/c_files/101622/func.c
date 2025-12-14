/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101622
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
    var_10 = ((unsigned int) 14688782016512438031ULL);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_11 += ((int) ((1048575) == (-1048590)));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_4 [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_4 [i_0]))))) : (((long long int) arr_4 [i_0]))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-32761)) < (-1064176598)));
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) - (-1048578)))) ? (((((/* implicit */_Bool) -1425942719)) ? (((/* implicit */unsigned long long int) var_0)) : (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (min((((/* implicit */unsigned long long int) min((-1048590), (((/* implicit */int) (signed char)102))))), ((~(var_8))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
}
