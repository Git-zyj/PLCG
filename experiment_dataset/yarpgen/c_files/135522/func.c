/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135522
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
    var_14 = min((var_11), (var_1));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? ((-(2147483647))) : (((/* implicit */int) var_7))));
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                /* LoopSeq 3 */
                for (int i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    var_16 = ((/* implicit */unsigned char) ((var_6) ? (((/* implicit */int) arr_1 [i_1] [i_3])) : ((+(((/* implicit */int) (signed char)27))))));
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_1 - 2] [i_3])) || (((4670952601728094230LL) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)-26)))))));
                    var_18 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) -1476394005)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_13)))) <= (((((((/* implicit */int) (short)-32757)) + (2147483647))) >> (((4294967275U) - (4294967264U)))))));
                }
                for (int i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((arr_4 [i_1 - 1]) ^ (((((/* implicit */int) arr_10 [i_1 - 3])) & (arr_4 [i_0]))))))));
                    /* LoopSeq 1 */
                    for (short i_5 = 1; i_5 < 14; i_5 += 2) 
                    {
                        var_20 = ((/* implicit */short) arr_9 [i_0] [i_0] [i_0] [i_0]);
                        arr_15 [i_0] [i_1] [i_1] [i_4] [i_5] [i_5] [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_1 - 2] [i_5 - 1]);
                        arr_16 [i_5] [i_5] [i_5] [i_2] [i_5] [i_0] [i_0] = arr_11 [i_5] [i_4] [i_2] [i_1];
                    }
                    arr_17 [i_2] = ((((/* implicit */_Bool) arr_12 [i_1] [i_1 - 2] [i_1 - 2] [i_4] [i_1 + 1])) && (((/* implicit */_Bool) arr_1 [i_1 + 1] [i_1 + 1])));
                    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) 1476394017))));
                }
                for (short i_6 = 0; i_6 < 15; i_6 += 3) 
                {
                    var_22 |= ((unsigned long long int) ((((/* implicit */_Bool) 1476394024)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5))));
                    arr_22 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)37)) * (((/* implicit */int) (short)15944))));
                    arr_23 [i_6] [i_2] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) arr_19 [i_1] [i_0]);
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-28))) != (arr_8 [i_0] [i_1] [i_2] [i_6] [i_2])))) != ((~(-2014789718)))));
                    var_24 = ((/* implicit */unsigned short) -603825254);
                }
                var_25 &= ((/* implicit */_Bool) (unsigned char)64);
                var_26 = ((/* implicit */unsigned long long int) min((var_26), (var_3)));
            }
        }
        arr_24 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])) | (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))));
        var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
    }
    for (long long int i_7 = 1; i_7 < 10; i_7 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_8 = 0; i_8 < 11; i_8 += 4) 
        {
            /* LoopSeq 2 */
            for (short i_9 = 2; i_9 < 9; i_9 += 4) 
            {
                arr_33 [i_9] [i_8] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2290479145038690311LL)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) -560640362)) != (2932753956335310396ULL)))) : (((/* implicit */int) ((unsigned short) 8712068467271462419LL)))));
                var_28 = ((/* implicit */long long int) var_1);
            }
            /* vectorizable */
            for (unsigned long long int i_10 = 2; i_10 < 10; i_10 += 3) 
            {
                arr_36 [i_7] [i_7 + 1] = ((/* implicit */unsigned int) (~(var_2)));
                var_29 = ((/* implicit */unsigned char) ((var_2) != (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                var_30 = ((/* implicit */long long int) ((((/* implicit */int) (short)0)) ^ (((/* implicit */int) (signed char)123))));
                var_31 = ((/* implicit */int) ((unsigned int) (~(-4544819333252596821LL))));
            }
            var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) ((signed char) (short)-15942)))));
        }
        arr_37 [i_7 + 1] [i_7] = ((/* implicit */unsigned long long int) min((arr_13 [i_7] [i_7] [i_7] [i_7 - 1] [i_7] [i_7 - 1]), (var_11)));
        arr_38 [i_7] = ((/* implicit */short) min((((/* implicit */long long int) arr_0 [i_7] [i_7])), (((((/* implicit */_Bool) arr_26 [i_7 + 1])) ? (-4670952601728094223LL) : (arr_26 [i_7 + 1])))));
    }
}
