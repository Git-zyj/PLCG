/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144815
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
    var_13 = ((/* implicit */unsigned char) (-(min((((((/* implicit */_Bool) var_2)) ? (var_10) : (var_9))), (((/* implicit */unsigned int) 380601976))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */int) ((short) (+(((/* implicit */int) var_3)))));
                    arr_7 [i_0 + 2] [i_0 + 2] [i_0] [i_2] = ((/* implicit */unsigned short) arr_0 [i_2] [i_0 - 1]);
                    var_15 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((var_10) * (((/* implicit */unsigned int) ((/* implicit */int) (short)23841)))))) + ((+(arr_6 [6] [6])))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)16384)) - (((/* implicit */int) (short)9449))))) : (max(((+(arr_0 [2] [i_1 - 1]))), (((/* implicit */unsigned int) var_11))))));
                }
            } 
        } 
    } 
    var_16 = var_4;
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_3 = 1; i_3 < 17; i_3 += 2) 
    {
        arr_10 [i_3 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [18])) ? (arr_2 [(unsigned char)10]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
        arr_11 [16] = ((/* implicit */unsigned long long int) (-(arr_2 [18])));
    }
    for (unsigned short i_4 = 3; i_4 < 13; i_4 += 1) 
    {
        arr_14 [i_4] = (-(((long long int) arr_2 [i_4])));
        arr_15 [i_4] = ((/* implicit */short) min((((/* implicit */long long int) max((min((arr_2 [i_4]), (arr_9 [i_4 + 1] [i_4]))), (((/* implicit */unsigned int) var_6))))), (arr_12 [i_4] [(unsigned char)15])));
    }
    for (long long int i_5 = 2; i_5 < 8; i_5 += 2) 
    {
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_5]))))) << (((arr_8 [i_5 + 1] [i_5 - 1]) - (4242145013U)))));
        arr_18 [i_5 + 2] = ((/* implicit */int) ((arr_0 [i_5 - 2] [i_5]) * (((/* implicit */unsigned int) ((/* implicit */int) (((-(arr_17 [i_5]))) <= (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) & (((/* implicit */int) var_6)))))))))));
        /* LoopNest 3 */
        for (unsigned int i_6 = 2; i_6 < 8; i_6 += 2) 
        {
            for (int i_7 = 0; i_7 < 10; i_7 += 4) 
            {
                for (long long int i_8 = 0; i_8 < 10; i_8 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_9 = 0; i_9 < 10; i_9 += 1) /* same iter space */
                        {
                            arr_28 [4ULL] [i_6] [i_6] [i_8] [i_9] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_0) << ((((+(1241424348730100597ULL))) - (1241424348730100576ULL)))))) && (((/* implicit */_Bool) arr_22 [i_6] [4ULL]))));
                            var_18 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */int) arr_21 [i_6 - 1] [i_6 - 1] [i_9] [i_5])) * (((/* implicit */int) arr_21 [i_6 + 2] [i_6 + 2] [i_7] [1U])))));
                        }
                        for (unsigned int i_10 = 0; i_10 < 10; i_10 += 1) /* same iter space */
                        {
                            var_19 = ((/* implicit */short) (+(arr_3 [i_10])));
                            arr_31 [i_5] [i_6] [i_7] [i_10] [(short)5] [i_6] = ((/* implicit */unsigned long long int) (unsigned char)252);
                            var_20 = ((/* implicit */short) (+((~(max((((/* implicit */unsigned long long int) var_9)), (14985074818476488242ULL)))))));
                            var_21 = ((/* implicit */unsigned char) (~(-2461940324349427892LL)));
                        }
                        arr_32 [0] [0] = ((/* implicit */long long int) ((((/* implicit */int) arr_19 [(unsigned char)9] [(unsigned char)4] [i_7])) != (((/* implicit */int) var_2))));
                        arr_33 [i_5] [i_5 + 2] [i_5] [i_5] [(unsigned short)7] = var_4;
                        var_22 = ((/* implicit */unsigned int) arr_19 [i_5] [i_6] [(unsigned char)1]);
                    }
                } 
            } 
        } 
        arr_34 [i_5] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)177))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_11 = 1; i_11 < 9; i_11 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_12 = 0; i_12 < 10; i_12 += 4) 
            {
                var_23 = (((+(((/* implicit */int) arr_19 [i_5] [i_5] [i_5])))) << (((arr_12 [i_11 + 1] [i_11 + 1]) - (8919192216829532332LL))));
                arr_39 [i_11] [(short)0] [i_12] [i_11] = ((/* implicit */unsigned short) ((unsigned char) (unsigned short)50540));
                var_24 = (+(((var_0) - (((/* implicit */unsigned int) ((/* implicit */int) var_3))))));
                arr_40 [i_5] [i_11 + 1] [i_12] = ((/* implicit */unsigned char) arr_1 [i_5]);
                /* LoopNest 2 */
                for (long long int i_13 = 0; i_13 < 10; i_13 += 1) 
                {
                    for (unsigned int i_14 = 0; i_14 < 10; i_14 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned int) arr_12 [i_5 + 2] [i_5 - 2]);
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_5 + 2] [i_5 + 1])) ? (arr_43 [i_5 - 2] [i_5]) : (((((/* implicit */_Bool) arr_2 [i_13])) ? (((/* implicit */int) var_2)) : (arr_20 [i_5] [i_12] [i_13])))));
                            var_27 = ((/* implicit */unsigned long long int) (~((-(var_8)))));
                        }
                    } 
                } 
            }
            for (long long int i_15 = 1; i_15 < 8; i_15 += 2) 
            {
                /* LoopSeq 2 */
                for (long long int i_16 = 0; i_16 < 10; i_16 += 2) 
                {
                    arr_52 [i_16] [(short)7] [i_16] [i_16] [i_16] = ((/* implicit */unsigned char) var_10);
                    var_28 = ((/* implicit */long long int) (unsigned short)30284);
                    var_29 = ((/* implicit */unsigned int) ((unsigned short) -1403120859));
                }
                for (long long int i_17 = 4; i_17 < 9; i_17 += 1) 
                {
                    var_30 += ((((var_7) < (((/* implicit */unsigned int) ((/* implicit */int) (short)-14030))))) ? (((/* implicit */long long int) (-(var_8)))) : (arr_38 [i_15 - 1] [i_11] [i_11 + 1]));
                    var_31 = 3027663371281337011LL;
                    arr_56 [i_17] [(short)4] [i_15] [i_15 - 1] = ((/* implicit */long long int) (+(((/* implicit */int) arr_21 [i_17 - 1] [i_15 - 1] [i_11 + 1] [i_5 - 1]))));
                }
                arr_57 [i_5 + 1] [i_11] [i_11] = var_4;
                var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned int) var_10))))))));
            }
            for (int i_18 = 0; i_18 < 10; i_18 += 4) 
            {
                arr_60 [3U] [(short)3] [3U] = ((/* implicit */long long int) var_0);
                var_33 = ((/* implicit */int) max((var_33), ((-(((/* implicit */int) arr_19 [4] [i_11] [2U]))))));
                var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_5 + 1] [i_11 - 1] [i_11 + 1])) ? (arr_5 [i_5 + 2] [i_11 + 1] [i_11 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
                arr_61 [i_11 + 1] [5] [3] = ((/* implicit */int) var_5);
                var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) ((arr_23 [i_18] [i_11 - 1] [i_11] [i_5 + 1]) << (((arr_23 [i_5] [i_11 - 1] [i_5] [i_18]) - (4639000361890193775LL))))))));
            }
            arr_62 [i_5] &= ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)252))));
        }
    }
}
