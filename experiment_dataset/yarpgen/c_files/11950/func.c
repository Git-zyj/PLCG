/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11950
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
    var_17 = ((/* implicit */_Bool) var_15);
    var_18 = ((/* implicit */signed char) max((var_4), (((/* implicit */int) var_8))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */signed char) (((-((~(var_4))))) == (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_15))))))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 23; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_5 [i_0] [(short)11])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) >> (((((/* implicit */int) var_1)) - (6798)))))) : ((-(var_9)))))));
                            var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_3)), (min((2645748015U), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)65513)))))))));
                            arr_11 [i_2] [i_0] [i_2] [i_3] &= var_16;
                            var_21 = ((/* implicit */_Bool) (-((+(arr_2 [i_1] [i_1] [i_1 + 1])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) ^ (min(((~(var_16))), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-22)))))))));
    var_23 = (-((~(max((var_16), (((/* implicit */unsigned int) var_4)))))));
}
