/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163741
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
    var_11 = ((/* implicit */int) var_0);
    var_12 = ((/* implicit */int) ((short) ((_Bool) var_0)));
    var_13 = ((/* implicit */unsigned long long int) var_3);
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */int) (signed char)63))))) ? (max((arr_2 [i_0 - 1] [i_2 + 2] [7]), (arr_2 [i_0] [i_2 + 2] [i_2 + 2]))) : (((/* implicit */int) ((((/* implicit */unsigned int) arr_2 [i_0 + 1] [i_2 + 1] [i_0 + 1])) >= (1861099210U))))));
                    arr_8 [(unsigned char)16] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((int) 2433868085U)))));
                }
            } 
        } 
    } 
}
