/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134463
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                var_12 ^= ((/* implicit */short) min((((((/* implicit */_Bool) min(((signed char)-64), (arr_3 [i_0])))) ? (3571015322778897669ULL) : (((/* implicit */unsigned long long int) 3583621351U)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_11), (arr_6 [(unsigned short)6])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1 + 1] [i_1 - 1]))) : (max((((/* implicit */unsigned int) (unsigned short)55826)), (arr_2 [i_0] [i_0]))))))));
                var_13 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_7))));
                var_14 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) / (min((((/* implicit */long long int) 711345944U)), (1851987517013667519LL)))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    var_15 = ((/* implicit */unsigned int) ((short) arr_8 [i_1] [i_1] [i_1] [i_0]));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 9; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_2] [6ULL] [i_4] &= ((/* implicit */signed char) (+(max((arr_9 [(unsigned char)10] [(unsigned char)10] [i_1 + 2] [i_4 + 1]), (arr_9 [6ULL] [i_0] [i_1 + 2] [i_4 + 2])))));
                                arr_16 [i_0] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */_Bool) ((arr_12 [i_3] [i_3] [i_3] [i_3] [i_1]) ? (min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_2))), (((/* implicit */long long int) var_9)))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (2815705182U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))), (var_7)))));
                                arr_17 [i_0] [i_1] [i_1] [i_3] [i_3] [3LL] [i_4] = ((/* implicit */unsigned char) (short)(-32767 - 1));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 1; i_5 < 18; i_5 += 3) 
    {
        for (unsigned int i_6 = 4; i_6 < 19; i_6 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 20; i_7 += 3) 
                {
                    for (signed char i_8 = 0; i_8 < 20; i_8 += 3) 
                    {
                        {
                            var_16 *= ((/* implicit */unsigned char) ((signed char) var_6));
                            var_17 = ((((/* implicit */long long int) ((/* implicit */int) var_1))) - (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_23 [i_5] [i_5])), (var_7)))) ? (((/* implicit */long long int) ((arr_22 [i_5]) ? (arr_24 [i_7] [10LL] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38142)))))) : (1851987517013667519LL))));
                        }
                    } 
                } 
                arr_29 [i_5] [i_5] [i_6] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_5] [i_6 - 1] [i_6] [i_5 + 2] [i_5] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_5] [i_6 - 2] [i_6 - 2]))) : (var_6)))), (var_2)));
                arr_30 [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_5 + 2] [i_5] [i_5 + 2])) || (((/* implicit */_Bool) min((arr_19 [i_5]), (((/* implicit */long long int) (unsigned char)205))))))))));
                arr_31 [i_5] [i_5] = ((/* implicit */_Bool) ((long long int) (unsigned short)45159));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) min((((long long int) var_7)), (((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)45159)) + (((/* implicit */int) (unsigned char)127)))) * (((((/* implicit */_Bool) 2380579063081099623ULL)) ? (((/* implicit */int) (unsigned char)85)) : (((/* implicit */int) var_9)))))))));
}
