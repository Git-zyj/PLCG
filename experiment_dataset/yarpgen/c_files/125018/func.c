/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125018
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
    var_12 ^= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((unsigned char) var_6))) ? (2826776104U) : ((~(2826776090U)))))));
    var_13 ^= ((/* implicit */short) (-(((unsigned int) min((((/* implicit */unsigned int) -847572368)), (2660611381U))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((_Bool) min((((/* implicit */unsigned int) (signed char)97)), (min((((/* implicit */unsigned int) arr_2 [0U])), (4201547820U)))))))));
                var_15 = ((/* implicit */int) max((((/* implicit */unsigned int) max((arr_5 [i_0 - 1] [i_0]), (((/* implicit */int) (signed char)22))))), (max((max((((/* implicit */unsigned int) (_Bool)1)), (93419469U))), (((/* implicit */unsigned int) ((unsigned short) arr_3 [i_0])))))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 11; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned char) arr_7 [i_0] [i_2 - 1] [0LL] [0LL])), ((unsigned char)64))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(arr_3 [4]))))))))))));
                                var_17 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 2891030082U)), (arr_9 [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned char)101)))) : (-4187114322706735855LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_10 [i_1] [i_0] [i_2 - 2] [i_4] [i_4] [i_4] [(short)6])))))));
                                var_18 = ((/* implicit */unsigned short) arr_3 [i_0]);
                                var_19 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2] [i_2 - 2]))))), (max((max((4294967295U), (((/* implicit */unsigned int) (unsigned short)50898)))), (((/* implicit */unsigned int) max(((signed char)17), (arr_7 [i_0] [i_1] [i_0] [i_1]))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) min((var_20), ((~(min((((/* implicit */unsigned long long int) min(((unsigned char)246), ((unsigned char)156)))), (max((((/* implicit */unsigned long long int) var_9)), (var_5)))))))));
    /* LoopNest 3 */
    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 4) 
    {
        for (signed char i_6 = 2; i_6 < 15; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_8 = 1; i_8 < 16; i_8 += 3) 
                    {
                        var_21 -= ((/* implicit */long long int) max((((unsigned int) arr_18 [i_8 + 2] [i_6 - 2] [i_7])), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_21 [i_6 + 1] [i_8 + 2] [i_5] [(short)8])))))));
                        arr_25 [i_6] = ((/* implicit */unsigned short) ((_Bool) arr_17 [i_6 + 2] [i_6 + 2]));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (signed char i_9 = 0; i_9 < 18; i_9 += 4) 
                        {
                            var_22 -= ((/* implicit */unsigned long long int) (+(arr_24 [i_6 - 1] [i_6 - 2] [i_9] [i_8 + 2])));
                            arr_28 [i_7] [i_6] [i_9] = ((/* implicit */unsigned short) arr_14 [i_5]);
                        }
                        for (long long int i_10 = 2; i_10 < 14; i_10 += 3) 
                        {
                            arr_32 [i_5] [(unsigned short)1] [i_6] [i_7] [(unsigned short)1] [i_10 - 1] [(_Bool)1] = ((/* implicit */unsigned int) (-((+(((/* implicit */int) (unsigned char)104))))));
                            arr_33 [(unsigned char)10] [i_5] [i_6] [11ULL] [i_8] [i_8] [i_8] = min((((((/* implicit */_Bool) max((2891030082U), (((/* implicit */unsigned int) 1623517487))))) ? (((unsigned int) (unsigned char)100)) : (((/* implicit */unsigned int) max((((/* implicit */int) arr_19 [i_5] [i_5])), (-1357735119)))))), (((/* implicit */unsigned int) ((short) (~(arr_30 [i_5] [i_5] [(unsigned short)12] [i_6] [i_5] [(unsigned char)11]))))));
                            arr_34 [i_8] [i_8] [i_6] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_16 [i_5] [i_5] [i_5])))) ? (((/* implicit */unsigned int) ((int) -8226959884324106061LL))) : (min(((-(2826776090U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_5])) ? (((/* implicit */int) arr_17 [i_7] [i_7])) : (1470710124))))))));
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3344710276U)) ? (((int) 0U)) : (((/* implicit */int) ((short) ((long long int) (_Bool)1))))));
                        }
                        for (signed char i_11 = 0; i_11 < 18; i_11 += 1) 
                        {
                            arr_37 [i_5] [i_6] [i_7] [i_5] = ((/* implicit */signed char) max((((unsigned int) (+(((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) arr_13 [i_5]))));
                            var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_5]))));
                        }
                        /* vectorizable */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_12] [17ULL] [i_7] [i_6 + 1] [i_5]))));
                            var_26 = ((/* implicit */_Bool) (unsigned char)113);
                            var_27 *= ((/* implicit */short) (+(((/* implicit */int) (unsigned char)55))));
                        }
                    }
                    for (int i_13 = 0; i_13 < 18; i_13 += 3) 
                    {
                        var_28 = ((/* implicit */int) ((signed char) (~(arr_23 [i_13]))));
                        arr_42 [i_5] [i_5] [i_5] [(unsigned short)15] [i_7] [i_6] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned char)55)))) ? (min((((unsigned int) 2826776091U)), (max((4201547822U), (82961511U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)210)))));
                        var_29 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (min((((/* implicit */long long int) 93419476U)), (5673794698397605571LL)))));
                    }
                    var_30 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_29 [i_5] [(unsigned char)5] [i_6] [i_7] [i_7])))) ? (((/* implicit */int) arr_16 [i_6] [i_6 + 1] [i_6])) : (((/* implicit */int) arr_35 [i_5]))));
                }
            } 
        } 
    } 
}
