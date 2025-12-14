/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153726
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
    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) max((((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (3752083514U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 3752083501U)))))), (min((3752083501U), (((/* implicit */unsigned int) var_2)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 4; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 9; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((((/* implicit */_Bool) 542883783U)) ? (0ULL) : (((/* implicit */unsigned long long int) 542883789U)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)161))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_15 -= ((/* implicit */unsigned short) var_4);
                                arr_16 [(unsigned short)8] [i_1] [i_1] [(unsigned short)8] [i_4] = ((/* implicit */signed char) min((-9223372036854775797LL), ((-(-9223372036854775797LL)))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_0] [i_0] [(unsigned short)4] = ((/* implicit */short) ((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-44))))) > (((unsigned int) (-(3752083514U))))));
                }
            } 
        } 
    } 
    var_16 = var_12;
}
