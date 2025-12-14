/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115565
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
    var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2131760364)) ? (-2131760364) : (((/* implicit */int) (short)-18))))) == (3426089195557863270ULL)));
    /* LoopSeq 1 */
    for (int i_0 = 4; i_0 < 10; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned long long int) ((long long int) ((int) (unsigned char)189)));
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                {
                    var_20 -= ((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) (~(var_2)))))));
                    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (!(((/* implicit */_Bool) ((int) var_0))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 1; i_4 < 11; i_4 += 3) 
                        {
                            arr_11 [i_0] [3] [i_0] [i_0 + 2] [i_0] = ((/* implicit */unsigned short) ((short) (short)18));
                            var_22 = (((!(((/* implicit */_Bool) 12635497594955638795ULL)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65519))) & (var_2))) : (23U));
                            arr_12 [i_0] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned int) ((unsigned char) (signed char)-60));
                        }
                        /* LoopSeq 2 */
                        for (int i_5 = 0; i_5 < 12; i_5 += 2) 
                        {
                            var_23 = ((/* implicit */short) (~(var_15)));
                            var_24 = (+(((/* implicit */int) arr_6 [i_1 + 4])));
                        }
                        for (unsigned long long int i_6 = 1; i_6 < 11; i_6 += 3) 
                        {
                            var_25 |= ((/* implicit */int) (~(arr_14 [i_0 - 4] [i_0] [i_2] [i_2 + 2] [i_6])));
                            var_26 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)5)) ? (((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1] [i_0 - 1])) : (((/* implicit */int) var_8))));
                        }
                        arr_18 [i_0] [i_0] [i_2 + 2] [i_2 + 2] [(unsigned short)7] [i_3] = ((/* implicit */unsigned short) ((short) (short)12));
                        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) var_3))));
                        var_28 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) 535138299))));
                    }
                }
            } 
        } 
        arr_19 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (-1491810283)))))) ? ((+((+(13041748532896353392ULL))))) : (((/* implicit */unsigned long long int) (~(189688438))))));
        arr_20 [i_0 - 2] [i_0 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) (+(arr_13 [i_0])))) ? (((unsigned long long int) var_5)) : (((/* implicit */unsigned long long int) ((int) 392655987))))) : (((/* implicit */unsigned long long int) ((((36591049912984554ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 1045248683)))) : (var_2))))));
        var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) (-(((/* implicit */int) var_8)))))));
    }
    var_30 = ((/* implicit */unsigned short) max((var_3), (((/* implicit */unsigned int) (-((-(((/* implicit */int) (signed char)-10)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 1; i_7 < 13; i_7 += 3) 
    {
        for (unsigned long long int i_8 = 2; i_8 < 12; i_8 += 3) 
        {
            {
                arr_27 [i_7] [i_8] = ((/* implicit */signed char) min(((~(min((var_4), (((/* implicit */unsigned long long int) 2147483647)))))), (((/* implicit */unsigned long long int) 140456177))));
                var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_7] [i_7] [i_7 - 1])) ? (((var_12) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) max((0), (((/* implicit */int) (unsigned short)6549)))))));
                /* LoopSeq 1 */
                for (int i_9 = 0; i_9 < 14; i_9 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 3) 
                    {
                        for (unsigned short i_11 = 0; i_11 < 14; i_11 += 3) 
                        {
                            {
                                var_32 = ((/* implicit */int) (+(((((/* implicit */_Bool) (unsigned char)255)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                                var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) ((((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) -2094076392)), (arr_29 [i_7] [i_11] [i_11]))), (((/* implicit */unsigned int) var_16))))) % (var_11))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (signed char i_12 = 3; i_12 < 12; i_12 += 4) 
                    {
                        arr_39 [i_9] = ((/* implicit */long long int) (-(min((((/* implicit */int) (unsigned short)3795)), (arr_38 [i_9] [i_8] [i_12 - 1] [i_9] [i_7 - 1] [i_8 - 2])))));
                        arr_40 [i_9] [i_8] = ((/* implicit */long long int) (short)31319);
                        var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) 1978612312U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61737))) : (1978612325U)))))));
                    }
                    for (signed char i_13 = 0; i_13 < 14; i_13 += 2) 
                    {
                        var_35 = ((/* implicit */int) min((var_35), ((+(-189688439)))));
                        var_36 = ((/* implicit */int) ((((/* implicit */_Bool) max((615402223), (((/* implicit */int) (short)20))))) ? (arr_25 [i_9] [i_9] [i_8]) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_15) : (var_11)))) ? (var_14) : (((/* implicit */unsigned long long int) 0))))));
                        var_37 = ((/* implicit */unsigned long long int) max((var_37), (((((/* implicit */unsigned long long int) ((/* implicit */int) min((max((((/* implicit */unsigned char) (signed char)-58)), ((unsigned char)61))), ((unsigned char)240))))) & (6871245781925160105ULL)))));
                        var_38 = ((/* implicit */unsigned short) var_2);
                    }
                }
                var_39 = ((/* implicit */int) ((unsigned long long int) min((6558396862448721399ULL), (((/* implicit */unsigned long long int) arr_36 [i_7 - 1] [i_8 + 1] [i_7])))));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 14; i_14 += 2) 
                {
                    for (int i_15 = 0; i_15 < 14; i_15 += 2) 
                    {
                        {
                            arr_49 [i_7] [i_7] [i_14] [i_15] [i_7] [i_14] = ((/* implicit */signed char) 2045123162);
                            var_40 = ((/* implicit */int) 8864131489138744595ULL);
                        }
                    } 
                } 
            }
        } 
    } 
}
