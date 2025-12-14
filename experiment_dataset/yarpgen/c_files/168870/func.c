/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168870
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
    var_17 = ((/* implicit */unsigned char) ((short) var_6));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) (-(750116471U))))));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) var_9))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 - 1] [(short)9])) || (((/* implicit */_Bool) 3571022434U))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 + 1] [i_1])))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (+(((var_3) / (-742745029)))))) / (min((((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned int) var_0)))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_13)))))))));
    var_20 = (+(((int) min((var_1), (var_8)))));
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (int i_4 = 0; i_4 < 14; i_4 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 1; i_5 < 11; i_5 += 3) 
                    {
                        for (int i_6 = 2; i_6 < 11; i_6 += 2) 
                        {
                            {
                                var_21 |= ((/* implicit */unsigned int) (unsigned char)4);
                                arr_20 [i_5] [i_5] = (unsigned char)147;
                            }
                        } 
                    } 
                    var_22 *= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_18 [i_2])) ? (var_4) : (((/* implicit */int) arr_13 [i_2] [(short)2] [7U]))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 0; i_7 < 14; i_7 += 2) 
                    {
                        arr_25 [i_2] [i_3] [(unsigned char)7] [i_3] [i_2] [i_3] = ((/* implicit */short) ((var_14) & (((/* implicit */int) max((arr_9 [i_2] [i_3] [i_4]), (arr_9 [i_2] [i_3] [i_4]))))));
                        var_23 = ((/* implicit */int) ((unsigned char) min((((/* implicit */int) var_13)), (var_14))));
                    }
                    for (int i_8 = 0; i_8 < 14; i_8 += 2) 
                    {
                        arr_29 [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_15 [i_2] [i_3] [i_4] [i_8])) << (((((/* implicit */int) arr_15 [i_2] [i_3] [i_4] [i_8])) - (13290))))) > (((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)0))))) >= (arr_14 [i_8] [i_3] [i_3] [2U] [2U]))))));
                        /* LoopSeq 1 */
                        for (int i_9 = 0; i_9 < 14; i_9 += 4) 
                        {
                            arr_34 [i_2] [i_2] = ((/* implicit */unsigned int) max((var_0), ((+(((((/* implicit */_Bool) (short)-19508)) ? (((/* implicit */int) (unsigned char)170)) : (((/* implicit */int) (unsigned char)251))))))));
                            var_24 = ((/* implicit */unsigned int) min((min((-716769344), (((/* implicit */int) arr_7 [i_2] [i_9])))), (var_8)));
                            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) arr_21 [(short)9] [i_3] [i_3] [2U]))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 0; i_10 < 14; i_10 += 3) 
                    {
                        for (int i_11 = 0; i_11 < 14; i_11 += 1) 
                        {
                            {
                                arr_40 [13U] [i_3] [8] [8] [(unsigned char)6] = ((/* implicit */unsigned int) (+((((((~(var_3))) + (2147483647))) << (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_21 [i_2] [(unsigned char)13] [i_4] [i_10])))))))));
                                arr_41 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((min((arr_27 [i_3] [i_10] [i_11]), (((((/* implicit */int) arr_38 [i_2] [i_2])) << (((/* implicit */int) (unsigned char)4)))))) & (((/* implicit */int) var_16))));
                                arr_42 [i_11] [i_10] [i_2] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)121))) ^ (((((/* implicit */_Bool) (unsigned char)27)) ? (arr_23 [(short)2]) : (arr_23 [i_2]))))) <= (((/* implicit */unsigned int) var_10))));
                                arr_43 [i_11] [(short)7] [i_4] [i_2] [i_2] = var_10;
                            }
                        } 
                    } 
                }
                for (int i_12 = 0; i_12 < 14; i_12 += 4) 
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 14; i_13 += 2) 
                    {
                        for (int i_14 = 0; i_14 < 14; i_14 += 1) 
                        {
                            {
                                var_26 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-2418)) : (((/* implicit */int) arr_18 [i_2])))) ^ (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_38 [(short)9] [i_14]))) > (1703461956U)))))))));
                                var_27 ^= ((/* implicit */int) (+(max((((/* implicit */unsigned int) (~(((/* implicit */int) var_15))))), (((((/* implicit */_Bool) arr_30 [i_2] [11] [i_12] [4U])) ? (var_11) : (var_11)))))));
                            }
                        } 
                    } 
                    arr_51 [(short)2] [i_3] = ((/* implicit */unsigned char) ((((int) arr_22 [i_2] [i_3] [i_12] [i_12])) * (((((/* implicit */_Bool) arr_22 [8U] [i_3] [i_3] [i_2])) ? (((/* implicit */int) arr_22 [i_2] [i_2] [i_3] [i_12])) : (var_0)))));
                }
                arr_52 [i_2] = ((var_0) - (((/* implicit */int) ((short) (unsigned char)209))));
            }
        } 
    } 
}
