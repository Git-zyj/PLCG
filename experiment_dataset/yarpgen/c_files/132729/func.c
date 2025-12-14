/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132729
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
    var_20 = ((/* implicit */int) (~(var_9)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            arr_13 [i_0] [i_1] [i_1] = ((/* implicit */long long int) var_10);
                            var_21 = ((/* implicit */unsigned long long int) var_12);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_22 = var_18;
                                arr_23 [i_1] [i_1] [i_4] [i_1] = ((/* implicit */unsigned short) (((((~(((/* implicit */int) (unsigned short)64814)))) + (2147483647))) << (((((/* implicit */int) var_0)) - (25)))));
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_16)) - (57303)))))) || (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) min((((/* implicit */int) var_18)), (var_11)));
}
