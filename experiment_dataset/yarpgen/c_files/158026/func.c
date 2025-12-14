/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158026
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
    var_10 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_2))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 7; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                arr_5 [10U] = (((_Bool)1) ? (((/* implicit */unsigned int) 1891769785)) : (620622199U));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned char)123)) && (((/* implicit */_Bool) (unsigned char)133)))), (arr_1 [i_1])));
                arr_7 [8U] [i_1] [i_1 + 1] = ((/* implicit */signed char) ((unsigned char) min((min((168662053U), (((/* implicit */unsigned int) (signed char)127)))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_0 [i_1 - 2] [3U]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
                arr_8 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((var_0) | (((/* implicit */unsigned long long int) -1852865189)))) | (((/* implicit */unsigned long long int) var_6))))) ? (((((/* implicit */_Bool) ((unsigned int) arr_4 [i_0] [2] [i_1]))) ? ((~(1891769793))) : (((((/* implicit */int) var_7)) << (((var_6) - (665852481))))))) : ((~(((/* implicit */int) arr_2 [i_0 + 3]))))));
                arr_9 [i_1] [i_1 + 1] = ((/* implicit */unsigned int) min((min((((/* implicit */int) arr_3 [i_0 + 2])), (arr_4 [i_0 + 2] [i_0 - 2] [i_1 + 1]))), (((/* implicit */int) var_7))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned char) ((var_6) / (((int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_3))))));
}
