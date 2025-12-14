/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11451
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
    for (signed char i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                arr_6 [i_0 - 1] [i_0] [i_1 + 3] = ((/* implicit */_Bool) min((max((((/* implicit */unsigned int) arr_4 [i_1 - 1] [i_0 - 1])), (arr_0 [i_0 - 1]))), (((/* implicit */unsigned int) var_5))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */int) ((short) arr_9 [i_0 - 2] [i_0 + 1]))) % (((/* implicit */int) (unsigned char)200)))))));
                            var_15 ^= ((/* implicit */signed char) ((((unsigned long long int) arr_8 [i_2] [i_1] [i_1 + 2])) / (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_12 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 2])), (arr_8 [i_2] [4ULL] [i_1 + 4]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 &= ((/* implicit */unsigned char) ((long long int) (((!(((/* implicit */_Bool) (short)-31905)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)57)))));
    var_17 ^= var_4;
    var_18 = ((/* implicit */int) var_9);
}
