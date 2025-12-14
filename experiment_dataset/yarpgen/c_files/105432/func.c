/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105432
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
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    var_15 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)22)) | ((-(((/* implicit */int) var_2))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 1; i_3 < 10; i_3 += 1) 
                    {
                        var_16 -= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (arr_10 [i_3] [i_3] [i_3 - 1] [i_2] [i_2]))), (((min((((/* implicit */int) arr_0 [i_2])), (var_4))) ^ (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_8))))))));
                        arr_11 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) min(((unsigned char)7), ((unsigned char)95)))), (var_10)))) || (((/* implicit */_Bool) ((var_3) - (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
                        arr_12 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (~(arr_10 [i_3 - 1] [i_3 + 1] [i_3] [i_3 - 1] [i_3 - 1])));
                        arr_13 [i_0] [i_1] [i_2] [i_2] |= ((/* implicit */signed char) max((((/* implicit */int) arr_7 [i_0] [i_3 + 1] [i_2] [i_3])), (((((/* implicit */int) arr_7 [i_0] [i_3 + 1] [i_2] [(unsigned char)7])) / (((/* implicit */int) var_2))))));
                    }
                    for (signed char i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        var_17 = ((/* implicit */int) (+(max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [4] [i_2] [i_0])) ? (((/* implicit */int) arr_14 [i_1] [i_4])) : (((/* implicit */int) var_9))))), (arr_16 [i_0])))));
                        arr_18 [i_4] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */int) var_0);
                        var_18 += max((4294967293U), (((/* implicit */unsigned int) (unsigned char)234)));
                        var_19 += min((max((var_5), ((signed char)-108))), (var_13));
                    }
                    var_20 *= ((/* implicit */unsigned int) var_8);
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            var_21 ^= ((min((((1284992992) / (((/* implicit */int) (unsigned char)106)))), ((+(((/* implicit */int) var_11)))))) % (min((var_7), (((/* implicit */int) (signed char)118)))));
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) max((((/* implicit */unsigned int) ((min((var_7), (((/* implicit */int) var_5)))) + (((/* implicit */int) (unsigned char)159))))), (min(((-(0U))), (((/* implicit */unsigned int) arr_19 [i_6] [i_2] [i_2] [i_1] [i_2])))))))));
                            var_23 = ((/* implicit */int) var_13);
                        }
                        for (signed char i_7 = 0; i_7 < 11; i_7 += 3) /* same iter space */
                        {
                            arr_25 [i_5] [i_0] [(unsigned char)7] [(unsigned char)7] [i_5] [i_5] [3U] = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)114)) + (((/* implicit */int) (unsigned char)249)))) ^ (((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) arr_0 [i_0]))))));
                            arr_26 [(signed char)1] [(signed char)1] [i_0] = ((((/* implicit */_Bool) 519336520)) ? (100384019) : (((/* implicit */int) (unsigned char)122)));
                            arr_27 [i_0] [(signed char)8] [i_0] [(unsigned char)5] [5] = ((/* implicit */unsigned char) (~(max((519336531), (((/* implicit */int) arr_5 [i_7]))))));
                        }
                        /* vectorizable */
                        for (signed char i_8 = 0; i_8 < 11; i_8 += 3) /* same iter space */
                        {
                            var_24 = ((/* implicit */int) max((var_24), (((((/* implicit */_Bool) arr_29 [5] [5] [i_2] [5] [i_5] [i_2] [i_8])) ? (var_12) : (((/* implicit */int) (unsigned char)15))))));
                            var_25 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_1 [i_0]))));
                            var_26 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (var_14) : (((/* implicit */unsigned int) var_7))));
                        }
                        /* LoopSeq 1 */
                        for (signed char i_9 = 0; i_9 < 11; i_9 += 3) 
                        {
                            arr_33 [i_0] [i_5] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */int) max((((/* implicit */unsigned char) var_8)), (min(((unsigned char)107), (((/* implicit */unsigned char) var_8))))))), (1999112811)));
                            arr_34 [(unsigned char)6] [i_0] [i_1] [i_1] [i_2] [i_1] = ((/* implicit */signed char) min((2115307122), (((/* implicit */int) (unsigned char)46))));
                        }
                        arr_35 [i_0] [i_0] [(unsigned char)0] [i_0] = ((/* implicit */unsigned char) (((+((+(((/* implicit */int) (signed char)-127)))))) | (((/* implicit */int) (signed char)124))));
                        var_27 = ((/* implicit */int) ((min((var_10), (((/* implicit */unsigned int) (signed char)9)))) >= (((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-77)) + (2147483647))) << (((((-373991260) + (373991270))) - (10))))))));
                    }
                }
                for (int i_10 = 0; i_10 < 11; i_10 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 11; i_11 += 1) 
                    {
                        for (int i_12 = 4; i_12 < 9; i_12 += 3) 
                        {
                            {
                                arr_46 [i_0] [i_1] [i_10] [i_11] [i_0] [i_0] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)86)) ? (max((((/* implicit */unsigned int) var_6)), (3803485785U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)187)))));
                                arr_47 [i_10] [i_0] [i_11] [(unsigned char)2] [i_10] [i_0] [i_0] = ((/* implicit */unsigned char) arr_41 [i_12 + 1]);
                                arr_48 [i_0] [(signed char)7] [i_10] [i_11] [i_12] = ((/* implicit */signed char) min((((/* implicit */int) max(((unsigned char)101), (((/* implicit */unsigned char) var_8))))), ((+(var_7)))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)22)) ? (((/* implicit */int) (signed char)49)) : (((/* implicit */int) var_8)))))))))))));
                    var_29 = ((/* implicit */int) min((((/* implicit */unsigned int) var_9)), (((max((3728410949U), (((/* implicit */unsigned int) var_6)))) / (((/* implicit */unsigned int) var_12))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_13 = 1; i_13 < 10; i_13 += 2) 
                    {
                        var_30 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) > (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-121)) | (((/* implicit */int) var_11))))) ? (((/* implicit */int) (unsigned char)249)) : ((-2147483647 - 1))))));
                        arr_53 [i_0] [1U] [i_0] [8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) + (((/* implicit */int) var_2))))) ? (((((/* implicit */int) (unsigned char)105)) / (((/* implicit */int) arr_0 [i_0])))) : ((+(((/* implicit */int) arr_0 [i_0]))))));
                    }
                }
                var_31 = ((/* implicit */unsigned char) (+(max((0U), (((/* implicit */unsigned int) -1987420241))))));
            }
        } 
    } 
    var_32 += ((/* implicit */signed char) var_11);
    var_33 |= ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (-2147483643) : (((/* implicit */int) (unsigned char)0)))))))), (((((/* implicit */_Bool) var_5)) ? ((-(((/* implicit */int) var_13)))) : ((-(((/* implicit */int) var_13))))))));
    var_34 = ((/* implicit */unsigned char) (~(((((/* implicit */int) var_2)) + (min((((/* implicit */int) (signed char)107)), ((-2147483647 - 1))))))));
    var_35 = ((/* implicit */unsigned int) (((-(((/* implicit */int) (unsigned char)10)))) * (((/* implicit */int) var_1))));
}
