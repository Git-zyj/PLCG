/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133616
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
    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) min((((/* implicit */long long int) var_1)), (var_5))))) << (((((max((((/* implicit */long long int) var_8)), (var_7))) / (max((var_5), (((/* implicit */long long int) var_10)))))) + (212811233135065LL))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((signed char) ((arr_0 [i_0]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))));
        var_13 = ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_9)))) > (((unsigned int) (-(((/* implicit */int) arr_3 [i_0] [i_0]))))));
        arr_5 [i_0] = ((/* implicit */short) var_1);
    }
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) /* same iter space */
    {
        arr_8 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)195)), ((unsigned short)47633)))) << (((max((min((var_7), (((/* implicit */long long int) arr_7 [i_1] [i_1])))), (((/* implicit */long long int) max((((/* implicit */unsigned short) var_8)), (arr_3 [i_1] [i_1])))))) - (12665LL)))));
        var_14 += ((/* implicit */unsigned short) min((max((((/* implicit */long long int) arr_6 [i_1])), (((((/* implicit */long long int) var_11)) + (var_4))))), (max((var_4), (((/* implicit */long long int) min((var_11), (((/* implicit */unsigned int) var_8)))))))));
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            for (unsigned short i_3 = 1; i_3 < 14; i_3 += 4) 
            {
                for (signed char i_4 = 1; i_4 < 14; i_4 += 4) 
                {
                    {
                        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) var_4))));
                        var_16 -= ((/* implicit */unsigned char) arr_15 [i_3 - 1] [i_3 + 1] [i_4 - 1]);
                    }
                } 
            } 
        } 
        arr_16 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) ((var_11) & (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
    }
    for (unsigned short i_5 = 0; i_5 < 15; i_5 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_6 = 1; i_6 < 14; i_6 += 4) 
        {
            var_17 += ((/* implicit */short) ((unsigned char) (signed char)96));
            var_18 += ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_5] [i_5])) ? (((/* implicit */unsigned long long int) var_7)) : (max((max((arr_0 [i_6]), (((/* implicit */unsigned long long int) arr_9 [i_6])))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_3)), (3834798072U))))))));
            /* LoopSeq 3 */
            for (unsigned int i_7 = 0; i_7 < 15; i_7 += 4) 
            {
                var_19 = ((/* implicit */signed char) max((var_2), (((/* implicit */short) max((((/* implicit */signed char) ((var_7) > (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_7])))))), (var_9))))));
                var_20 = ((/* implicit */short) 3834798072U);
            }
            for (short i_8 = 0; i_8 < 15; i_8 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (short i_9 = 0; i_9 < 15; i_9 += 4) 
                {
                    arr_32 [i_5] [i_6] [i_9] [i_5] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */int) ((short) 460169224U))) / (((/* implicit */int) var_6))))) ? (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_9] [i_6]))))), (max((var_0), (((/* implicit */unsigned int) (unsigned char)252)))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)245)), (max((var_2), (((/* implicit */short) (_Bool)1)))))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (short i_10 = 0; i_10 < 15; i_10 += 4) 
                    {
                        arr_36 [i_5] [i_6] [i_8] [i_5] [i_10] [i_8] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_17 [i_5] [i_6 + 1]))));
                        arr_37 [i_10] [i_9] [i_5] [i_6] [i_5] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */int) (signed char)-13)) ^ (((/* implicit */int) arr_28 [i_5] [i_5] [i_8] [i_10] [i_10] [i_10])))));
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_2 [i_5] [i_5]))))));
                        arr_38 [i_10] [i_10] [i_9] [i_8] [i_6 + 1] [i_5] [i_5] = ((/* implicit */signed char) ((short) arr_14 [i_6 - 1]));
                        var_22 = ((/* implicit */unsigned char) var_6);
                    }
                    for (long long int i_11 = 1; i_11 < 14; i_11 += 4) 
                    {
                        arr_43 [i_11] [i_11] [i_9] [i_8] [i_8] [i_6] [i_11] = ((/* implicit */unsigned short) min((((/* implicit */short) (unsigned char)4)), ((short)-26117)));
                        var_23 = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_3 [i_5] [i_5])), (var_11)))), (max((arr_13 [i_11] [i_6]), (((/* implicit */unsigned long long int) (short)-22899)))))) ^ (((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((var_8), (var_8)))), (var_7))))));
                        arr_44 [i_5] &= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) ((signed char) (_Bool)1)))))), (min((arr_19 [i_11 - 1] [i_11 + 1] [i_6 - 1]), (((/* implicit */long long int) ((short) var_0)))))));
                        var_24 = ((/* implicit */short) ((_Bool) ((short) max(((unsigned char)247), (((/* implicit */unsigned char) arr_22 [i_5] [i_9] [i_11]))))));
                    }
                    for (short i_12 = 0; i_12 < 15; i_12 += 4) /* same iter space */
                    {
                        var_25 -= ((/* implicit */unsigned char) max((min((((/* implicit */long long int) arr_29 [i_6 - 1] [i_6 + 1] [i_6 + 1])), (max((var_7), (((/* implicit */long long int) var_0)))))), (max((((/* implicit */long long int) ((460169235U) < (var_0)))), (min((((/* implicit */long long int) arr_25 [i_5] [i_5] [i_9])), (var_5)))))));
                        arr_49 [i_5] [i_6] [i_6] [i_5] [i_6] [i_9] [i_9] = ((/* implicit */signed char) min((((((/* implicit */long long int) ((/* implicit */int) var_2))) & (min((7890965326082680818LL), (((/* implicit */long long int) arr_35 [i_12] [i_9] [i_9] [i_8] [i_6 - 1] [i_5])))))), (((/* implicit */long long int) (-(var_0))))));
                        arr_50 [i_5] [i_5] [i_8] [i_9] [i_9] [i_12] = ((/* implicit */_Bool) min((max((((/* implicit */int) ((signed char) var_5))), (((((/* implicit */int) var_6)) - (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) max((((short) arr_29 [i_5] [i_6] [i_8])), (arr_46 [i_5] [i_6 - 1] [i_8] [i_9] [i_12]))))));
                        var_26 = ((/* implicit */signed char) var_4);
                    }
                    for (short i_13 = 0; i_13 < 15; i_13 += 4) /* same iter space */
                    {
                        arr_54 [i_5] [i_5] [i_6] [i_8] [i_9] [i_9] [i_9] = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (short)-30176))));
                        var_27 -= ((/* implicit */signed char) arr_19 [i_6 + 1] [i_6 - 1] [i_8]);
                        arr_55 [i_5] [i_6] [i_8] [i_9] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) | (((((/* implicit */unsigned int) ((/* implicit */int) ((short) 10981864368979863974ULL)))) ^ (23U)))));
                    }
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_14 = 4; i_14 < 12; i_14 += 4) 
                {
                    var_28 = ((/* implicit */short) max((((/* implicit */unsigned int) ((signed char) (+(var_11))))), (((((((/* implicit */unsigned int) ((/* implicit */int) var_10))) * (var_0))) / (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (var_1)))))))));
                    arr_59 [i_5] [i_5] [i_8] [i_14] = ((/* implicit */unsigned char) var_1);
                    var_29 += ((/* implicit */short) min((((/* implicit */long long int) var_0)), (max((((/* implicit */long long int) (-(((/* implicit */int) (signed char)67))))), (min((((/* implicit */long long int) (signed char)104)), (var_5)))))));
                    var_30 -= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) arr_41 [i_5] [i_6] [i_8] [i_6] [i_8]))) & (var_5))), (((((/* implicit */long long int) ((/* implicit */int) var_1))) - (var_7)))))) ? (max((min((var_5), (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) (short)-30291)))) : (max((((var_7) % (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) min((var_10), (((/* implicit */short) var_3)))))))));
                }
                /* LoopSeq 1 */
                for (short i_15 = 4; i_15 < 12; i_15 += 4) 
                {
                    arr_63 [i_6 + 1] [i_15] [i_6 + 1] [i_15] [i_6 + 1] [i_6 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) min((((/* implicit */short) min(((signed char)-104), (var_9)))), (var_10)))) : (((/* implicit */int) max((((/* implicit */signed char) ((_Bool) var_11))), (((signed char) var_2)))))));
                    var_31 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)9)) && (((/* implicit */_Bool) (unsigned char)127))));
                    arr_64 [i_8] [i_6] [i_15] [i_8] [i_15] [i_15] = ((/* implicit */signed char) arr_14 [i_8]);
                }
            }
            /* vectorizable */
            for (short i_16 = 0; i_16 < 15; i_16 += 4) /* same iter space */
            {
                arr_68 [i_5] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) >> (((((((/* implicit */int) var_10)) & (((/* implicit */int) var_9)))) - (33)))));
                var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) var_11))) ? (((var_4) | (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
            }
        }
        var_33 += ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(6092829069806583367LL)))), (max((((/* implicit */unsigned long long int) -7890965326082680792LL)), ((~(arr_53 [i_5])))))));
        var_34 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2))))))));
        arr_69 [i_5] = ((/* implicit */unsigned char) min((((/* implicit */short) max(((unsigned char)254), ((unsigned char)2)))), (((short) max((((/* implicit */unsigned short) var_6)), (var_1))))));
    }
}
