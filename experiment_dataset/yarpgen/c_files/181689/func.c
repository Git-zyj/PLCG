/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181689
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
    var_12 = ((/* implicit */int) (unsigned char)0);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_8 [(signed char)6] [i_1] [i_0] [(signed char)4] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((9223372036854775807LL) / (((/* implicit */long long int) ((/* implicit */int) arr_2 [(unsigned char)1] [i_0] [i_0])))))), ((+(max((arr_7 [i_1 - 1] [i_2]), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_2] [i_2]))))))));
                    var_13 *= (((-(((/* implicit */int) arr_4 [i_2 - 1] [i_1 + 1] [i_0] [i_0 + 1])))) - (((/* implicit */int) (!(arr_4 [i_2 - 1] [i_1 - 1] [i_0 + 2] [i_0 + 2])))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */long long int) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) << (((var_5) - (17226907658271021777ULL))))) >> (((((((/* implicit */_Bool) ((unsigned short) var_8))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (signed char)22))))) + (4212381321939177025LL)))));
}
