/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172709
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) 10818327630901438706ULL)) ? (((/* implicit */unsigned long long int) var_4)) : (((unsigned long long int) var_8))));
    var_12 = ((/* implicit */signed char) -5420148917052721375LL);
    var_13 -= ((/* implicit */short) 3364756265U);
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            var_14 = (-(((long long int) var_9)));
            var_15 = ((/* implicit */int) max((((/* implicit */unsigned int) (-(max((var_4), (((/* implicit */int) (unsigned char)255))))))), (((((((/* implicit */_Bool) var_8)) ? (930211031U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) >> (((arr_1 [i_0 - 2]) - (640763278)))))));
            arr_4 [i_0] [i_1] = ((/* implicit */long long int) -2147483630);
            arr_5 [i_1] [1LL] [i_1] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)196))) / (1124273015753004779LL))));
        }
        arr_6 [i_0] = ((/* implicit */unsigned char) 1417789136848590053ULL);
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            var_16 = ((/* implicit */long long int) (signed char)-22);
            /* LoopNest 2 */
            for (unsigned int i_3 = 2; i_3 < 19; i_3 += 3) 
            {
                for (signed char i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    {
                        var_17 = ((((/* implicit */_Bool) (unsigned char)255)) ? (15177430073981541756ULL) : (3269313999728009862ULL));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 2) 
                        {
                            arr_19 [i_0] [i_3] [i_3] [12LL] [i_5] = ((/* implicit */unsigned char) ((long long int) arr_8 [i_0 + 1] [i_2] [i_3 + 1]));
                            arr_20 [i_0] [i_0] [i_0 - 1] [i_3] [i_0 - 2] [4ULL] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) var_6)) ? (14158105850640190758ULL) : (var_3))));
                        }
                        for (signed char i_6 = 2; i_6 < 21; i_6 += 4) 
                        {
                            arr_24 [6] [i_3] [6] [i_6] = ((/* implicit */unsigned char) (+(22ULL)));
                            arr_25 [i_3] [i_3] [18LL] = ((/* implicit */unsigned char) (~(arr_21 [i_0] [i_0 - 2] [i_0] [20ULL] [i_0 + 1] [i_0 - 1])));
                            arr_26 [i_0] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (signed char)99)) ? (((/* implicit */int) (unsigned char)248)) : (var_4)))));
                        }
                        for (unsigned char i_7 = 2; i_7 < 21; i_7 += 1) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))));
                            var_19 -= ((/* implicit */unsigned char) ((long long int) arr_13 [19LL]));
                            arr_31 [i_0] [i_2] [i_0] [i_3] [i_4] [i_7 - 1] [i_7 + 2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_16 [i_4] [i_4] [i_4] [i_3] [(unsigned char)19]))));
                            arr_32 [i_4] [i_4] [i_3] [i_4] [i_4] = ((/* implicit */signed char) (+((-2147483647 - 1))));
                        }
                        for (unsigned char i_8 = 2; i_8 < 21; i_8 += 1) /* same iter space */
                        {
                            arr_36 [i_0 - 2] [i_3] [(unsigned char)20] [18] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)62))));
                            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) -10LL))) ? (((unsigned long long int) var_3)) : (((/* implicit */unsigned long long int) var_0)))))));
                            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 8341414510918284372ULL)) ? (var_8) : (((/* implicit */unsigned long long int) 2532890732U)))))))));
                        }
                        var_22 = ((/* implicit */signed char) ((arr_21 [i_0 - 2] [i_0 - 2] [i_3 + 4] [3] [i_3 + 4] [i_4]) / (arr_27 [i_0 - 2] [i_3 + 2] [i_3 - 2] [i_3 - 2] [i_3 + 2])));
                        /* LoopSeq 4 */
                        for (signed char i_9 = 0; i_9 < 23; i_9 += 2) 
                        {
                            var_23 = ((/* implicit */signed char) ((18446744073709551615ULL) >= (((/* implicit */unsigned long long int) 4294967283U))));
                            arr_41 [i_2] [i_2] [i_3] [i_2] [8ULL] = ((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)96))))));
                        }
                        for (unsigned char i_10 = 1; i_10 < 21; i_10 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)123))));
                            var_25 ^= ((/* implicit */unsigned int) (-(arr_14 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_3 + 2])));
                        }
                        for (unsigned char i_11 = 0; i_11 < 23; i_11 += 4) 
                        {
                            arr_47 [i_0] [i_0] [i_2] [i_3 + 4] [i_3] [14LL] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) : (var_1))));
                            var_26 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10)))) << (((((/* implicit */int) arr_11 [i_0] [i_0] [i_0 + 1] [i_0 + 1])) - (167)))));
                        }
                        for (signed char i_12 = 0; i_12 < 23; i_12 += 3) 
                        {
                            var_27 += ((/* implicit */short) ((14278528938939300221ULL) >> (((arr_2 [i_0 + 1] [i_2]) - (3207657578943474556LL)))));
                            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (4294967275U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (unsigned char)255)))))))))));
                        }
                        var_29 -= ((/* implicit */unsigned char) (+(var_8)));
                    }
                } 
            } 
        }
    }
    for (long long int i_13 = 0; i_13 < 10; i_13 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_14 = 1; i_14 < 8; i_14 += 2) 
        {
            for (signed char i_15 = 0; i_15 < 10; i_15 += 3) 
            {
                for (int i_16 = 3; i_16 < 7; i_16 += 3) 
                {
                    {
                        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_28 [i_14 + 1] [i_16 - 3] [i_14 + 1] [i_14 + 1] [i_16 - 3] [i_16 - 1])) ? (((/* implicit */int) ((signed char) 4174311739U))) : (((((/* implicit */_Bool) arr_28 [i_14 + 2] [i_16 - 1] [14ULL] [(signed char)10] [i_16] [i_16 + 3])) ? (((/* implicit */int) arr_16 [i_13] [i_14 - 1] [i_14 - 1] [i_13] [i_16 + 3])) : (arr_28 [i_14 + 2] [i_16 + 1] [i_16 + 1] [8] [i_16 - 3] [i_16 - 3]))))))));
                        var_31 += ((/* implicit */unsigned char) ((short) ((unsigned long long int) 1659396416)));
                        arr_59 [i_13] [i_13] [i_13] [i_13] [i_13] [(signed char)3] = ((/* implicit */int) (-(max((((((/* implicit */long long int) ((/* implicit */int) var_2))) | (var_6))), (((long long int) arr_18 [i_13] [i_13] [(signed char)12] [(signed char)12] [i_13]))))));
                    }
                } 
            } 
        } 
        arr_60 [(signed char)5] = ((/* implicit */unsigned char) var_0);
    }
}
