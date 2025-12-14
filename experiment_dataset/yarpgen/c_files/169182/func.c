/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169182
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */short) var_15)), (((short) var_14))))) / (((/* implicit */int) var_10))));
    var_20 = ((/* implicit */unsigned char) ((int) (-(((((/* implicit */long long int) ((/* implicit */int) var_12))) + (var_1))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */short) (((+(((var_12) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_7)))))) >> (((((/* implicit */int) (short)-28107)) + (28134)))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    var_22 -= ((/* implicit */unsigned short) min((min((arr_4 [i_1] [i_1]), (arr_4 [i_1] [i_1]))), (min((arr_4 [i_1] [i_1]), (arr_2 [i_1])))));
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) arr_5 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-28085))) : (max((((/* implicit */long long int) arr_5 [i_0])), (arr_0 [i_0] [5ULL]))))), (((long long int) arr_2 [i_0]))));
                }
                var_23 = arr_0 [i_0] [i_0];
                var_24 = ((/* implicit */short) arr_3 [i_0] [i_1] [i_0]);
            }
        } 
    } 
}
