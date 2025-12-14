/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129586
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((((/* implicit */_Bool) ((unsigned long long int) min((2025682411836135875ULL), (((/* implicit */unsigned long long int) arr_4 [i_1] [i_1 - 1] [i_1 - 3])))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_0] [i_1 + 1]))))) : (((var_14) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))))))) : ((-((-(var_9))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 9; i_2 += 3) 
                {
                    for (unsigned char i_3 = 4; i_3 < 8; i_3 += 4) 
                    {
                        {
                            var_15 = var_0;
                            arr_12 [i_0] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_3 + 2] = ((/* implicit */int) (~(max((((/* implicit */unsigned long long int) var_12)), (var_2)))));
                            var_16 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) arr_0 [i_0] [i_1 + 1])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) var_13);
}
