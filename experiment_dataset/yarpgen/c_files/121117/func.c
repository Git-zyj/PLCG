/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121117
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_8 [(short)19] [i_1 + 2] [i_1] [i_2 - 2] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) (-(4294967295U)))) ? (((unsigned int) (signed char)119)) : (arr_0 [i_0]))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) min((((/* implicit */int) max(((signed char)119), (arr_11 [i_2 + 3] [i_2 + 3])))), (((var_5) | (((var_5) & (((/* implicit */int) (short)0))))))));
                                var_18 ^= ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 3601862867U)) ? (((/* implicit */int) (short)32204)) : (((/* implicit */int) (unsigned char)0))))) < (3278037180U));
                                arr_14 [i_2] [i_3 + 1] [i_2 + 3] [i_2] &= ((((/* implicit */_Bool) ((unsigned int) (signed char)61))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) 3601862873U))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 -= ((/* implicit */unsigned short) -1767798527);
    var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))))) != (((((((/* implicit */int) (unsigned short)29888)) == (((/* implicit */int) (unsigned char)237)))) ? (((unsigned long long int) var_7)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)10))) : (4294967295U))))))));
}
