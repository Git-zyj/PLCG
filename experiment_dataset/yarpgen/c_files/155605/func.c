/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155605
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
    var_17 += ((/* implicit */short) (!(((/* implicit */_Bool) max((2147483647LL), (((/* implicit */long long int) (_Bool)1)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned int) (((-((+(((/* implicit */int) var_11)))))) / (((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (unsigned short)0))))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 9; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_4] [i_0] [i_0] [i_3] [i_4] = ((/* implicit */int) (unsigned short)65523);
                                var_19 = ((/* implicit */long long int) min((837623999U), (((/* implicit */unsigned int) (_Bool)1))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */unsigned short) ((long long int) arr_2 [i_1 + 2] [i_1 + 1]));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) (+(min((var_16), (((/* implicit */unsigned long long int) max((3838657931U), (((/* implicit */unsigned int) var_11)))))))));
}
