/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102713
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
    var_18 = var_9;
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) 2147483647);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 3; i_3 < 21; i_3 += 3) 
                {
                    {
                        var_20 |= ((/* implicit */int) var_9);
                        arr_13 [i_1] [20LL] [i_3 + 1] = ((((((/* implicit */int) (unsigned char)79)) != (((/* implicit */int) arr_12 [i_3 - 1] [i_3 + 2] [i_3 + 3] [i_3 + 1])))) ? (((((/* implicit */int) arr_12 [i_3 + 2] [i_3 + 2] [i_3 + 1] [i_3 - 2])) & ((-2147483647 - 1)))) : (((((/* implicit */int) arr_12 [i_3 + 1] [i_3 - 3] [i_3 - 2] [i_3 - 2])) + (((/* implicit */int) arr_12 [i_3 + 2] [i_3 + 2] [i_3 + 3] [i_3 + 2])))));
                        arr_14 [i_0] [i_1] [i_0] [(short)16] [i_0] [i_0] = max((((/* implicit */int) ((signed char) 2147483647))), (((((/* implicit */_Bool) 2147483647)) ? ((-(((/* implicit */int) (unsigned short)3)))) : (((/* implicit */int) (unsigned char)177)))));
                        var_21 = ((/* implicit */unsigned int) max((((/* implicit */int) ((signed char) (unsigned char)9))), ((-(((/* implicit */int) arr_9 [i_1] [i_3 - 3] [i_3 + 1] [i_3]))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            for (long long int i_5 = 2; i_5 < 23; i_5 += 1) 
            {
                {
                    arr_19 [i_0] [i_0] [i_0] = arr_11 [8];
                    arr_20 [i_0] [(short)19] [i_5] = ((/* implicit */unsigned int) arr_17 [i_0] [17ULL] [18LL]);
                    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))) ? (min((var_5), (((((/* implicit */_Bool) (signed char)-109)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_17))))))) : (((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */short) var_2)), ((short)25239)))) - (((((/* implicit */int) (signed char)108)) - (((/* implicit */int) var_4)))))))));
                    /* LoopNest 2 */
                    for (short i_6 = 4; i_6 < 21; i_6 += 1) 
                    {
                        for (long long int i_7 = 3; i_7 < 23; i_7 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */int) min((var_23), (((((/* implicit */_Bool) ((short) (unsigned char)216))) ? (((/* implicit */int) ((18446744073709551613ULL) >= (((/* implicit */unsigned long long int) var_3))))) : (((/* implicit */int) var_7))))));
                                arr_26 [i_6] [(unsigned char)13] [8] [i_6 + 3] = var_13;
                            }
                        } 
                    } 
                    arr_27 [i_0] [(short)9] [20] [20] = ((/* implicit */unsigned short) arr_21 [i_0]);
                }
            } 
        } 
        var_24 = ((/* implicit */_Bool) 18446744073709551613ULL);
    }
    for (unsigned int i_8 = 0; i_8 < 19; i_8 += 1) 
    {
        arr_30 [i_8] = ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) arr_29 [i_8] [i_8])), (arr_8 [i_8]))), (((/* implicit */unsigned long long int) 1066053528U))));
        var_25 = ((((/* implicit */_Bool) (((-(-9223372036854775792LL))) / (((/* implicit */long long int) ((arr_1 [i_8]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_8] [i_8] [(short)21] [i_8]))))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) - (var_10))));
        var_26 = ((/* implicit */unsigned char) max(((-(((/* implicit */int) (unsigned char)96)))), (((((/* implicit */_Bool) 20ULL)) ? ((+(((/* implicit */int) (short)-4366)))) : ((+(((/* implicit */int) (short)-32763))))))));
    }
    /* vectorizable */
    for (unsigned int i_9 = 1; i_9 < 13; i_9 += 1) 
    {
        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_9 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_9 + 2]))) : (3007848064303229584LL)));
        arr_33 [i_9] [i_9] = ((/* implicit */unsigned int) var_17);
        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_32 [i_9 + 2]))) ? (((/* implicit */int) arr_21 [i_9 + 1])) : (((/* implicit */int) arr_21 [i_9 + 3]))));
    }
    var_29 = ((/* implicit */short) var_5);
    /* LoopNest 2 */
    for (short i_10 = 0; i_10 < 23; i_10 += 1) 
    {
        for (long long int i_11 = 1; i_11 < 21; i_11 += 1) 
        {
            {
                var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((signed char) min((748816453), (((/* implicit */int) arr_17 [i_10] [i_10] [7ULL])))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_37 [i_11] [i_10])))))));
                var_31 = ((/* implicit */int) var_4);
                var_32 *= ((/* implicit */long long int) (!(((((/* implicit */_Bool) min((var_10), (((/* implicit */long long int) (signed char)96))))) && (((/* implicit */_Bool) var_2))))));
            }
        } 
    } 
}
