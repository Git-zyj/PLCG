/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178368
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
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (short)-7641))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((unsigned long long int) arr_5 [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) var_9)), (var_1)))) ? (((long long int) var_13)) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((unsigned char) var_8)))))));
                            arr_14 [i_0] [i_1] [i_1] [(short)20] = (-(var_8));
                        }
                    } 
                } 
                arr_15 [i_0] [i_0] = (((-((~(((/* implicit */int) (signed char)37)))))) <= (min((((/* implicit */int) var_4)), ((+(((/* implicit */int) var_9)))))));
                var_15 = ((/* implicit */_Bool) (~(((/* implicit */int) var_7))));
                var_16 = ((/* implicit */unsigned int) (+(min((((/* implicit */long long int) arr_12 [i_1] [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1])), (-3049346356708226933LL)))));
            }
        } 
    } 
    var_17 &= ((/* implicit */signed char) (+(((/* implicit */int) var_10))));
    var_18 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) var_4)), (max((var_6), (((/* implicit */unsigned short) var_12))))));
    var_19 = ((/* implicit */_Bool) (+((~(((/* implicit */int) var_5))))));
}
