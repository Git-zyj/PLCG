/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119715
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
    for (signed char i_0 = 1; i_0 < 20; i_0 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) var_5))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (short i_4 = 1; i_4 < 17; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_1] [i_2] [i_0] [i_2] = ((/* implicit */_Bool) var_9);
                                arr_14 [i_0] [(_Bool)1] [i_0] [i_0] [i_4] = ((/* implicit */_Bool) var_6);
                                var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((signed char) (unsigned char)17)))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((unsigned int) ((unsigned short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (1452440788))))))));
                    var_16 &= ((/* implicit */int) arr_3 [i_2]);
                }
            } 
        } 
    }
    for (signed char i_5 = 1; i_5 < 20; i_5 += 2) /* same iter space */
    {
        arr_17 [i_5] = ((((/* implicit */_Bool) max((arr_11 [i_5 + 1] [i_5] [i_5 - 1] [i_5 - 1] [i_5 - 1]), (((/* implicit */unsigned long long int) arr_12 [i_5] [i_5] [i_5]))))) ? (((arr_11 [i_5] [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5 + 1]) + (arr_9 [i_5] [i_5] [i_5] [i_5] [i_5]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
        /* LoopSeq 1 */
        for (short i_6 = 0; i_6 < 21; i_6 += 3) 
        {
            arr_20 [i_5] = (_Bool)1;
            /* LoopSeq 3 */
            /* vectorizable */
            for (long long int i_7 = 0; i_7 < 21; i_7 += 1) /* same iter space */
            {
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) 1588369162)) ? (((((/* implicit */_Bool) arr_0 [i_5])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_3 [(signed char)16])))))));
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 21; i_8 += 2) 
                {
                    for (short i_9 = 0; i_9 < 21; i_9 += 2) 
                    {
                        {
                            var_18 ^= ((/* implicit */signed char) arr_23 [i_5] [4] [i_8] [i_9]);
                            var_19 = ((/* implicit */int) 0ULL);
                            arr_28 [i_9] [i_9] |= ((/* implicit */_Bool) var_8);
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (long long int i_10 = 0; i_10 < 21; i_10 += 1) /* same iter space */
            {
                var_20 = 1588369162;
                var_21 |= ((_Bool) ((unsigned int) 2439737196670528696LL));
                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */int) var_2)) << (((/* implicit */int) var_5)))))));
                arr_31 [i_5] [i_6] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) arr_22 [(signed char)20])) : (((/* implicit */int) (_Bool)1))));
            }
            /* vectorizable */
            for (long long int i_11 = 0; i_11 < 21; i_11 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned int i_12 = 2; i_12 < 20; i_12 += 3) 
                {
                    for (long long int i_13 = 3; i_13 < 20; i_13 += 1) 
                    {
                        {
                            arr_38 [i_13] [i_13] [i_11] [i_5] [i_13] = ((/* implicit */short) ((signed char) var_6));
                            arr_39 [i_5] [i_5] [i_11] [i_5] [i_5] [i_13] = ((/* implicit */signed char) arr_8 [i_5] [i_6] [i_11] [i_12] [i_11] [i_11]);
                            arr_40 [i_5] [i_6] [i_11] [i_12] [i_13] = ((/* implicit */short) -1588369155);
                            arr_41 [i_5] [i_5] [i_6] [i_6] [i_12] [i_13] = ((((((/* implicit */unsigned int) ((/* implicit */int) var_10))) & (arr_8 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]))) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                arr_42 [0] &= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_5] [i_5 - 1]))) + (((long long int) 18446744073709551615ULL))));
            }
            arr_43 [(unsigned short)16] [i_6] &= ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_0 [i_6])) ? (arr_1 [i_5] [(short)18]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(_Bool)1] [i_6])))))))) - (((((/* implicit */_Bool) arr_32 [4])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_8), (((/* implicit */short) (_Bool)1)))))))));
        }
    }
    for (signed char i_14 = 1; i_14 < 20; i_14 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_29 [i_14] [i_14] [i_14] [i_14 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (((var_2) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
        /* LoopNest 2 */
        for (short i_15 = 0; i_15 < 21; i_15 += 1) 
        {
            for (unsigned char i_16 = 0; i_16 < 21; i_16 += 4) 
            {
                {
                    arr_52 [(unsigned short)7] [i_14] = ((/* implicit */unsigned char) var_9);
                    /* LoopNest 2 */
                    for (short i_17 = 0; i_17 < 21; i_17 += 1) 
                    {
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            {
                                arr_61 [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_24 [i_14] [i_14] [i_14] [i_14] [i_14 + 1] [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_32 [i_14]), (arr_32 [i_14]))))) : (((unsigned long long int) var_5))));
                                arr_62 [i_15] [i_14] [i_15] [6ULL] [i_15] = ((/* implicit */_Bool) var_12);
                                arr_63 [i_16] [i_15] [i_16] [i_16] [20ULL] [i_18] &= ((/* implicit */unsigned char) ((((unsigned long long int) ((unsigned long long int) (_Bool)1))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_56 [i_14] [i_16] [i_14] [i_16] [i_14])) != (((/* implicit */int) arr_56 [i_14] [i_16] [i_14] [i_16] [i_14 + 1]))))))));
                                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (~(min((((/* implicit */int) var_10)), (var_0)))))) ? (((unsigned long long int) arr_15 [i_17])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_51 [i_14 + 1] [i_14] [i_14 + 1] [i_14])) ? (arr_51 [i_14 - 1] [i_14] [i_14 + 1] [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) arr_59 [i_14 - 1] [i_14 + 1] [i_14 + 1] [i_14 + 1] [i_15])) ? (arr_59 [i_14] [i_14 - 1] [i_14 - 1] [i_14 + 1] [i_16]) : (arr_59 [i_14] [i_14 + 1] [i_14] [i_14 - 1] [i_14 + 1]))));
                    var_26 = ((/* implicit */_Bool) ((unsigned int) (_Bool)1));
                }
            } 
        } 
        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_22 [i_14]))) && (((/* implicit */_Bool) arr_5 [20ULL] [i_14 - 1] [i_14 - 1]))))))));
    }
    var_28 += ((/* implicit */unsigned int) 1005808403);
}
