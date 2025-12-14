/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167265
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
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) var_17))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_0 + 1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)27447), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_0)));
                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) min(((+(arr_2 [i_0 + 1] [i_1 - 1]))), ((~(arr_2 [i_0 + 1] [i_1]))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 22; i_6 += 4) 
                        {
                            {
                                var_20 += ((/* implicit */int) ((((/* implicit */_Bool) max((arr_17 [i_2] [i_3] [i_4] [i_5] [i_5] [i_4]), (arr_17 [i_2] [i_3] [i_4] [i_4] [i_6] [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)70))) : (arr_11 [i_2])));
                                var_21 -= ((/* implicit */unsigned long long int) max(((~(arr_7 [i_6] [i_2]))), (((/* implicit */int) max(((unsigned short)37907), (((/* implicit */unsigned short) (_Bool)1)))))));
                            }
                        } 
                    } 
                    var_22 |= ((/* implicit */unsigned short) (~(max((4294967295U), (((/* implicit */unsigned int) (short)-1))))));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 20; i_7 += 1) 
                    {
                        for (int i_8 = 4; i_8 < 20; i_8 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */int) (+(arr_21 [i_2] [i_4] [i_4])));
                                arr_27 [i_3] [i_3] [i_4] [i_7 + 2] [i_8] [i_4] = ((/* implicit */unsigned short) var_3);
                                arr_28 [i_2] [i_3] [i_4] [i_4] [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)0)) & (0)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
