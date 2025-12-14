/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120730
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 17; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */int) arr_3 [i_1 + 1]);
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((arr_1 [i_1 + 1]) <= (arr_1 [i_1 - 2]))) ? (arr_1 [i_1 - 1]) : (min((arr_1 [i_1 - 1]), (((/* implicit */long long int) var_9)))))))));
                            /* LoopSeq 2 */
                            for (unsigned int i_4 = 0; i_4 < 18; i_4 += 1) /* same iter space */
                            {
                                arr_14 [i_0] [(signed char)12] [i_0] = ((/* implicit */unsigned long long int) arr_13 [17LL] [17LL] [i_2] [i_2] [i_2]);
                                arr_15 [i_0] [i_1 - 2] [i_2] [i_0] [i_4] = ((/* implicit */_Bool) arr_9 [i_0] [i_1 - 4] [i_2] [i_2]);
                            }
                            for (unsigned int i_5 = 0; i_5 < 18; i_5 += 1) /* same iter space */
                            {
                                var_18 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1 - 3])) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_1 - 3])) : (((/* implicit */int) arr_18 [i_1 - 2] [i_1] [i_1 - 1])))) / (((/* implicit */int) arr_5 [i_0] [i_1] [i_1 - 1]))));
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] &= ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_10 [i_2] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2]))) : (((((/* implicit */_Bool) var_8)) ? (var_16) : (((/* implicit */unsigned long long int) -3)))))), (((max((((/* implicit */unsigned long long int) var_1)), (arr_10 [i_3] [i_3]))) << (((/* implicit */int) ((((/* implicit */int) (signed char)51)) >= (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
                                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1)))))));
                                var_20 = ((/* implicit */long long int) (+((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_3 [i_1 - 3])) : (7ULL)))));
                                var_21 = ((/* implicit */int) arr_9 [3U] [(unsigned char)17] [(unsigned char)17] [i_3]);
                            }
                            arr_20 [i_0] [i_3] [i_2] [i_1 - 4] [i_0] = (i_0 % 2 == 0) ? (((((((/* implicit */int) var_7)) << (((arr_16 [i_0] [i_0] [i_0] [i_3] [i_0] [i_0]) + (555279177))))) % (max((((/* implicit */int) arr_9 [i_0] [i_1 - 2] [i_0] [i_0])), (arr_12 [i_0] [i_1] [i_0]))))) : (((((((/* implicit */int) var_7)) << (((((arr_16 [i_0] [i_0] [i_0] [i_3] [i_0] [i_0]) + (555279177))) - (566871507))))) % (max((((/* implicit */int) arr_9 [i_0] [i_1 - 2] [i_0] [i_0])), (arr_12 [i_0] [i_1] [i_0])))));
                            var_22 -= ((max((((/* implicit */int) arr_13 [i_1 + 1] [i_1 - 1] [6LL] [6LL] [16])), (arr_17 [i_1 - 1] [i_1] [i_1 - 1] [(_Bool)0] [i_1 - 4]))) ^ (((/* implicit */int) (_Bool)1)));
                            var_23 = ((/* implicit */unsigned char) (+(min((arr_7 [i_1 - 2] [i_1 - 2] [i_1 - 2]), (arr_7 [i_1 - 2] [i_1 - 2] [i_1 - 2])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 &= ((/* implicit */int) var_6);
    var_25 = ((/* implicit */signed char) var_8);
    /* LoopSeq 2 */
    for (signed char i_6 = 4; i_6 < 9; i_6 += 2) 
    {
        arr_25 [i_6] = ((arr_0 [i_6 - 3]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((((/* implicit */unsigned long long int) arr_12 [i_6] [i_6] [i_6])) > (arr_10 [i_6] [i_6]))), (arr_21 [i_6 - 2] [(_Bool)1]))))) : ((+(max((arr_10 [i_6] [i_6]), (((/* implicit */unsigned long long int) arr_6 [(_Bool)1] [i_6 + 1] [i_6])))))));
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
        {
            for (unsigned int i_8 = 1; i_8 < 9; i_8 += 3) 
            {
                {
                    arr_32 [i_7] [i_7] [i_8 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_7] [i_8])) ? (arr_10 [i_7] [i_7]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_14)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_7] [i_7] [i_7 + 1] [(_Bool)1] [i_7] [i_7])) ? (((/* implicit */long long int) (((_Bool)1) ? (arr_3 [(unsigned char)10]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [(_Bool)1] [i_7] [(_Bool)1] [i_7 + 1])))))) : ((~(-872848356159954315LL))))))));
                    var_26 |= ((/* implicit */int) ((((/* implicit */_Bool) max((arr_31 [i_6 + 1] [i_6] [(_Bool)1]), (((/* implicit */long long int) var_1))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_7] [i_7 + 1]))) + (arr_24 [7])))) ? (((/* implicit */long long int) min((((/* implicit */int) (_Bool)0)), (-2147483624)))) : (arr_7 [i_6] [i_7] [(_Bool)1]))) : (((/* implicit */long long int) ((/* implicit */int) ((19LL) == (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_6] [i_8 - 1] [i_6])))))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned char i_9 = 1; i_9 < 9; i_9 += 2) 
        {
            var_27 *= ((/* implicit */_Bool) min((arr_30 [i_6] [i_6]), (((/* implicit */unsigned int) (signed char)118))));
            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) max((arr_28 [i_6]), (min((2613770083536821368LL), (((/* implicit */long long int) 2U)))))))));
        }
        for (unsigned char i_10 = 0; i_10 < 10; i_10 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 1) 
            {
                for (long long int i_12 = 2; i_12 < 8; i_12 += 3) 
                {
                    {
                        var_29 = ((/* implicit */int) (_Bool)1);
                        arr_42 [i_6] [i_6] [(_Bool)1] [i_6 - 3] [i_6] = ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((/* implicit */int) ((arr_1 [i_12 - 1]) >= (((/* implicit */long long int) 8191U))))) : (((/* implicit */int) arr_9 [i_12 + 1] [15ULL] [i_6] [i_6])));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 10; i_13 += 4) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            arr_51 [i_14] [i_13] [i_10] [i_6] = ((4294967295U) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((263020887U), (((/* implicit */unsigned int) var_9))))))))));
                            arr_52 [i_6] [i_6] &= ((((((/* implicit */_Bool) arr_22 [i_6 - 4])) ? (arr_46 [i_6 - 4] [i_6 - 3] [(_Bool)0] [(_Bool)0]) : (arr_22 [i_6 - 4]))) - (((arr_46 [i_6 - 4] [i_6 - 3] [i_13] [i_13]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_6 - 4] [i_6 - 3] [i_10]))))));
                        }
                        arr_53 [i_6] [(_Bool)1] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_34 [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_6] [i_6 - 2] [i_6 - 4] [i_6]))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) arr_1 [i_6])) : (var_13)))))));
                        arr_54 [i_6] [i_10] = ((_Bool) arr_22 [i_13]);
                        arr_55 [i_6] [i_10] [i_13] [i_13] [i_14] [i_13] |= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_28 [i_6])) ? (((/* implicit */long long int) 0)) : (arr_28 [i_6])))));
                        var_30 = (((!(((/* implicit */_Bool) -4503599627370496LL)))) ? (((/* implicit */int) arr_21 [i_6 - 3] [i_6 + 1])) : (((/* implicit */int) (_Bool)1)));
                    }
                } 
            } 
            var_31 ^= (((((~(((/* implicit */int) (unsigned char)32)))) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1))));
            arr_56 [i_6] [i_6 - 1] = ((/* implicit */signed char) ((((/* implicit */int) ((arr_46 [i_6] [i_6 - 2] [i_6 - 3] [i_10]) >= (arr_46 [i_6] [i_6 + 1] [i_10] [i_6 - 3])))) < (((/* implicit */int) ((((/* implicit */_Bool) arr_46 [i_10] [i_6 + 1] [i_10] [i_6])) || (((/* implicit */_Bool) -9223372036854775801LL)))))));
        }
        arr_57 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [i_6 - 3] [i_6 - 4] [(_Bool)1]))))) ? (((/* implicit */unsigned long long int) (((((~(((/* implicit */int) arr_49 [(_Bool)1] [i_6] [i_6] [i_6] [i_6 - 1] [i_6])))) + (2147483647))) >> (((arr_28 [i_6]) + (2211407663801667211LL)))))) : (((max((((/* implicit */unsigned long long int) var_0)), (arr_10 [i_6] [i_6 + 1]))) << (((var_0) ? (((/* implicit */int) arr_35 [i_6] [i_6] [i_6])) : (((/* implicit */int) arr_49 [i_6 - 3] [i_6] [i_6] [i_6 - 2] [i_6 - 2] [(_Bool)1]))))))));
        arr_58 [i_6] = ((/* implicit */int) (+(max((16831760237344396851ULL), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_37 [i_6] [i_6])))))))));
    }
    for (int i_16 = 1; i_16 < 23; i_16 += 4) 
    {
        arr_63 [i_16] [i_16] = ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_59 [i_16] [i_16 - 1])) / (((/* implicit */int) arr_59 [i_16] [i_16 - 1]))))));
        arr_64 [i_16] = ((/* implicit */_Bool) (~(((arr_60 [11ULL]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
    }
    var_32 = ((/* implicit */int) (unsigned char)7);
}
