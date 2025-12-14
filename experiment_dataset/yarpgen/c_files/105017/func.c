/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105017
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
    for (long long int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            {
                var_11 = (-(((((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */long long int) (signed char)-17))))) ? ((~(((/* implicit */int) var_0)))) : (((/* implicit */int) arr_3 [i_0 - 1] [i_1 - 2] [i_1 - 3])))));
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 - 3] [i_1 - 2] [i_1 + 2]))) - (var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_3 [i_0 - 1] [i_1 - 3] [i_1 + 4]), (arr_3 [i_0 + 1] [i_1 + 1] [i_1 + 4]))))) : (((unsigned long long int) arr_3 [i_0 - 1] [i_0] [i_1 - 3]))));
                var_12 = ((/* implicit */_Bool) min(((((!(arr_3 [i_0 + 1] [i_1] [i_1 + 2]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_1 - 1]))) : (max((arr_2 [i_0]), (arr_2 [i_0 - 1]))))), (((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) (signed char)79))))))));
                var_13 += ((/* implicit */int) (_Bool)0);
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 9; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */signed char) var_3);
                            var_15 = ((/* implicit */long long int) arr_6 [i_2 + 3]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) (~(((/* implicit */int) var_1))));
    var_17 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((((((/* implicit */int) var_8)) >> (((((/* implicit */int) var_1)) + (23392))))), ((~(((/* implicit */int) (unsigned short)0))))))), (var_5)));
}
