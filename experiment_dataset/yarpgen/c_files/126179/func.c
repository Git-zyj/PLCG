/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126179
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
    var_19 &= ((/* implicit */unsigned short) var_9);
    var_20 = ((/* implicit */int) var_3);
    var_21 = ((/* implicit */unsigned char) var_12);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        var_22 = ((/* implicit */unsigned long long int) (_Bool)0);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (long long int i_4 = 3; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_23 -= ((/* implicit */unsigned int) arr_9 [(_Bool)1] [(_Bool)1] [i_2] [i_2]);
                                var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0 + 1]))))) ? ((+(8869612524181234037ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) arr_2 [i_0 + 1]))))))))));
                                arr_15 [2] [2] [(signed char)0] [i_4] [i_4] |= ((/* implicit */_Bool) (((+(arr_4 [(short)2] [10U] [i_2 - 2]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)246)))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) -7942719865362317521LL)), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)242)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))), (2745689263807059666ULL)))));
                    /* LoopSeq 2 */
                    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 4) /* same iter space */
                    {
                        var_25 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2 - 2] [i_0 - 1] [(_Bool)1] [i_0 + 2]))) - (2745689263807059666ULL)));
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 2; i_6 < 13; i_6 += 4) 
                        {
                            arr_21 [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) var_1)) & (((/* implicit */int) arr_6 [i_0] [i_1]))));
                            var_26 = (unsigned char)27;
                            var_27 = ((/* implicit */unsigned long long int) var_7);
                        }
                        arr_22 [(unsigned short)11] = ((/* implicit */unsigned long long int) (+(((((((/* implicit */int) (unsigned char)68)) > (((/* implicit */int) arr_6 [i_1] [i_5])))) ? (((/* implicit */int) (unsigned char)242)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)29405)) && (((/* implicit */_Bool) (unsigned char)203)))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 0; i_7 < 16; i_7 += 1) 
                        {
                            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)220))))) ^ (((((/* implicit */_Bool) arr_13 [i_5] [i_0] [10] [i_0] [i_0] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1]))) : (3113797422U)))))) ? (((/* implicit */unsigned int) arr_23 [i_2])) : (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4006237024U)) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) (unsigned char)96))))), (arr_17 [3ULL] [i_1] [10LL] [i_1])))));
                            arr_25 [i_0] [i_1] [i_2 - 2] [i_5] [14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_3 [i_0 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-61)))))) ? (((((/* implicit */_Bool) ((arr_12 [i_2] [i_1] [i_2] [i_1] [i_1] [i_0 + 3]) * (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) arr_13 [i_2] [i_0 + 4] [0] [i_5] [(unsigned char)10] [i_5])) * (var_9)))) : (max((3294776891314749551LL), (((/* implicit */long long int) (_Bool)1)))))) : (-3294776891314749535LL)));
                            arr_26 [(signed char)6] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2 + 1] = ((/* implicit */_Bool) var_16);
                            var_29 -= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) -755716056)) ? (((/* implicit */int) (unsigned char)61)) : (((/* implicit */int) (unsigned char)121))))));
                        }
                    }
                    for (unsigned short i_8 = 0; i_8 < 16; i_8 += 4) /* same iter space */
                    {
                        arr_29 [i_2] = ((/* implicit */_Bool) (+(min((((((/* implicit */_Bool) 740322005)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (5348372485349095936ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)64))) - (arr_12 [i_0] [i_0] [14ULL] [(signed char)6] [i_0] [i_0 + 2]))))))));
                        var_30 &= ((/* implicit */long long int) arr_1 [i_2]);
                        arr_30 [i_0 + 3] [i_1] [i_1] [0U] [i_8] = ((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0 + 1] [i_0] [(signed char)3] [i_0]);
                    }
                }
            } 
        } 
        var_31 = ((/* implicit */long long int) (~(755716055)));
    }
    /* vectorizable */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        arr_33 [i_9] [i_9] = ((/* implicit */short) (unsigned char)147);
        arr_34 [(signed char)9] = arr_31 [i_9];
        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_32 [i_9])) * (((/* implicit */int) arr_32 [i_9]))));
        var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_31 [i_9])) ? (((var_18) ? (((/* implicit */int) arr_32 [i_9])) : (((/* implicit */int) arr_32 [i_9])))) : (((/* implicit */int) arr_32 [i_9]))));
    }
    var_34 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned char) var_18))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (max((((/* implicit */unsigned int) var_7)), (max((((/* implicit */unsigned int) var_10)), (var_16)))))));
}
