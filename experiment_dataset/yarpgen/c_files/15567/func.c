/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15567
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */long long int) min((arr_0 [i_0]), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)46975)) * (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */int) (short)3558)) : (((/* implicit */int) (unsigned char)242))))) : (((unsigned long long int) arr_0 [i_1]))))));
                var_19 &= ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_2 [i_1] [i_0]), (arr_2 [i_0] [i_1])))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))))) >> (((((/* implicit */int) arr_2 [i_0] [i_1])) - (97)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [(unsigned short)4])) ? (arr_0 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0])))))) ? (arr_1 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1])))))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) max((min((((((/* implicit */_Bool) (unsigned char)12)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned int) var_0)))), (min((((((/* implicit */_Bool) -1555548152405942648LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)22883))) : (4294967295U))), (((/* implicit */unsigned int) min((var_0), (var_0))))))));
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) 2652544702U)), (1555548152405942647LL)))) ? (var_10) : (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 22; i_2 += 4) 
    {
        for (long long int i_3 = 2; i_3 < 22; i_3 += 1) 
        {
            for (unsigned int i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                {
                    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) ((int) arr_11 [i_3])))) ? (arr_4 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64026)))));
                    arr_13 [i_2] [i_3] [(unsigned short)0] [(unsigned short)0] = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) | (((((/* implicit */_Bool) arr_11 [i_4])) ? (9223372036854775807LL) : (((/* implicit */long long int) arr_11 [i_2 + 1])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 22; i_5 += 3) 
                    {
                        for (int i_6 = 1; i_6 < 21; i_6 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) max((var_23), (min((min((((((/* implicit */_Bool) arr_9 [i_4] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (18446744073709551607ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_2] [i_2])) ? (((/* implicit */long long int) var_7)) : (arr_6 [i_2 + 1] [i_4])))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((arr_15 [i_2] [i_3 - 2]), (var_17)))), (((((/* implicit */_Bool) arr_3 [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_5] [i_6]))) : (arr_7 [i_4] [i_5]))))))))));
                                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */long long int) 31U)) : (7795539374957331117LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_2 - 1]))) >= (-7795539374957331118LL))))) : (((long long int) (signed char)-67))));
                                arr_19 [i_2] [i_3] [i_4] [i_5] [i_6] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_5] [i_5] [i_5 - 1] [i_5 - 1] [i_2])) ? (((/* implicit */int) arr_17 [i_5] [i_5] [i_5 - 1] [i_5 + 1] [i_2])) : (((/* implicit */int) arr_17 [i_5] [i_5] [i_5 + 1] [i_5 - 1] [i_2]))))), (arr_1 [i_4] [i_4])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = var_11;
}
