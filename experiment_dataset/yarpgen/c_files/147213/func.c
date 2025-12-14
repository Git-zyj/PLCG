/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147213
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
    var_18 = ((/* implicit */long long int) var_3);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_2] [i_0] = ((/* implicit */signed char) max((((/* implicit */long long int) ((arr_3 [i_4]) != (((/* implicit */long long int) ((((/* implicit */int) var_15)) % (536654335))))))), (max((((/* implicit */long long int) arr_7 [i_0] [(short)14] [i_2] [i_2 - 1])), (var_10)))));
                                var_19 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2 - 1] [i_0] [i_2 - 1])) ? (var_11) : (((/* implicit */long long int) arr_8 [i_2] [i_2] [i_2] [i_2] [i_2 - 1]))))));
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2 - 1] [i_2 - 1] [i_0])) ? (var_2) : (((/* implicit */long long int) -1194687068))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) max((((((/* implicit */long long int) ((/* implicit */int) (signed char)33))) != (arr_2 [i_4]))), (arr_0 [i_2 - 1]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        for (long long int i_6 = 1; i_6 < 17; i_6 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned short) var_14))))) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) ((long long int) arr_15 [i_0]))) ? (((/* implicit */int) arr_16 [i_6 - 1] [i_6] [i_6] [i_0] [i_6] [i_6])) : (-291251781)))));
                                var_22 = ((/* implicit */long long int) max((arr_14 [i_0] [i_0]), (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_2 - 1] [(signed char)15] [(signed char)15] [i_0])) + (arr_8 [i_0] [i_2 - 1] [i_5] [i_6] [i_6]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                    {
                        for (int i_8 = 0; i_8 < 18; i_8 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) ((((((/* implicit */int) arr_16 [i_0] [i_2] [i_2 - 1] [i_0] [i_2] [i_8])) % (((/* implicit */int) arr_16 [i_2] [i_7] [i_7 + 1] [i_0] [i_0] [i_7 + 1])))) % (((/* implicit */int) ((_Bool) (~(((/* implicit */int) (unsigned short)34774))))))));
                                var_24 = ((/* implicit */unsigned int) var_12);
                                arr_23 [i_8] [i_8] [i_7] [i_0] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((arr_18 [i_1] [i_1] [i_7 + 1] [i_0]) ? (((/* implicit */int) arr_18 [i_0] [i_1] [i_7] [i_0])) : (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0]))))) + (max((((/* implicit */long long int) arr_18 [i_0] [i_2] [i_1] [i_0])), (-7736486580220824703LL)))));
                                var_25 = ((/* implicit */int) ((((/* implicit */long long int) ((-536654335) % (((/* implicit */int) var_5))))) != (min((max((arr_3 [i_0]), (((/* implicit */long long int) arr_20 [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */long long int) max((arr_20 [i_0] [i_2] [i_7] [i_8]), (((/* implicit */unsigned short) arr_0 [i_2 - 1])))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_9 = 0; i_9 < 18; i_9 += 4) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                arr_28 [i_0] [i_1] [i_1] [i_2] [i_0] [i_9] [i_0] = (signed char)-50;
                                arr_29 [i_0] [i_1] [i_9] [i_9] [i_9] &= ((/* implicit */unsigned int) max((((((/* implicit */int) arr_7 [i_0] [i_0] [i_2 - 1] [i_9])) + (((/* implicit */int) arr_7 [i_0] [i_1] [i_2 - 1] [i_0])))), (((((/* implicit */_Bool) (-(4294967283U)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [i_0] [i_2 - 1] [i_2 - 1] [i_9]))))));
                                var_26 = ((/* implicit */_Bool) var_14);
                                var_27 += ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-68)))) != (((/* implicit */int) (!(((arr_10 [i_0] [i_0] [i_9]) != (((/* implicit */long long int) 536654335)))))))));
                                var_28 = ((/* implicit */unsigned short) min((min((((/* implicit */long long int) arr_20 [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1])), (var_8))), (((/* implicit */long long int) max((min((((/* implicit */int) var_3)), (1511806507))), (((/* implicit */int) arr_13 [i_9] [i_1] [i_2 - 1] [i_0])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_11 = 1; i_11 < 17; i_11 += 2) 
    {
        var_29 = ((/* implicit */_Bool) max((var_9), (((/* implicit */long long int) (~(((/* implicit */int) arr_16 [i_11 - 1] [i_11 + 1] [i_11 - 1] [i_11] [i_11] [i_11 - 1])))))));
        /* LoopNest 2 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            for (long long int i_13 = 3; i_13 < 16; i_13 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_14 = 1; i_14 < 15; i_14 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_39 [i_14] [i_14] [i_14 + 2] [i_14] [i_14 - 1] [i_14 + 1])) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_14] [i_14 - 1] [i_14] [i_14])))));
                            var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)2047)) ? (-8156192947418016098LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
                            var_32 = ((/* implicit */unsigned int) ((arr_31 [i_11 - 1]) % (((/* implicit */long long int) 3892565945U))));
                        }
                        var_33 = ((/* implicit */short) ((_Bool) (unsigned short)22234));
                        arr_43 [i_11] [i_12] [i_11] [i_11] = ((/* implicit */_Bool) (~(arr_31 [i_11 - 1])));
                        var_34 = ((/* implicit */unsigned short) ((arr_19 [i_14] [i_14 + 1] [i_13 + 1] [i_12] [i_11 - 1] [i_12]) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14077)))));
                    }
                    for (unsigned short i_16 = 0; i_16 < 18; i_16 += 3) 
                    {
                        var_35 = ((/* implicit */int) ((((var_11) % (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) arr_19 [i_11] [15] [i_13] [i_16] [i_11 - 1] [i_13])) : (-1168032649863061609LL))))) * (max((max((var_0), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_11)))))))));
                        var_36 = ((/* implicit */short) min((((/* implicit */long long int) ((arr_3 [i_12]) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_16)) != (arr_4 [i_12] [(signed char)6] [i_16])))))))), (max((var_0), (min((((/* implicit */long long int) var_15)), (arr_10 [i_11 - 1] [i_11] [i_11])))))));
                        var_37 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(var_8))))));
                        var_38 = ((/* implicit */long long int) var_14);
                    }
                    var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) (short)-14432))));
                    var_40 = min((((/* implicit */long long int) ((((/* implicit */int) arr_27 [i_11] [i_11] [i_13] [i_12] [i_13 + 2] [i_13] [i_12])) + (((/* implicit */int) arr_27 [i_11 + 1] [i_11] [i_12] [i_13] [i_13 - 2] [i_13] [i_11 + 1]))))), (((((/* implicit */_Bool) arr_27 [i_11] [i_11] [i_13 - 1] [i_13 - 2] [i_13 + 2] [i_11] [i_13 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_11] [i_11] [i_11] [i_13 - 3] [i_13 - 2] [i_11] [i_13 - 3]))) : (var_2))));
                    /* LoopSeq 2 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_41 = ((/* implicit */unsigned short) 2725497326090706451LL);
                        var_42 = ((/* implicit */unsigned short) -1511806502);
                        var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_3), (var_12)))) ? (max((arr_47 [i_11 + 1] [(unsigned short)14] [i_13 + 2] [i_13 + 2]), (arr_2 [i_11 + 1]))) : (var_0)));
                    }
                    for (unsigned long long int i_18 = 1; i_18 < 14; i_18 += 2) 
                    {
                        var_44 = ((/* implicit */long long int) min((var_44), (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_11 + 1] [i_13 - 2] [i_18 + 1])) % (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_17))) != (4294967283U)))))))));
                        var_45 -= ((/* implicit */int) min(((signed char)68), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22232))) != (arr_37 [i_18 + 4] [i_18 - 1] [i_18 + 1] [14LL]))))));
                        arr_51 [i_11 - 1] [i_11] [i_11 + 1] [i_11] [i_11] = ((/* implicit */signed char) arr_17 [i_11 - 1] [i_18 + 4] [i_13 + 1] [i_11 - 1]);
                    }
                    var_46 = ((/* implicit */short) (!((!(((/* implicit */_Bool) min((((/* implicit */long long int) var_1)), (var_9))))))));
                }
            } 
        } 
        var_47 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_0), (arr_26 [i_11] [i_11] [i_11] [i_11] [i_11])))) ? (8702588723319725266LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_11]))))) != (arr_26 [i_11] [i_11] [i_11 - 1] [i_11] [i_11 + 1])))))));
        var_48 = ((min((arr_47 [i_11] [i_11] [i_11 + 1] [i_11 + 1]), (((/* implicit */long long int) var_15)))) + (((/* implicit */long long int) max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (short)32767)))), (((((/* implicit */int) (short)23780)) % (((/* implicit */int) var_3))))))));
    }
    var_49 &= ((/* implicit */unsigned long long int) ((var_8) % (((/* implicit */long long int) (-((-(((/* implicit */int) var_7)))))))));
}
