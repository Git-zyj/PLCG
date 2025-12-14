/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152477
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */short) (~((~(3190486593886900588LL)))));
                /* LoopNest 3 */
                for (long long int i_2 = 2; i_2 < 13; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_7 [(short)16] [i_1] [i_2] [15LL])) & (((/* implicit */int) (unsigned char)133))))));
                                arr_15 [i_0] [i_3] [15U] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) var_11);
                                arr_16 [i_0] [(short)7] [i_2] [(short)7] [i_3] [i_3] [(unsigned char)16] = ((/* implicit */unsigned int) (unsigned char)103);
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */short) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_1])) + (((/* implicit */int) max((var_9), ((unsigned short)15946))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_5 = 3; i_5 < 13; i_5 += 4) 
    {
        for (short i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            for (long long int i_7 = 0; i_7 < 14; i_7 += 2) 
            {
                {
                    var_21 ^= ((/* implicit */unsigned short) arr_18 [i_5]);
                    var_22 = max((((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) max((arr_22 [i_5] [i_7]), (((/* implicit */unsigned int) (unsigned char)114))))) : ((~(7154392211111037231LL))))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)-46)) / (((/* implicit */int) (unsigned short)40953))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) var_8))));
}
