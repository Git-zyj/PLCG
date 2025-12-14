/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152838
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
    var_10 = ((/* implicit */signed char) var_4);
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [21] [21] [i_0] = ((/* implicit */_Bool) arr_5 [i_0] [(unsigned char)1] [(unsigned char)1]);
                                var_11 = ((/* implicit */unsigned char) arr_6 [i_0] [i_1] [i_0] [i_0]);
                                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_1] [i_3] [i_0])) ? (arr_6 [i_0 - 1] [i_0 - 1] [i_3] [i_4]) : (((/* implicit */unsigned long long int) ((long long int) arr_6 [i_0 - 1] [(unsigned char)10] [i_0 - 1] [17])))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned char) arr_2 [i_0]);
                    arr_14 [i_0] [(unsigned short)16] [i_0] = ((/* implicit */_Bool) ((unsigned short) arr_12 [i_1]));
                    arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_2] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_1] [i_0 - 1] [i_2])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_2])) : (((/* implicit */int) arr_7 [i_2] [i_1] [i_2]))))) : (((((/* implicit */_Bool) arr_6 [(short)13] [i_1] [i_1] [5])) ? (arr_6 [i_0 - 1] [i_1] [i_1] [i_2]) : (arr_6 [i_0 - 1] [i_1] [i_2] [(signed char)17])))));
                }
            } 
        } 
    } 
}
