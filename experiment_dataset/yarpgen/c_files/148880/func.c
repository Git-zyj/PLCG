/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148880
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
    var_17 = ((/* implicit */unsigned long long int) var_11);
    var_18 = var_9;
    /* LoopSeq 2 */
    for (int i_0 = 4; i_0 < 20; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 23; i_3 += 4) 
                {
                    {
                        arr_11 [i_1] [i_1] [i_2] [7U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) arr_2 [i_0])) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) + (2347995131462782063ULL)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_2 [i_0])) >= (7ULL)))) : (((/* implicit */int) (unsigned short)62001))));
                        arr_12 [i_1 + 1] [i_1] [i_2] [i_1] [i_1 - 1] = ((/* implicit */long long int) max((((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_2 [13]))) <= (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_11)), (var_10))))))), (((((((/* implicit */int) (unsigned short)27591)) << (((2196198342U) - (2196198342U))))) != (((/* implicit */int) ((arr_6 [i_0] [i_1] [i_0]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 1; i_4 < 23; i_4 += 3) /* same iter space */
                        {
                            arr_16 [i_0] [i_1] = ((/* implicit */unsigned char) arr_4 [i_0]);
                            arr_17 [i_1] = ((/* implicit */int) var_9);
                        }
                        for (unsigned long long int i_5 = 1; i_5 < 23; i_5 += 3) /* same iter space */
                        {
                            arr_21 [4] [i_1] = ((/* implicit */int) max(((-(((unsigned int) arr_6 [8ULL] [i_1 - 1] [23LL])))), (((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_18 [i_1] [(unsigned char)3] [i_2] [i_2] [i_5] [i_0])), (var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((unsigned int) (unsigned short)37944))))));
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) + (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_14 [i_0] [1] [(unsigned short)13] [i_3 - 1] [i_5])) ? (var_13) : (((/* implicit */int) (unsigned short)27591))))))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            arr_25 [i_1] = ((/* implicit */long long int) ((_Bool) (+(((/* implicit */int) (unsigned short)37944)))));
                            arr_26 [i_1] [i_3] [i_1] [(unsigned short)23] [i_6] [i_6] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (unsigned short)27618)), (1744496453790466777ULL)));
                            arr_27 [i_1] [i_1 - 1] [i_2] [i_3] [i_6] [15LL] = ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((unsigned short) 134184960))))) * (((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? (-7178434698505452293LL) : (arr_4 [i_0 + 3]))));
                            var_20 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_13 [i_0 + 1] [i_6] [i_3 - 1] [i_1 - 1])))) : (min((((((/* implicit */_Bool) 5997418658816108683LL)) ? (830816724928906069LL) : (((/* implicit */long long int) 1407617755U)))), (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0])))))))));
                            arr_28 [i_1] = ((/* implicit */unsigned char) ((((unsigned long long int) ((((/* implicit */_Bool) 16702247619919084838ULL)) ? (10607596606894499622ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37918)))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 5997418658816108683LL)) != (max((((/* implicit */unsigned long long int) var_14)), (arr_3 [i_1])))))))));
                        }
                    }
                } 
            } 
            var_21 = ((/* implicit */int) ((long long int) (!(((/* implicit */_Bool) ((-5319056758816686593LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)81)))))))));
            var_22 = ((/* implicit */unsigned short) ((long long int) 16702247619919084838ULL));
        }
        var_23 *= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) ((_Bool) arr_2 [i_0 - 1]))), (arr_9 [i_0 - 2] [i_0] [i_0] [i_0 + 1] [i_0])));
        arr_29 [i_0] [i_0] = ((/* implicit */unsigned short) var_12);
    }
    /* vectorizable */
    for (unsigned char i_7 = 1; i_7 < 16; i_7 += 3) 
    {
        var_24 -= ((/* implicit */_Bool) var_8);
        arr_33 [i_7] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_2 [i_7])) ? (((/* implicit */int) arr_9 [(unsigned short)14] [i_7] [i_7] [i_7] [i_7])) : (var_13))));
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 17; i_8 += 2) 
        {
            for (int i_9 = 3; i_9 < 15; i_9 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_10 = 2; i_10 < 15; i_10 += 4) 
                    {
                        arr_40 [i_7] [i_8] [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) ((-1) | (((/* implicit */int) var_4))));
                        arr_41 [i_7 - 1] [i_7] [5LL] = ((/* implicit */long long int) (-(arr_1 [i_7 + 1] [i_9 + 2])));
                        arr_42 [i_7] [i_8] [i_7] [i_10] = ((/* implicit */long long int) var_15);
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_25 ^= ((/* implicit */unsigned short) ((arr_10 [20] [i_9 + 2] [i_7] [2ULL] [2U]) > (arr_10 [i_7] [i_9 + 2] [i_9] [i_7] [(unsigned short)12])));
                        var_26 &= ((/* implicit */unsigned short) -1940918775);
                        arr_45 [i_7] [i_8] = ((/* implicit */long long int) (unsigned short)27618);
                        arr_46 [i_7] [i_8] [i_7] [14LL] = ((/* implicit */int) (unsigned char)68);
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_12 = 0; i_12 < 18; i_12 += 1) /* same iter space */
                    {
                        arr_49 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 6379275102301351750ULL)) && (((/* implicit */_Bool) (unsigned char)155)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_7] [i_8] [i_7] [i_12] [i_7]))) : (((long long int) 12067468971408199866ULL))));
                        var_27 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_12]))) ^ (6379275102301351750ULL))) + (((/* implicit */unsigned long long int) arr_4 [i_7]))));
                        var_28 = ((/* implicit */unsigned int) ((arr_14 [i_7 - 1] [i_8] [i_9] [i_12] [i_8]) / ((-2147483647 - 1))));
                        var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((1744496453790466777ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_7] [i_8] [i_12] [i_9 + 1] [3ULL]))))))));
                    }
                    for (unsigned char i_13 = 0; i_13 < 18; i_13 += 1) /* same iter space */
                    {
                        arr_52 [i_7] [i_8] [i_9] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -7178434698505452293LL)) ? (arr_31 [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2590)))));
                        arr_53 [12LL] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_24 [i_7] [i_8])))) ? ((~(((/* implicit */int) arr_15 [2ULL])))) : (((/* implicit */int) ((-7178434698505452293LL) != (((/* implicit */long long int) var_5)))))));
                        var_30 |= ((/* implicit */unsigned short) var_1);
                        arr_54 [i_7] [11ULL] [5LL] [i_7] [i_13] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)245))));
                        var_31 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_6)))) - (((unsigned long long int) arr_23 [i_7] [i_9] [6LL] [i_7] [i_9] [i_9 - 1])));
                    }
                    var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_9 + 1] [(_Bool)1] [i_8 - 1] [19LL])) ? (((/* implicit */int) arr_22 [i_9 + 1] [i_8] [i_8 - 1] [i_9])) : (((/* implicit */int) arr_22 [i_9 + 1] [i_8] [i_8 - 1] [i_7]))));
                }
            } 
        } 
    }
}
