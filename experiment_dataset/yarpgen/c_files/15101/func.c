/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15101
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
    var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (-770485727)))) + (((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned short i_3 = 1; i_3 < 21; i_3 += 4) 
                    {
                        {
                            var_15 *= ((/* implicit */int) ((arr_8 [(unsigned short)10] [i_2] [i_1] [(unsigned short)10]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            var_16 = arr_7 [i_0] [i_0] [i_1] [i_2];
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned int) (_Bool)1);
            }
        } 
    } 
}
