/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154956
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_11 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1068776500)) ? (-1068776509) : (-1068776502)));
                    arr_12 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_6);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 1; i_3 < 14; i_3 += 2) 
    {
        for (int i_4 = 1; i_4 < 17; i_4 += 2) 
        {
            {
                arr_19 [i_3] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_3 + 3])) && (((/* implicit */_Bool) var_0)))))) * (((((/* implicit */_Bool) (short)28791)) ? (-1836864647178734678LL) : (((/* implicit */long long int) 717330566))))));
                var_11 |= ((/* implicit */unsigned char) max((((((/* implicit */long long int) ((unsigned int) (short)-28813))) + (8992700535374993903LL))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)227)))))));
                /* LoopSeq 4 */
                for (short i_5 = 0; i_5 < 18; i_5 += 4) /* same iter space */
                {
                    var_12 &= ((/* implicit */short) min(((((~(9252330125009100172ULL))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) -1614275518)) : (var_4)))))), ((!(((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (short)-23207))))))));
                    var_13 = ((/* implicit */_Bool) (+(max((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)121)) : (-9)))), (((var_2) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                    var_14 |= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 9252330125009100156ULL)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_2))))), (((/* implicit */long long int) (~(((/* implicit */int) var_3)))))));
                }
                for (short i_6 = 0; i_6 < 18; i_6 += 4) /* same iter space */
                {
                    var_15 -= ((((/* implicit */_Bool) max((((/* implicit */int) var_2)), (((((/* implicit */int) var_3)) - (var_7)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_22 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4]) == (1068776500))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) var_9)) : ((~(var_6))))));
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 18; i_7 += 2) 
                    {
                        for (unsigned int i_8 = 2; i_8 < 15; i_8 += 4) 
                        {
                            {
                                var_16 += ((/* implicit */unsigned int) 9194413948700451442ULL);
                                arr_30 [i_3] [i_6] [i_3] [i_3] [i_6] [12U] [i_8] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_4 - 1] [i_8 + 3])) << (((1068776497) - (1068776492)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)12721)))))) : (((unsigned int) arr_18 [i_4 + 1] [i_8 + 1]))));
                                var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) (short)-1)))));
                                var_18 = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_4)), (((((/* implicit */long long int) max((794458113), (((/* implicit */int) (short)-24))))) | (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (var_5)))))));
                                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (+(-197601376)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 321417881)))) : (var_8)));
                            }
                        } 
                    } 
                    arr_31 [i_3] [12] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (var_5) : (((((/* implicit */long long int) ((/* implicit */int) arr_25 [9LL] [i_4] [i_6] [i_4] [i_4 + 1]))) + (var_5)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) 199439312)) && (var_3))))))) : (((((/* implicit */_Bool) -1)) ? (arr_17 [i_4]) : (((/* implicit */long long int) var_9))))));
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (unsigned int i_10 = 1; i_10 < 17; i_10 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (746826516) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((int) var_5))) : (min((((/* implicit */unsigned int) var_9)), (var_0)))))) ? (((int) ((-8992700535374993926LL) == (((/* implicit */long long int) ((/* implicit */int) var_10)))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)16437))) == (var_8)))))))));
                                var_21 -= ((/* implicit */short) min((((((/* implicit */_Bool) (unsigned char)134)) && (((/* implicit */_Bool) var_1)))), ((!(((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) 4294967295U))))))));
                                var_22 = ((int) 2343922785U);
                                var_23 = ((/* implicit */int) max((((((/* implicit */unsigned int) ((/* implicit */int) ((short) -1815104568)))) * ((-(var_4))))), (((/* implicit */unsigned int) ((unsigned char) ((arr_27 [i_3] [0] [i_6] [i_9] [13] [i_10 - 1] [i_10]) ? (arr_34 [(unsigned char)12] [i_3] [i_4] [i_4] [i_9] [i_9] [i_10 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((((((/* implicit */_Bool) 44843269)) ? (((/* implicit */int) ((short) -1))) : (((int) var_2)))) + (2147483647))) << (((((((/* implicit */_Bool) ((arr_25 [i_3] [i_3] [i_4 - 1] [i_6] [i_6]) ? (var_5) : (((/* implicit */long long int) 1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_34 [8U] [i_3] [i_4 - 1] [i_6] [i_6] [i_3] [6U])))) : (var_5))) - (145LL))))))));
                }
                for (int i_11 = 1; i_11 < 17; i_11 += 4) 
                {
                    arr_38 [i_3] [i_4] [(unsigned char)10] [i_11] = ((/* implicit */unsigned char) ((unsigned long long int) (+(arr_37 [i_3 + 4] [i_4 - 1] [i_4 - 1]))));
                    arr_39 [i_4] [i_4] = ((/* implicit */short) ((((((/* implicit */long long int) ((int) arr_14 [i_3] [i_11 - 1]))) - (((((/* implicit */_Bool) var_8)) ? (-9223372036854775794LL) : (((/* implicit */long long int) var_8)))))) / ((+(1540086012387825153LL)))));
                }
                for (int i_12 = 1; i_12 < 17; i_12 += 2) 
                {
                    var_25 ^= ((/* implicit */long long int) (-(max((1939853518U), (((/* implicit */unsigned int) var_2))))));
                    var_26 = ((/* implicit */int) max((((/* implicit */long long int) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-23514)) : (((/* implicit */int) var_3)))), (var_7)))), ((((+(-8992700535374993925LL))) - (-9223372036854775794LL)))));
                }
                /* LoopNest 2 */
                for (unsigned char i_13 = 0; i_13 < 18; i_13 += 3) 
                {
                    for (int i_14 = 0; i_14 < 18; i_14 += 2) 
                    {
                        {
                            arr_48 [i_3] [i_4] = ((/* implicit */int) ((((/* implicit */long long int) var_9)) % (((long long int) var_4))));
                            arr_49 [i_13] [i_4] [(_Bool)1] [i_4] = ((unsigned long long int) min((arr_34 [i_3] [i_3] [9U] [i_4] [i_3] [i_3 + 3] [i_4 + 1]), (arr_34 [i_3] [i_3] [i_3] [i_4] [(unsigned char)14] [i_3 + 2] [i_4 + 1])));
                        }
                    } 
                } 
                var_27 = ((/* implicit */unsigned long long int) max((var_27), (((((/* implicit */_Bool) (unsigned char)43)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (-9223372036854775807LL - 1LL))))) : (min((((/* implicit */unsigned long long int) 3549163420U)), (8618469427889863576ULL)))))));
            }
        } 
    } 
    var_28 = ((/* implicit */int) ((((((/* implicit */_Bool) -8992700535374993903LL)) ? (((/* implicit */int) (short)-5967)) : (((/* implicit */int) (short)-13169)))) < (((/* implicit */int) var_2))));
    var_29 -= ((/* implicit */unsigned int) var_10);
}
