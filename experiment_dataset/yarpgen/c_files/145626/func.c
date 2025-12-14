/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145626
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
    var_15 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(var_13))))))) | (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)215))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */signed char) (+(((((/* implicit */int) var_6)) ^ (((/* implicit */int) arr_1 [i_0 - 1]))))));
                arr_4 [i_1] = ((/* implicit */unsigned int) max(((!((!(((/* implicit */_Bool) arr_2 [i_0 - 3] [(_Bool)1])))))), (var_8)));
                arr_5 [i_1] = ((/* implicit */signed char) min(((+(((int) arr_3 [(unsigned char)3])))), (((/* implicit */int) ((_Bool) arr_0 [i_1 - 1])))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) var_8);
}
