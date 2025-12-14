/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118135
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) (((-(max((arr_2 [i_0] [i_0]), (((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0])))))) != (min((-2445474911704730662LL), (((/* implicit */long long int) 1999852913U)))))))));
                arr_6 [i_1] [i_0] [i_0] = ((/* implicit */long long int) (((((~(-5969623145801705087LL))) / (((/* implicit */long long int) ((/* implicit */int) (short)-106))))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) arr_5 [i_0] [i_1] [i_1])))))) < (((arr_3 [i_0]) << (((/* implicit */int) var_1))))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */short) var_5);
    var_14 = ((/* implicit */short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_1)) / (((/* implicit */int) (unsigned char)246)))))))), (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) * (((var_8) * (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
}
