/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135844
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_1 [i_1] [i_1]))))));
                    arr_8 [i_0] [i_1] = ((/* implicit */_Bool) max((((/* implicit */int) min((arr_3 [i_0] [i_1] [i_2]), (arr_3 [i_1] [i_1] [i_1])))), (((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_3 [4ULL] [i_1] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
    {
        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 4) 
        {
            {
                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) arr_4 [i_4] [(short)19] [i_3]))));
                var_19 |= ((/* implicit */signed char) min((max((((/* implicit */long long int) ((int) var_5))), (arr_1 [i_3] [i_4]))), (((/* implicit */long long int) ((unsigned short) ((var_5) ^ (((/* implicit */int) arr_4 [i_4] [i_3] [i_3]))))))));
                arr_13 [i_3] [i_3] = ((/* implicit */_Bool) (-((((+(var_11))) << (((((min((((/* implicit */long long int) arr_5 [i_3])), (-3435683932299110081LL))) + (3435683932299110086LL))) - (5LL)))))));
                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */int) arr_10 [i_3])) - (((/* implicit */int) var_1)))), (((((/* implicit */int) var_13)) % (((/* implicit */int) arr_10 [3]))))))) ? (((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) arr_2 [i_3] [i_3] [i_3])))))) : (max((arr_7 [i_3] [i_3] [i_3]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_3] [i_3] [i_4])) ? (((/* implicit */int) arr_3 [i_3] [i_3] [i_4])) : (((/* implicit */int) (signed char)-30))))))))))));
            }
        } 
    } 
}
