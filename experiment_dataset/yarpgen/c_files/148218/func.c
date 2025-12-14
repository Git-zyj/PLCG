/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148218
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
    var_16 = ((/* implicit */unsigned long long int) max((var_0), (((/* implicit */unsigned short) ((unsigned char) var_10)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        var_17 -= ((/* implicit */short) min((((/* implicit */int) arr_1 [20ULL])), (max((((((/* implicit */_Bool) -1517104204)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0])))), (((/* implicit */int) ((2199023255551LL) <= (var_14))))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                for (unsigned short i_3 = 2; i_3 < 18; i_3 += 2) 
                {
                    {
                        arr_11 [i_3] &= ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0 + 1] [i_0 + 1] [i_1] [i_3] [i_3])) ? (-1) : (((/* implicit */int) arr_4 [i_3]))))) || (((/* implicit */_Bool) var_10)))) && ((!(((/* implicit */_Bool) var_3))))));
                        arr_12 [i_3] [i_0] [i_0] [(unsigned char)15] = ((/* implicit */int) var_14);
                        arr_13 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_5 [i_0]))));
                    }
                } 
            } 
        } 
    }
    var_18 = ((/* implicit */_Bool) ((var_13) ? ((-(2199023255567LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1)))))))));
    /* LoopNest 3 */
    for (unsigned short i_4 = 2; i_4 < 12; i_4 += 2) 
    {
        for (unsigned short i_5 = 0; i_5 < 13; i_5 += 2) 
        {
            for (int i_6 = 2; i_6 < 11; i_6 += 3) 
            {
                {
                    var_19 ^= ((/* implicit */short) ((unsigned short) (((+(var_1))) / (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_12)) : (var_1))))));
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 13; i_7 += 2) 
                    {
                        for (short i_8 = 1; i_8 < 11; i_8 += 3) 
                        {
                            {
                                arr_26 [i_8] [i_5] [i_5] [i_8] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_12)))))));
                                arr_27 [i_5] [i_5] [i_8] [i_5] [i_5] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_5)) ^ (((/* implicit */int) arr_16 [i_6] [i_6 - 1] [i_6 - 1])))) >= ((-(min((((/* implicit */int) arr_2 [15] [i_5])), (1517104204)))))));
                                var_20 = arr_22 [i_4] [(unsigned char)0] [(unsigned char)0];
                                arr_28 [i_8] = ((/* implicit */int) var_10);
                            }
                        } 
                    } 
                    arr_29 [i_4] [i_5] [i_5] [1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_4])) - (((/* implicit */int) arr_5 [i_4]))))) ? (max((((/* implicit */int) arr_0 [i_4])), (((arr_19 [i_5]) & (1))))) : ((+(((((/* implicit */_Bool) arr_5 [i_5])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8))))))));
                    arr_30 [i_5] = ((/* implicit */unsigned long long int) max((((unsigned int) 2199023255580LL)), (((/* implicit */unsigned int) max((((/* implicit */int) arr_5 [i_5])), (max((((/* implicit */int) var_13)), (arr_19 [i_4]))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned int i_9 = 0; i_9 < 10; i_9 += 3) 
    {
        arr_33 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_9] [i_9] [(unsigned char)16] [i_9] [(unsigned short)18] [i_9])) || (((/* implicit */_Bool) ((unsigned short) arr_16 [i_9] [i_9] [i_9])))));
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((short) arr_8 [i_9] [i_9] [i_9] [i_9])))));
        arr_34 [(_Bool)1] [i_9] = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)1656))));
    }
    /* vectorizable */
    for (signed char i_10 = 3; i_10 < 14; i_10 += 2) 
    {
        arr_38 [i_10 - 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(-1517104216)))) ? (((((/* implicit */int) arr_1 [0ULL])) + (((/* implicit */int) var_0)))) : (((/* implicit */int) arr_37 [i_10 - 1]))));
        /* LoopNest 2 */
        for (unsigned int i_11 = 0; i_11 < 15; i_11 += 4) 
        {
            for (short i_12 = 0; i_12 < 15; i_12 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_8))));
                    var_23 |= ((/* implicit */_Bool) arr_8 [i_12] [i_10] [i_12] [i_10]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_13 = 0; i_13 < 15; i_13 += 1) 
        {
            for (short i_14 = 0; i_14 < 15; i_14 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_15 = 3; i_15 < 12; i_15 += 4) 
                    {
                        for (unsigned int i_16 = 0; i_16 < 15; i_16 += 3) 
                        {
                            {
                                var_24 = ((((/* implicit */_Bool) -1LL)) ? (arr_53 [i_10] [(unsigned char)6] [i_10 - 2] [i_10 - 3] [i_15] [i_15 + 3] [i_15 - 3]) : (((/* implicit */int) (unsigned short)38964)));
                                var_25 = arr_52 [i_10 + 1] [i_15 + 2];
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (short)(-32767 - 1))))) && ((!(((/* implicit */_Bool) var_3))))));
                }
            } 
        } 
    }
    for (short i_17 = 2; i_17 < 16; i_17 += 2) 
    {
        var_27 = ((/* implicit */unsigned long long int) ((_Bool) max((max((var_14), (((/* implicit */long long int) arr_7 [i_17] [i_17] [i_17])))), (((/* implicit */long long int) arr_10 [i_17] [i_17 - 1] [i_17] [(signed char)2] [i_17])))));
        arr_56 [(signed char)0] [(_Bool)0] = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_13))))));
    }
    for (int i_18 = 0; i_18 < 12; i_18 += 2) 
    {
        arr_59 [i_18] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_9 [i_18] [2ULL] [2ULL] [i_18] [i_18] [i_18]))));
        arr_60 [i_18] = ((/* implicit */short) (((((~(7849498424060076824ULL))) & (((/* implicit */unsigned long long int) ((1138859415) & (((/* implicit */int) var_0))))))) / (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_57 [i_18] [i_18])) * (((/* implicit */int) arr_57 [i_18] [i_18])))))));
        var_28 = ((/* implicit */short) (~((~(((/* implicit */int) var_0))))));
        arr_61 [i_18] [i_18] = ((/* implicit */short) (~(((/* implicit */int) var_0))));
    }
}
