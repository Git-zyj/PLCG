/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113925
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (long long int i_2 = 3; i_2 < 20; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_2] [i_0] [i_2])) ? (((/* implicit */int) arr_6 [i_2 - 3] [i_2] [i_0] [i_2])) : (var_0)))) ? ((~(((/* implicit */int) (unsigned char)255)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)14984)) : (((/* implicit */int) (unsigned short)14993))))));
                    var_12 += ((/* implicit */int) ((((/* implicit */_Bool) ((var_9) * (((/* implicit */long long int) 1U))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_2 + 1] [i_2 + 1] [i_2]))))) : (((unsigned long long int) arr_3 [i_2 - 3] [i_2] [i_2]))));
                    var_13 = ((/* implicit */unsigned char) ((min((((((/* implicit */int) var_10)) * (((/* implicit */int) var_3)))), (((/* implicit */int) var_3)))) * (((((/* implicit */_Bool) 2131137752)) ? (((/* implicit */int) ((unsigned short) var_10))) : (((/* implicit */int) arr_5 [i_0] [i_2 - 1] [i_1] [i_0]))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) var_5)), (max((var_9), (((/* implicit */long long int) -1239549726)))))), (((/* implicit */long long int) (~(((/* implicit */int) var_10)))))));
}
