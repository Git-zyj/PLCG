/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111974
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
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        arr_2 [13] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((short) var_15))) ? (((((/* implicit */_Bool) var_1)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (var_3) : (var_13))))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            arr_5 [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_4), (((/* implicit */long long int) var_0))))) ? (max((((/* implicit */unsigned long long int) 4194048U)), (262144ULL))) : (((/* implicit */unsigned long long int) ((int) var_14)))));
            /* LoopSeq 1 */
            for (unsigned short i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                var_18 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (~((-(((/* implicit */int) var_2))))))), ((-(max((((/* implicit */unsigned long long int) var_10)), (var_15)))))));
                arr_8 [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) ((unsigned int) var_16)))))) ? (((((/* implicit */_Bool) var_6)) ? (max((((/* implicit */unsigned int) var_1)), (var_14))) : (var_17))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_10))) ? (((/* implicit */unsigned int) ((int) var_8))) : (min((var_17), (((/* implicit */unsigned int) var_9))))));
                var_20 -= ((/* implicit */signed char) ((short) ((int) var_8)));
                arr_9 [i_0] [i_2] [i_1] [i_2] = ((/* implicit */long long int) (-(var_15)));
            }
        }
        for (short i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            var_21 = ((/* implicit */int) ((unsigned int) min((((((/* implicit */_Bool) var_13)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_11))))), (((/* implicit */long long int) var_13)))));
            /* LoopNest 3 */
            for (unsigned int i_4 = 2; i_4 < 13; i_4 += 3) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    for (unsigned int i_6 = 3; i_6 < 13; i_6 += 1) 
                    {
                        {
                            var_22 = (!(((/* implicit */_Bool) min((var_17), (((/* implicit */unsigned int) var_7))))));
                            arr_19 [i_0] [i_3] [i_3] [i_5] [i_6] = ((/* implicit */short) max((max((min((var_15), (((/* implicit */unsigned long long int) var_14)))), (min((((/* implicit */unsigned long long int) (unsigned short)16376)), (1769803680939287519ULL))))), (((/* implicit */unsigned long long int) var_6))));
                            var_23 = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_16))))), (((((/* implicit */_Bool) var_14)) ? (var_17) : (((/* implicit */unsigned int) var_3)))));
                            arr_20 [(unsigned short)8] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0)))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_17) : (((/* implicit */unsigned int) var_3))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((unsigned short) (unsigned short)8)))))));
                        }
                    } 
                } 
            } 
        }
        /* LoopNest 3 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (signed char i_8 = 1; i_8 < 12; i_8 += 3) 
            {
                for (int i_9 = 1; i_9 < 13; i_9 += 3) 
                {
                    {
                        var_24 -= (~(((/* implicit */int) max((var_10), (((/* implicit */unsigned short) var_9))))));
                        var_25 = ((/* implicit */_Bool) (+(((/* implicit */int) max((var_9), (var_6))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_10 = 0; i_10 < 14; i_10 += 3) 
        {
            for (unsigned int i_11 = 0; i_11 < 14; i_11 += 3) 
            {
                {
                    arr_33 [i_11] [i_11] = max((((/* implicit */int) ((unsigned short) var_9))), ((+(((/* implicit */int) var_16)))));
                    /* LoopSeq 3 */
                    for (unsigned short i_12 = 0; i_12 < 14; i_12 += 3) 
                    {
                        var_26 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_14)) ? (var_8) : (((/* implicit */long long int) var_17)))));
                        var_27 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12)))));
                        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) var_11))));
                    }
                    for (unsigned short i_13 = 0; i_13 < 14; i_13 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)53)) ? (((/* implicit */int) (unsigned short)65526)) : (((/* implicit */int) (unsigned short)65526))));
                        arr_40 [(_Bool)1] [1ULL] [i_11] [i_11] [(unsigned char)13] = ((/* implicit */short) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((unsigned char) var_11))) : (((/* implicit */int) var_0))))));
                    }
                    for (short i_14 = 0; i_14 < 14; i_14 += 4) 
                    {
                        arr_43 [(signed char)10] [(short)5] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */short) min((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))))), (((((/* implicit */_Bool) ((unsigned int) var_11))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (max((var_8), (((/* implicit */long long int) var_11))))))));
                        var_30 = ((/* implicit */unsigned long long int) ((unsigned char) var_9));
                    }
                }
            } 
        } 
    }
    for (unsigned char i_15 = 0; i_15 < 12; i_15 += 4) 
    {
        arr_46 [i_15] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_8)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_14)))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)34))))) : (((long long int) max((((/* implicit */unsigned long long int) var_3)), (var_15))))));
        /* LoopNest 2 */
        for (unsigned int i_16 = 0; i_16 < 12; i_16 += 4) 
        {
            for (unsigned int i_17 = 0; i_17 < 12; i_17 += 1) 
            {
                {
                    var_31 = ((((/* implicit */_Bool) ((var_12) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_17)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_14)))) : (max((((/* implicit */unsigned int) (_Bool)1)), (2047U))));
                    var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5))))) ? (min((var_4), (((/* implicit */long long int) (~(((/* implicit */int) var_2))))))) : (max((var_8), (((((/* implicit */_Bool) var_16)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_16)))))))));
                    /* LoopNest 2 */
                    for (signed char i_18 = 0; i_18 < 12; i_18 += 3) 
                    {
                        for (long long int i_19 = 2; i_19 < 9; i_19 += 3) 
                        {
                            {
                                arr_57 [i_17] = ((/* implicit */signed char) (((!(var_12))) ? (((/* implicit */int) min((var_10), (((/* implicit */unsigned short) var_11))))) : (min((var_3), (((/* implicit */int) var_5))))));
                                arr_58 [i_15] [(_Bool)1] [10] [i_18] [i_19] [i_17] [i_15] = ((/* implicit */signed char) max((((/* implicit */unsigned int) max((max((var_13), (((/* implicit */int) var_5)))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_10)) : (var_3)))))), ((+(var_14)))));
                                var_33 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_7)))) : (var_15))));
                                var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) ((long long int) (~(((/* implicit */int) var_1))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_20 = 0; i_20 < 12; i_20 += 3) 
        {
            for (unsigned short i_21 = 1; i_21 < 10; i_21 += 4) 
            {
                {
                    var_35 = ((/* implicit */int) (~(min((((/* implicit */unsigned long long int) var_1)), (var_15)))));
                    arr_66 [i_21] [6U] [i_15] [i_21] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_1)), (var_17)))) ? (((/* implicit */int) var_6)) : (max((min((15), (((/* implicit */int) (unsigned short)65526)))), (((/* implicit */int) ((short) var_0)))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (short i_22 = 0; i_22 < 12; i_22 += 1) 
        {
            arr_69 [i_15] [i_22] [i_22] = ((/* implicit */short) (-(((((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) var_13))))) ? (((var_12) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) var_7))))));
            /* LoopSeq 1 */
            for (unsigned char i_23 = 0; i_23 < 12; i_23 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_24 = 0; i_24 < 12; i_24 += 3) 
                {
                    for (unsigned int i_25 = 0; i_25 < 12; i_25 += 2) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_1), (((/* implicit */short) var_0))))) ? ((-(var_8))) : (((/* implicit */long long int) max((((/* implicit */int) var_0)), (var_3))))));
                            var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) ((unsigned int) ((int) var_9))))));
                            arr_77 [i_15] [i_15] [i_22] [i_23] [i_24] [i_25] [3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) var_13))) ? ((~(((((/* implicit */_Bool) (signed char)-1)) ? (14734531192570416814ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32758))))))) : (((/* implicit */unsigned long long int) min((min((var_8), (((/* implicit */long long int) var_13)))), (((/* implicit */long long int) var_2)))))));
                        }
                    } 
                } 
                var_38 = ((/* implicit */unsigned short) var_5);
            }
            var_39 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */short) var_12)), (var_7)))) ? (((long long int) var_14)) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (var_10)))))));
            var_40 = ((/* implicit */unsigned char) max((((/* implicit */int) ((short) var_3))), ((+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2))))))));
        }
        for (_Bool i_26 = 1; i_26 < 1; i_26 += 1) 
        {
            var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) (+(var_8))))));
            arr_80 [i_26] = ((/* implicit */_Bool) ((signed char) ((signed char) -2622048171725690024LL)));
        }
    }
    var_42 = ((/* implicit */unsigned char) var_2);
    var_43 = ((/* implicit */unsigned int) min((var_43), (((/* implicit */unsigned int) var_13))));
}
