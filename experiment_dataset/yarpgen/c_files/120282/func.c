/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120282
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
    var_14 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_8)) ? (var_5) : (var_13))), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551615ULL)))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 4; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (short i_4 = 1; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((+(arr_8 [i_4] [i_0] [i_2] [(_Bool)1] [i_0])))))) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0 - 1] [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3] [i_0] [i_0] [i_0]))) : (0ULL))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 18446744073709551606ULL)) ? (((/* implicit */int) arr_7 [i_0] [i_4])) : (((/* implicit */int) (_Bool)1)))) >> (((arr_8 [i_1] [i_4] [i_4] [i_4] [i_4 + 1]) - (532766412)))))))))));
                                var_16 = ((/* implicit */short) var_6);
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_1] [(unsigned char)15] [15])) ? (min((1ULL), (24ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((var_6) <= (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_2] [i_2] [i_2] [i_1] [i_2] [i_0]))))))))))))));
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */unsigned short) var_5);
        var_18 -= (!(((/* implicit */_Bool) (-(14ULL)))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 20; i_5 += 4) 
    {
        arr_14 [(unsigned char)7] = ((/* implicit */short) arr_13 [i_5] [i_5]);
        /* LoopNest 2 */
        for (unsigned short i_6 = 2; i_6 < 17; i_6 += 3) 
        {
            for (unsigned int i_7 = 0; i_7 < 20; i_7 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 1; i_8 < 19; i_8 += 2) 
                    {
                        for (long long int i_9 = 0; i_9 < 20; i_9 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_8 + 1] [i_8 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((unsigned short) 7ULL))))))));
                                arr_27 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_6 + 1] [i_6])) ? (7135089816472793987ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_6 + 1] [(short)12])))));
                                arr_28 [i_6 - 2] = ((/* implicit */unsigned long long int) ((18348487999995411423ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7)))));
                            }
                        } 
                    } 
                    arr_29 [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) arr_24 [i_7] [i_7] [i_5] [i_6] [i_6 + 2] [i_5] [i_5])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_7] [i_6] [i_6] [i_5])))));
                }
            } 
        } 
    }
    for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 4) 
    {
        arr_32 [i_10] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) arr_31 [i_10]))) || (((((((/* implicit */_Bool) (unsigned char)81)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_10]))) : (arr_30 [i_10]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_10])))))));
        arr_33 [i_10] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((arr_31 [i_10]) ? (((/* implicit */int) arr_31 [i_10])) : (((/* implicit */int) (_Bool)1))))), (((arr_30 [i_10]) | (arr_30 [i_10])))));
    }
    var_20 = ((/* implicit */signed char) (!(((((/* implicit */unsigned long long int) ((unsigned int) var_3))) != (max((((/* implicit */unsigned long long int) var_12)), (9908065893250050129ULL)))))));
    var_21 = ((/* implicit */int) (unsigned short)42118);
    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (-(((/* implicit */int) var_7)))))));
}
