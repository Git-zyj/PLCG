/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126593
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */long long int) var_13)) <= (-1543896668009675805LL)));
    var_21 = ((((/* implicit */_Bool) ((((((/* implicit */int) var_8)) << (((((var_7) + (5280972283385286418LL))) - (19LL))))) / (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_15)) : (-1)))))) ? ((~((~(((/* implicit */int) var_1)))))) : (((/* implicit */int) ((var_4) >= (max((1382872948), (((/* implicit */int) (unsigned char)250))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                arr_5 [i_1 + 1] [i_1 + 2] = min((((long long int) (!(((/* implicit */_Bool) (short)8116))))), (arr_0 [i_0] [i_1]));
                var_22 = ((((arr_2 [i_0 + 1] [i_1] [i_1 + 1]) > (arr_4 [i_0 + 1]))) ? (min((arr_0 [i_0] [i_1]), (((/* implicit */long long int) -1)))) : (((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_0 [i_0] [i_1 - 1]) : (((/* implicit */long long int) arr_3 [i_0 - 2] [i_0 - 2])))));
            }
        } 
    } 
}
