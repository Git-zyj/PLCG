/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125717
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
    var_13 -= ((/* implicit */unsigned long long int) var_7);
    var_14 = var_10;
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        var_15 -= ((/* implicit */short) (~(arr_2 [i_0 - 1])));
        arr_4 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) ((2147483647) == (((/* implicit */int) arr_0 [i_0 - 1])))))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(arr_1 [i_0 + 1])));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            /* LoopSeq 2 */
            for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    var_16 += (-((+(((/* implicit */int) (unsigned char)179)))));
                    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(var_2))))));
                }
                var_18 *= ((/* implicit */_Bool) (~(min((((/* implicit */long long int) ((var_5) ? (((/* implicit */int) arr_6 [i_0] [i_2])) : (-1613548611)))), (var_7)))));
                arr_15 [i_0] [i_2] [i_2] = (+(((/* implicit */int) (!(((/* implicit */_Bool) 1613548600))))));
                arr_16 [i_2] = ((/* implicit */_Bool) var_10);
            }
            for (long long int i_4 = 0; i_4 < 13; i_4 += 3) 
            {
                arr_19 [i_1] [i_4] = ((/* implicit */int) (-((+(arr_10 [i_1] [i_1] [i_4] [i_0 - 1])))));
                arr_20 [i_0] [i_1] [i_4] = ((/* implicit */unsigned long long int) arr_18 [i_1]);
                arr_21 [i_0] [i_1] = ((/* implicit */short) var_11);
            }
            /* LoopSeq 1 */
            for (unsigned int i_5 = 0; i_5 < 13; i_5 += 4) 
            {
                var_19 = ((/* implicit */long long int) min(((+(((3378222770U) % (arr_18 [i_0]))))), (((/* implicit */unsigned int) (+((~(-1613548597))))))));
                arr_25 [i_0 - 1] [i_1] [i_1] [i_5] = ((/* implicit */unsigned long long int) (~(arr_10 [i_0] [i_1] [i_5] [i_5])));
                var_20 *= (-((+(((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_0 + 1] [i_1] [i_5] [i_0 + 1])) && (arr_6 [i_0] [i_0])))))));
                arr_26 [i_0] [i_1] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)2077))))) == ((-(arr_2 [i_1])))));
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 13; i_6 += 1) 
                {
                    for (unsigned short i_7 = 0; i_7 < 13; i_7 += 4) 
                    {
                        {
                            arr_33 [i_0 - 1] [i_1] [i_5] [i_6] [i_6] [i_7] = var_8;
                            var_21 &= ((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_6]))));
                            var_22 &= ((/* implicit */int) (short)-21776);
                        }
                    } 
                } 
            }
        }
        arr_34 [i_0 + 1] = (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) != (arr_1 [i_0 - 1]))))) == (((unsigned long long int) var_11))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_8 = 0; i_8 < 22; i_8 += 4) 
    {
        for (long long int i_9 = 4; i_9 < 19; i_9 += 4) 
        {
            {
                var_23 += ((/* implicit */unsigned long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_11))) | (7U)))));
                /* LoopSeq 1 */
                for (int i_10 = 0; i_10 < 22; i_10 += 3) 
                {
                    var_24 = ((/* implicit */long long int) ((short) -7000506459235531638LL));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_11 = 0; i_11 < 22; i_11 += 4) 
                    {
                        arr_43 [i_8] [i_8] [i_8] &= ((/* implicit */int) arr_35 [i_9 - 1] [i_9 - 1]);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 4) 
                        {
                            arr_46 [i_12] [i_11] [i_8] [i_8] [i_8] = ((/* implicit */long long int) var_6);
                            arr_47 [i_8] [i_9] [i_10] [i_10] [i_11] [i_12] = ((/* implicit */short) arr_37 [i_11]);
                        }
                    }
                    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_35 [i_9] [i_9])))) ? (((((/* implicit */_Bool) arr_41 [i_9] [i_9] [17LL])) ? (arr_35 [i_9] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_40 [i_9 + 3] [i_9] [i_9] [i_9]) != (((/* implicit */unsigned long long int) var_6))))))));
                }
            }
        } 
    } 
}
