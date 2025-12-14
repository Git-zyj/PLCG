/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11989
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) max((1289445593U), (((/* implicit */unsigned int) var_2)))))) ? (min((((var_1) ^ (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))), (max((((/* implicit */long long int) arr_1 [i_0])), (var_9))))) : (((/* implicit */long long int) (((!(((/* implicit */_Bool) var_3)))) ? (-257685634) : (((var_5) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_8)))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_2 = 3; i_2 < 18; i_2 += 3) 
            {
                arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-(arr_5 [i_2 - 3] [i_2 - 3])));
                var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_8))) % (arr_6 [i_0] [i_1] [i_2 - 1])))) ? (((/* implicit */int) (signed char)50)) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_0])))))));
                /* LoopNest 2 */
                for (long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        {
                            var_13 = ((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_4))));
                            var_14 = ((unsigned int) var_0);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_5 = 2; i_5 < 16; i_5 += 4) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_17 [i_6] [i_1] [i_2] [i_5 - 2] [i_6] = ((/* implicit */long long int) (+(((unsigned int) arr_3 [i_6] [i_5 + 3] [i_2]))));
                            arr_18 [i_0] [i_6] [i_2 - 1] [i_5] [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_2 + 1] [i_2 - 1] [i_5 + 2] [i_6]))) < (var_7)))) % (((/* implicit */int) arr_3 [i_1] [i_2 - 1] [i_5 - 1]))));
                        }
                    } 
                } 
            }
            for (long long int i_7 = 1; i_7 < 18; i_7 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_8 = 1; i_8 < 16; i_8 += 4) 
                {
                    for (signed char i_9 = 0; i_9 < 19; i_9 += 3) 
                    {
                        {
                            arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) arr_10 [i_1] [i_1] [i_7]);
                            var_15 = ((/* implicit */unsigned long long int) (!(((((/* implicit */int) var_10)) == (((/* implicit */int) var_10))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned short) (+((+(var_3)))));
                /* LoopNest 2 */
                for (short i_10 = 0; i_10 < 19; i_10 += 4) 
                {
                    for (unsigned char i_11 = 0; i_11 < 19; i_11 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */short) ((_Bool) arr_29 [i_0] [i_1] [i_7 - 1]));
                            var_18 *= ((/* implicit */unsigned short) (~((-(((/* implicit */int) (_Bool)1))))));
                            var_19 -= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)98))) - (arr_6 [i_10] [i_7 + 1] [i_0]))))));
                        }
                    } 
                } 
            }
            var_20 = ((/* implicit */signed char) (-((+(((/* implicit */int) arr_21 [(short)14] [i_1] [i_0] [i_1] [(short)14]))))));
            arr_34 [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_33 [i_0] [i_1] [i_1]);
            var_21 = ((/* implicit */int) arr_29 [i_0] [i_1] [i_1]);
        }
        arr_35 [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (signed char)-51)), (((((arr_7 [i_0] [i_0] [i_0]) - (((/* implicit */unsigned long long int) arr_33 [i_0] [i_0] [i_0])))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50395)))))));
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        var_22 = ((/* implicit */int) max((var_22), (((((/* implicit */_Bool) max((((/* implicit */int) var_8)), (arr_22 [i_12] [i_12] [i_12] [i_12] [i_12])))) ? (((((/* implicit */_Bool) arr_36 [i_12])) ? (((/* implicit */int) arr_38 [i_12])) : (((/* implicit */int) arr_32 [i_12])))) : ((+(((/* implicit */int) arr_0 [i_12] [i_12]))))))));
        arr_39 [i_12] = ((/* implicit */unsigned int) (-(((min((((/* implicit */unsigned long long int) arr_37 [i_12] [i_12])), (arr_5 [i_12] [i_12]))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (-257685641) : (((/* implicit */int) (_Bool)1)))))))));
        /* LoopNest 2 */
        for (unsigned short i_13 = 1; i_13 < 9; i_13 += 3) 
        {
            for (signed char i_14 = 0; i_14 < 11; i_14 += 3) 
            {
                {
                    var_23 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_8)) ^ (((/* implicit */int) arr_9 [i_12] [i_12] [i_13] [i_12]))))))) - (var_7)));
                    arr_44 [i_13] [i_13 - 1] [i_12] [i_13] = ((/* implicit */_Bool) (+(min((((/* implicit */long long int) (-(((/* implicit */int) var_6))))), ((+(arr_31 [i_14] [i_14] [i_14] [i_14] [i_13])))))));
                    var_24 *= ((/* implicit */signed char) min((((/* implicit */long long int) var_8)), ((+((+(2908601389793392025LL)))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_15 = 0; i_15 < 11; i_15 += 3) /* same iter space */
                    {
                        var_25 = ((/* implicit */signed char) (+((+(((/* implicit */int) var_10))))));
                        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1634314305)) ? (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_12] [6]))) : (-1602564002305702224LL)))) || (((/* implicit */_Bool) ((int) 5718945095703558868LL))))))));
                        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((-8215865158043836134LL) != (((/* implicit */long long int) ((int) var_2))))))));
                        var_28 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_13 + 1] [i_13] [i_13] [8LL] [i_13 + 2] [i_12])))));
                    }
                    /* vectorizable */
                    for (unsigned int i_16 = 0; i_16 < 11; i_16 += 3) /* same iter space */
                    {
                        var_29 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_48 [i_16])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_37 [i_12] [i_12])) ? (((/* implicit */int) arr_32 [i_12])) : (((/* implicit */int) arr_30 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])))))));
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) - (((/* implicit */int) arr_15 [i_12] [i_13] [i_13 + 2] [i_13 - 1]))));
                    }
                    for (unsigned int i_17 = 0; i_17 < 11; i_17 += 3) /* same iter space */
                    {
                        var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((unsigned long long int) -257685603))))) ? (min((((/* implicit */int) var_10)), (arr_11 [i_14] [i_17]))) : ((+(arr_25 [i_14] [i_14] [i_13 + 2] [i_17]))))))));
                        var_32 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) 11299349532212758776ULL)))))))) ? (arr_47 [i_12] [i_12] [i_12] [i_12] [i_12]) : (((var_11) / (arr_47 [i_17] [i_17] [i_14] [i_13] [i_12])))));
                        var_33 = ((/* implicit */int) arr_14 [i_12] [i_13] [i_13] [i_17] [i_13]);
                    }
                }
            } 
        } 
        arr_53 [i_12] = ((((/* implicit */long long int) (+(((/* implicit */int) arr_51 [i_12] [(unsigned short)2]))))) + (((((/* implicit */_Bool) ((signed char) var_6))) ? (((/* implicit */long long int) ((((/* implicit */int) var_8)) + (((/* implicit */int) var_2))))) : (arr_20 [i_12] [i_12]))));
    }
    /* vectorizable */
    for (unsigned int i_18 = 2; i_18 < 14; i_18 += 1) /* same iter space */
    {
        var_34 = ((/* implicit */signed char) 12083408060162129155ULL);
        var_35 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_10 [i_18 + 3] [0LL] [i_18 + 4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_18] [i_18] [i_18] [15] [i_18]))) : (arr_54 [i_18])))));
    }
    for (unsigned int i_19 = 2; i_19 < 14; i_19 += 1) /* same iter space */
    {
        arr_60 [i_19 + 3] [i_19] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_19] [i_19] [i_19] [i_19 - 2] [i_19])) ? (((/* implicit */unsigned long long int) arr_23 [i_19] [i_19] [i_19 + 4] [i_19] [i_19 + 4] [i_19 + 4])) : (11ULL)))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_19] [i_19] [i_19 + 4])))))));
        var_36 = ((/* implicit */long long int) min((var_36), (9223372036854775807LL)));
        /* LoopNest 2 */
        for (unsigned long long int i_20 = 3; i_20 < 16; i_20 += 4) 
        {
            for (unsigned int i_21 = 0; i_21 < 18; i_21 += 4) 
            {
                {
                    var_37 -= ((/* implicit */short) ((min(((+(var_3))), (((/* implicit */long long int) ((((/* implicit */int) arr_28 [i_19] [i_21])) != (((/* implicit */int) arr_21 [i_19] [i_19] [i_19 + 4] [i_19 - 1] [i_19]))))))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (var_5)))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_22 = 1; i_22 < 16; i_22 += 4) 
                    {
                        arr_68 [i_19] [i_20] [i_19] [i_21] [i_19] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) (-(arr_7 [i_19] [i_20 - 3] [i_21])))) || (((((/* implicit */int) var_10)) == (((/* implicit */int) var_4)))))))));
                        var_38 = ((/* implicit */int) (+(((min((((/* implicit */long long int) arr_11 [i_21] [i_22])), (var_3))) + (((((/* implicit */_Bool) arr_22 [i_19] [i_19] [i_21] [i_22] [i_22])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_3)))))));
                        var_39 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_58 [i_19 + 2] [i_19 + 2]))))))))));
                    }
                }
            } 
        } 
    }
    var_40 = ((/* implicit */int) (~(max((max((((/* implicit */long long int) var_4)), (var_0))), (((/* implicit */long long int) ((int) var_6)))))));
    var_41 = ((/* implicit */unsigned char) var_11);
}
