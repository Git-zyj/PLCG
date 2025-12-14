/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108927
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
    var_20 = ((/* implicit */signed char) (-(max((((/* implicit */long long int) (+(636128794)))), (((((/* implicit */_Bool) var_6)) ? (-4792886904229466632LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-100)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */short) ((((/* implicit */long long int) var_13)) | ((~((~(arr_2 [i_0])))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 4; i_3 < 20; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            var_22 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_11))) / (arr_1 [i_0] [i_1]))) == (((/* implicit */unsigned int) (~(((/* implicit */int) var_2)))))));
                            arr_11 [i_2] [i_0] [i_2] [i_2] = ((/* implicit */signed char) ((-4578086790947240532LL) / (((((/* implicit */_Bool) (signed char)63)) ? (arr_8 [i_0] [i_0] [i_2] [i_3] [i_4]) : (((/* implicit */long long int) 1728655981U))))));
                        }
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -636128794)) ? (((arr_10 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 3] [i_0 - 3] [i_0]) | (121415897))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)5)) <= (((/* implicit */int) var_5)))))));
                        var_24 = ((/* implicit */short) arr_0 [i_0]);
                        /* LoopSeq 2 */
                        for (long long int i_5 = 2; i_5 < 20; i_5 += 4) 
                        {
                            arr_16 [(signed char)17] [i_0] [i_2] [i_3 + 1] [i_5] = ((/* implicit */signed char) var_6);
                            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_12 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) (unsigned char)26))));
                            var_26 = ((/* implicit */short) (-(var_12)));
                            var_27 = ((/* implicit */signed char) (~(var_19)));
                            var_28 = ((/* implicit */short) (+(arr_8 [i_3] [i_3 - 2] [i_2] [i_1 + 1] [i_0])));
                        }
                        for (signed char i_6 = 3; i_6 < 19; i_6 += 4) 
                        {
                            var_29 = ((/* implicit */signed char) var_19);
                            arr_19 [i_0] [i_0] [i_0] [i_0 + 2] [6] = ((/* implicit */signed char) ((unsigned char) (unsigned char)96));
                            var_30 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3313478493226575064LL)) ? (4161228703524028691LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))));
                        }
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) (+(((((/* implicit */_Bool) 1164171653111744001LL)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_16))))))))));
                        var_32 = ((/* implicit */long long int) (signed char)4);
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 4; i_8 < 21; i_8 += 1) 
                        {
                            var_33 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_12 [i_0] [i_1 + 2])) : ((-(((/* implicit */int) var_16))))));
                            var_34 ^= ((/* implicit */short) arr_14 [i_8 - 2] [10] [i_2] [i_0]);
                            arr_26 [i_0 + 2] [i_0] [i_2] [i_7] [(signed char)10] = ((/* implicit */unsigned char) 3180989172850974884LL);
                            var_35 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)255)) <= (var_6)));
                        }
                    }
                    /* vectorizable */
                    for (unsigned char i_9 = 0; i_9 < 22; i_9 += 3) 
                    {
                        var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((unsigned int) arr_23 [20LL] [20LL] [i_9]))) < (((long long int) 636128794)))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_10 = 2; i_10 < 18; i_10 += 1) 
                        {
                            var_37 *= ((/* implicit */unsigned int) arr_0 [2U]);
                            var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_28 [i_0] [i_1 - 3] [i_2] [i_0] [i_9] [i_10])))))))));
                            arr_35 [i_0] [i_1] [i_2] [20LL] |= (-(((/* implicit */int) arr_7 [i_0 - 1] [i_1 - 1] [i_10 + 3] [i_10 - 2] [i_10] [i_10 - 1])));
                            var_39 = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_10 + 2] [i_10 - 2] [i_10 + 1] [i_10] [i_10])) && (((/* implicit */_Bool) (short)-4861)))))) + ((+(8769692600264718066LL))));
                        }
                        for (long long int i_11 = 0; i_11 < 22; i_11 += 2) 
                        {
                            arr_39 [i_0] [i_0] [i_2] [i_9] [i_11] = var_17;
                            arr_40 [(unsigned char)1] [i_9] [8U] [i_0] [i_9] [i_9] = ((/* implicit */unsigned int) ((long long int) arr_14 [i_0] [i_0] [i_0 - 3] [i_0]));
                            var_40 |= ((/* implicit */unsigned int) ((unsigned char) 2566311314U));
                        }
                        var_41 = ((/* implicit */short) (-(((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned char)221)) : (2147483647)))));
                        var_42 = ((/* implicit */signed char) ((arr_2 [i_0]) >> (((((((/* implicit */_Bool) 8769692600264718066LL)) ? (3313478493226575064LL) : (3313478493226575064LL))) - (3313478493226575045LL)))));
                    }
                }
                var_43 = ((((/* implicit */long long int) 2566311314U)) / ((+(min((-7225006630563161493LL), (((/* implicit */long long int) 1065914710)))))));
                /* LoopNest 2 */
                for (long long int i_12 = 0; i_12 < 22; i_12 += 3) 
                {
                    for (int i_13 = 2; i_13 < 21; i_13 += 1) 
                    {
                        {
                            var_44 = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_32 [i_0] [i_0] [i_13 - 1] [i_12] [i_12] [i_1 + 1]))))) ? (((/* implicit */long long int) max((((((/* implicit */int) (short)13630)) + (-95336364))), (((/* implicit */int) (short)(-32767 - 1)))))) : ((-(-3313478493226575064LL))));
                            arr_46 [i_0] = ((/* implicit */unsigned int) arr_29 [i_0 - 1] [i_0 - 1] [i_12] [i_13 + 1]);
                            var_45 = ((/* implicit */unsigned char) (((~(var_17))) >> ((((+(((/* implicit */int) (short)-4861)))) + (4915)))));
                            var_46 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-17212)) : (((/* implicit */int) arr_33 [i_13] [i_13 - 2] [i_12]))))), ((+(((unsigned int) 1720088616))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
