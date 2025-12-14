/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12275
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (+(var_4))))))));
    var_14 = ((/* implicit */_Bool) (+(var_1)));
    var_15 = max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) || (((/* implicit */_Bool) ((unsigned int) var_5)))))), (((((var_7) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_16 += ((/* implicit */short) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */long long int) ((unsigned int) var_6))) : (((var_7) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (long long int i_4 = 1; i_4 < 11; i_4 += 4) 
                        {
                            arr_14 [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_6)))))));
                            var_17 = ((/* implicit */unsigned short) ((unsigned long long int) var_11));
                        }
                        for (unsigned int i_5 = 4; i_5 < 9; i_5 += 3) 
                        {
                            arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] = ((var_9) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))));
                            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((long long int) ((long long int) var_4))))));
                        }
                        for (short i_6 = 0; i_6 < 12; i_6 += 4) 
                        {
                            var_19 += ((/* implicit */unsigned char) (~(((/* implicit */int) var_2))));
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_2)) + (2147483647))) << (((((var_11) + (2963372067462094793LL))) - (23LL)))))))))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 12; i_7 += 2) 
                        {
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((var_7) ? (((/* implicit */int) var_3)) : ((~(((/* implicit */int) var_0)))))))));
                            arr_26 [i_0] [i_0] [i_1 + 3] [i_2] [i_3] [i_7] [(_Bool)1] = ((/* implicit */long long int) var_2);
                            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) (-(var_8)))) : (((var_5) >> (((((/* implicit */int) var_2)) + (141))))))))));
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_12)) / (var_8)))) ? (((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6)))))));
                        }
                        var_24 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
                        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((unsigned int) var_1)) : (((unsigned int) var_2))));
                    }
                } 
            } 
            var_26 = ((var_4) * (((/* implicit */unsigned int) ((/* implicit */int) var_6))));
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 4; i_8 < 9; i_8 += 3) 
            {
                for (unsigned short i_9 = 4; i_9 < 10; i_9 += 4) 
                {
                    {
                        var_27 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_12))));
                        var_28 = ((/* implicit */int) (!(((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))))));
                        var_29 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_12)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) < (((/* implicit */int) var_10)))))) : (((((/* implicit */_Bool) var_1)) ? (var_11) : (var_11)))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (long long int i_10 = 0; i_10 < 12; i_10 += 2) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_12 = 0; i_12 < 12; i_12 += 2) 
                    {
                        var_30 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6))))) / (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_4)) : (var_5))));
                        arr_41 [i_12] [i_0] [(unsigned char)10] [i_12] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) var_9)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_10))))));
                    }
                    for (unsigned int i_13 = 0; i_13 < 12; i_13 += 4) 
                    {
                        var_31 = ((long long int) ((var_7) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6))));
                        var_32 = ((/* implicit */unsigned char) var_2);
                    }
                    var_33 *= ((/* implicit */unsigned long long int) ((short) -480744390));
                    var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) (~(((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */unsigned long long int) var_12)))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_14 = 1; i_14 < 9; i_14 += 3) 
        {
            for (int i_15 = 0; i_15 < 12; i_15 += 4) 
            {
                {
                    var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) && (((/* implicit */_Bool) (+(((/* implicit */int) var_10))))))))));
                    /* LoopNest 2 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        for (unsigned char i_17 = 0; i_17 < 12; i_17 += 2) 
                        {
                            {
                                var_36 = ((/* implicit */_Bool) ((short) ((((/* implicit */int) var_10)) < (((/* implicit */int) var_2)))));
                                var_37 |= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((var_7) && (((/* implicit */_Bool) var_3)))))) * (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_8)))));
                            }
                        } 
                    } 
                    var_38 = ((/* implicit */long long int) var_5);
                }
            } 
        } 
    }
    for (long long int i_18 = 0; i_18 < 12; i_18 += 4) 
    {
        arr_58 [i_18] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_8))))));
        var_39 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) ((long long int) var_8))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */long long int) var_4))))))));
        /* LoopSeq 2 */
        for (signed char i_19 = 0; i_19 < 12; i_19 += 2) 
        {
            var_40 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_11)))) ? ((-(var_5))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
            arr_61 [i_18] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_9)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_9))) : (((/* implicit */unsigned long long int) max((var_8), (var_11))))))) ? (((/* implicit */unsigned long long int) (~(var_4)))) : (max((((/* implicit */unsigned long long int) var_3)), ((-(var_9)))))));
        }
        for (unsigned long long int i_20 = 0; i_20 < 12; i_20 += 3) 
        {
            var_41 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_3)), ((~(((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
            arr_64 [(_Bool)1] [i_20] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_12)), (var_5)))) ? (((unsigned long long int) var_8)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_3))))))))) ? (min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_12)) : (var_5))), (((/* implicit */unsigned long long int) (-(var_11)))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_12))))), (((long long int) var_1)))))));
        }
    }
    for (long long int i_21 = 3; i_21 < 8; i_21 += 1) 
    {
        arr_67 [i_21] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) (-(var_12)))) && (((/* implicit */_Bool) ((var_7) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_12)))))))));
        var_42 ^= ((((/* implicit */_Bool) ((int) ((long long int) var_12)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_7))) ? (((long long int) var_9)) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_0))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7))))) ? ((+(var_5))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))))));
    }
}
