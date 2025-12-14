/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1345
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 21; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (var_6)))) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-63))) < (var_3)))))));
                                arr_17 [i_0] [i_0] [i_0] [i_3] [i_4] [i_2] &= ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) (+(var_6)))), (max((((/* implicit */unsigned long long int) var_5)), (var_7))))), (((/* implicit */unsigned long long int) (-(((2515781374774805330LL) ^ (var_8))))))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) min(((~(min((-2515781374774805334LL), (((/* implicit */long long int) 3307912426U)))))), (((/* implicit */long long int) (unsigned char)162))));
                }
            } 
        } 
    } 
    var_13 &= ((/* implicit */int) ((((/* implicit */_Bool) min(((+(var_8))), (((/* implicit */long long int) (+(((/* implicit */int) var_0)))))))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
}
