/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173130
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */long long int) var_1);
                                arr_17 [i_0] [i_1] [i_2] [i_0] [i_1] = ((/* implicit */unsigned char) var_1);
                            }
                        } 
                    } 
                    var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */long long int) arr_6 [i_0] [i_1] [i_2])) : (((((/* implicit */_Bool) arr_11 [i_0] [10LL] [i_0] [i_0] [17LL] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_13 [i_0] [i_1] [i_1] [i_1] [(short)16] [i_1] [i_1]), (((/* implicit */short) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) : (max((var_0), (((/* implicit */long long int) var_8)))))))))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */long long int) (signed char)-48);
}
