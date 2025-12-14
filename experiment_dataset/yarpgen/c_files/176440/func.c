/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176440
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
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) (((((-(3ULL))) % (arr_1 [i_0] [i_1]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1])))));
                arr_8 [i_1] = ((/* implicit */unsigned int) (short)-14382);
                var_17 = ((/* implicit */_Bool) ((unsigned int) max((arr_6 [i_0] [i_0]), (arr_0 [5U]))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 8; i_3 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) max((var_18), (min((((/* implicit */unsigned long long int) var_11)), (min((0ULL), (((/* implicit */unsigned long long int) (+(-1769262480))))))))));
                            arr_14 [i_1] [i_1] [i_3] [i_3] = ((/* implicit */long long int) (-(32767ULL)));
                            var_19 = ((/* implicit */unsigned short) -22);
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) / (var_10)));
}
