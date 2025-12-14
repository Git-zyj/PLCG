/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164818
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
    var_20 = ((/* implicit */signed char) var_1);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) 67108863)), (arr_0 [i_1 + 1]))))));
                    arr_10 [i_1] [i_1 - 3] [i_1] [i_1 + 1] = ((/* implicit */signed char) var_3);
                    arr_11 [i_1] [i_0] [i_0] [i_0] = ((/* implicit */short) var_10);
                    arr_12 [i_0] [(_Bool)1] [i_2] [i_2] = ((/* implicit */int) (+(((((/* implicit */long long int) ((var_15) ? (((/* implicit */int) (signed char)-107)) : (((/* implicit */int) (signed char)-107))))) - (((long long int) arr_2 [i_0] [i_1]))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) var_5);
    var_22 = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)-107))));
}
