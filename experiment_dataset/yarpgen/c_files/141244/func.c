/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141244
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
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) arr_3 [i_1]))));
                    arr_11 [i_2] [i_2] = ((/* implicit */unsigned char) var_7);
                    /* LoopNest 2 */
                    for (signed char i_3 = 4; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_12 -= ((/* implicit */_Bool) (-((~((~(((/* implicit */int) arr_13 [(unsigned char)8] [i_2] [(unsigned char)8] [(unsigned char)8]))))))));
                                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) arr_3 [i_0 + 4]))));
                                var_14 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_0 - 1] [8]))));
                                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) arr_2 [(unsigned char)7]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */_Bool) (-((+((-(((/* implicit */int) var_4))))))));
    /* LoopNest 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (signed char i_6 = 0; i_6 < 13; i_6 += 4) 
        {
            for (unsigned short i_7 = 0; i_7 < 13; i_7 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) ((min((1477260350U), (((/* implicit */unsigned int) (short)(-32767 - 1))))) >> (((((/* implicit */int) arr_13 [(_Bool)0] [i_6] [i_6] [i_7])) - (95)))));
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 13; i_9 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) var_0);
                                var_19 = ((/* implicit */unsigned long long int) (-(var_3)));
                                arr_30 [(unsigned char)10] [i_6] [i_7] [(unsigned char)10] [i_6] [i_8] [i_9] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [(short)4] [i_6]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
