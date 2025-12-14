/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183960
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_13 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned int) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]))), (576320014815068160LL))));
                                var_19 = ((/* implicit */unsigned short) var_15);
                            }
                        } 
                    } 
                    var_20 ^= ((/* implicit */unsigned long long int) ((-576320014815068161LL) != (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) min((576320014815068158LL), (((/* implicit */long long int) var_7))))) ? (max((var_8), (var_4))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_17)), (576320014815068160LL)))))));
    var_22 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_10)) ? (((var_3) ? (((/* implicit */int) var_12)) : (var_18))) : ((-(((/* implicit */int) (unsigned short)56118))))))));
    /* LoopNest 3 */
    for (unsigned short i_5 = 1; i_5 < 17; i_5 += 2) 
    {
        for (long long int i_6 = 0; i_6 < 21; i_6 += 2) 
        {
            for (unsigned long long int i_7 = 1; i_7 < 18; i_7 += 4) 
            {
                {
                    var_23 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) arr_21 [i_5] [i_5 + 3] [i_7 + 2] [i_7 + 2]))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_21 [i_5] [i_5 + 2] [i_7 + 2] [i_5 + 2])))) : (((arr_21 [i_5] [i_5 + 3] [i_7 - 1] [i_7 - 1]) ? (-576320014815068161LL) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_5] [i_5 + 4] [i_7 + 3] [i_5])))))));
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_5])) ? (-576320014815068161LL) : (-576320014815068159LL)));
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 21; i_8 += 1) 
                    {
                        for (unsigned short i_9 = 2; i_9 < 20; i_9 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) -576320014815068170LL))));
                                arr_29 [i_5] [i_7] [i_5] [i_7] [i_5] = ((/* implicit */long long int) arr_25 [i_8] [i_8] [i_7] [i_8] [i_8] [i_8] [i_8]);
                                var_26 = ((/* implicit */long long int) ((((/* implicit */int) (short)-32755)) >= (((/* implicit */int) (short)32761))));
                                var_27 &= ((/* implicit */int) arr_20 [i_5] [i_5] [i_5] [i_9 - 2]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
