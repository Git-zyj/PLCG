/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159136
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */short) (-(((unsigned long long int) var_16))));
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) min((var_9), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_2 [i_0] [i_1]))))) & (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) var_4)))))))))))));
            var_22 = ((/* implicit */short) (((-(1ULL))) - (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) 18446744073709551602ULL)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)65535))))))));
        }
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            var_23 = ((/* implicit */unsigned long long int) 3883005017881862723LL);
            var_24 = ((/* implicit */unsigned short) arr_0 [i_0]);
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_4) : (((/* implicit */int) (short)14322))));
        }
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) * (((/* implicit */int) var_15))));
            var_27 = ((/* implicit */short) 18446744073709551614ULL);
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */int) arr_11 [8U] [i_4] [i_0] [i_0])) << (((((/* implicit */int) arr_12 [i_0] [i_5] [i_5])) - (14764))))));
                            var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)58)) ? (var_8) : (((/* implicit */int) arr_16 [i_4] [i_6 + 1] [i_6] [i_6 + 1] [i_6 + 1])))))));
                            var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_6 + 1] [6LL] [i_6 + 1] [i_6] [i_6 + 1] [i_6 + 1])) ? (((/* implicit */long long int) arr_14 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6] [i_6 + 1] [i_6 + 1])) : (8775094125300250518LL)));
                        }
                    } 
                } 
            } 
            var_31 = arr_10 [i_0] [i_0];
        }
    }
    var_32 += ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_7)), (var_11)));
    /* LoopNest 2 */
    for (signed char i_7 = 0; i_7 < 15; i_7 += 4) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 3) 
        {
            {
                var_33 = ((/* implicit */short) ((((long long int) var_6)) * (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)198)) || (((/* implicit */_Bool) 19ULL))))))))));
                var_34 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (short)-2068)), (18446744073709551596ULL)));
                var_35 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_17 [i_7] [i_7])) << ((((~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_21 [i_7] [i_8])) : (((/* implicit */int) var_10)))))) - (32)))));
            }
        } 
    } 
    var_36 = ((/* implicit */short) var_17);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_9 = 3; i_9 < 11; i_9 += 3) 
    {
        var_37 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2057437298)) ? (2464120514U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-96)))))) > (((((/* implicit */_Bool) var_9)) ? (arr_20 [i_9]) : (var_12)))));
        var_38 = ((/* implicit */_Bool) arr_22 [i_9 + 2]);
        /* LoopNest 3 */
        for (long long int i_10 = 2; i_10 < 14; i_10 += 1) 
        {
            for (unsigned int i_11 = 0; i_11 < 15; i_11 += 4) 
            {
                for (signed char i_12 = 0; i_12 < 15; i_12 += 1) 
                {
                    {
                        var_39 = ((/* implicit */long long int) ((((/* implicit */int) arr_21 [i_9] [i_9 + 2])) - (((/* implicit */int) var_10))));
                        var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_21 [i_10 - 1] [(short)9])) : (var_4)));
                        var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 536870911LL)) ? (((/* implicit */int) arr_18 [i_9 - 2] [i_9 + 2])) : (((/* implicit */int) ((unsigned char) -22))))))));
                    }
                } 
            } 
        } 
        var_42 = ((/* implicit */long long int) arr_32 [i_9] [i_9]);
    }
}
