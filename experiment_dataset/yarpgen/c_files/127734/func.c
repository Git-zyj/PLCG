/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127734
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
    var_18 = ((/* implicit */unsigned short) var_0);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [(_Bool)1] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */unsigned int) var_12);
                                arr_13 [3ULL] [i_2] = var_7;
                                arr_14 [i_0] [i_0] [i_0] [i_0] [13ULL] [i_3] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [9ULL] [i_1] [i_1] [i_2] [i_1 - 1] [i_1 - 1])) || (((/* implicit */_Bool) arr_11 [i_1] [i_1 + 1] [i_1 - 1] [i_2] [i_1 - 1] [i_1 - 1]))))), (arr_2 [i_1 + 1] [i_1 - 1])));
                                var_19 = ((/* implicit */unsigned long long int) var_9);
                                arr_15 [i_0] [i_0] [i_2] [i_0] = arr_2 [i_1] [i_4];
                            }
                        } 
                    } 
                    arr_16 [i_2] [i_1] [i_1] = ((((/* implicit */_Bool) ((signed char) arr_9 [i_0] [i_1 + 1] [i_0] [20U] [i_0] [i_1 + 1]))) ? (((((/* implicit */_Bool) var_2)) ? (arr_5 [i_0] [9ULL] [i_2]) : (arr_9 [i_0] [i_0] [i_2] [i_0] [i_0] [i_1 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_2]))));
                    var_20 = ((/* implicit */unsigned char) var_13);
                }
            } 
        } 
    } 
}
