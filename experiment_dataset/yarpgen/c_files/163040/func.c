/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163040
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
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [15ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) + (((arr_4 [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_0]))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] [i_1] [7ULL] [i_3] [i_4] [i_2] [4ULL] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_14 [i_2])))) - (((((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_2])) : (var_7)))));
                                arr_17 [i_0] [i_0] [i_4] [i_3] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_9 [i_4] [i_3] [i_2] [(short)16] [i_0])))) && (((/* implicit */_Bool) (~(arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned char) ((signed char) max((arr_13 [i_0] [i_0] [i_0] [i_0]), (arr_13 [i_0] [(short)12] [i_1] [i_2]))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) max((((/* implicit */int) var_11)), (((((/* implicit */int) var_13)) & (((((/* implicit */int) var_14)) % (((/* implicit */int) (unsigned char)121))))))));
}
