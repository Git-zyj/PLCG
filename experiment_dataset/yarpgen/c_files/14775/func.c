/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14775
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
    var_16 += ((/* implicit */_Bool) var_8);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((-1775939980256322536LL) ^ (-1775939980256322536LL))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_1) : (((/* implicit */unsigned long long int) ((unsigned int) 108442537U)))));
            arr_7 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1775939980256322536LL))));
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                arr_12 [i_0] = ((/* implicit */short) var_5);
                var_19 = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_1]);
            }
            for (int i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                /* LoopSeq 1 */
                for (long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    arr_20 [i_3] [i_0] [i_0] [i_4] = ((/* implicit */_Bool) var_5);
                    /* LoopSeq 2 */
                    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        var_20 += ((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [i_4] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (((unsigned int) (signed char)101)));
                        var_21 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_14)))) ? (((/* implicit */int) arr_17 [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_1 [i_5]))));
                        arr_24 [i_4] [i_4] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_6 [i_0]);
                        var_22 = ((/* implicit */signed char) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0]);
                    }
                    for (unsigned char i_6 = 1; i_6 < 16; i_6 += 4) 
                    {
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [i_0] [i_1] [i_4] [i_4] [i_6 + 1])) ? (((/* implicit */int) arr_23 [i_0] [i_1] [i_4] [i_4] [i_6 + 1])) : (((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0] [i_6 + 1]))));
                        var_24 -= ((/* implicit */long long int) arr_23 [i_6 - 1] [i_6 + 4] [i_6 - 1] [i_6 + 3] [i_6 - 1]);
                    }
                }
                arr_27 [i_0] = ((/* implicit */unsigned char) (signed char)-51);
            }
            var_25 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_17 [i_0] [i_0] [i_1] [i_1])) : (((/* implicit */int) (unsigned short)65535))));
            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (unsigned char)249))));
        }
        for (unsigned long long int i_7 = 2; i_7 < 17; i_7 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_8 = 1; i_8 < 18; i_8 += 3) 
            {
                arr_34 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((arr_13 [i_7 + 2] [i_0]) ? ((~(((/* implicit */int) (unsigned short)33718)))) : (var_9)));
                var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) arr_16 [(unsigned short)16] [i_7] [(unsigned short)16]))));
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                arr_39 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_3 [i_9]);
                var_28 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (5966861610291669514ULL) : (12479882463417882102ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)30982)))));
                arr_40 [(unsigned char)0] |= ((/* implicit */short) ((((/* implicit */int) arr_19 [i_7 + 3] [i_7 + 2] [i_7 + 3] [i_7 - 1])) << (((((/* implicit */int) arr_19 [i_7 + 1] [i_7 + 3] [i_7 + 1] [i_7 + 1])) - (40)))));
            }
            var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) var_11))));
        }
    }
    /* LoopNest 2 */
    for (unsigned char i_10 = 0; i_10 < 23; i_10 += 2) 
    {
        for (int i_11 = 0; i_11 < 23; i_11 += 4) 
        {
            {
                var_30 = ((/* implicit */unsigned char) (((-((+(-1775939980256322536LL))))) <= (((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), (arr_42 [i_10]))))));
                var_31 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0))))) ? ((~(((/* implicit */int) (unsigned char)119)))) : (((/* implicit */int) (unsigned char)255)))) != (((/* implicit */int) ((((/* implicit */int) arr_43 [i_11])) > (((/* implicit */int) arr_43 [i_10])))))));
            }
        } 
    } 
}
