/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11262
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */long long int) arr_3 [i_1] [i_1]);
                    arr_6 [i_1] = ((/* implicit */long long int) 1363471460U);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_11 [i_1] [i_1] [i_2] [i_1] [11ULL] [(short)1] = (~(var_8));
                                arr_12 [i_1] [i_1] = ((/* implicit */unsigned short) max(((short)-131), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_4] [i_2] [i_1] [i_0])) ? (var_4) : (((/* implicit */int) arr_3 [i_1] [i_2]))))))))));
                                arr_13 [i_1] [i_1] = ((/* implicit */short) ((_Bool) var_0));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned int i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        var_12 &= ((/* implicit */int) ((((((/* implicit */_Bool) (short)8064)) ? (((arr_15 [i_0] [13ULL] [i_5]) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-28723))))) : (0U))) << (((/* implicit */int) (_Bool)1))));
                        var_13 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) var_3)) != (arr_5 [i_5] [i_5] [i_5] [(unsigned char)13]))))));
                        var_14 = ((/* implicit */unsigned int) ((((11432974610998826750ULL) + (((/* implicit */unsigned long long int) -2123083709)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_4)) > (18446744073709551584ULL)))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            arr_18 [i_0] [(signed char)16] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_9 [i_6] [i_5] [i_0] [i_2] [i_1] [i_0])))) ? (max((8925562262581914916ULL), (((/* implicit */unsigned long long int) (short)24568)))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 18143312225873276949ULL)) ? (((/* implicit */int) (short)25839)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((_Bool) 0))))))));
                            arr_19 [i_0] [i_1] [i_2] [i_5] [i_1] = ((/* implicit */unsigned short) (((~(((((/* implicit */_Bool) arr_0 [11])) ? (2889690092105760575ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))) << (((/* implicit */int) ((arr_5 [i_0] [i_1] [i_2] [i_5]) > (max((((/* implicit */int) var_9)), (0))))))));
                            var_15 = var_3;
                        }
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        var_16 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_2] [i_0])) / (((/* implicit */int) arr_3 [i_2] [i_7]))))) - ((~(var_5)))));
                        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)26779))) > (var_5)))), (((((/* implicit */_Bool) 0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9)))))) >> (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18384675654046114356ULL)) ? (18384675654046114356ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_2])))))) && (((/* implicit */_Bool) 4194048U))))))))));
                        arr_22 [i_2] [i_1] [i_2] [i_7] &= ((/* implicit */unsigned int) ((((((-81751284) % (((/* implicit */int) (unsigned short)57238)))) <= (-11))) ? (((/* implicit */unsigned long long int) min((var_4), (var_4)))) : (18384675654046114353ULL)));
                    }
                    for (unsigned long long int i_8 = 2; i_8 < 16; i_8 += 3) 
                    {
                        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */int) ((arr_24 [i_0] [i_0] [i_2] [i_8] [i_8 + 1] [i_8 + 3]) >= (((/* implicit */unsigned long long int) var_5))))) + (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_25 [i_8] [i_8 - 1] [i_8 + 2] [i_8] [i_8])) > (((var_2) * (((/* implicit */unsigned long long int) arr_25 [i_0] [(signed char)5] [i_0] [i_2] [i_8]))))))))))));
                        arr_27 [i_0] [i_1] [i_2] [i_8] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_5) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
                        var_19 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(6861004568861447978ULL)))) ? ((((-(((/* implicit */int) (short)24576)))) | ((+(((/* implicit */int) var_7)))))) : (((/* implicit */int) min(((unsigned short)65535), ((unsigned short)49185))))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_9 = 2; i_9 < 20; i_9 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_28 [i_9 - 2] [i_9 + 1])) == (7))))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */int) ((var_10) >= (478903307880695376ULL)))) : (((/* implicit */int) ((var_2) == (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) >> (((293946024) - (293946015)))))))))));
        arr_31 [5LL] = ((/* implicit */short) (-(((arr_29 [i_9 + 2]) ? (((/* implicit */int) (short)4096)) : (((/* implicit */int) (_Bool)0))))));
        /* LoopNest 2 */
        for (unsigned short i_10 = 0; i_10 < 22; i_10 += 3) 
        {
            for (short i_11 = 2; i_11 < 20; i_11 += 2) 
            {
                {
                    var_22 = ((((/* implicit */_Bool) (short)-8420)) ? ((-(((/* implicit */int) (unsigned short)4095)))) : ((-(((/* implicit */int) var_7)))));
                    var_23 = ((/* implicit */unsigned int) max((var_4), (((((/* implicit */_Bool) arr_28 [i_9 - 1] [i_11 - 1])) ? ((-(((/* implicit */int) arr_28 [17] [i_9])))) : ((-(-1)))))));
                    arr_36 [i_9] &= ((/* implicit */unsigned short) max((((/* implicit */short) (unsigned char)0)), ((short)30108)));
                }
            } 
        } 
        arr_37 [i_9] [6ULL] = ((/* implicit */_Bool) ((signed char) ((int) 1119387916)));
    }
    for (unsigned short i_12 = 2; i_12 < 20; i_12 += 2) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned short) ((((arr_39 [i_12 + 1]) - (arr_39 [i_12 - 1]))) != (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= ((-(2147483626))))))));
        var_25 *= ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_33 [i_12 - 2])) && (arr_29 [i_12 - 1])))), (((long long int) (-(((/* implicit */int) var_3)))))));
        /* LoopSeq 2 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            arr_44 [(unsigned short)13] [6LL] = ((/* implicit */unsigned long long int) ((((long long int) -1)) + (((-5340270426974212352LL) + (((/* implicit */long long int) -1))))));
            arr_45 [i_13] = ((/* implicit */unsigned long long int) max((max((-7880194360360273750LL), (((/* implicit */long long int) -1)))), (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_12])) && (((/* implicit */_Bool) 4301060843821987981LL))))))))));
        }
        for (int i_14 = 0; i_14 < 22; i_14 += 1) 
        {
            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) 1417637250))));
            arr_50 [i_14] [i_14] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) << (((/* implicit */int) (_Bool)1))))) ? (arr_46 [i_12 - 2] [i_14]) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_41 [(_Bool)1])))))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-16434))));
        }
    }
}
