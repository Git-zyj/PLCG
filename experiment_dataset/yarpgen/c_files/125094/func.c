/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125094
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
    for (unsigned short i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [(unsigned char)0] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) ((unsigned char) var_9))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((signed char) arr_5 [4ULL]))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_2] [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */int) min((((/* implicit */short) arr_11 [i_4] [i_1] [(short)8] [i_4])), (var_1)))) - ((~(((/* implicit */int) var_3)))))) > (((/* implicit */int) var_10))));
                                var_12 = ((/* implicit */unsigned short) (+(3813800175U)));
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] [i_0 - 2] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3813800194U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))) != (((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))))))));
                var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1]))) <= (16036980691743201968ULL))))));
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) ((var_6) * (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
    var_15 = ((/* implicit */_Bool) var_8);
    var_16 = var_4;
    var_17 = ((/* implicit */unsigned char) var_6);
}
