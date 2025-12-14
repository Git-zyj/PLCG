/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105000
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
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)36532)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)7)))))))) ? (((((/* implicit */int) (unsigned short)39016)) / (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (signed char)-105)))))));
    var_15 |= ((/* implicit */long long int) var_9);
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_1])) == (((/* implicit */int) arr_0 [i_0 - 1]))))) - (((/* implicit */int) (!(var_8)))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 2; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)74))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)25873)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))) : (((((/* implicit */long long int) arr_9 [i_2] [i_2] [i_4 - 2] [i_4 - 1] [i_2])) + (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) - (-4696178790435741336LL)))))));
                                arr_12 [i_0] [i_0 - 1] [i_0] [i_2] [i_0 + 1] = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) arr_8 [i_0 + 1] [i_4 - 2] [i_4 + 1] [i_4 - 1])), (arr_5 [i_0 + 1] [(_Bool)1] [i_4]))), (((/* implicit */unsigned long long int) ((int) -8355471678090549612LL)))));
                            }
                        } 
                    } 
                    arr_13 [i_2] = ((/* implicit */unsigned int) ((max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0 + 1] [i_1] [i_2] [i_2]))) : (var_4))))) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1]))))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) max((max((((/* implicit */unsigned char) (signed char)114)), (var_11))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)0)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2571)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))))));
                                arr_18 [i_2] [i_1] [i_1] [i_5] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */long long int) arr_6 [i_5] [i_5] [i_0 - 1])), (max((arr_1 [i_0] [i_1]), (arr_1 [i_1] [i_5])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
