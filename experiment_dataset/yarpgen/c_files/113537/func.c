/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113537
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
    var_19 = ((/* implicit */unsigned long long int) var_13);
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0 - 1] [i_0 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0 - 1]))))) ? (((/* implicit */int) ((var_0) <= (((/* implicit */int) arr_1 [i_0 - 1]))))) : (((/* implicit */int) ((arr_0 [i_0 + 1] [i_0 + 1]) > (arr_0 [i_0 - 2] [i_0 - 2]))))));
        var_20 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_0 [(signed char)12] [i_0])) ? (max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))), (((/* implicit */unsigned long long int) var_5))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned long long int) ((int) arr_0 [i_1] [i_1]));
        var_21 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_3 [i_1]))));
        var_22 = ((/* implicit */unsigned short) ((arr_1 [i_1]) ? (((arr_0 [i_1] [i_1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
    }
    var_23 = ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) - (var_6));
    var_24 |= ((/* implicit */long long int) var_18);
    /* LoopNest 2 */
    for (signed char i_2 = 3; i_2 < 15; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            {
                var_25 = ((/* implicit */_Bool) (((+(9223372036854775804LL))) + (((/* implicit */long long int) ((/* implicit */int) max((arr_5 [i_2 + 2]), (arr_5 [i_2 + 2])))))));
                var_26 = ((/* implicit */unsigned int) max((max((644849594075615205LL), (644849594075615196LL))), (((/* implicit */long long int) (((~(((/* implicit */int) arr_10 [i_3] [i_3] [i_2 + 2])))) | (arr_9 [7LL] [i_2] [i_3]))))));
            }
        } 
    } 
}
