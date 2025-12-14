/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131561
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned short i_2 = 3; i_2 < 14; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) ((int) (!(((/* implicit */_Bool) -408859150)))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 |= ((/* implicit */unsigned short) ((short) (+(((unsigned int) var_5)))));
                                var_15 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((((((/* implicit */_Bool) 7959736198159671464LL)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_3)))) + (2147483647))) >> (((var_9) - (218898205U)))))) < (((unsigned int) var_11))));
                                var_16 = ((/* implicit */long long int) arr_9 [i_0] [i_2 - 2] [(_Bool)1] [i_0]);
                                var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_4])) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */long long int) 1203304800U)) : (-1829119473686278823LL))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) ((_Bool) (unsigned char)188))) : (((/* implicit */int) ((short) min((((/* implicit */unsigned long long int) arr_0 [i_1])), (6368348938181473131ULL)))))));
                                arr_11 [i_4] [11U] [i_2 + 2] [(short)10] [12] = ((/* implicit */unsigned char) ((0U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)140)))));
                            }
                        } 
                    } 
                    arr_12 [i_0] [i_1] = ((/* implicit */_Bool) var_8);
                    var_18 = ((/* implicit */long long int) ((unsigned char) ((unsigned char) (unsigned short)65270)));
                    var_19 = ((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) arr_3 [1ULL] [i_2])))), (((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) 388330440U))))));
                }
            } 
        } 
    } 
    var_20 &= ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned char) ((unsigned int) 3906636833U))))));
}
