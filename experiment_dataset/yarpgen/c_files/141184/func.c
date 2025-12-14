/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141184
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
    var_18 *= ((/* implicit */short) var_0);
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((1290966156), (((/* implicit */int) max((max((arr_0 [i_0] [i_0]), (arr_0 [i_2] [i_2]))), ((signed char)99))))));
                    var_19 = ((/* implicit */unsigned int) (unsigned short)65535);
                    arr_8 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) min((((/* implicit */unsigned int) arr_0 [i_0] [i_0])), (4277066851U))))) ? (arr_4 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)3)))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_20 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_6 [i_0 + 1] [i_1 - 2] [i_0 + 1])), (2170098554U)))) ? (((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_1 - 2] [i_0 - 1])) ? (((/* implicit */int) (unsigned char)80)) : (((/* implicit */int) arr_6 [i_1 - 2] [i_1 - 2] [i_0 + 1])))) : (((/* implicit */int) max((arr_6 [i_0 - 1] [i_1 - 3] [i_0 - 1]), (arr_6 [i_1 + 1] [i_1 + 1] [i_0 + 1]))))));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (unsigned short)10);
                                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((_Bool) arr_9 [i_0 + 1])) ? (((/* implicit */int) arr_9 [i_0 - 1])) : (((((/* implicit */_Bool) 4294967274U)) ? (((/* implicit */int) arr_9 [i_3 - 1])) : (((/* implicit */int) arr_9 [i_1 + 1])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */int) max((((/* implicit */unsigned int) ((unsigned short) ((unsigned char) (unsigned short)17733)))), (((unsigned int) ((signed char) var_10)))));
}
