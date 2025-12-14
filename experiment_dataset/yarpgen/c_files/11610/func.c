/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11610
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_0 + 1] [i_1])) + (((/* implicit */int) ((signed char) (short)-5)))));
                var_11 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1])) / (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) && (((/* implicit */_Bool) arr_4 [i_1] [i_0])))))))) + ((+(8498783630013845145ULL)))));
                arr_6 [i_1] [i_1] [i_1] &= ((/* implicit */int) ((((arr_4 [i_0 + 1] [i_0]) & (arr_4 [i_0 + 1] [i_1]))) + (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned int) var_9);
                            arr_11 [i_0] [(signed char)9] [i_2] = ((/* implicit */_Bool) arr_9 [i_0 + 1] [i_0 + 1]);
                            arr_12 [i_3] [i_0] [9] [i_0] [i_0 + 1] = ((/* implicit */unsigned char) var_9);
                        }
                    } 
                } 
                var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_4 [i_0] [i_0 + 1]) / (arr_4 [i_0] [i_0 + 1])))) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_8))) ^ (arr_4 [i_0] [i_0 + 1]))))));
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) var_8);
}
