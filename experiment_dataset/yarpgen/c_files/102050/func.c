/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102050
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
    var_14 = ((/* implicit */signed char) (-9223372036854775807LL - 1LL));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */int) arr_7 [i_2] [i_2] [i_1] [i_0]);
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        var_16 = ((/* implicit */long long int) arr_7 [i_1] [i_1] [i_1] [i_3]);
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            var_17 = ((/* implicit */long long int) min((var_17), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((((/* implicit */_Bool) (unsigned char)192)) ? (((long long int) -9223372036854775800LL)) : (((9223372036854775807LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)224))))))) : (((/* implicit */long long int) 12U))))));
                            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_2 - 1] [i_2 + 2] [i_2 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_1 [i_2 - 1] [i_1])));
                        }
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)83)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)0))) : (12U)));
                        /* LoopSeq 1 */
                        for (signed char i_5 = 0; i_5 < 11; i_5 += 2) 
                        {
                            arr_17 [i_1] [i_5] = ((/* implicit */signed char) max((36028797018963967LL), (((/* implicit */long long int) (unsigned char)149))));
                            arr_18 [i_0] [i_1] [i_1] [i_3] [i_3] = ((/* implicit */_Bool) max((((/* implicit */long long int) min((((/* implicit */unsigned char) (signed char)114)), ((unsigned char)115)))), (8681960172182199376LL)));
                            var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) -9223372036854775807LL))) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 6U)) && (((/* implicit */_Bool) 24U))))))));
                        }
                    }
                    for (unsigned short i_6 = 0; i_6 < 11; i_6 += 2) 
                    {
                        arr_21 [i_0] [i_0] [i_2] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (var_8) : (0LL)));
                        arr_22 [i_0] [i_0] [i_0] [10LL] [i_2] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -36028797018963967LL)) ? (4741013025234990618LL) : (((/* implicit */long long int) -1079812406))));
                    }
                    arr_23 [i_2] [(signed char)3] [i_0] = ((/* implicit */unsigned int) var_11);
                    /* LoopNest 2 */
                    for (short i_7 = 1; i_7 < 7; i_7 += 3) 
                    {
                        for (long long int i_8 = 0; i_8 < 11; i_8 += 3) 
                        {
                            {
                                var_21 = (~(min((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)91))))), (((3556223287051689001LL) + (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_1] [i_2 + 1] [i_7] [i_8]))))))));
                                var_22 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 36028797018963974LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)165))) : (-36028797018963982LL)))) ? (((/* implicit */int) (unsigned short)63065)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned char)128)))))) | (((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [i_7]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */signed char) ((int) 9223372036854775807LL));
}
