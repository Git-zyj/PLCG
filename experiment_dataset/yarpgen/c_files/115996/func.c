/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115996
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
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_18 ^= min((((/* implicit */long long int) min((((/* implicit */unsigned short) arr_9 [i_0 - 1] [i_0] [i_0] [i_0 - 1])), ((unsigned short)11898)))), (((((/* implicit */_Bool) (short)1130)) ? (-1506778806418272563LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                                var_19 += ((/* implicit */unsigned int) min((max((((((/* implicit */int) var_5)) * (((/* implicit */int) (unsigned short)21934)))), (((/* implicit */int) var_13)))), ((~(((/* implicit */int) max((((/* implicit */short) var_11)), (var_13))))))));
                                var_20 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-7))))) - (((unsigned long long int) var_7))));
                                var_21 += ((/* implicit */short) 1195943934);
                                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : ((-(18014398509481983ULL)))));
                            }
                        } 
                    } 
                } 
                var_23 |= ((/* implicit */short) ((((/* implicit */_Bool) (-((~(var_10)))))) ? (((((arr_4 [i_0 - 1]) + (9223372036854775807LL))) << (((((/* implicit */int) var_9)) + (4))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_3 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((unsigned int) var_0)))))));
                /* LoopNest 3 */
                for (unsigned char i_5 = 1; i_5 < 14; i_5 += 1) 
                {
                    for (int i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 2; i_7 < 13; i_7 += 3) 
                        {
                            {
                                var_24 += ((/* implicit */unsigned char) max((((arr_10 [i_5] [(short)0] [i_5 - 1]) | (var_12))), (((/* implicit */long long int) var_6))));
                                var_25 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_12)) ? (1307210458669266365ULL) : (((/* implicit */unsigned long long int) arr_3 [i_7 + 2])))) - (((/* implicit */unsigned long long int) ((var_7) & (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
                                var_26 *= ((/* implicit */unsigned int) var_1);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_27 += ((/* implicit */unsigned int) var_0);
    /* LoopNest 2 */
    for (unsigned int i_8 = 0; i_8 < 15; i_8 += 1) 
    {
        for (short i_9 = 2; i_9 < 14; i_9 += 1) 
        {
            {
                var_28 += ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (arr_24 [(signed char)14] [(signed char)14])));
                arr_25 [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)43596)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_19 [i_9] [9LL] [i_9 - 1] [i_9 + 1] [11U] [i_9 - 2] [(unsigned char)0])))) ? ((~(((/* implicit */int) arr_9 [i_8] [i_9] [i_9 + 1] [7])))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_22 [i_9 + 1])), (arr_20 [i_9 - 1] [i_9 + 1] [i_9 - 2] [i_9 - 2] [i_9 + 1] [9] [i_9]))))));
                var_29 &= ((/* implicit */signed char) ((-5531128742245217041LL) <= (var_17)));
            }
        } 
    } 
    var_30 = ((/* implicit */int) var_1);
}
