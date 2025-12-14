/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13137
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
    var_13 ^= ((/* implicit */_Bool) var_0);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 8; i_1 += 1) 
        {
            {
                var_14 = max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_1 + 3]))) <= (var_6))), (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))) != (-4900153105073347486LL))));
                arr_6 [i_0] [i_1 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((+(var_6))), (((((/* implicit */_Bool) 2697827862U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [(_Bool)1] [i_1]))) : (arr_0 [5])))))) ? (min((((/* implicit */int) max(((unsigned short)20532), (arr_3 [(unsigned short)7] [7ULL] [i_0])))), (max((arr_5 [5ULL] [5ULL] [(unsigned char)11]), (((/* implicit */int) var_5)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) arr_5 [i_1] [1U] [3LL])) : (2697827862U)))))))));
            }
        } 
    } 
}
