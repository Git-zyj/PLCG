/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175894
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
    var_15 = var_7;
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned int i_2 = 4; i_2 < 21; i_2 += 1) 
            {
                for (long long int i_3 = 2; i_3 < 23; i_3 += 1) 
                {
                    {
                        var_16 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_13)), (var_9)));
                        var_17 = ((/* implicit */int) var_3);
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */int) min((min((var_10), (((/* implicit */unsigned int) var_6)))), (var_10)));
                        arr_13 [i_0 + 4] [i_0 + 4] [i_0] [i_2] [i_0 - 2] [i_0] = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) var_0)), (var_3))), (((/* implicit */unsigned long long int) max((var_5), (var_1))))));
                        arr_14 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) var_3);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            for (long long int i_5 = 3; i_5 < 23; i_5 += 4) 
            {
                {
                    arr_20 [(signed char)20] [i_4] [(_Bool)1] |= ((/* implicit */unsigned int) min((((/* implicit */long long int) var_2)), (min((var_9), (((/* implicit */long long int) var_0))))));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 2; i_6 < 21; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_27 [i_0] [i_4] [i_5 - 2] [14LL] [i_4] = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_2)), (max((var_0), (var_0)))));
                                var_18 &= ((/* implicit */_Bool) var_11);
                            }
                        } 
                    } 
                    arr_28 [i_0] [i_4] [i_5] [i_0 - 2] = ((/* implicit */unsigned short) var_5);
                    arr_29 [i_4] [i_4] [i_4] = ((/* implicit */_Bool) var_5);
                }
            } 
        } 
    }
    var_19 = ((/* implicit */unsigned short) var_1);
}
