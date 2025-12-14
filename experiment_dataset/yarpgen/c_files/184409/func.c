/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184409
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
    var_17 = var_8;
    var_18 = ((/* implicit */long long int) (+(((/* implicit */int) var_14))));
    var_19 = ((/* implicit */unsigned long long int) var_5);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                var_20 ^= ((/* implicit */unsigned int) (signed char)-12);
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (short i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) ((unsigned long long int) (signed char)-21));
                                arr_12 [i_0] [i_1] = ((/* implicit */unsigned char) (-(((arr_2 [i_0]) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_4])))))));
                            }
                        } 
                    } 
                } 
                var_22 = ((((/* implicit */_Bool) ((unsigned char) -5459067419556901704LL))) ? (((arr_2 [i_0 + 2]) ? (arr_10 [i_1 - 2] [i_1 - 2] [i_1] [i_1] [i_0 + 1] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 1]))))) : (min((arr_10 [i_0 + 1] [i_1 + 1] [i_1] [i_1] [i_0 + 1] [i_0 + 1]), (((/* implicit */long long int) (unsigned char)33)))));
            }
        } 
    } 
}
