/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123120
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
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) var_11))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned char) (((~(var_13))) < ((((+(var_13))) + (((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
        var_18 = var_7;
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_13)))) ? (((var_12) % (((/* implicit */int) var_9)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        {
                            var_20 *= ((/* implicit */unsigned long long int) (((-(((/* implicit */int) (unsigned char)0)))) != (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-117)) : (((/* implicit */int) (_Bool)0))))));
                            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -9223372036854775806LL)) ? (((/* implicit */int) (unsigned short)2)) : (((/* implicit */int) (short)-32758)))))));
                            var_22 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_13)))) ? (((((/* implicit */_Bool) var_10)) ? (var_6) : (var_14))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5)))))));
                            arr_13 [i_2] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)245)) : (((/* implicit */int) (_Bool)1))))) ? (((var_9) ? (var_12) : (((/* implicit */int) var_2)))) : ((+(((/* implicit */int) var_8))))));
                        }
                    } 
                } 
                arr_14 [i_2] [i_0] [i_0] = (+(((((/* implicit */_Bool) var_12)) ? (var_1) : (((/* implicit */unsigned long long int) var_10)))));
                /* LoopSeq 3 */
                for (int i_5 = 0; i_5 < 11; i_5 += 2) /* same iter space */
                {
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (((-(var_14))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
                    var_24 = ((/* implicit */long long int) (-(((((/* implicit */unsigned long long int) var_10)) % (var_1)))));
                    var_25 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((var_12) / (((/* implicit */int) var_2))))) : (((((/* implicit */unsigned long long int) var_7)) * (var_15)))));
                }
                for (int i_6 = 0; i_6 < 11; i_6 += 2) /* same iter space */
                {
                    var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) var_14))));
                    var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_6) : (((/* implicit */unsigned long long int) var_10))))) ? (((((/* implicit */_Bool) var_10)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : ((+(var_15)))));
                    var_28 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_14) : (((/* implicit */unsigned long long int) var_10))))) ? ((-(var_10))) : (((/* implicit */int) var_8))));
                }
                for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 3) 
                {
                    var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)48)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) (signed char)127))))) : (((((/* implicit */_Bool) var_3)) ? (var_13) : (var_14))))))));
                    var_30 = ((/* implicit */unsigned long long int) var_9);
                }
            }
            /* LoopSeq 3 */
            for (unsigned char i_8 = 0; i_8 < 11; i_8 += 3) 
            {
                arr_23 [i_0] [i_0] [i_8] [i_8] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)48))));
                arr_24 [i_8] [i_1] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? ((-(var_10))) : (((/* implicit */int) var_8))));
                arr_25 [i_8] [i_1] [i_8] = ((/* implicit */short) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_2)) : (var_12))) >= (((/* implicit */int) var_2))));
            }
            for (unsigned char i_9 = 0; i_9 < 11; i_9 += 1) 
            {
                var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) (~((+(var_1))))))));
                var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_1)) ? (var_1) : (var_6))))))));
                /* LoopNest 2 */
                for (unsigned short i_10 = 0; i_10 < 11; i_10 += 1) 
                {
                    for (unsigned char i_11 = 0; i_11 < 11; i_11 += 2) 
                    {
                        {
                            arr_34 [i_0] [i_1] [8ULL] [(unsigned char)2] [i_1] [(unsigned short)10] &= ((/* implicit */unsigned char) ((((var_1) < (((/* implicit */unsigned long long int) var_10)))) ? (((/* implicit */unsigned long long int) (-(var_7)))) : (((((/* implicit */_Bool) var_12)) ? (var_1) : (((/* implicit */unsigned long long int) var_10))))));
                            arr_35 [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? ((+(var_11))) : (((/* implicit */long long int) var_10))));
                            arr_36 [i_9] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */unsigned long long int) var_7))))) ? (((((/* implicit */_Bool) var_6)) ? (var_12) : (((/* implicit */int) var_2)))) : (((/* implicit */int) ((var_4) <= (var_1))))));
                            arr_37 [i_0] [i_0] [i_9] [i_0] [i_11] [i_1] [i_1] &= ((/* implicit */unsigned short) ((((var_5) ? (((/* implicit */unsigned long long int) var_12)) : (var_4))) % (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_1)))));
                            var_33 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_4) : (var_15)))) ? (var_15) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (var_12))))));
                        }
                    } 
                } 
                var_34 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_5))));
                /* LoopNest 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (unsigned char i_13 = 3; i_13 < 8; i_13 += 2) 
                    {
                        {
                            arr_42 [i_0] [i_0] [i_0] [(signed char)8] [i_0] [i_9] = ((/* implicit */unsigned long long int) (((-(var_14))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                            var_35 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_15)))) ? (((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((var_5) ? (var_15) : (((/* implicit */unsigned long long int) var_11)))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_14 = 3; i_14 < 7; i_14 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_15 = 1; i_15 < 8; i_15 += 2) 
                {
                    arr_50 [i_0] [i_14] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_15))))));
                    var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))))));
                }
                /* LoopSeq 1 */
                for (unsigned short i_16 = 0; i_16 < 11; i_16 += 4) 
                {
                    arr_53 [i_16] [i_14] = ((/* implicit */short) (~(var_10)));
                    arr_54 [i_14] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(var_6))))));
                }
            }
            arr_55 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((var_5) ? (var_11) : (((/* implicit */long long int) var_7))))) * (((((/* implicit */_Bool) var_12)) ? (var_1) : (var_15)))));
        }
        for (unsigned char i_17 = 2; i_17 < 10; i_17 += 4) 
        {
            /* LoopSeq 1 */
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_19 = 0; i_19 < 11; i_19 += 2) /* same iter space */
                {
                    var_37 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((var_0) ? (var_4) : (var_15))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_10)))))))) : (var_3)));
                    var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-101)) ? ((~(((/* implicit */int) (signed char)-1)))) : (((((/* implicit */_Bool) (~(432345564227567616ULL)))) ? (((((/* implicit */_Bool) 31457280ULL)) ? (((/* implicit */int) (unsigned char)245)) : (((/* implicit */int) (signed char)-6)))) : (((/* implicit */int) (unsigned char)1))))));
                    arr_62 [i_0] [i_0] [i_0] [i_17] [i_18] [(unsigned char)6] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_12)) : (var_6)))))) ? ((+(((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */unsigned long long int) var_12)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                }
                /* vectorizable */
                for (unsigned char i_20 = 0; i_20 < 11; i_20 += 2) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_21 = 0; i_21 < 11; i_21 += 2) 
                    {
                        var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) var_5)))))));
                        var_40 = ((/* implicit */int) max((var_40), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_11)) : (var_13)))))))));
                        var_41 = ((/* implicit */unsigned short) (~((+(var_11)))));
                        var_42 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))) == (((var_3) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                    }
                    for (short i_22 = 0; i_22 < 11; i_22 += 4) 
                    {
                        var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */unsigned long long int) var_10))))) ? ((-(var_6))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_12) : (var_12)))))))));
                        var_44 = ((/* implicit */short) (~((~(((/* implicit */int) (unsigned char)64))))));
                        var_45 -= ((/* implicit */unsigned char) ((((var_9) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2)))) % (((var_5) ? (((/* implicit */int) var_8)) : (var_12)))));
                        arr_72 [i_18] [i_18] = ((((((/* implicit */_Bool) var_4)) && (var_9))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (var_10))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))));
                    }
                    arr_73 [i_0] [i_17] [i_18] [i_18] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)126))));
                }
                var_46 += ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) (+(var_6)))) ? (var_13) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_6))))) : (((/* implicit */unsigned long long int) var_11)));
                var_47 = ((/* implicit */int) var_13);
            }
            var_48 = ((/* implicit */unsigned short) var_14);
        }
        arr_74 [i_0] [i_0] = (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_4)) ? (var_6) : (var_14)))))));
    }
    var_49 += (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_2)) >> (((var_1) - (11589824515960845882ULL))))))))));
}
