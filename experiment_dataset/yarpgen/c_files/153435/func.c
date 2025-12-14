/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153435
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
    var_20 = ((/* implicit */signed char) ((long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-82))))), ((+(var_4))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (int i_3 = 3; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) arr_11 [i_3] [21ULL] [i_2] [i_3] [i_2] [i_1]);
                                arr_16 [i_0] [i_2] = ((/* implicit */unsigned long long int) ((int) ((arr_0 [i_3 - 2] [i_0 + 2]) ? (((/* implicit */int) arr_11 [i_0 + 1] [i_0 + 1] [i_0] [i_0 - 1] [i_0] [i_0 + 1])) : (((/* implicit */int) arr_9 [i_0] [i_3 - 3] [12U] [i_0 - 1])))));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -405921862)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_1]))))) ? (arr_7 [i_0 + 1] [10]) : (var_16))) >> (((long long int) max((((/* implicit */unsigned char) (signed char)15)), ((unsigned char)60))))));
            }
        } 
    } 
}
