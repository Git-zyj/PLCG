/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173135
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
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */short) (~(arr_8 [i_0] [i_1] [i_2] [i_2])));
                                var_18 &= ((/* implicit */long long int) min(((+(arr_4 [i_0]))), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != ((+(((/* implicit */int) (_Bool)0)))))))));
                                arr_13 [i_4] = ((/* implicit */unsigned short) (!(var_3)));
                            }
                        } 
                    } 
                } 
                var_19 = (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_6 [i_1] [i_1 - 1] [i_1])), (2649211599U)))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((min((-927544709), (((var_14) | (((/* implicit */int) (_Bool)0)))))) * ((~(((/* implicit */int) ((((/* implicit */int) (signed char)-22)) >= (((/* implicit */int) (_Bool)1)))))))));
    var_21 = ((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) ((_Bool) var_9))), ((+(var_7))))), (((/* implicit */long long int) (~(var_1))))));
    var_22 *= ((/* implicit */_Bool) var_8);
}
