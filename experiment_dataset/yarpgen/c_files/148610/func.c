/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148610
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            {
                var_19 = (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_2 [10LL] [10LL] [i_1 - 1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))))))) : (arr_5 [i_1] [i_1 + 1]));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 3; i_2 < 23; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] = ((/* implicit */_Bool) var_5);
                            arr_11 [i_0] [i_0] [i_0] = ((/* implicit */int) (+((~((~(var_3)))))));
                            var_20 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_0] [i_0]))))) ? ((-(16120575455536828146ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_2])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 -= ((/* implicit */short) (~(var_18)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_4 = 3; i_4 < 23; i_4 += 1) 
    {
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3013818235U)) ? (arr_0 [i_4 - 3] [i_4 + 1]) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_6)) + (2147483647))) << (((22ULL) - (22ULL)))))))))));
        /* LoopNest 2 */
        for (unsigned int i_5 = 2; i_5 < 20; i_5 += 2) 
        {
            for (long long int i_6 = 0; i_6 < 24; i_6 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        for (short i_8 = 0; i_8 < 24; i_8 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551594ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)182))))) : (((/* implicit */int) (short)-20435))));
                                var_24 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_5 - 1]))) / (arr_12 [i_5 - 2] [i_5 - 1])));
                                var_25 = ((/* implicit */unsigned short) var_7);
                            }
                        } 
                    } 
                    arr_29 [i_4] [i_5] [i_6] = ((/* implicit */short) var_1);
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned long long int) var_16);
        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_4 + 1])) ? (((/* implicit */int) arr_3 [i_4 + 1])) : (((/* implicit */int) arr_3 [i_4 + 1])))))));
        var_28 -= ((/* implicit */short) var_15);
    }
    /* vectorizable */
    for (unsigned int i_9 = 0; i_9 < 16; i_9 += 2) 
    {
        var_29 += ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_12 [i_9] [i_9])) ? (327538623398012273ULL) : (((/* implicit */unsigned long long int) var_18))))));
        arr_33 [i_9] [5] = ((/* implicit */_Bool) var_11);
    }
    for (unsigned char i_10 = 0; i_10 < 20; i_10 += 3) 
    {
        arr_37 [i_10] [(signed char)14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_18 [0LL])) : (((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) arr_19 [i_10] [8ULL] [i_10])) ? (((/* implicit */int) (short)-27879)) : (((/* implicit */int) (unsigned short)12892)))) : (arr_6 [i_10] [i_10] [i_10])))));
        arr_38 [i_10] [i_10] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 18446744073709551615ULL))));
        var_30 -= ((/* implicit */long long int) var_15);
    }
    var_31 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-17223))))) ? (((((/* implicit */int) (unsigned short)51236)) | (((/* implicit */int) var_4)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 22ULL)))))));
}
