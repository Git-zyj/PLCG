/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176625
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
    var_10 = ((/* implicit */unsigned int) var_6);
    var_11 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_7))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 4; i_1 < 21; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_10 [i_2] [(unsigned short)10] [i_2] [(_Bool)1] = ((/* implicit */long long int) (-((-((-(((/* implicit */int) var_4))))))));
                    arr_11 [i_0] [i_2] [i_1] [7] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((signed char) arr_4 [i_1 - 2] [i_1 - 2] [i_2 + 1])))));
                    var_12 = arr_1 [i_0] [i_1 - 2];
                }
            } 
        } 
    } 
    var_13 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? ((-(((/* implicit */int) var_3)))) : (((/* implicit */int) max((var_1), (((/* implicit */unsigned short) var_3))))))))));
}
