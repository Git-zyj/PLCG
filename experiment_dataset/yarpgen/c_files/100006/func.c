/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100006
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
    for (int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (1761957872U) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-1)))))))) ? (1761957889U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_3 [i_0 - 1] [i_0 - 1] [i_1]), (((/* implicit */unsigned char) var_9))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_4 [i_0 - 1] [i_1] [(unsigned char)2])) : (((/* implicit */int) var_4)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
                arr_6 [i_0 - 1] [i_1] = ((/* implicit */unsigned int) ((((_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_3 [5U] [i_1] [i_1])) : (((/* implicit */int) var_8))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 + 1] [i_1])) ? (4194303) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))))))));
            }
        } 
    } 
    var_11 = ((/* implicit */signed char) min(((+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10)))))), (((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) 2533009424U)) <= (var_1)))))));
}
