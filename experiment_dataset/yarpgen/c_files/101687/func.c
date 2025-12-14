/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101687
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
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (((+(var_0))) | (((/* implicit */int) (short)-8629)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_17 = ((/* implicit */int) ((arr_1 [i_0]) <= (((/* implicit */int) ((unsigned char) 11707688650333397150ULL)))));
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)192)) >> ((((-(((/* implicit */int) (unsigned char)63)))) + (88))))))));
            var_19 = ((/* implicit */unsigned int) (+((+(-1)))));
            var_20 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) arr_4 [(short)8])) : (-1))) : ((+(((/* implicit */int) var_5))))));
            var_21 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) (signed char)113)))));
        }
        for (unsigned char i_2 = 1; i_2 < 9; i_2 += 2) 
        {
            var_22 ^= ((/* implicit */unsigned short) ((1) & (arr_2 [i_2 + 3] [(unsigned char)6] [i_2 + 3])));
            var_23 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_7 [i_2 + 3] [i_0]))));
            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (unsigned short)24757))));
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 11; i_3 += 4) 
            {
                for (unsigned int i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    {
                        var_25 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)63))));
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (+(((/* implicit */int) ((short) arr_8 [(unsigned char)11] [i_2]))))))));
                        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)63))) == (2111062325329920ULL))))));
                    }
                } 
            } 
        }
        for (short i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            var_28 ^= ((/* implicit */unsigned char) arr_5 [i_0] [i_5]);
            arr_14 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (signed char)2)) * (arr_13 [i_0])));
        }
        for (long long int i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            var_29 = ((/* implicit */unsigned int) arr_8 [i_6] [i_0]);
            arr_17 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)20767)) || ((!(((/* implicit */_Bool) arr_12 [i_0] [7]))))));
        }
    }
    for (unsigned int i_7 = 0; i_7 < 15; i_7 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    var_30 += ((/* implicit */short) arr_22 [(short)6]);
                    arr_28 [i_7] [i_8] [i_9] [i_9] &= ((/* implicit */short) ((((/* implicit */_Bool) 1)) ? (((/* implicit */int) ((arr_18 [i_9] [i_7]) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)113)) ? (1801070784) : (((/* implicit */int) (signed char)-4)))))))) : (arr_26 [i_7] [i_8] [i_9])));
                    var_31 += ((/* implicit */unsigned short) ((int) (signed char)-114));
                    var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) 4149765155U))));
                }
            } 
        } 
        var_33 |= ((/* implicit */unsigned long long int) (-(min((((((/* implicit */_Bool) (unsigned short)51456)) ? (((/* implicit */int) (signed char)-115)) : (((/* implicit */int) (unsigned short)14079)))), ((+(((/* implicit */int) (_Bool)0))))))));
        var_34 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_7] [i_7])) ? (((((/* implicit */int) (_Bool)1)) / ((+(var_0))))) : ((+(((/* implicit */int) (unsigned short)51456))))));
        arr_29 [i_7] = min((((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20767))) ^ (arr_22 [i_7]))) - (((/* implicit */unsigned int) ((/* implicit */int) ((var_14) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-113))))))))), (((/* implicit */unsigned int) (+(((int) var_12))))));
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) ((((/* implicit */int) min(((unsigned short)14100), (((/* implicit */unsigned short) (signed char)-114))))) > ((-(((/* implicit */int) (unsigned char)60)))))))));
        arr_33 [i_10] = ((/* implicit */unsigned long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) ((arr_32 [i_10]) == (arr_32 [i_10]))))) ^ (((unsigned int) (_Bool)1))))));
        var_36 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) min((((/* implicit */int) (signed char)2)), (var_11)))))) : ((-(var_14)))));
        arr_34 [i_10] = ((/* implicit */int) (+(((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)8))))) : (max((arr_32 [i_10]), (((/* implicit */long long int) (signed char)(-127 - 1)))))))));
    }
    for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 4) 
    {
        var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) (unsigned short)49731))));
        var_38 += ((/* implicit */unsigned int) max((((/* implicit */int) ((max((arr_1 [i_11]), (((/* implicit */int) arr_12 [i_11] [i_11])))) <= (((/* implicit */int) ((6630840726938742293ULL) < (arr_9 [i_11] [i_11]))))))), (max((((/* implicit */int) ((((/* implicit */int) (unsigned char)63)) < (-566028881)))), (((((/* implicit */_Bool) (unsigned char)92)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_10))))))));
        /* LoopNest 2 */
        for (signed char i_12 = 1; i_12 < 9; i_12 += 3) 
        {
            for (short i_13 = 0; i_13 < 10; i_13 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_14 = 0; i_14 < 10; i_14 += 1) 
                    {
                        arr_44 [i_14] [i_13] [i_13] [i_12] [i_11] = ((/* implicit */unsigned char) arr_25 [i_14]);
                        arr_45 [i_12] [i_12] [i_12] [3U] [i_12] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_21 [i_11] [i_11])) <= (((/* implicit */int) (unsigned char)129))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_15 = 0; i_15 < 10; i_15 += 2) 
                    {
                        for (int i_16 = 2; i_16 < 9; i_16 += 4) 
                        {
                            {
                                var_39 += ((signed char) ((unsigned int) (-(((/* implicit */int) (unsigned short)14080)))));
                                arr_52 [(_Bool)1] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)49747)) ? ((-(((((/* implicit */_Bool) (unsigned short)42928)) ? (((/* implicit */long long int) arr_42 [i_11] [i_11] [i_13] [i_13] [i_15] [8ULL])) : (arr_32 [i_16]))))) : (((/* implicit */long long int) (((-(arr_41 [i_12] [i_13] [(short)2] [i_13]))) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-32075))))))));
                                arr_53 [i_13] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) -566028864)) ? (((/* implicit */int) arr_4 [i_12 - 1])) : (((/* implicit */int) arr_4 [i_12 + 1])))) > ((+(((/* implicit */int) (unsigned char)241))))));
                                arr_54 [i_12 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)14079))) ? (max((arr_1 [i_12 + 1]), (arr_1 [i_12 - 1]))) : (arr_26 [(_Bool)1] [i_12] [i_13])));
                                var_40 = arr_40 [i_11];
                            }
                        } 
                    } 
                    var_41 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-1))))))))));
                    /* LoopNest 2 */
                    for (short i_17 = 0; i_17 < 10; i_17 += 2) 
                    {
                        for (unsigned short i_18 = 3; i_18 < 7; i_18 += 2) 
                        {
                            {
                                arr_62 [i_11] [i_12] [i_18] [(unsigned char)3] [(unsigned char)3] [i_18] [i_18] = ((/* implicit */short) (+(((((/* implicit */_Bool) max((arr_41 [i_18 + 3] [i_13] [i_12] [i_11]), (((/* implicit */unsigned int) arr_56 [(short)7] [(short)7] [i_13] [i_17]))))) ? (min((((/* implicit */long long int) (unsigned short)15795)), (9223372036854775807LL))) : (((/* implicit */long long int) ((unsigned int) (unsigned short)49747)))))));
                                var_42 += ((/* implicit */unsigned short) min((min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_15))))), (arr_15 [9LL] [(short)3] [i_13]))), (((/* implicit */long long int) (!(((((/* implicit */int) var_1)) >= (((/* implicit */int) (short)6538)))))))));
                                arr_63 [6LL] [i_18] [i_12] [6LL] [i_12] = ((/* implicit */unsigned char) (unsigned short)22601);
                                var_43 += ((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)241)), (min((-4871381928726819828LL), (((/* implicit */long long int) 854059329U))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
