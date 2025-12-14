/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151671
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
    var_15 = ((/* implicit */unsigned char) var_5);
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_6 [i_2] [i_0] [i_0 - 1] = ((/* implicit */unsigned int) (unsigned char)200);
                    var_16 = max((((/* implicit */long long int) (-2147483647 - 1))), (min((68715282432LL), (((/* implicit */long long int) arr_2 [i_0 - 1] [i_0 - 1])))));
                    var_17 |= ((/* implicit */signed char) var_6);
                    var_18 += ((/* implicit */int) ((unsigned int) min((var_4), (((/* implicit */int) arr_1 [i_0 - 1])))));
                    arr_7 [i_0] [11U] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_3 [i_0] [i_2])))) ? (((/* implicit */long long int) arr_3 [i_0] [i_1])) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (arr_2 [i_0 - 1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_0])))))), (var_11)))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-16384))));
}
