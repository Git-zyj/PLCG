/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127347
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 4; i_1 < 19; i_1 += 3) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 3685493901U))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_14 &= ((/* implicit */unsigned char) arr_3 [i_1] [i_1]);
                                arr_16 [i_0] [i_1 + 3] [i_2] [i_3] [i_4] = var_4;
                                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)60961)), (1796574783U)))), (min((var_11), (((/* implicit */unsigned long long int) arr_4 [i_0] [(unsigned char)19]))))))) ? (((((/* implicit */_Bool) (unsigned char)78)) ? (((var_3) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_12))) : (max((((/* implicit */unsigned long long int) var_6)), (arr_14 [i_0] [i_1] [i_2] [i_3] [i_4]))))) : (((/* implicit */unsigned long long int) arr_15 [i_0] [i_1] [i_2] [5LL] [i_4]))));
                                var_16 -= ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 14994619716159482767ULL)) ? (((/* implicit */int) (unsigned short)4592)) : (((/* implicit */int) var_2))))))) ? (((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_12 [i_4])))) : (var_10))) : (var_10)));
                                var_17 = (signed char)123;
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    for (signed char i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        {
                            arr_22 [i_0] [i_1] [i_5] [i_0] [i_6] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned int) (short)-22831))))) < (var_10))))));
                            var_18 &= ((/* implicit */long long int) min((((/* implicit */int) max((arr_2 [i_0]), (arr_2 [i_6])))), (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0]))))));
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_1)), (var_7)))) ? (((/* implicit */unsigned long long int) max((1391336508), (arr_3 [i_1 - 2] [i_1])))) : (var_11)));
                        }
                    } 
                } 
                arr_23 [i_0] [(signed char)2] [i_1 - 4] = (unsigned char)0;
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) var_3);
}
