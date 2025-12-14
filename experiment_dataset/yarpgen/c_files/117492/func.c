/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117492
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
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    {
                        arr_9 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) arr_4 [i_1]);
                        var_11 ^= ((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        var_12 ^= ((/* implicit */short) ((int) 1119973638));
                    }
                } 
            } 
        } 
        var_13 += ((/* implicit */_Bool) ((long long int) arr_2 [i_0 - 3] [i_0 + 1] [i_0 + 1]));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 14; i_5 += 2) 
        {
            for (unsigned long long int i_6 = 2; i_6 < 11; i_6 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 1; i_7 < 13; i_7 += 3) 
                    {
                        for (unsigned long long int i_8 = 1; i_8 < 13; i_8 += 3) 
                        {
                            {
                                arr_21 [i_7] [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)0))));
                                arr_22 [i_7] [i_5] [i_6] [i_6] [i_8] = ((/* implicit */_Bool) ((arr_18 [i_7] [i_7 + 1] [i_6 + 1] [i_4] [i_7]) ? (((((/* implicit */_Bool) -8919212409422436369LL)) ? (arr_7 [i_4] [i_4] [i_6] [i_6] [i_4] [i_4]) : (((/* implicit */unsigned long long int) arr_0 [i_6])))) : (((((/* implicit */unsigned long long int) -8919212409422436369LL)) ^ (13954698394533096085ULL)))));
                                var_14 = ((/* implicit */_Bool) -8919212409422436374LL);
                            }
                        } 
                    } 
                    var_15 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_6] [i_4])) || (((/* implicit */_Bool) arr_19 [i_5] [i_5]))));
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 14; i_9 += 1) 
                    {
                        for (long long int i_10 = 0; i_10 < 14; i_10 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_17 [i_6] [i_6 + 1] [i_5] [i_6 + 3])))))));
                                var_17 = 12968237264392694881ULL;
                            }
                        } 
                    } 
                }
            } 
        } 
        var_18 = ((((/* implicit */_Bool) arr_4 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_4]))) : (arr_12 [i_4] [i_4] [i_4]));
    }
    for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_12 = 0; i_12 < 14; i_12 += 3) 
        {
            for (short i_13 = 0; i_13 < 14; i_13 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_5 [i_13] [i_12])))) <= (((/* implicit */int) ((short) arr_33 [i_11] [i_12] [i_13]))))))));
                    arr_35 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */short) arr_31 [i_12] [i_12] [i_12]);
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_14 = 0; i_14 < 14; i_14 += 1) 
        {
            var_20 = ((unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) -1119973638)) : (arr_6 [i_11] [i_11] [i_11] [i_11] [i_11])));
            /* LoopNest 3 */
            for (unsigned short i_15 = 0; i_15 < 14; i_15 += 2) 
            {
                for (unsigned short i_16 = 2; i_16 < 11; i_16 += 1) 
                {
                    for (short i_17 = 4; i_17 < 13; i_17 += 1) 
                    {
                        {
                            arr_49 [i_11] [i_11] [i_11] [i_11] [i_11] [i_17] [i_14] = ((/* implicit */short) ((long long int) arr_42 [i_15] [i_11] [i_15] [i_11]));
                            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */int) arr_23 [i_14] [i_17 + 1] [i_17 + 1] [i_14] [i_17 + 1])) <= (((/* implicit */int) arr_23 [i_11] [i_17 - 2] [i_11] [i_11] [i_17])))))));
                        }
                    } 
                } 
            } 
            var_22 -= ((/* implicit */short) -8919212409422436369LL);
            var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_11] [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8064))) : (arr_17 [i_14] [i_14] [i_11] [i_11])))) ? (((/* implicit */unsigned long long int) 1119973638)) : (((((/* implicit */_Bool) (unsigned short)768)) ? (var_10) : (16499002941463479486ULL)))));
        }
        arr_50 [i_11] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) ^ (16499002941463479493ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1835008)) ? (9058852845760632038LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29068)))))) : (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) 0)) : (var_7))))) ^ (((/* implicit */unsigned long long int) arr_24 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]))));
    }
    var_24 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 23ULL)) ? (((/* implicit */unsigned long long int) (+(-5525640268692868366LL)))) : ((-(var_3)))))) || (((var_10) == (var_9)))));
}
