/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135523
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
    for (long long int i_0 = 2; i_0 < 6; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 8; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))), (((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned short) var_7))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(var_4))))) : (((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))));
                    arr_8 [(unsigned char)8] [i_0] [(_Bool)1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned short) (-(var_6)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_14 [i_2] [i_0] [i_2 - 1] [i_3] [(unsigned char)8] = ((/* implicit */signed char) var_1);
                                arr_15 [i_4] [i_4] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) var_1)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) ^ (var_9))))), (((/* implicit */unsigned long long int) (~(var_5))))));
                            }
                        } 
                    } 
                    arr_16 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */int) max((var_10), (((/* implicit */short) var_7))))) : (((/* implicit */int) var_7))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */_Bool) (+(var_5)));
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 2; i_5 < 9; i_5 += 4) 
    {
        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 4) 
        {
            {
                arr_22 [i_5 - 1] [i_6] = ((/* implicit */int) min((((/* implicit */unsigned int) max((((/* implicit */short) (!(((/* implicit */_Bool) var_6))))), (((short) var_6))))), (((((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (var_2)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_10))))) : (var_1)))));
                arr_23 [i_5 - 1] [i_6] [i_6] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (var_5)))));
                arr_24 [i_6] = ((((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))) ? (max((((/* implicit */unsigned long long int) var_3)), (((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_6))))) : (((/* implicit */unsigned long long int) (~(((var_7) ? (((/* implicit */long long int) var_1)) : (var_2)))))));
            }
        } 
    } 
}
