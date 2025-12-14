/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130132
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
    for (int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_10 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */short) var_10);
                            var_12 = ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) var_8))))) != (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)57827))))))));
                            arr_11 [i_0] [i_1] [i_2] [i_1] [i_1] [i_3] = ((/* implicit */int) (~((((!(((/* implicit */_Bool) arr_2 [i_2] [i_1] [i_2])))) ? (arr_5 [2] [i_0 - 2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)57827))))))))));
                            arr_12 [i_0] [i_0] [i_2] [i_0] [i_1] = ((/* implicit */unsigned char) ((_Bool) ((unsigned int) arr_1 [i_3])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    for (long long int i_5 = 4; i_5 < 14; i_5 += 4) 
                    {
                        {
                            arr_18 [i_1] [i_4 + 1] [i_4] [i_4] = ((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_15 [i_4] [i_5 - 4])), (arr_17 [i_1])));
                            var_13 = ((/* implicit */short) var_7);
                            arr_19 [i_1] = ((/* implicit */unsigned int) var_4);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_6 = 0; i_6 < 19; i_6 += 2) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 19; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 1; i_9 < 18; i_9 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (arr_20 [i_6] [i_7])))) ? (((/* implicit */int) ((arr_28 [i_9]) && (((/* implicit */_Bool) 4493799857063804935LL))))) : (((/* implicit */int) arr_25 [i_7] [i_9 - 1] [i_9 - 1] [i_9])))));
                            var_15 = ((/* implicit */signed char) (((((-(0ULL))) >> ((((-(arr_21 [i_7]))) - (2948010966U))))) << (((int) arr_27 [i_9 - 1] [6LL] [i_9 + 1] [i_9 - 1]))));
                            arr_29 [i_6] [i_9] [i_6] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_6])) * (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_9 - 1]))) : (738228330U)))) ? (-1923693002518959269LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                            var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)102))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_10 = 1; i_10 < 17; i_10 += 1) 
                {
                    for (int i_11 = 0; i_11 < 19; i_11 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */_Bool) arr_32 [(_Bool)1] [(_Bool)1] [i_10 + 1]);
                            arr_36 [i_7] [i_7] [i_10] [i_11] |= ((/* implicit */long long int) ((((/* implicit */_Bool) 4493799857063804935LL)) ? ((~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_28 [i_10 - 1]))) >= (var_2)))))) : (((/* implicit */int) (signed char)-123))));
                            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) var_2))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_12 = 1; i_12 < 13; i_12 += 4) 
    {
        for (int i_13 = 0; i_13 < 17; i_13 += 4) 
        {
            for (int i_14 = 1; i_14 < 16; i_14 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_15 = 1; i_15 < 14; i_15 += 4) 
                    {
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            {
                                arr_50 [i_12 + 1] [i_12 + 2] [i_12 + 3] [i_12 + 2] [i_14] [i_12 + 2] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((var_7) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))) ? ((+(((/* implicit */int) arr_25 [i_12] [i_13] [12ULL] [(_Bool)1])))) : (((/* implicit */int) (((!(((/* implicit */_Bool) var_2)))) || ((!(((/* implicit */_Bool) arr_30 [i_12] [(short)14] [i_15] [i_15])))))))));
                                arr_51 [(unsigned short)15] [i_13] = ((/* implicit */unsigned int) ((signed char) (!(((/* implicit */_Bool) arr_49 [i_13] [i_13] [i_14 - 1] [i_13] [(_Bool)1])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_17 = 0; i_17 < 17; i_17 += 4) 
                    {
                        for (long long int i_18 = 0; i_18 < 17; i_18 += 1) 
                        {
                            {
                                arr_56 [i_12] [i_18] [i_14 - 1] [i_14 + 1] [i_13] = ((/* implicit */int) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((var_10) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)22725))))) : (arr_20 [i_12 + 1] [i_12 + 1]))), (var_2)));
                                arr_57 [i_17] [i_18] [i_17] = ((/* implicit */long long int) ((((/* implicit */int) var_10)) >> ((-(((/* implicit */int) arr_24 [i_13] [i_13] [i_13]))))));
                                arr_58 [14U] [i_13] [i_18] [i_17] [i_18] [i_17] [i_14 - 1] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_22 [i_14 + 1])) : (((/* implicit */int) arr_22 [i_14 + 1]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_19 = 0; i_19 < 17; i_19 += 1) 
                    {
                        for (short i_20 = 0; i_20 < 17; i_20 += 4) 
                        {
                            {
                                arr_64 [i_19] [i_13] [i_14] [i_13] [i_20] [i_13] = ((/* implicit */_Bool) ((unsigned short) arr_61 [i_20] [i_19] [i_14] [(unsigned short)5] [i_12] [i_12]));
                                arr_65 [i_19] = ((/* implicit */short) (!(((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned char) arr_24 [i_13] [i_14 + 1] [i_19])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_21 = 0; i_21 < 10; i_21 += 3) 
    {
        for (long long int i_22 = 1; i_22 < 6; i_22 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_23 = 3; i_23 < 9; i_23 += 2) 
                {
                    for (short i_24 = 3; i_24 < 6; i_24 += 3) 
                    {
                        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                        {
                            {
                                arr_79 [i_25] [i_22] [i_24] [(unsigned short)7] [i_22] [i_21] = ((/* implicit */unsigned short) var_4);
                                var_19 = ((/* implicit */long long int) (_Bool)1);
                                var_20 = ((/* implicit */short) (~(((((int) var_10)) << (((((int) (signed char)-29)) + (47)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_26 = 1; i_26 < 1; i_26 += 1) 
                {
                    for (unsigned int i_27 = 2; i_27 < 9; i_27 += 4) 
                    {
                        {
                            var_21 *= ((/* implicit */unsigned long long int) 1742249051U);
                            arr_88 [i_21] [i_21] [i_27] [i_21] &= (+(((((/* implicit */_Bool) 5779930240263564681LL)) ? (arr_31 [i_22 + 1] [i_26] [i_26 - 1]) : (((/* implicit */long long int) var_11)))));
                            var_22 = ((((/* implicit */_Bool) min((var_1), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_37 [i_22])) : (((/* implicit */int) arr_32 [5] [5] [i_27])))))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) arr_17 [i_22])), (((((/* implicit */_Bool) arr_53 [i_21] [i_26] [i_27 + 1])) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_9))))))) : (((unsigned int) ((var_10) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
                            var_23 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned int) var_6)) > (arr_84 [i_21] [i_22 + 2] [i_27 + 1] [i_27] [i_22 + 2]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
