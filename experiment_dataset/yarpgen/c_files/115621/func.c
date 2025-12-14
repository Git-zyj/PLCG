/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115621
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_4 [(unsigned short)1] [i_1 - 1] [i_1 + 2])) >= (((/* implicit */int) min((((/* implicit */unsigned short) arr_4 [i_0] [i_1 + 2] [i_2])), (var_10))))))) >> (((((/* implicit */int) (unsigned char)24)) - (((/* implicit */int) var_17))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_13 [i_4] [(unsigned short)11] [i_2] [11] [10] = ((/* implicit */signed char) ((int) ((((((((/* implicit */_Bool) (short)30242)) ? (((/* implicit */int) (short)-6494)) : (((/* implicit */int) var_5)))) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1))))));
                                var_19 = ((long long int) ((arr_11 [i_0] [i_1 - 2] [(_Bool)1]) | (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))));
                                var_20 = ((/* implicit */short) (unsigned char)24);
                                arr_14 [i_0] [i_1 - 1] [i_0] [i_3] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)231)) ? ((-((+(((/* implicit */int) arr_4 [i_1 + 3] [(unsigned char)8] [i_4])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1 - 3] [i_1 - 3])))))));
                                arr_15 [i_0] [i_0] [2ULL] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_3)) ? (arr_0 [(unsigned char)7] [(unsigned char)4]) : (var_0)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11620850337139236097ULL)) ? (var_1) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))) ? (((/* implicit */long long int) ((arr_1 [10LL] [10LL]) ? (((/* implicit */int) arr_12 [i_0] [i_0])) : (arr_3 [i_0] [i_0])))) : (min((arr_10 [(short)9] [i_0]), (arr_2 [i_0] [i_0])))))) * (((((/* implicit */unsigned long long int) (+(arr_2 [11] [i_0])))) * (max((11620850337139236097ULL), (((/* implicit */unsigned long long int) (unsigned short)65535))))))));
    }
    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (+(((((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_5] [i_5] [i_5]))) - (var_6))) / (((/* implicit */long long int) ((((/* implicit */int) var_13)) - (((/* implicit */int) (short)-8140))))))))))));
            /* LoopNest 2 */
            for (unsigned short i_7 = 1; i_7 < 11; i_7 += 1) 
            {
                for (long long int i_8 = 0; i_8 < 12; i_8 += 2) 
                {
                    {
                        /* LoopSeq 4 */
                        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned char) arr_18 [i_7] [i_7 + 1] [i_7]);
                            var_24 ^= ((/* implicit */_Bool) (+(((/* implicit */int) min((arr_9 [i_9 + 1] [i_9 + 1] [i_7] [i_7 + 1] [i_7 + 1]), (arr_9 [i_9 + 1] [i_9 + 1] [i_8] [i_8] [i_7 + 1]))))));
                            var_25 ^= ((/* implicit */short) var_0);
                        }
                        for (short i_10 = 0; i_10 < 12; i_10 += 2) 
                        {
                            arr_34 [i_5] [i_5] [i_8] [i_10] = ((/* implicit */short) (~(((((/* implicit */_Bool) var_14)) ? (arr_18 [i_5] [i_8] [i_10]) : (arr_18 [i_5] [i_10] [i_10])))));
                            var_26 = max((((((/* implicit */_Bool) ((((((/* implicit */int) arr_24 [i_6])) + (2147483647))) >> (((-568125404) + (568125428)))))) ? (((/* implicit */unsigned int) (~(arr_27 [(unsigned char)7] [i_8] [i_7 - 1] [i_5] [i_5])))) : (arr_28 [i_6] [i_6] [i_10] [i_10] [(signed char)3] [(short)8] [i_7 + 1]))), (((/* implicit */unsigned int) (short)-20728)));
                            var_27 ^= ((/* implicit */_Bool) arr_24 [i_5]);
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 3) 
                        {
                            var_28 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-20767))))) ? (min((arr_22 [i_5] [i_6] [i_6] [i_7]), (((/* implicit */long long int) arr_6 [5LL] [5LL] [i_7 - 1])))) : (((/* implicit */long long int) var_1)))));
                            var_29 = ((/* implicit */short) ((min((arr_29 [9U] [1] [i_7] [i_7] [1] [(short)2] [i_7 + 1]), (((/* implicit */long long int) ((_Bool) 662059240))))) << (((((((/* implicit */_Bool) arr_28 [i_5] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_7] [i_8] [i_11])) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) var_13)), (var_12)))) : (min((arr_23 [i_11] [(unsigned short)8]), (arr_30 [(signed char)11] [i_6] [(short)9] [(signed char)11] [3]))))) - (378553440LL)))));
                            var_30 = ((/* implicit */signed char) arr_31 [i_7 + 1] [6] [i_7 + 1] [i_5] [i_5] [i_5]);
                            arr_37 [i_8] [i_8] [i_8] [i_11] [i_8] [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((arr_16 [i_5]) << (((var_4) - (2159920018U))))))))));
                        }
                        for (unsigned int i_12 = 0; i_12 < 12; i_12 += 2) 
                        {
                            var_31 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((((/* implicit */int) arr_24 [i_12])) * (((/* implicit */int) (unsigned char)25))))) : (((long long int) arr_19 [(unsigned char)4]))))));
                            arr_40 [i_5] [(_Bool)0] [i_8] [i_12] = ((/* implicit */_Bool) (((+(3883856728U))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_7 + 1] [9U] [6U])) ? (((/* implicit */int) arr_8 [i_7 + 1] [1LL] [i_5])) : (((/* implicit */int) arr_8 [i_7 + 1] [i_7 - 1] [i_6])))))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned char i_13 = 0; i_13 < 12; i_13 += 1) 
                        {
                            var_32 = ((/* implicit */short) (-(((((/* implicit */long long int) ((/* implicit */int) var_7))) / (arr_18 [i_6] [i_7] [i_6])))));
                            var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_16) ? (arr_16 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1)))))) ? (((/* implicit */int) ((signed char) arr_28 [i_5] [i_6] [i_5] [i_6] [(short)0] [i_5] [i_13]))) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) << (((((/* implicit */int) arr_7 [i_13] [i_13] [i_13] [i_7 + 1])) - (46965)))))) : (((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_26 [i_5] [i_6] [i_7] [i_8] [i_5]))))) / (((var_15) >> (((var_4) - (2159920008U))))))))))));
                            var_34 = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_18 [i_5] [9] [i_7 + 1])))) ? (arr_18 [i_5] [i_6] [i_7 + 1]) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_18 [(short)7] [(short)7] [i_7 + 1]))))));
                            var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_31 [i_5] [i_5] [i_5] [i_5] [i_5] [11ULL])))))))) > (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned char)233)) - (204)))))) ? (((/* implicit */int) arr_41 [i_8] [i_7] [i_7 - 1] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 - 1])) : (((/* implicit */int) arr_26 [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7]))))));
                        }
                        for (long long int i_14 = 0; i_14 < 12; i_14 += 3) 
                        {
                            var_36 = var_0;
                            var_37 ^= ((/* implicit */int) ((6825893736570315527ULL) - (((/* implicit */unsigned long long int) min((min((arr_29 [i_14] [i_8] [10LL] [10LL] [i_6] [i_5] [i_5]), (((/* implicit */long long int) arr_27 [i_5] [i_5] [i_5] [i_5] [i_5])))), (((/* implicit */long long int) (unsigned short)1)))))));
                            var_38 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((var_3) >> (((((/* implicit */int) arr_21 [i_5] [i_5])) + (106))))) << (((((((((/* implicit */int) arr_35 [i_6] [(_Bool)1] [i_6] [i_6] [10U] [10U])) + (2147483647))) << (((((((/* implicit */int) arr_26 [(signed char)11] [i_6] [(signed char)8] [(signed char)11] [2LL])) + (730))) - (31))))) - (2147466790)))))) ? ((+((-(((/* implicit */int) (unsigned char)56)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)8570))))))))));
                        }
                    }
                } 
            } 
            var_39 = ((/* implicit */int) (((!(((/* implicit */_Bool) max(((short)20786), (arr_6 [3ULL] [3ULL] [3ULL])))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_31 [i_5] [i_5] [1] [i_5] [i_6] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_4))), (((/* implicit */unsigned int) arr_41 [i_5] [i_5] [0] [i_5] [(signed char)9] [i_5] [i_5]))))) : (((((/* implicit */_Bool) ((var_6) << (((((/* implicit */int) (short)5561)) - (5559)))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_5] [i_5] [i_5]))) : (arr_36 [i_6] [i_5] [i_5] [i_5] [i_5]))) : (((/* implicit */unsigned long long int) arr_30 [i_6] [i_6] [i_5] [i_5] [(short)9]))))));
            arr_46 [i_6] [i_5] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((short) (unsigned char)85)))));
        }
        var_40 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_24 [i_5])) ? (207170285) : (((/* implicit */int) var_11)))))) >> (((((/* implicit */int) var_13)) + (54)))));
    }
    /* LoopNest 2 */
    for (short i_15 = 0; i_15 < 18; i_15 += 3) 
    {
        for (int i_16 = 1; i_16 < 14; i_16 += 3) 
        {
            {
                arr_52 [i_16] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_51 [i_15])))) ? (((((/* implicit */_Bool) (unsigned char)85)) ? (1152718004U) : (((/* implicit */unsigned int) var_1)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_50 [i_15] [i_16 + 2] [14LL]))))))) ? (((/* implicit */int) (short)2480)) : ((-(((/* implicit */int) max(((unsigned char)179), (((/* implicit */unsigned char) var_11)))))))));
                /* LoopNest 2 */
                for (long long int i_17 = 2; i_17 < 15; i_17 += 3) 
                {
                    for (unsigned long long int i_18 = 0; i_18 < 18; i_18 += 4) 
                    {
                        {
                            arr_59 [i_16] [i_16] = ((/* implicit */_Bool) (~((((+(var_3))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (_Bool)1))))))));
                            var_41 *= ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_50 [i_17 + 2] [i_17 + 2] [i_16 + 2])) - (((/* implicit */int) arr_50 [i_17 - 2] [i_17 - 2] [i_16 + 4]))))) - (((arr_55 [(short)2] [(short)2] [i_16 + 1]) - (((/* implicit */unsigned long long int) arr_51 [i_17 + 1])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_42 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_4) % (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) : (var_12)));
}
