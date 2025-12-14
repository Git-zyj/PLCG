/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179015
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
    for (unsigned short i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) ((long long int) var_12))) ? (arr_0 [i_0 - 3]) : (((/* implicit */unsigned long long int) (-(var_0))))))))));
                    arr_9 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) var_11);
                    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) max((arr_6 [i_1 - 1] [i_2 - 1] [i_2]), (arr_6 [i_1 - 1] [i_2 - 1] [i_2]))))) & (((((/* implicit */_Bool) arr_6 [i_1 + 1] [i_2 - 1] [i_1 + 1])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 - 1] [i_2 - 1] [i_2]))))))))));
                    var_15 = ((/* implicit */int) ((((_Bool) arr_2 [i_0 - 2] [i_2 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) : (min((((/* implicit */long long int) var_3)), (arr_2 [i_1 + 1] [i_1])))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) var_8);
}
