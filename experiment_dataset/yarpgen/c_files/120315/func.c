/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120315
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
    var_10 += ((/* implicit */signed char) 7676922040386932901ULL);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 24; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */int) ((var_9) >> (((((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1] [i_1 - 1] [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_1 + 1]))) : (750164945753258831ULL))) - (192ULL)))));
                                var_12 += (+((((_Bool)1) ? (((/* implicit */unsigned long long int) var_8)) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_0 [2])) : (3310933131673419398ULL))))));
                                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) var_6)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 - 1] [i_1] [i_3]))) : (((((/* implicit */_Bool) (signed char)52)) ? (var_9) : (((/* implicit */unsigned long long int) arr_11 [i_1 - 1]))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned int) ((/* implicit */int) (short)4032))) & (arr_13 [i_0])))));
                    arr_15 [i_0] [i_1 - 1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) (short)-12078))) ? (max((((arr_12 [i_0] [i_1 - 1] [i_2] [i_2]) + (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) (~(((/* implicit */int) var_3))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (!((_Bool)0)))) != (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)120)))))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned int) (_Bool)1);
}
