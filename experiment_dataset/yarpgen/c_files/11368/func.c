/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11368
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
    var_10 -= ((/* implicit */long long int) max((((/* implicit */unsigned int) var_0)), (min((max((var_9), (((/* implicit */unsigned int) var_6)))), (((/* implicit */unsigned int) max((var_6), (var_5))))))));
    var_11 ^= ((/* implicit */_Bool) (+(((/* implicit */int) var_6))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_1] = ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) arr_0 [i_0])) : (var_9))))) ? (((((/* implicit */_Bool) arr_3 [i_1])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (signed char i_3 = 1; i_3 < 12; i_3 += 1) 
                    {
                        {
                            arr_10 [i_1] [i_2] = ((/* implicit */long long int) max((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-43)), (((unsigned char) (-2147483647 - 1)))))), (var_4)));
                            var_12 = ((/* implicit */unsigned long long int) -5849943481915383779LL);
                            var_13 -= min((((((576460752303422464ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1]))))))), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3])));
                            var_14 = ((/* implicit */unsigned char) (-(arr_0 [i_2])));
                        }
                    } 
                } 
            }
        } 
    } 
}
