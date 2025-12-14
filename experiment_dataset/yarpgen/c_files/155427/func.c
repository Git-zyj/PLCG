/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155427
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
    var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) + (var_2))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) + (var_4))))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) * ((-(var_2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) 10761960955978544780ULL)) && (((/* implicit */_Bool) 17040690425968820177ULL)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_15 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) 17040690425968820181ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (4764871402667746431LL))));
        arr_4 [i_0] = ((/* implicit */int) ((_Bool) ((unsigned long long int) arr_2 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (signed char i_4 = 3; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_1] [(unsigned char)12] [i_2] [i_1] [i_1] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_0])))));
                                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [11ULL] [(short)4] [i_1] [11ULL])) ? (((/* implicit */int) arr_8 [i_3])) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_3 [i_2] [i_2])) : (((/* implicit */int) var_12))))));
                            }
                        } 
                    } 
                    arr_17 [i_1] = ((/* implicit */long long int) ((((unsigned int) arr_8 [i_2])) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1 - 1] [(short)6])) && (((/* implicit */_Bool) arr_12 [i_2] [i_1] [10U] [i_2]))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) var_3);
                                arr_22 [i_0] [i_0] [i_0] [11] [i_5] [i_1] = ((/* implicit */int) ((short) ((3363864699U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [1ULL] [i_1]))))));
                                var_18 = ((long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_10 [(unsigned char)0] [(unsigned char)0] [i_6])));
                                var_19 -= ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (arr_10 [i_0] [i_1] [i_5]) : (((/* implicit */unsigned long long int) arr_11 [(signed char)9] [i_1 + 2] [i_1 + 1] [i_1 - 1] [i_1 + 2]))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (signed char i_7 = 0; i_7 < 13; i_7 += 4) 
                    {
                        var_20 = ((unsigned short) arr_13 [i_7] [i_0] [i_7] [i_7] [i_0] [i_1]);
                        /* LoopSeq 1 */
                        for (long long int i_8 = 0; i_8 < 13; i_8 += 4) 
                        {
                            arr_28 [i_8] [i_8] [i_2] |= ((/* implicit */int) var_11);
                            var_21 *= ((/* implicit */signed char) ((unsigned int) (!(((/* implicit */_Bool) arr_2 [i_7] [i_8])))));
                            arr_29 [8LL] [i_1] [8LL] [8LL] [i_7] [i_7] [i_8] = ((/* implicit */unsigned short) ((unsigned int) arr_8 [i_1 + 2]));
                        }
                    }
                    for (unsigned char i_9 = 0; i_9 < 13; i_9 += 2) 
                    {
                        arr_34 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_31 [i_1 - 1] [i_1 - 1]))));
                        var_22 = ((/* implicit */unsigned int) var_0);
                    }
                }
            } 
        } 
        var_23 ^= ((/* implicit */signed char) ((unsigned int) var_3));
    }
}
