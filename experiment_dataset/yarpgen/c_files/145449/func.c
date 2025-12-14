/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145449
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
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) 2723189368U))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            var_16 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) 1571777927U)) ? (1961185484U) : (2723189368U)));
            var_17 ^= ((/* implicit */unsigned short) min((1571777931U), (2723189368U)));
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) -785022953)), (var_0))), (((/* implicit */unsigned long long int) ((-7100103490224441760LL) - (((/* implicit */long long int) 3611554480U)))))))) ? (((/* implicit */unsigned long long int) 2723189367U)) : (((((((/* implicit */unsigned int) var_13)) == (1571777931U))) ? (((((/* implicit */_Bool) (unsigned char)51)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0] [i_0] [i_1])) - (((/* implicit */int) var_7)))))))));
        }
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            for (unsigned char i_3 = 2; i_3 < 13; i_3 += 1) 
            {
                {
                    var_18 = ((((/* implicit */_Bool) ((1571777929U) & (1571777908U)))) ? (((((/* implicit */_Bool) min((arr_9 [i_0] [i_2] [i_2] [i_3]), (((/* implicit */unsigned short) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1571777927U)) || (((/* implicit */_Bool) (unsigned char)245)))))) : (max((11137178265183058137ULL), (((/* implicit */unsigned long long int) -7LL)))))) : (((((/* implicit */_Bool) max((11137178265183058137ULL), (((/* implicit */unsigned long long int) (unsigned short)240))))) ? (((/* implicit */unsigned long long int) 1411889828U)) : (((var_5) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
                    var_19 |= ((/* implicit */int) 2883077448U);
                    /* LoopNest 2 */
                    for (long long int i_4 = 1; i_4 < 10; i_4 += 1) 
                    {
                        for (signed char i_5 = 0; i_5 < 14; i_5 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((signed char) var_7)))));
                                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) 2883077475U)) ? (((((/* implicit */_Bool) 1571777936U)) ? (((/* implicit */int) (unsigned char)27)) : (arr_10 [i_0] [i_2] [i_3 - 2] [i_4 + 3]))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_2] [i_3 - 1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-20448)) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [6U])) : (((/* implicit */int) var_7)))))))))))));
                                var_22 = ((/* implicit */int) 2946877727247462453LL);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (long long int i_6 = 0; i_6 < 14; i_6 += 2) 
                    {
                        arr_18 [i_2] [i_2] [i_3] [i_2] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 46281410)) ? (max((2723189370U), (2723189370U))) : (((/* implicit */unsigned int) ((1577497765) & (arr_7 [i_0] [i_0]))))))), (min((((/* implicit */unsigned long long int) arr_14 [i_3 - 1] [i_3] [i_3])), (max((var_0), (((/* implicit */unsigned long long int) var_6))))))));
                        var_23 ^= ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_3 - 2])) ? (-491812790) : (arr_7 [i_6] [i_2]))));
                        var_24 *= ((/* implicit */unsigned int) var_5);
                        arr_19 [i_0] [i_0] = ((/* implicit */int) min((max((1185927011470077221ULL), (((/* implicit */unsigned long long int) -418750300)))), (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_3 [i_2] [i_2] [i_6])), (1995046207))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_7 = 0; i_7 < 14; i_7 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_8 = 4; i_8 < 13; i_8 += 3) 
                        {
                            arr_24 [i_0] [i_0] [8LL] [i_0] [i_0] [8LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)98)) ? (((/* implicit */int) (signed char)0)) : (1145961774)));
                            var_25 ^= ((/* implicit */short) ((((/* implicit */int) arr_3 [i_8] [i_7] [i_2])) & (((/* implicit */int) arr_8 [i_0] [i_2] [i_3 - 2]))));
                            arr_25 [(unsigned short)8] [i_2] [i_2] [i_2] [i_3 + 1] [i_7] [i_8] = arr_10 [i_7] [i_0] [(unsigned short)7] [i_7];
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 2) 
                        {
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-6208)) % (((/* implicit */int) (short)13140))));
                            var_27 = var_5;
                        }
                        arr_29 [i_0] [i_2] [i_2] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) arr_11 [i_3 + 1] [i_3 + 1] [i_3] [i_3 + 1])) != (491812769)));
                        var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1050787015)) / (6928275461359809602ULL)))) ? (((((/* implicit */_Bool) 669215826)) ? (arr_17 [i_0] [i_0] [6U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)236))))) : (((/* implicit */unsigned long long int) 2883077477U)))))));
                        var_29 = ((/* implicit */int) 1411889828U);
                    }
                }
            } 
        } 
        var_30 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_3))) | (arr_14 [i_0] [i_0] [i_0])))) ? (((/* implicit */long long int) ((((((/* implicit */int) (short)-6216)) + (2147483647))) << (((arr_14 [i_0] [i_0] [i_0]) - (313465328238671907LL)))))) : (((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0])) ? (arr_14 [i_0] [i_0] [i_0]) : (arr_14 [i_0] [i_0] [i_0])))));
        var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_15 [(signed char)0] [i_0] [i_0] [i_0] [i_0])) ? (2299175U) : (((/* implicit */unsigned int) 46281398)))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0])) * (((/* implicit */int) var_12)))))))) ? (min((max((arr_13 [i_0] [i_0]), (((/* implicit */long long int) 3664878167U)))), (((/* implicit */long long int) arr_28 [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) -4986379450752699351LL))))));
        var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) var_10))));
    }
    for (short i_10 = 1; i_10 < 8; i_10 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_11 = 0; i_11 < 10; i_11 += 2) 
        {
            var_33 = ((/* implicit */signed char) 299325430);
            /* LoopSeq 1 */
            for (unsigned char i_12 = 2; i_12 < 8; i_12 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_13 = 0; i_13 < 10; i_13 += 3) 
                {
                    for (unsigned char i_14 = 4; i_14 < 9; i_14 += 4) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_7)), (1091969436U)))) || (((/* implicit */_Bool) var_6)))))));
                            arr_46 [i_14 + 1] [7] [i_12] [i_11] [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) ((signed char) var_4)))))) < (max((((/* implicit */long long int) arr_22 [i_10] [i_10 + 2] [i_11] [i_10 + 2] [i_13] [i_10] [i_14 + 1])), (7333468561693664380LL)))));
                        }
                    } 
                } 
                var_35 = ((/* implicit */signed char) ((min((-482183211), (16777215))) >= (min((((/* implicit */int) arr_11 [i_12 - 1] [i_10 - 1] [i_10 + 2] [i_10 + 2])), (arr_1 [i_10 + 2])))));
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_15 = 3; i_15 < 9; i_15 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_16 = 0; i_16 < 10; i_16 += 1) 
                {
                    var_36 = 2883077489U;
                    var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_15 - 1] [i_15 - 3] [i_10 + 2])) ? (arr_0 [i_11]) : (((/* implicit */int) (unsigned short)65533))))) <= (min((min((((/* implicit */long long int) (signed char)-50)), (7333468561693664379LL))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)11)) & (((/* implicit */int) (signed char)-12)))))))));
                    var_38 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)54370)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)103)) ? (((((/* implicit */_Bool) 2699815968U)) ? (7333468561693664380LL) : (((/* implicit */long long int) 46281415)))) : (((/* implicit */long long int) ((/* implicit */int) (short)5112)))))) : (((((/* implicit */unsigned long long int) 1980305289)) - (min((7274956332286100811ULL), (var_9)))))));
                    arr_52 [i_10] [i_11] [i_10] [i_16] [i_15] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)16782)) * (((/* implicit */int) var_6))))) ? (((((/* implicit */int) (unsigned short)6101)) / (((/* implicit */int) (unsigned short)48756)))) : (((((/* implicit */int) (short)-15518)) / (((/* implicit */int) var_12))))))) ? (((((/* implicit */_Bool) 46281415)) ? (((/* implicit */int) max((((/* implicit */short) (unsigned char)145)), ((short)-5214)))) : (((/* implicit */int) (signed char)-99)))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) var_7)), (arr_14 [i_11] [i_15] [i_16])))) ? (((((/* implicit */int) arr_11 [i_16] [i_11] [i_15] [i_16])) / (var_11))) : (((/* implicit */int) ((unsigned char) 1980305306)))))));
                }
                arr_53 [i_10 - 1] [i_10 + 2] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 4095)) ? (((/* implicit */long long int) arr_35 [i_10] [i_10 - 1])) : (5520824856297011180LL)))) ? (((/* implicit */int) ((46281416) != (1980305310)))) : (((((/* implicit */int) (unsigned char)15)) / (-4079))))) >= (-1980305306)));
            }
        }
        var_39 ^= ((/* implicit */long long int) ((unsigned short) ((((/* implicit */unsigned long long int) var_11)) % (min((var_0), (((/* implicit */unsigned long long int) -1980305313)))))));
    }
    for (unsigned int i_17 = 1; i_17 < 15; i_17 += 1) 
    {
        var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_56 [i_17 + 1])) ? (46281418) : (((/* implicit */int) var_7))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3595221625576053127LL)) ? (((/* implicit */int) var_8)) : (1924751099)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((4988909793277131787LL) != (((/* implicit */long long int) 4096)))))) : (arr_55 [i_17 - 1]))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_18 = 0; i_18 < 16; i_18 += 1) 
        {
            var_41 = ((/* implicit */signed char) ((var_0) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7)))));
            var_42 = ((/* implicit */unsigned int) ((arr_57 [i_18] [i_18] [i_17 - 1]) <= (arr_57 [i_18] [i_18] [i_17 - 1])));
        }
    }
}
