/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131601
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
    var_20 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (int i_3 = 1; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_21 ^= max(((~(((/* implicit */int) arr_6 [i_3])))), (var_13));
                            var_22 ^= ((((/* implicit */_Bool) ((var_0) >> (0ULL)))) ? (min((var_1), (((/* implicit */unsigned long long int) var_3)))) : (((((/* implicit */_Bool) arr_10 [i_3] [i_3 + 1] [i_3 + 1] [i_3])) ? (var_1) : (arr_12 [i_3] [i_3 + 2] [i_3] [i_3] [i_3] [i_3 - 1]))));
                        }
                    } 
                } 
                var_23 = (-((-(((((/* implicit */_Bool) var_3)) ? (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) var_10)))))));
            }
        } 
    } 
}
