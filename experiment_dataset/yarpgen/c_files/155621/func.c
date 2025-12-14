/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155621
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
    var_12 = ((/* implicit */long long int) var_5);
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (min((((((/* implicit */int) var_7)) * (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((var_0) >= (((/* implicit */long long int) var_4))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((var_11), (((/* implicit */int) var_5))))))))));
    var_14 = min((((/* implicit */int) (unsigned char)59)), (822976776));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_2 [6U] = ((/* implicit */short) ((((/* implicit */int) var_6)) & (((/* implicit */int) var_2))));
        var_15 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [1U] [1U])))) - (-482520389)));
        arr_3 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (min((((/* implicit */long long int) var_7)), (arr_1 [i_0]))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0] [i_0])))))));
    }
    for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                {
                    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) arr_8 [i_1]))));
                    var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) + (((((/* implicit */_Bool) 791213755)) ? (arr_9 [5ULL] [i_2]) : (arr_9 [i_1] [i_3])))));
                    var_19 = ((/* implicit */_Bool) 5611623593358890900ULL);
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) arr_5 [i_2] [i_3]))));
                }
            } 
        } 
        var_21 = ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1]))))) : (((/* implicit */int) var_9)));
        arr_10 [21LL] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_1])))))));
        /* LoopSeq 2 */
        for (signed char i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            arr_13 [i_4] [i_4] |= ((/* implicit */unsigned int) arr_5 [i_4] [i_4]);
            var_22 = ((/* implicit */unsigned int) (unsigned short)44069);
        }
        for (int i_5 = 0; i_5 < 24; i_5 += 1) 
        {
            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((unsigned long long int) var_3)), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0)))))))) ? (((/* implicit */unsigned long long int) -4589237064829294408LL)) : (17178051908709427255ULL)));
            /* LoopSeq 4 */
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
            {
                var_24 &= ((unsigned long long int) arr_12 [i_5] [18ULL]);
                arr_19 [14LL] [14LL] [i_6] = ((((/* implicit */_Bool) ((arr_9 [i_6] [i_1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_6 - 1]))) == (arr_9 [i_1] [(_Bool)1])))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_8 [i_5])), (4589237064829294386LL))))))) : (((/* implicit */int) var_3)));
                var_25 *= ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_7 [i_6 - 1] [i_6 - 1] [i_6 - 1])))) ? (max((arr_7 [i_6 - 1] [i_6 - 1] [i_6 - 1]), (arr_7 [i_6 - 1] [i_6 - 1] [i_6 - 1]))) : (((/* implicit */unsigned long long int) (~(-1773628009))))));
            }
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
            {
                arr_22 [i_7] [i_7] [3] = ((/* implicit */signed char) var_9);
                var_26 = ((/* implicit */int) arr_4 [i_7]);
            }
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
            {
                arr_26 [i_8 - 1] [i_5] [i_5] [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_15 [i_8 - 1] [i_5])) ? ((~(((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_25 [i_1] [i_1])))))) - (((((/* implicit */_Bool) 3283936791U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3))))));
                arr_27 [i_1] = ((/* implicit */long long int) arr_21 [i_1] [i_1] [i_1] [i_1]);
            }
            for (unsigned char i_9 = 0; i_9 < 24; i_9 += 4) 
            {
                var_27 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((unsigned int) (signed char)-41))) ^ (arr_9 [23ULL] [i_1])))) ? (arr_21 [i_1] [i_5] [i_5] [i_9]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1] [i_5] [i_9])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)-16215))))));
                arr_32 [i_1] [i_5] [i_5] [i_9] |= ((/* implicit */unsigned long long int) (!(arr_6 [i_1] [i_5])));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_10 = 0; i_10 < 24; i_10 += 3) 
                {
                    var_28 += ((/* implicit */_Bool) (-(var_11)));
                    var_29 = ((/* implicit */long long int) arr_36 [i_1] [i_5] [i_9] [i_10]);
                    /* LoopSeq 2 */
                    for (signed char i_11 = 0; i_11 < 24; i_11 += 1) /* same iter space */
                    {
                        arr_39 [10LL] [i_5] [i_5] [i_5] [i_5] [i_10] [i_5] = ((/* implicit */unsigned int) ((long long int) 3109017316708543030LL));
                        var_30 = ((/* implicit */long long int) arr_5 [i_1] [i_1]);
                        arr_40 [i_10] [19LL] [i_9] [i_10] [i_10] = ((/* implicit */long long int) (-(arr_11 [i_10] [i_5])));
                        var_31 = ((/* implicit */short) arr_20 [i_1] [i_5] [i_9]);
                    }
                    for (signed char i_12 = 0; i_12 < 24; i_12 += 1) /* same iter space */
                    {
                        var_32 += ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_5] [i_12])) ? (arr_15 [i_5] [i_12]) : (arr_15 [i_9] [12U])));
                        var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) arr_24 [i_5] [i_5] [i_10] [i_10]))));
                    }
                    arr_43 [(unsigned short)10] [i_5] [i_10] = ((/* implicit */signed char) arr_34 [i_1] [i_1] [i_1] [i_10] [i_10]);
                }
                /* LoopNest 2 */
                for (unsigned short i_13 = 0; i_13 < 24; i_13 += 1) 
                {
                    for (int i_14 = 1; i_14 < 22; i_14 += 3) 
                    {
                        {
                            var_34 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_49 [i_14] [i_14] [i_14] [i_14] [i_14 - 1] [i_14] [i_14])))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) 16862639705244974690ULL)) ? (3524526855U) : (arr_17 [i_1] [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_7 [i_14] [(short)3] [i_14 + 1])))));
                            arr_51 [i_9] [(short)18] [(short)18] [i_5] [i_9] |= ((/* implicit */long long int) var_11);
                            arr_52 [i_13] [i_5] [i_5] [i_13] [i_14] = ((/* implicit */long long int) ((((arr_30 [i_14] [i_5] [i_14] [i_14]) - (((/* implicit */long long int) max((((/* implicit */int) (short)10467)), (arr_5 [i_1] [i_1])))))) >= (arr_24 [i_1] [i_1] [i_1] [i_14])));
                            var_35 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_35 [i_13] [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) -482520389)) : ((+(arr_50 [i_1] [i_1] [i_1] [8ULL] [i_14 + 1])))));
                        }
                    } 
                } 
            }
        }
    }
    for (unsigned int i_15 = 0; i_15 < 14; i_15 += 3) 
    {
        var_36 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_23 [i_15] [i_15])) ^ (((-4589237064829294363LL) / (((/* implicit */long long int) 40214747))))))) ? ((~(arr_33 [i_15] [i_15] [i_15] [i_15] [i_15]))) : (((/* implicit */unsigned long long int) (+(min((((/* implicit */int) (unsigned char)255)), (2062767471))))))));
        arr_55 [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_15])) ? (((((/* implicit */_Bool) arr_33 [i_15] [i_15] [i_15] [i_15] [(short)5])) ? (((/* implicit */long long int) var_10)) : (arr_45 [i_15] [(signed char)23] [i_15] [(signed char)23]))) : (((/* implicit */long long int) arr_54 [i_15] [i_15]))))) ? (min((arr_41 [(short)14] [i_15] [20U] [8LL] [8LL]), ((+(((/* implicit */int) arr_29 [i_15] [i_15])))))) : (((/* implicit */int) min(((!(arr_20 [i_15] [5ULL] [2ULL]))), ((!(((/* implicit */_Bool) var_11)))))))));
        var_37 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_15] [i_15] [i_15])) ? (arr_16 [i_15] [i_15] [i_15]) : (arr_16 [i_15] [i_15] [i_15])))) ? ((-(arr_16 [i_15] [i_15] [i_15]))) : ((+(arr_16 [i_15] [i_15] [i_15])))));
        var_38 = ((/* implicit */short) var_1);
    }
}
