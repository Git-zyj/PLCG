/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160804
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */unsigned int) (+(((((/* implicit */int) var_4)) + (var_2)))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned char) min(((~(((/* implicit */int) (unsigned short)4094)))), (((arr_6 [i_3]) - (arr_6 [i_0])))));
                            arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_3);
                        }
                    } 
                } 
                arr_10 [2ULL] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned int) (unsigned char)124)), (2300973856U)));
                arr_11 [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) arr_0 [i_0]);
            }
        } 
    } 
    var_12 *= ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) ((var_0) == (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))) >= (var_3))) ? (((/* implicit */int) var_6)) : ((+(((/* implicit */int) var_5))))));
    var_13 = ((/* implicit */unsigned short) var_9);
}
