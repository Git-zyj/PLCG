/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174632
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
    var_17 = ((/* implicit */unsigned char) var_3);
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) var_5))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            arr_8 [i_0 - 1] [i_0 - 1] [i_2] [i_2] = ((/* implicit */signed char) 2765197949743363786LL);
                            arr_9 [i_0] [i_0] [i_3] = ((/* implicit */_Bool) max((min(((unsigned short)13902), ((unsigned short)22397))), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)496)) <= (-32768))))));
                        }
                    } 
                } 
                var_19 ^= ((/* implicit */_Bool) ((((2633067429U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0]))))) >= (arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))))));
                var_20 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1] [i_1]))))) ? (arr_4 [i_0] [i_0 - 1] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) ((var_4) > (((/* implicit */long long int) ((/* implicit */int) (signed char)1)))))))))));
            }
        } 
    } 
}
