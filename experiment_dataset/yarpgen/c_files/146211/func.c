/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146211
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            arr_4 [(short)1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) & (var_7)))) ? ((~(((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))) : (((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1] [15])))) : (var_4)));
            var_12 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)170)) ? (((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_1)))) ? (var_0) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [11LL] [i_1])))))))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-7288))))), (var_8))))));
            var_13 = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (short)7316)))))), (((((/* implicit */unsigned long long int) var_8)) * (arr_0 [i_0] [i_1 - 1]))))) != (((/* implicit */unsigned long long int) ((((var_7) + (((/* implicit */long long int) ((/* implicit */int) var_3))))) + (((/* implicit */long long int) ((/* implicit */int) var_11))))))));
        }
        for (long long int i_2 = 0; i_2 < 20; i_2 += 4) /* same iter space */
        {
            var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_11))));
            var_15 &= (((-(((((/* implicit */_Bool) arr_5 [i_2] [i_0])) ? (5530590929433320302LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))) + (((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_6 [i_2])))) ? (((/* implicit */int) ((((/* implicit */long long int) var_4)) < (var_1)))) : (((/* implicit */int) ((((/* implicit */long long int) var_8)) != (-5530590929433320299LL))))))));
            arr_7 [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */long long int) var_4)) % (max((((/* implicit */long long int) arr_5 [i_0] [i_2])), (var_6)))));
        }
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 20; i_3 += 4) /* same iter space */
        {
            var_16 = var_6;
            arr_10 [i_0] [i_3] [i_0] = ((/* implicit */unsigned int) ((arr_5 [i_0] [i_0]) <= (((/* implicit */int) var_9))));
            var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((arr_5 [(short)16] [(short)16]) + (2147483647))) >> (((arr_6 [i_0]) - (12692537458753108136ULL))))))));
            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 655314861269694608LL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_10))));
        }
        for (long long int i_4 = 0; i_4 < 20; i_4 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */short) min((((/* implicit */long long int) arr_1 [(unsigned char)1])), ((-(var_0)))));
            /* LoopNest 2 */
            for (unsigned char i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                for (unsigned int i_6 = 0; i_6 < 20; i_6 += 4) 
                {
                    {
                        var_20 = ((/* implicit */int) var_7);
                        /* LoopSeq 1 */
                        for (short i_7 = 0; i_7 < 20; i_7 += 3) 
                        {
                            arr_23 [i_0] [i_4] [i_5] [i_0] [i_7] = ((/* implicit */unsigned char) max(((-(var_0))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_2), (((/* implicit */short) arr_18 [i_0] [i_0] [i_6] [i_6] [i_7] [i_0]))))) || (((/* implicit */_Bool) arr_17 [i_4])))))));
                            arr_24 [i_0] = ((/* implicit */unsigned long long int) (-(((((/* implicit */long long int) ((/* implicit */int) var_2))) + (((5530590929433320298LL) | (((/* implicit */long long int) var_8))))))));
                            arr_25 [i_0] [14ULL] [14ULL] [12ULL] [i_7] = ((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_9)), (var_7)))) || (((/* implicit */_Bool) arr_0 [(unsigned char)19] [(unsigned char)19]))))), ((unsigned char)153)));
                        }
                        var_21 |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) arr_14 [i_0] [i_5] [i_6])), (-8397736896257150801LL))) * (((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_4] [i_5] [i_6])))))))) * (((((/* implicit */_Bool) -5171759636003232372LL)) ? (((/* implicit */unsigned long long int) 0LL)) : (8264480890833103940ULL)))));
                        var_22 &= ((/* implicit */int) arr_18 [i_0] [(unsigned char)0] [i_4] [i_5] [i_5] [i_6]);
                    }
                } 
            } 
            arr_26 [i_4] = ((/* implicit */unsigned long long int) var_10);
        }
        /* LoopSeq 3 */
        for (long long int i_8 = 0; i_8 < 20; i_8 += 3) 
        {
            arr_29 [i_0] [i_8] = ((/* implicit */long long int) arr_9 [i_8]);
            arr_30 [i_0] [i_0] [i_0] &= ((/* implicit */short) (+(((/* implicit */int) (!(((((/* implicit */_Bool) (short)7288)) && (((/* implicit */_Bool) var_6)))))))));
            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((/* implicit */long long int) 2013282524U)) / (4107370130379981102LL))))));
        }
        for (long long int i_9 = 0; i_9 < 20; i_9 += 3) 
        {
            arr_34 [i_0] |= ((/* implicit */short) ((((/* implicit */int) (unsigned short)65242)) % (((/* implicit */int) (short)7288))));
            /* LoopSeq 1 */
            for (long long int i_10 = 3; i_10 < 18; i_10 += 1) 
            {
                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (-(((var_8) >> (((2958101669640898639ULL) - (2958101669640898621ULL))))))))));
                arr_38 [i_9] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_9])))))))));
                var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_15 [i_9] [i_9] [(unsigned char)13])), ((+(((/* implicit */int) var_2))))))) ? (((((/* implicit */int) var_5)) / (var_4))) : (((/* implicit */int) var_10)))))));
            }
        }
        /* vectorizable */
        for (long long int i_11 = 0; i_11 < 20; i_11 += 3) 
        {
            arr_41 [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) / (7144586067847270766ULL)))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [17LL] [i_0] [i_0] [i_11] [i_11] [i_11])))));
            var_26 = ((/* implicit */short) var_7);
        }
        /* LoopNest 3 */
        for (int i_12 = 1; i_12 < 18; i_12 += 2) 
        {
            for (long long int i_13 = 0; i_13 < 20; i_13 += 2) 
            {
                for (unsigned int i_14 = 0; i_14 < 20; i_14 += 3) 
                {
                    {
                        var_27 ^= ((/* implicit */unsigned char) var_1);
                        arr_50 [i_13] [i_13] [i_13] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */int) ((-9223372036854775803LL) < (var_1)))) | (((/* implicit */int) max((var_10), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)241)) || (((/* implicit */_Bool) var_1))))))))));
                        arr_51 [i_0] [i_0] [i_0] |= min((min((((/* implicit */long long int) (unsigned short)0)), (-5530590929433320298LL))), (var_0));
                        var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) var_3))));
                        arr_52 [i_13] [i_13] [i_13] [i_13] = ((/* implicit */long long int) var_4);
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_15 = 1; i_15 < 21; i_15 += 1) 
    {
        var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-3)))))));
        /* LoopNest 2 */
        for (short i_16 = 0; i_16 < 25; i_16 += 4) 
        {
            for (long long int i_17 = 0; i_17 < 25; i_17 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_18 = 0; i_18 < 25; i_18 += 2) 
                    {
                        for (unsigned int i_19 = 0; i_19 < 25; i_19 += 4) 
                        {
                            {
                                var_30 ^= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) 9223372036854775807LL))))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (var_5)))))), (((/* implicit */int) (short)-7282))));
                                arr_67 [11ULL] [11ULL] [11ULL] [i_18] [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */long long int) ((/* implicit */int) var_9))) & (min((((/* implicit */long long int) var_5)), (var_6))))) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
                            }
                        } 
                    } 
                    var_31 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-30943)))))));
                }
            } 
        } 
        arr_68 [i_15] = ((/* implicit */unsigned char) var_4);
        arr_69 [i_15] = ((/* implicit */unsigned short) arr_61 [i_15] [i_15]);
        arr_70 [i_15 + 1] = ((/* implicit */long long int) var_10);
    }
    var_32 = ((/* implicit */short) var_1);
    var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)88)) ? (18446744073709551603ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((8397736896257150800LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)167)))))))))));
    var_34 = ((/* implicit */short) (-(((((/* implicit */long long int) (+(((/* implicit */int) var_3))))) / (var_1)))));
}
