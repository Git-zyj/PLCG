/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119509
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
    for (int i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (signed char i_2 = 4; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */short) min((-7260072736584859696LL), (((/* implicit */long long int) min((((((/* implicit */_Bool) 974317013U)) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) (signed char)112)))), (((/* implicit */int) (signed char)-113)))))));
                                arr_13 [i_0] [(short)13] [i_0] [i_3] [i_0] [i_4] = ((/* implicit */unsigned char) var_7);
                                arr_14 [i_0] [i_1] [i_0] [i_0] [i_4] = ((/* implicit */unsigned char) arr_4 [i_0] [i_0]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 1; i_5 < 20; i_5 += 2) 
                    {
                        for (signed char i_6 = 0; i_6 < 21; i_6 += 4) 
                        {
                            {
                                var_19 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_2 + 2] [i_0 + 3])) << (((-6964325921950291289LL) + (6964325921950291292LL)))))) && (((/* implicit */_Bool) arr_1 [i_6]))));
                                var_20 = ((/* implicit */long long int) ((short) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_0))))) & (((((/* implicit */_Bool) arr_12 [i_0] [i_1] [11U] [i_1] [i_6] [i_5] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1]))) : (946951242U))))));
                                var_21 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (+(var_12)))), (((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (70368744177408ULL) : (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) var_4);
}
