/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146319
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
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 7; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_2 + 1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2 + 3] [i_2 - 1] [i_2 - 1] [i_2 + 1])) ? (arr_7 [i_2 - 1] [i_2 + 3] [i_2 + 2] [i_2 + 1]) : (arr_7 [i_2 + 2] [i_2 + 1] [i_2 + 2] [i_2 + 3])))) ? (((15639562156228108981ULL) | (((/* implicit */unsigned long long int) arr_7 [i_2 + 3] [i_2 + 2] [i_2 - 1] [i_2 + 3])))) : (((/* implicit */unsigned long long int) 1720189856U))));
                    var_14 ^= (+(15639562156228108981ULL));
                    var_15 -= ((/* implicit */unsigned long long int) arr_6 [i_2 + 1] [i_2 + 3] [i_2 - 1]);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) ((_Bool) (~(((/* implicit */int) (unsigned short)11894)))));
                                arr_17 [i_0] [i_1] [i_1] [i_2 + 2] [i_3] [i_4] = ((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned char) var_12)), (arr_15 [i_0] [i_0] [i_0] [i_3] [i_0]))), (arr_15 [i_2 + 2] [i_2 + 3] [i_3 - 1] [i_3] [i_3 - 1])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 1) 
                        {
                            {
                                var_17 = arr_22 [i_0];
                                arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_3 [i_5]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) (unsigned short)46623);
    var_19 = ((/* implicit */int) min((((((/* implicit */_Bool) 15639562156228108981ULL)) ? (2807181917481442642ULL) : (max((2807181917481442647ULL), (0ULL))))), (((/* implicit */unsigned long long int) (signed char)34))));
}
