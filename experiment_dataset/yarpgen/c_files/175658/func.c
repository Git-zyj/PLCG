/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175658
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
    var_10 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2908563238U)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (_Bool)1))))), (max((max((var_1), (((/* implicit */unsigned int) var_8)))), (((/* implicit */unsigned int) var_5))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) (!(((arr_0 [6]) == (arr_0 [0]))))))));
        var_12 = arr_1 [i_0];
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_0 [i_0])))) ? (max((arr_0 [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_0])))) : (((arr_0 [i_0]) - (arr_0 [i_0])))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            {
                var_13 *= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_6 [i_2] [i_1] [i_1])) | (max((((/* implicit */unsigned long long int) arr_3 [i_1])), (arr_4 [i_2] [i_2])))));
                var_14 = ((/* implicit */unsigned int) (-(min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_2] [i_2]))))), ((-(arr_5 [i_1])))))));
            }
        } 
    } 
}
