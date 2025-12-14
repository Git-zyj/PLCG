/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133603
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) min(((short)4096), (((/* implicit */short) arr_5 [8LL] [(short)0])))))));
                /* LoopNest 2 */
                for (signed char i_2 = 4; i_2 < 8; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */short) var_13);
                            arr_12 [(unsigned short)2] = ((/* implicit */short) min((max((arr_0 [i_0]), (arr_6 [9LL] [9LL] [i_2]))), (((/* implicit */unsigned int) var_9))));
                            arr_13 [2U] [i_2] [i_1] [5U] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned int) var_14)), (var_11)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) var_9);
    var_21 *= ((/* implicit */unsigned int) (unsigned char)4);
}
