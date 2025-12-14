/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14874
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)169))) * (max((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)127))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) 1230486536)) : (var_5)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_4 [i_0] = (+(((((/* implicit */_Bool) (-(1230486536)))) ? (((/* implicit */int) ((1230486534) >= (-1230486523)))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-13486)) && (((/* implicit */_Bool) 3934365991U))))))));
        var_13 = ((/* implicit */_Bool) ((-1741493203) / ((-((+(((/* implicit */int) var_3))))))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_1 = 3; i_1 < 18; i_1 += 2) 
    {
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) var_10))) ? (var_6) : (arr_6 [i_1 + 1])));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 18; i_4 += 4) 
                    {
                        for (int i_5 = 0; i_5 < 19; i_5 += 4) 
                        {
                            {
                                arr_16 [7] [i_1] [i_4] [7] [7] [i_1] = ((/* implicit */unsigned long long int) 0);
                                var_15 = ((/* implicit */unsigned int) var_3);
                                arr_17 [i_1] [i_4] [i_4] [i_4] [i_1 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_1 - 1])) ? (1230486522) : (((/* implicit */int) var_3))));
                                var_16 *= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_13 [i_5] [17ULL] [i_2] [i_2] [i_1])) ? (var_6) : (var_6)))));
                                arr_18 [i_1 - 2] [i_2] [i_3] [i_4] [(unsigned short)13] = ((/* implicit */_Bool) ((unsigned char) arr_13 [i_4 - 1] [i_2] [i_3] [i_3] [i_1 + 1]));
                            }
                        } 
                    } 
                    var_17 *= ((/* implicit */signed char) ((((1230486523) % (((/* implicit */int) arr_12 [i_2] [i_2])))) << (((((/* implicit */int) var_3)) - (23666)))));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned int) ((arr_3 [i_1 - 1] [i_1]) < (arr_3 [i_1 - 3] [i_1])));
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) arr_2 [i_1 - 2])) : (var_6)));
        var_20 += ((arr_0 [i_1 - 1] [i_1 - 2]) ? (((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_0 [i_1 - 3] [i_1 - 1])));
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_21 = ((/* implicit */signed char) ((arr_1 [5]) <= (arr_1 [i_6])));
        arr_22 [i_6] [i_6] = arr_9 [i_6] [5U];
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1230486523)) ? (((/* implicit */int) arr_13 [i_6] [(unsigned short)2] [i_6] [i_6] [i_6])) : ((-(((/* implicit */int) arr_21 [i_6]))))));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 16; i_7 += 1) 
        {
            for (unsigned int i_8 = 0; i_8 < 16; i_8 += 4) 
            {
                for (int i_9 = 2; i_9 < 13; i_9 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_10 = 1; i_10 < 13; i_10 += 2) /* same iter space */
                        {
                            arr_32 [i_6] [(signed char)13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1803011880)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_6]))) : (var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_23 [i_10] [i_6]) > (((/* implicit */int) arr_31 [i_6] [i_6] [i_6] [i_6] [i_9] [i_10])))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-30919))) : (var_2)))));
                            arr_33 [i_6] [i_6] [i_6] [14U] = ((/* implicit */unsigned int) ((signed char) (-(var_11))));
                            var_23 = ((/* implicit */short) ((signed char) arr_28 [i_9 + 2] [i_10] [i_6] [i_6] [9]));
                            arr_34 [i_6] = ((/* implicit */_Bool) (-(arr_23 [i_6] [i_7])));
                        }
                        for (unsigned int i_11 = 1; i_11 < 13; i_11 += 2) /* same iter space */
                        {
                            arr_38 [i_6] [i_9 + 3] [i_8] [i_7] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_31 [i_11] [i_11] [1ULL] [2] [i_11 + 1] [i_9 + 2])) ? (((/* implicit */int) arr_31 [i_11 + 3] [i_11] [i_11] [i_11] [i_11 + 1] [i_9])) : (1870849775)));
                            var_24 = ((((/* implicit */_Bool) (unsigned short)64348)) ? (1870849774) : (((/* implicit */int) (unsigned short)64348)));
                        }
                        for (unsigned int i_12 = 1; i_12 < 13; i_12 += 2) /* same iter space */
                        {
                            arr_41 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) (-(((((/* implicit */int) arr_11 [i_6] [i_6] [i_8])) - (((/* implicit */int) arr_26 [i_6]))))));
                            arr_42 [i_6] [i_6] [i_8] [i_8] [i_9] [i_8] = ((/* implicit */int) ((((/* implicit */unsigned long long int) 0U)) % (arr_15 [i_12 + 3] [i_9] [i_9] [i_9 - 2] [i_8])));
                            var_25 = ((/* implicit */int) min((var_25), (((((/* implicit */int) arr_13 [i_6] [i_12 + 2] [i_12 - 1] [i_9 + 3] [i_8])) / (((/* implicit */int) (_Bool)1))))));
                            arr_43 [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) arr_21 [i_12 - 1])) ? (1071644672) : (((/* implicit */int) arr_21 [i_12 - 1]))));
                        }
                        var_26 = ((/* implicit */unsigned long long int) var_7);
                        arr_44 [(signed char)10] [i_6] [i_6] [i_6] [(signed char)10] [i_6] = ((/* implicit */int) ((short) var_10));
                        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (-647185988) : (1970528460)))) ? (((/* implicit */unsigned long long int) var_9)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_9 [i_6] [7U])) : (arr_10 [13U] [i_7] [2] [i_9])))));
                    }
                } 
            } 
        } 
        var_28 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_6] [i_6] [i_6]))));
    }
    for (int i_13 = 0; i_13 < 12; i_13 += 2) 
    {
        var_29 += ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_23 [i_13] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) min((var_1), (arr_12 [i_13] [i_13]))))) : (max((((/* implicit */long long int) 16769024U)), (var_2)))))));
        var_30 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_1)) ? (-877470925) : (((/* implicit */int) arr_21 [i_13]))))));
    }
    var_31 -= max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) <= (((unsigned int) 647185988))))), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (unsigned char)56))))), (max((((/* implicit */unsigned int) var_7)), (var_4))))));
    var_32 = ((/* implicit */signed char) var_10);
}
