/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114786
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
    for (short i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) ((((var_2) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_1 [i_0 - 2]))) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)196))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */int) var_4);
                                arr_14 [(unsigned short)16] [(_Bool)1] [i_2] [i_3] [i_4] [i_4] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)46036)) ? (((/* implicit */int) (unsigned char)204)) : (((/* implicit */int) (signed char)44))))) ? (((unsigned long long int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-51)))) : (((/* implicit */unsigned long long int) var_6))));
                                var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) var_1))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((((/* implicit */_Bool) ((signed char) var_7))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_9)))) : (max((var_6), (((/* implicit */long long int) var_3)))))) - (182LL)))));
}
