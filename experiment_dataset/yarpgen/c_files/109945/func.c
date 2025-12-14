/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109945
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
    var_10 = ((/* implicit */unsigned char) var_6);
    var_11 = ((/* implicit */long long int) var_7);
    var_12 = ((/* implicit */unsigned char) (-(var_9)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_7 [(_Bool)1] [(unsigned char)1] [(unsigned char)4] &= ((/* implicit */unsigned long long int) ((long long int) (-(((/* implicit */int) var_5)))));
                var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) arr_4 [(_Bool)1] [i_1] [i_1]))));
                var_14 = ((/* implicit */unsigned long long int) ((unsigned int) arr_3 [i_1]));
                arr_8 [2U] = ((/* implicit */signed char) (+(arr_2 [i_0] [i_0])));
                arr_9 [i_0] = arr_5 [i_0] [i_1];
            }
        } 
    } 
}
