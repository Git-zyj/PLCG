/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150350
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) max((((/* implicit */int) var_2)), ((-2147483647 - 1))))) ? (((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)241))))) : (((/* implicit */long long int) (-(var_1)))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) var_7))) && (((/* implicit */_Bool) ((int) 2147483647)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_10 [i_1] [i_1 + 2] [i_2] [i_1 + 2] = (~((+(((/* implicit */int) arr_7 [i_1] [i_1 - 1] [i_1 + 1])))));
                    var_11 = ((/* implicit */_Bool) arr_1 [i_0] [(unsigned char)8]);
                    var_12 = ((((arr_7 [i_1] [i_2] [i_1]) ? (((/* implicit */int) arr_2 [i_1 - 1] [i_1] [i_1 - 1])) : (((/* implicit */int) arr_2 [i_1 - 1] [i_1] [i_1 - 1])))) == (((/* implicit */int) arr_2 [i_1 - 1] [i_1] [i_1 - 1])));
                    var_13 = ((/* implicit */unsigned long long int) var_1);
                }
            } 
        } 
    } 
}
