/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164943
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-20288)) ? (-7828861786962435231LL) : (((/* implicit */long long int) ((/* implicit */int) (short)20288)))))) || (arr_5 [i_0]))) ? (((/* implicit */int) ((((/* implicit */int) max((arr_2 [i_0] [i_1]), (var_4)))) == ((-(((/* implicit */int) var_7))))))) : (((((((/* implicit */int) arr_4 [i_0] [i_1] [i_0])) << (((((/* implicit */int) arr_3 [i_0] [(signed char)20] [i_1 + 1])) + (12064))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))))))));
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */long long int) var_6);
                arr_8 [i_0] = min((((/* implicit */short) arr_1 [i_0])), (((short) ((((/* implicit */int) (short)-30170)) >= (((/* implicit */int) (short)-20274))))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) var_7);
}
