/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11569
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
    var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)49962)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */short) ((((/* implicit */int) min((((unsigned short) arr_3 [i_0 + 1] [i_2])), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) <= (var_5))))))) | (((/* implicit */int) (unsigned short)49975))));
                    arr_9 [i_0] [i_1] [i_0] [i_0 + 1] = max((((/* implicit */long long int) ((((/* implicit */int) var_8)) < (min((arr_6 [i_0] [i_0] [(unsigned short)15]), (((/* implicit */int) arr_7 [i_0] [(unsigned short)16] [i_1] [i_0]))))))), (16777215LL));
                    arr_10 [i_0] = ((/* implicit */unsigned short) var_9);
                    var_20 = ((/* implicit */_Bool) ((var_12) ? ((+(((/* implicit */int) arr_4 [i_0] [i_0 - 1])))) : (((/* implicit */int) ((_Bool) 16777238LL)))));
                }
            } 
        } 
    } 
}
