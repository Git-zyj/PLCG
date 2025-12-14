/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112139
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
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */_Bool) ((unsigned short) ((signed char) ((unsigned char) arr_3 [i_1] [(_Bool)1]))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_0 - 3] [i_1 + 2] [i_3 - 2]))))) ? (((/* implicit */unsigned long long int) var_9)) : (((((/* implicit */unsigned long long int) arr_11 [i_1 - 1] [1ULL] [i_0 + 1] [i_3] [i_4])) & (var_6))))))));
                                var_19 ^= ((/* implicit */unsigned char) ((int) ((short) arr_12 [i_0 - 3] [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 22; i_6 += 4) 
                        {
                            {
                                arr_18 [i_0] [i_1 - 1] [i_2] [i_2] [i_1 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_7 [i_0] [(short)16] [i_2] [(short)16])) : (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) (signed char)90))))));
                                var_20 = ((/* implicit */long long int) ((((/* implicit */int) ((min((var_9), (((/* implicit */int) var_16)))) <= (((/* implicit */int) ((short) (signed char)4)))))) >> (((arr_2 [i_6] [i_5 - 1] [i_2]) - (2104237804)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((int) var_2)))));
}
