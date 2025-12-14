/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179557
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
    var_14 = ((/* implicit */long long int) min((var_14), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)28414)) / (var_9)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_0)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (-1488089743312499478LL) : (((/* implicit */long long int) var_9))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)23395))))) : (((((/* implicit */_Bool) var_11)) ? (-1488089743312499471LL) : (((/* implicit */long long int) 848239115))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    var_15 = (short)-23395;
                    var_16 ^= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */unsigned int) min((arr_4 [i_1]), (((/* implicit */int) (short)28438))))) : ((~(var_6)))))));
                }
                /* vectorizable */
                for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_17 -= ((/* implicit */unsigned short) ((short) arr_13 [i_0] [i_3] [i_4] [(short)18]));
                                var_18 = ((/* implicit */short) (+(((/* implicit */int) arr_0 [i_0]))));
                                var_19 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 227015106642109297LL)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) - ((-(var_2)))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1])) ? (arr_9 [i_0] [(unsigned char)12]) : (arr_9 [i_1] [i_0])));
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_3] [i_1] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) 10ULL)) ? (-1488089743312499473LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))))));
                    var_22 = ((/* implicit */unsigned int) (unsigned char)1);
                }
                var_23 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((~(var_12))), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_7)), (var_6))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_3 [i_0] [i_1])))) : (min((-1488089743312499462LL), (((/* implicit */long long int) var_0))))));
                var_24 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_12)) & (arr_11 [i_0])))) ? (min((((/* implicit */unsigned long long int) var_10)), (arr_11 [i_0]))) : (arr_11 [i_1]));
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_6 = 2; i_6 < 19; i_6 += 3) 
                {
                    /* LoopSeq 2 */
                    for (short i_7 = 0; i_7 < 20; i_7 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned char) ((unsigned short) 17159326694060344017ULL));
                        var_26 &= ((/* implicit */unsigned short) ((int) var_4));
                    }
                    for (unsigned long long int i_8 = 2; i_8 < 18; i_8 += 4) 
                    {
                        arr_26 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */int) ((signed char) (~(var_9))));
                        /* LoopSeq 1 */
                        for (short i_9 = 0; i_9 < 20; i_9 += 4) 
                        {
                            var_27 = ((/* implicit */signed char) var_0);
                            var_28 = ((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_6 - 1] [i_8 - 1] [i_1])) - (((/* implicit */int) arr_12 [i_6 - 1] [i_8 - 1] [i_8 - 1]))));
                            var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) (-(((/* implicit */int) var_7)))))));
                        }
                        var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_6] [i_1]))) * (var_6))) < (((/* implicit */unsigned int) ((/* implicit */int) ((arr_21 [i_0]) < (((/* implicit */long long int) ((/* implicit */int) var_8))))))))))));
                        var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((_Bool) var_0)))));
                        arr_29 [i_0] [i_0] [i_0] [i_6] [i_8 + 1] &= ((/* implicit */unsigned int) -1237941422);
                    }
                    var_32 = ((/* implicit */short) var_13);
                    /* LoopSeq 1 */
                    for (unsigned char i_10 = 0; i_10 < 20; i_10 += 1) 
                    {
                        arr_33 [13] [i_1] [i_1] [i_10] [i_0] = ((/* implicit */int) arr_7 [i_0] [i_6] [i_6 + 1] [i_10]);
                        var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0])) ? (((long long int) 2695084782564952410ULL)) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_6 - 1] [i_6] [i_6] [i_10]))))))));
                        var_34 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_6 + 1] [i_6]))) * (arr_30 [i_0] [i_1] [i_0] [i_10])));
                    }
                }
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) min(((+(arr_8 [i_0] [i_1] [i_11 - 1] [i_11 - 1]))), (((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) var_13)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0] [i_11]))))))))))));
                    arr_36 [i_1] = ((/* implicit */signed char) max((min((min((var_11), (((/* implicit */unsigned long long int) arr_18 [i_1] [i_1] [i_1] [i_11])))), (12920982128315929279ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_1] [i_11 - 1] [i_11] [i_1] [i_11 - 1])) >> (((arr_21 [i_1]) + (25654781393940228LL))))))));
                    /* LoopNest 2 */
                    for (short i_12 = 0; i_12 < 20; i_12 += 4) 
                    {
                        for (int i_13 = 0; i_13 < 20; i_13 += 3) 
                        {
                            {
                                var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)21)) && (((/* implicit */_Bool) 6ULL))))), (max((arr_30 [i_13] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) ((var_5) >= (((/* implicit */unsigned long long int) 1488089743312499477LL))))))))))));
                                arr_43 [i_0] [i_1] [i_11] [i_12] [i_13] = ((/* implicit */unsigned char) arr_20 [i_1] [i_11] [i_1] [i_1]);
                                var_37 = ((((/* implicit */_Bool) 22U)) ? (var_13) : (min((var_13), (((/* implicit */int) arr_19 [i_1] [i_11 - 1] [i_11 - 1])))));
                                var_38 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_40 [i_1])), (max((((/* implicit */long long int) (_Bool)1)), (-2250490447054675054LL)))))) ? (min((arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1]), (((/* implicit */unsigned long long int) ((long long int) var_4))))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_8)), (var_2))))));
                            }
                        } 
                    } 
                    var_39 = ((/* implicit */unsigned short) ((unsigned int) ((12920982128315929282ULL) >> (((((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_1] [i_11] [i_0] [(short)0])) - (4095))))));
                }
            }
        } 
    } 
    var_40 |= ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) -438966913826719894LL)) ? (var_6) : (4223671949U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) 7734908013253505083ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (5525761945393622338ULL))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_9)), (max((var_4), (var_0))))))));
}
