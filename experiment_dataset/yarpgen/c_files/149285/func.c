/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149285
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
    for (int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) 2147483647);
                    arr_9 [(short)12] [i_1 - 2] [i_2] [i_1 - 2] &= ((/* implicit */unsigned int) max((((/* implicit */long long int) (unsigned char)204)), (max((((/* implicit */long long int) ((((/* implicit */int) var_10)) != (arr_4 [(unsigned char)12] [13U])))), (((long long int) var_3))))));
                    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) arr_2 [i_0]))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) max((((var_6) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)202))))), (((/* implicit */unsigned int) var_2))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))));
}
