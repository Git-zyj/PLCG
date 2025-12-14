/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18746
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_19 &= ((/* implicit */unsigned char) (-(((unsigned int) (+(((/* implicit */int) arr_1 [i_1])))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                arr_16 [i_0] [(short)15] [i_2] [i_2] [i_4] = ((/* implicit */unsigned long long int) 483191306);
                                arr_17 [i_0] [i_1] [i_0] [i_2] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -483191306)) ? (((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)40)), ((unsigned short)0)))) == (((((/* implicit */int) (short)-2153)) & (((/* implicit */int) (unsigned short)0))))))) : (((/* implicit */int) arr_10 [i_0] [(short)16] [i_2] [i_0]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 4) 
    {
        for (short i_6 = 3; i_6 < 14; i_6 += 2) 
        {
            for (int i_7 = 1; i_7 < 15; i_7 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 6785691042542639709LL)) ? (483191306) : (((/* implicit */int) (signed char)42))))))) ? (((/* implicit */int) (short)7)) : (-483191306)));
                    var_21 = ((/* implicit */unsigned short) ((var_12) / (((((((/* implicit */int) var_15)) + (2147418112))) + (((/* implicit */int) (short)32762))))));
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((min((var_18), (var_16))), (((/* implicit */unsigned int) ((arr_13 [(unsigned short)4]) < (5221338149347093732ULL))))))) ? (((/* implicit */int) ((signed char) 483191305))) : (max((483191305), (483191288)))));
                }
            } 
        } 
    } 
}
