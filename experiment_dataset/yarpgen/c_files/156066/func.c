/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156066
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned int i_3 = 2; i_3 < 9; i_3 += 2) 
                    {
                        {
                            var_11 = 4611686018427387900LL;
                            var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) var_2))));
                            var_13 = (+(((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_8)))) | (8589869056LL))));
                            var_14 = ((/* implicit */long long int) var_10);
                        }
                    } 
                } 
                arr_9 [i_0] [5LL] [i_1] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (((((/* implicit */long long int) ((((/* implicit */int) (short)32767)) ^ (var_0)))) ^ (var_4)))));
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-32765)) / (((((/* implicit */int) (short)-32767)) * (((/* implicit */int) (short)-32766))))))) ? (((/* implicit */int) (short)4)) : ((+(((/* implicit */int) var_5))))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) var_10);
    var_17 = ((/* implicit */unsigned short) ((unsigned long long int) (+(min((4833403459938486235LL), (((/* implicit */long long int) (_Bool)1)))))));
    var_18 = var_10;
}
