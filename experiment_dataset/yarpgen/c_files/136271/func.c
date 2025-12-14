/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136271
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) var_16))));
        var_21 = var_17;
        var_22 ^= ((/* implicit */unsigned char) var_9);
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 15; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 3; i_2 < 15; i_2 += 3) 
        {
            for (int i_3 = 3; i_3 < 15; i_3 += 3) 
            {
                {
                    arr_10 [i_2] [i_2] [i_2] [i_3] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) var_9)) ? (-1924693065) : (242703310))));
                    arr_11 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */signed char) (-(((((/* implicit */int) arr_7 [i_1] [i_1])) - (((/* implicit */int) arr_9 [i_1] [i_3] [i_1]))))));
                    /* LoopSeq 3 */
                    for (signed char i_4 = 0; i_4 < 16; i_4 += 3) /* same iter space */
                    {
                        arr_14 [i_1] [i_3] [i_3] = var_12;
                        /* LoopSeq 1 */
                        for (int i_5 = 0; i_5 < 16; i_5 += 4) 
                        {
                            arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] [i_3] [i_1] = var_12;
                            var_23 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_3] [i_3])) ? (((((/* implicit */_Bool) arr_0 [i_5])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) (signed char)2)))) : (((/* implicit */int) arr_7 [i_1] [i_1]))));
                            var_24 = ((/* implicit */unsigned char) arr_13 [i_1] [i_3]);
                            var_25 -= ((/* implicit */signed char) ((((/* implicit */int) arr_13 [i_1] [i_5])) >= (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_1] [i_5])) || (((/* implicit */_Bool) arr_4 [i_4] [i_4])))))));
                        }
                        arr_19 [i_1] [(short)2] [(short)2] [i_1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((-905546749) ^ (((/* implicit */int) (signed char)9))))) ? (((/* implicit */int) (signed char)35)) : ((~(arr_6 [i_1] [i_1] [i_1])))));
                        var_26 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) var_3))) == (((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */int) (unsigned char)191)) : (((/* implicit */int) (signed char)-67))))));
                    }
                    for (signed char i_6 = 0; i_6 < 16; i_6 += 3) /* same iter space */
                    {
                        arr_22 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */int) var_11);
                        /* LoopSeq 1 */
                        for (signed char i_7 = 1; i_7 < 15; i_7 += 3) 
                        {
                            var_27 = ((/* implicit */long long int) ((int) arr_17 [i_2] [i_3] [i_2]));
                            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)233)) && (((/* implicit */_Bool) ((int) var_4)))));
                        }
                    }
                    for (signed char i_8 = 0; i_8 < 16; i_8 += 3) /* same iter space */
                    {
                        var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) arr_16 [8] [i_1] [i_1] [i_1] [8])) ? (((/* implicit */int) (unsigned char)91)) : (((/* implicit */int) (signed char)-6)))) : (((/* implicit */int) ((signed char) (unsigned char)165))))))));
                        arr_30 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_1] [i_1] [i_3] [i_3])) ? (((((/* implicit */_Bool) 1905503735)) ? (7418469031450375487LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-122))))))));
                        arr_31 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) -1689885394391188494LL)) ? (((int) (signed char)-118)) : (((/* implicit */int) var_19))));
                        arr_32 [i_1] [i_1] [i_3] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) (signed char)-103)) == (((/* implicit */int) arr_9 [i_8] [i_3] [i_8])))))));
                    }
                }
            } 
        } 
        var_30 = ((/* implicit */int) (signed char)-123);
        arr_33 [i_1] = arr_5 [i_1];
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 20; i_9 += 4) 
    {
        var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((short) -6539380871150775744LL)))));
        var_32 = ((/* implicit */long long int) max((var_32), (((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) arr_35 [i_9])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (arr_35 [i_9])))));
        var_33 = ((/* implicit */int) ((signed char) var_16));
    }
    /* LoopNest 2 */
    for (signed char i_10 = 0; i_10 < 12; i_10 += 3) 
    {
        for (signed char i_11 = 0; i_11 < 12; i_11 += 2) 
        {
            {
                var_34 += ((/* implicit */unsigned char) arr_34 [i_10]);
                var_35 *= ((/* implicit */signed char) ((5912784292293405335LL) >= (1689885394391188490LL)));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_12 = 4; i_12 < 16; i_12 += 2) 
    {
        var_36 ^= ((/* implicit */unsigned char) max((((/* implicit */long long int) var_12)), (arr_35 [i_12])));
        arr_43 [i_12] = var_16;
    }
    /* LoopNest 3 */
    for (signed char i_13 = 0; i_13 < 12; i_13 += 2) 
    {
        for (signed char i_14 = 0; i_14 < 12; i_14 += 4) 
        {
            for (unsigned char i_15 = 0; i_15 < 12; i_15 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_16 = 1; i_16 < 10; i_16 += 3) 
                    {
                        for (unsigned char i_17 = 1; i_17 < 9; i_17 += 2) 
                        {
                            {
                                var_37 = ((/* implicit */signed char) (-((+(((/* implicit */int) ((signed char) var_3)))))));
                                var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-95)), (1689885394391188494LL)))) ? (((/* implicit */long long int) ((((var_5) + (2147483647))) << (((((((((/* implicit */_Bool) arr_51 [i_13] [i_13] [i_13] [i_13])) ? (((/* implicit */int) (short)-26003)) : (((/* implicit */int) var_19)))) + (26020))) - (17)))))) : (arr_20 [i_13] [i_13] [i_13] [i_13]))))));
                                var_39 = ((/* implicit */signed char) max(((unsigned char)61), ((unsigned char)91)));
                            }
                        } 
                    } 
                    arr_58 [i_15] [i_13] [i_15] = ((/* implicit */signed char) var_2);
                    var_40 &= ((/* implicit */int) var_8);
                }
            } 
        } 
    } 
}
