/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135861
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
    var_19 = ((/* implicit */unsigned long long int) var_6);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 4; i_1 < 10; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (1237593809U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_11)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    arr_7 [i_0] [i_1] = ((/* implicit */unsigned long long int) (-((~((((_Bool)1) ? (arr_0 [i_0]) : (((/* implicit */int) var_7))))))));
                    /* LoopSeq 4 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        var_21 = ((/* implicit */long long int) (unsigned short)61524);
                        var_22 = ((/* implicit */signed char) arr_0 [i_3]);
                        var_23 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) arr_4 [i_0] [i_1] [i_0])), (max((arr_3 [i_3 + 1] [i_0]), (arr_3 [i_3] [i_1 + 1])))));
                    }
                    for (long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned short) (~(10410024209810570100ULL)));
                        arr_12 [i_2] [i_1 + 1] [i_0] = ((/* implicit */short) min((((/* implicit */long long int) var_4)), (arr_2 [i_0])));
                    }
                    for (int i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        var_25 *= ((/* implicit */short) ((((((/* implicit */_Bool) arr_5 [i_1 - 4] [i_1] [i_1])) || (((/* implicit */_Bool) 1237593797U)))) && (((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_1 - 2] [i_1] [i_5]))));
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) - ((~(arr_5 [i_0] [i_1] [i_2])))));
                        /* LoopSeq 1 */
                        for (signed char i_6 = 1; i_6 < 9; i_6 += 2) 
                        {
                            var_27 = ((/* implicit */_Bool) (unsigned char)232);
                            var_28 ^= ((/* implicit */short) (~(((((/* implicit */_Bool) min((3057373487U), (1237593807U)))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) 4884957253190565331LL)) ? (-2147483639) : (((/* implicit */int) (_Bool)1))))))));
                            var_29 = ((/* implicit */unsigned char) arr_6 [i_0] [i_0] [i_0]);
                            var_30 = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1 - 2] [i_5] [i_1 - 2] [i_5] [i_6 - 1] [(_Bool)1] [i_6 + 2]))) / (arr_5 [i_1 + 1] [i_1 - 2] [i_1 - 4]))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1 - 2] [i_1] [i_5] [i_5] [i_1] [i_1] [i_6 - 1])))));
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_31 -= ((/* implicit */unsigned char) var_17);
                            arr_22 [i_0] [i_1 - 4] [i_2] [i_5] [i_7] [i_5] [i_2] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 1237593784U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (181085126U)))));
                            var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((1237593809U) - (3057373487U)))) + (arr_18 [i_1 - 3] [i_1] [i_1 - 3] [i_5] [i_1])));
                            arr_23 [i_0] [i_1] [i_5] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_1))));
                        }
                        /* vectorizable */
                        for (signed char i_8 = 2; i_8 < 9; i_8 += 3) 
                        {
                            var_33 = (!(((/* implicit */_Bool) ((1237593807U) & (((/* implicit */unsigned int) 0))))));
                            var_34 = ((/* implicit */short) ((9108173751636315253LL) < (((/* implicit */long long int) 1237593809U))));
                            var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) ((short) var_6)))));
                            var_36 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (short)19555)))) || (((((/* implicit */_Bool) 2673587726121600885LL)) || (((/* implicit */_Bool) 9108173751636315253LL))))));
                        }
                    }
                    /* vectorizable */
                    for (short i_9 = 0; i_9 < 11; i_9 += 2) 
                    {
                        var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1 - 3] [i_1 - 1])) && (((/* implicit */_Bool) arr_27 [i_0] [6U] [i_0] [i_2] [i_9]))));
                        arr_29 [i_9] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 9108173751636315266LL))));
                        arr_30 [(signed char)10] [i_1 - 2] [i_1 - 3] [i_1] = ((/* implicit */unsigned long long int) arr_5 [2ULL] [i_1 - 4] [i_1]);
                        var_38 *= ((/* implicit */_Bool) (+(arr_16 [i_0] [i_1 - 3] [i_2] [i_9] [i_0])));
                    }
                }
            } 
        } 
    } 
    var_39 = (~(-4884957253190565325LL));
    var_40 = ((/* implicit */int) (short)19555);
    var_41 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) - ((-(var_18)))))) + (min((8745095363636498115LL), (((/* implicit */long long int) var_8))))));
}
