/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155215
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
    var_13 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((2047LL), (2048LL))))));
    var_14 = ((/* implicit */int) var_6);
    var_15 *= ((/* implicit */unsigned char) ((var_7) & (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) var_10)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_11 [i_0] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_2])) * (((/* implicit */int) (_Bool)0))))) | (((((/* implicit */_Bool) (short)-21632)) ? (arr_5 [4ULL] [4ULL] [8ULL] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32767)))))));
                                var_16 = ((unsigned int) 1152921504606846975ULL);
                                var_17 ^= ((/* implicit */unsigned int) arr_4 [i_0] [(unsigned char)4] [i_0]);
                                arr_12 [i_0] [11U] [i_2] [i_3] [i_3] [6LL] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_2] [i_0])))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) arr_2 [i_0] [5U]))));
                    var_19 *= ((/* implicit */unsigned char) arr_8 [i_0] [i_2] [i_1]);
                }
                for (short i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    var_20 += ((/* implicit */short) (+(((((/* implicit */_Bool) (signed char)-91)) ? (((/* implicit */long long int) 956972244U)) : (-8053881327624581786LL)))));
                    var_21 *= ((/* implicit */short) max((((/* implicit */long long int) arr_2 [i_0] [i_5])), (8053881327624581798LL)));
                }
                var_22 ^= ((/* implicit */short) min((((/* implicit */long long int) max((arr_3 [(short)2]), (((short) arr_1 [i_0]))))), (((((-2047LL) * (((/* implicit */long long int) arr_5 [i_0] [i_0] [i_1] [7ULL])))) / (((/* implicit */long long int) (+(3698789712U))))))));
                var_23 *= ((/* implicit */unsigned int) arr_1 [i_0]);
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) (-(var_9)));
}
