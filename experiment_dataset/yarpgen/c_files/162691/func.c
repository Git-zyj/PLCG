/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162691
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
    var_12 += max((max((((/* implicit */unsigned long long int) (-(var_0)))), (((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */unsigned long long int) var_3)))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))));
    var_13 = ((/* implicit */long long int) var_3);
    var_14 -= ((/* implicit */_Bool) ((unsigned int) max(((-(1222826661U))), (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)118))))))));
    var_15 = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)(-32767 - 1)))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 7; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */short) ((min((max((((/* implicit */int) (short)-23491)), (164213222))), (((/* implicit */int) ((((/* implicit */_Bool) (short)23491)) && (((/* implicit */_Bool) var_0))))))) < (((/* implicit */int) arr_3 [i_0] [i_0]))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_6 [i_0 + 1])))) ? (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (short)(-32767 - 1))))))))) : (-4639977325022656552LL)));
                            var_18 = ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_5 [i_0 - 1] [7U] [i_0 - 2] [i_0])) - (((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0]))))));
                            var_19 = ((/* implicit */unsigned int) max((((-4002526771105234358LL) * (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_7 [i_0] [i_0] [i_0])))))), (((((_Bool) 3510617679U)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (arr_8 [i_0] [i_0] [i_0] [i_0] [i_3]) : (850378664)))) : (max((var_1), (((/* implicit */long long int) arr_3 [i_2] [i_0]))))))));
                            /* LoopSeq 1 */
                            for (short i_4 = 2; i_4 < 10; i_4 += 4) 
                            {
                                var_20 ^= ((/* implicit */long long int) ((unsigned int) var_9));
                                var_21 = ((/* implicit */signed char) ((long long int) var_1));
                            }
                            arr_14 [8] [i_3] [i_3] [(short)0] [4] [i_3] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) arr_4 [i_0 + 1])), (arr_2 [i_3]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_9 [1U] [i_1] [9] [i_1]) : (((/* implicit */long long int) -1846834425))))))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(min((arr_9 [i_0] [i_0] [i_1] [i_1]), (((/* implicit */long long int) arr_4 [i_0]))))))) ? (((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) arr_0 [i_0])), (2729443810289903389LL))) ^ (((/* implicit */long long int) ((((/* implicit */int) (short)32754)) ^ (-281125574))))))) : (min((9053409731010258715ULL), (((/* implicit */unsigned long long int) 3510617679U)))))))));
                /* LoopSeq 3 */
                for (unsigned int i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
                {
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) var_0))));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 3) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [4] [i_0] = ((/* implicit */unsigned long long int) (-(min((arr_6 [i_0 - 1]), (arr_6 [i_0 + 1])))));
                                arr_23 [i_7] [i_1] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) (short)(-32767 - 1))))));
                                arr_24 [i_1] [i_5] [i_5] [i_0] [i_7] [i_5] [i_5] = ((/* implicit */short) max((((/* implicit */long long int) (-(var_3)))), (max((((/* implicit */long long int) arr_5 [i_0] [1ULL] [9] [i_0])), (max((var_2), (67108856LL)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 2; i_8 < 7; i_8 += 4) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 11; i_9 += 4) 
                        {
                            {
                                arr_29 [i_9] [i_1] [i_5] [i_9] [i_9] [i_0] = ((/* implicit */int) arr_9 [2U] [i_1] [i_5] [2U]);
                                arr_30 [i_0] [i_0] [i_5] = ((/* implicit */unsigned char) (short)11754);
                            }
                        } 
                    } 
                }
                for (unsigned int i_10 = 0; i_10 < 11; i_10 += 4) /* same iter space */
                {
                    var_24 = ((/* implicit */signed char) arr_31 [4] [i_1] [6U] [i_0]);
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 0; i_11 < 11; i_11 += 4) 
                    {
                        for (int i_12 = 0; i_12 < 11; i_12 += 4) 
                        {
                            {
                                arr_37 [i_0] = ((/* implicit */_Bool) arr_31 [i_0] [i_1] [i_10] [i_0]);
                                var_25 += ((/* implicit */short) min((((((/* implicit */_Bool) min((1222826635U), (1222826640U)))) ? (min((4294967295U), (((/* implicit */unsigned int) arr_4 [i_11])))) : (min((((/* implicit */unsigned int) arr_1 [i_0])), (var_8))))), ((+(arr_10 [i_0 - 2] [i_0 - 2] [i_0 + 2] [i_0 - 2] [i_0])))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned int i_13 = 0; i_13 < 11; i_13 += 4) /* same iter space */
                {
                    var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) arr_36 [i_1 + 1] [i_0 + 1] [i_0 - 1] [i_0] [i_1]))));
                    var_27 |= ((/* implicit */int) (+(var_5)));
                    arr_41 [i_0 + 1] [i_0] [i_0] [1] = 4864103621641801810ULL;
                    var_28 *= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_0] [i_0] [i_0] [i_1])) || (((/* implicit */_Bool) 18446744073709551611ULL)))))) & (((((/* implicit */_Bool) var_1)) ? (-1LL) : (((/* implicit */long long int) arr_1 [i_0]))))));
                }
                arr_42 [i_0] [i_1] [i_1] |= ((/* implicit */long long int) 5313680781185591141ULL);
            }
        } 
    } 
}
