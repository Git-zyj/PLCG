/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106403
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                arr_4 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) max(((short)-18398), (((/* implicit */short) (signed char)103))))) && (((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned short) var_2)))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) (-(max((max((var_5), (((/* implicit */unsigned int) var_7)))), (((/* implicit */unsigned int) max((((/* implicit */int) var_7)), (var_13))))))));
                            arr_10 [i_1] = ((/* implicit */int) max(((~(var_5))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_12)))))));
                            arr_11 [i_0] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */long long int) var_13);
                        }
                    } 
                } 
                var_16 = ((/* implicit */short) (-((~(((((/* implicit */_Bool) var_2)) ? (var_8) : (var_8)))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_4 = 4; i_4 < 8; i_4 += 3) 
    {
        var_17 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)74)) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned short)2048))));
        arr_16 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) var_13)) : (var_8)));
    }
    for (unsigned int i_5 = 1; i_5 < 16; i_5 += 3) 
    {
        arr_21 [i_5] = ((/* implicit */unsigned char) var_3);
        arr_22 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((-1LL), (((/* implicit */long long int) (signed char)-112))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)480)) ? ((-(((/* implicit */int) (unsigned short)10281)))) : (((/* implicit */int) var_2))))) : (max((2180332746U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-26)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)19)))))))));
        var_18 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~((-(((/* implicit */int) var_3)))))))));
        arr_23 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */unsigned int) var_10))))) ? (((((/* implicit */_Bool) var_9)) ? (var_11) : (var_8))) : (((/* implicit */unsigned int) var_10))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 18; i_6 += 3) 
        {
            for (signed char i_7 = 0; i_7 < 18; i_7 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) var_13);
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 18; i_8 += 3) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 18; i_9 += 3) 
                        {
                            {
                                arr_36 [i_5] [i_5] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)236))))), (var_14)))) || (((/* implicit */_Bool) var_6))));
                                var_20 ^= ((/* implicit */_Bool) (~(((/* implicit */int) (!(((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_0)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 2; i_10 < 17; i_10 += 3) 
                    {
                        for (long long int i_11 = 1; i_11 < 16; i_11 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 2147483640)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-127))) : (15256760652397435677ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_8) & (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (var_13) : (((/* implicit */int) var_1))))) : (max((((/* implicit */unsigned int) var_9)), (var_5))))))));
                                arr_44 [i_7] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (unsigned char)223)) : (((/* implicit */int) (unsigned char)33))));
                                var_22 -= ((/* implicit */_Bool) ((max((((/* implicit */int) min((var_12), (var_2)))), ((~(((/* implicit */int) var_14)))))) - ((((-(((/* implicit */int) var_2)))) * (((/* implicit */int) min((var_12), (var_2))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (signed char i_12 = 1; i_12 < 15; i_12 += 3) 
                    {
                        arr_48 [i_7] [9U] [i_6] [i_7] = ((/* implicit */long long int) var_6);
                        arr_49 [i_5] [i_6] [i_6] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) var_1)) : (var_9)))) ? (((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */int) var_0)))) : (((((/* implicit */int) (signed char)(-127 - 1))) * (((/* implicit */int) (_Bool)1))))));
                    }
                    /* vectorizable */
                    for (signed char i_13 = 0; i_13 < 18; i_13 += 3) 
                    {
                        arr_52 [i_7] [i_7] = ((/* implicit */short) var_13);
                        /* LoopSeq 1 */
                        for (signed char i_14 = 1; i_14 < 16; i_14 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))));
                            var_24 = ((/* implicit */int) var_8);
                            arr_55 [i_5] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-11008)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))));
                        }
                        var_25 = ((/* implicit */signed char) (+(var_8)));
                        /* LoopSeq 1 */
                        for (unsigned short i_15 = 3; i_15 < 17; i_15 += 3) 
                        {
                            var_26 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-117)) == (((/* implicit */int) (signed char)31))));
                            arr_59 [i_5] [(_Bool)1] [i_7] [8LL] [i_15] |= ((/* implicit */signed char) (-(((/* implicit */int) var_3))));
                            arr_60 [i_5] [i_7] [i_7] [i_13] [i_15] = var_3;
                            arr_61 [i_5] [(unsigned short)2] [i_7] [i_13] [i_15] &= (!(var_1));
                            var_27 += ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) var_0)) : (var_13)));
                        }
                    }
                    for (long long int i_16 = 2; i_16 < 17; i_16 += 3) 
                    {
                        arr_64 [i_5 - 1] [i_7] [i_7] [i_16 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_1)), (var_6)))), (max((((/* implicit */unsigned int) var_3)), (var_5)))))) ? (min((var_9), (var_13))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) var_6)))))))));
                        arr_65 [i_5] [i_6] [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */int) var_7)) / (var_13)))))) ? ((-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) var_13)) : (var_11))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? ((-(var_10))) : (((/* implicit */int) var_0)))))));
                        arr_66 [i_5] [i_5] [i_7] [i_16] = ((/* implicit */short) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (min((var_4), (var_11))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_9), (((/* implicit */int) var_6))))) && (((/* implicit */_Bool) max((var_14), (var_14)))))))));
                    }
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_18 = 0; i_18 < 18; i_18 += 3) 
                        {
                            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) 2147483641)) ? (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (short)-512)) : (((/* implicit */int) (signed char)127)))) : (var_9)));
                            var_29 |= ((/* implicit */long long int) (~(var_11)));
                            var_30 = ((/* implicit */unsigned short) var_0);
                            var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_14)) : (var_9))))), (((/* implicit */int) ((((/* implicit */unsigned int) max((var_9), (((/* implicit */int) var_2))))) != ((-(var_8)))))))))));
                            var_32 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_8)))) ? (min((var_5), (((/* implicit */unsigned int) var_2)))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) var_13)) : (var_11))))))));
                        }
                        var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) max((var_6), (((/* implicit */unsigned short) var_12))))) : (max((max((var_13), (((/* implicit */int) var_12)))), (((/* implicit */int) min((var_3), (((/* implicit */signed char) var_1)))))))));
                    }
                }
            } 
        } 
    }
}
