/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165285
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
    var_11 *= ((/* implicit */_Bool) var_5);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_2 = 2; i_2 < 18; i_2 += 2) 
                {
                    var_12 ^= ((/* implicit */unsigned int) ((7864320LL) - (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                    arr_11 [i_0] [i_1] [i_2] [i_2 + 1] = 8U;
                }
                /* vectorizable */
                for (long long int i_3 = 1; i_3 < 17; i_3 += 1) 
                {
                    arr_16 [i_0] [i_1] [i_3] [i_1] = ((/* implicit */signed char) ((arr_13 [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_0 [i_0] [i_0]))))));
                    arr_17 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_14 [i_3 + 1] [i_3 - 1]))));
                    var_13 = ((/* implicit */unsigned short) (~(var_0)));
                    var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(6957608603070871804LL))))));
                }
                for (int i_4 = 1; i_4 < 18; i_4 += 4) 
                {
                    var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(arr_10 [i_0] [i_1] [i_4]))))));
                    var_16 = ((/* implicit */long long int) max(((!(((/* implicit */_Bool) arr_3 [i_4 + 1])))), ((!(((/* implicit */_Bool) var_0))))));
                    /* LoopSeq 1 */
                    for (signed char i_5 = 3; i_5 < 16; i_5 += 2) 
                    {
                        var_17 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_5 + 2])) ? (((((/* implicit */int) var_3)) | (33550336))) : (((/* implicit */int) ((((/* implicit */_Bool) 4294967288U)) && (((/* implicit */_Bool) (signed char)-47))))))));
                        var_18 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_12 [i_5] [i_4] [i_1]) : (33550336)))) ? (((/* implicit */unsigned long long int) -1842474263)) : (max((arr_13 [2]), (((/* implicit */unsigned long long int) (signed char)-41)))))), (((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) 851893296U)) ? (var_0) : (((/* implicit */long long int) 3609095759U))))))));
                    }
                    arr_23 [i_0] [14LL] [8U] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [(signed char)6])) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) 4294967286U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))), (((long long int) var_4)))) : (max((((/* implicit */long long int) ((unsigned int) var_0))), (var_0)))));
                    var_19 *= ((/* implicit */short) arr_1 [i_4]);
                }
                var_20 = ((/* implicit */unsigned int) arr_1 [i_1]);
                arr_24 [i_0] = ((/* implicit */int) var_10);
                /* LoopSeq 1 */
                for (unsigned int i_6 = 3; i_6 < 16; i_6 += 2) 
                {
                    arr_28 [i_6] [i_1] = max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((arr_0 [i_6] [i_1]) + (9223372036854775807LL))) >> (((3259246892U) - (3259246869U)))))) ? (((/* implicit */int) ((signed char) arr_2 [i_1]))) : (((/* implicit */int) arr_21 [i_6]))))), (((var_5) / (arr_26 [i_6 + 1] [i_6 - 3] [i_0] [i_0]))));
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 16; i_7 += 4) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 19; i_8 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) min((var_21), ((~(-7691218011113687764LL)))));
                                arr_33 [i_0] [i_1] [i_6] [i_7 + 3] [i_6] = ((/* implicit */signed char) ((var_0) == (((arr_29 [12] [i_1] [i_6] [i_8]) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20027)))))));
                            }
                        } 
                    } 
                    arr_34 [i_0] [i_6] [(short)1] = ((/* implicit */signed char) ((_Bool) arr_19 [i_0] [i_0]));
                }
            }
        } 
    } 
}
