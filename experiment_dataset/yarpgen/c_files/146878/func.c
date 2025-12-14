/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146878
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
    for (unsigned int i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 24; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    arr_8 [(_Bool)1] [i_1] [(_Bool)1] [i_1 + 1] = ((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_0 [i_1 - 1])))) > (((((/* implicit */_Bool) (-(var_9)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_2])) ? (arr_3 [i_0] [i_1]) : (arr_2 [i_0] [i_0])))) : (arr_6 [i_1] [i_1 - 1] [i_1] [i_1]))));
                    var_10 -= ((/* implicit */_Bool) ((short) arr_3 [i_0 - 1] [i_1 - 2]));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */long long int) var_4);
    var_12 &= ((/* implicit */int) ((short) var_3));
    var_13 = var_9;
}
