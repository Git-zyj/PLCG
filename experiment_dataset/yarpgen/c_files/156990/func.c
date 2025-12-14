/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156990
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
    var_10 = ((/* implicit */signed char) var_9);
    var_11 &= ((/* implicit */unsigned int) var_6);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_12 = ((/* implicit */long long int) (~(min((var_8), (((var_8) % (((/* implicit */unsigned int) ((/* implicit */int) (short)-22844)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */long long int) max((((/* implicit */unsigned int) var_1)), ((~(arr_1 [i_0] [i_0])))))), ((-(max((((/* implicit */long long int) (short)-30888)), (arr_0 [(short)8])))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */signed char) (short)-22862);
                    var_14 &= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((int) arr_7 [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) var_3)) ? (2298204226U) : (var_0))))), (1996763070U)));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 12; i_3 += 3) 
    {
        for (long long int i_4 = 2; i_4 < 15; i_4 += 1) 
        {
            {
                arr_15 [i_3] [i_3] &= ((/* implicit */short) arr_11 [(unsigned char)15]);
                /* LoopNest 2 */
                for (short i_5 = 1; i_5 < 14; i_5 += 4) 
                {
                    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 3) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (unsigned int i_7 = 1; i_7 < 15; i_7 += 4) 
                            {
                                var_15 |= ((/* implicit */unsigned int) min((((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))), (((long long int) (~(var_6))))));
                                var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_4), (((/* implicit */short) var_7))))) ? (((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */long long int) 1996763057U)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_12 [i_3] [i_4])))))))) ? (((/* implicit */int) var_7)) : (((((((/* implicit */_Bool) arr_21 [13LL] [i_3 + 2] [i_4 - 1] [i_5 - 1] [i_5] [i_6] [i_7])) ? (((/* implicit */int) (short)31055)) : (((/* implicit */int) (short)-10858)))) + (((/* implicit */int) var_2)))));
                            }
                            for (unsigned int i_8 = 2; i_8 < 15; i_8 += 1) /* same iter space */
                            {
                                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((unsigned short) var_3)))));
                                var_18 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) 4110940433U)), (((((/* implicit */_Bool) 1036213256U)) ? (((((/* implicit */_Bool) 2298204251U)) ? (((/* implicit */long long int) var_0)) : (var_6))) : (((/* implicit */long long int) min((3125623477U), (var_8))))))));
                                var_19 *= ((/* implicit */short) (+(((/* implicit */int) var_5))));
                                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) var_3))));
                                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) var_0))));
                            }
                            for (unsigned int i_9 = 2; i_9 < 15; i_9 += 1) /* same iter space */
                            {
                                arr_27 [i_3] [i_3] [i_6] [i_6] [i_9 + 1] [i_3] = ((/* implicit */int) max((((unsigned short) ((((/* implicit */_Bool) arr_19 [i_3 - 1] [i_4] [i_6] [i_9])) || (((/* implicit */_Bool) var_7))))), (((/* implicit */unsigned short) (short)30917))));
                                arr_28 [i_3] [i_4] [i_6] [i_6] [i_9] = ((/* implicit */unsigned char) arr_18 [12U]);
                            }
                            /* vectorizable */
                            for (unsigned int i_10 = 2; i_10 < 15; i_10 += 1) /* same iter space */
                            {
                                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_26 [i_3] [(unsigned char)7] [i_6] [i_6] [i_3] [i_4]))))) : (((((/* implicit */_Bool) var_3)) ? (var_3) : (3615131720U)))));
                                arr_33 [i_6] [i_6] [i_10 + 1] = ((/* implicit */unsigned int) ((unsigned long long int) (-(((/* implicit */int) var_5)))));
                                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : ((+(((/* implicit */int) arr_9 [i_3] [i_3]))))));
                                var_24 += ((/* implicit */unsigned char) arr_18 [i_3]);
                            }
                            var_25 += ((/* implicit */unsigned int) max((((/* implicit */long long int) ((short) ((((/* implicit */int) (unsigned char)220)) & (((/* implicit */int) var_4)))))), (arr_20 [(unsigned char)2] [i_3] [i_4])));
                        }
                    } 
                } 
                arr_34 [i_3] [i_4] [i_3] = ((/* implicit */unsigned char) ((long long int) 1610368453U));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned int) var_5);
}
