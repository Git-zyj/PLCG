/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10676
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
    var_19 ^= ((((((/* implicit */_Bool) var_15)) ? (min((var_9), (((/* implicit */long long int) (unsigned short)47219)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-121))))))) != (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_7)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 4; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_20 = (i_0 % 2 == 0) ? (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_9) + (arr_8 [i_3] [i_1] [i_0])))) ? (((/* implicit */int) ((unsigned short) var_13))) : (((((/* implicit */int) (unsigned char)2)) << (((((/* implicit */int) var_18)) - (44)))))))) ? (((((/* implicit */_Bool) min((arr_4 [i_0 - 1]), (arr_1 [i_0 + 2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4139212157849782093ULL))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-92)) : (((/* implicit */int) var_17)))))) : (((/* implicit */int) (!((!(arr_2 [i_0 + 2]))))))))) : (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_9) - (arr_8 [i_3] [i_1] [i_0])))) ? (((/* implicit */int) ((unsigned short) var_13))) : (((((/* implicit */int) (unsigned char)2)) << (((((/* implicit */int) var_18)) - (44)))))))) ? (((((/* implicit */_Bool) min((arr_4 [i_0 - 1]), (arr_1 [i_0 + 2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4139212157849782093ULL))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-92)) : (((/* implicit */int) var_17)))))) : (((/* implicit */int) (!((!(arr_2 [i_0 + 2])))))))));
                                var_21 = ((/* implicit */unsigned int) max((14307531915859769523ULL), (((((/* implicit */_Bool) (unsigned char)199)) ? (4139212157849782093ULL) : (1723513713602742551ULL)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) ((signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)254)) ? (arr_15 [i_0] [i_0] [i_2] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 2])))))))));
                                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */int) (signed char)-33)) : (((/* implicit */int) (signed char)-32))));
                                var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((2421369511U) << (((((/* implicit */int) (signed char)102)) - (78))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
