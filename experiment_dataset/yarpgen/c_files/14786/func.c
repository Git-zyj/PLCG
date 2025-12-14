/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14786
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
    var_16 = (((_Bool)0) ? (max((((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_7)), ((unsigned short)5237)))), (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) ((864691128455135232LL) >= (((/* implicit */long long int) 4228914643U)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 15944653970719337197ULL))))) : (((/* implicit */int) min((var_13), (var_5))))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) == (var_3)))) : (((/* implicit */int) var_15)));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) var_13))));
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            var_19 |= ((/* implicit */signed char) (-(arr_7 [i_0 + 4])));
                            var_20 = ((/* implicit */unsigned short) var_13);
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */long long int) ((short) arr_7 [i_0 + 2]));
                        }
                        for (signed char i_5 = 0; i_5 < 13; i_5 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) var_4))));
                            var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(var_9))))));
                        }
                        var_23 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_12))) == (var_2)));
                        arr_15 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)208)) ^ (((/* implicit */int) (short)26090))));
                    }
                    for (unsigned int i_6 = 1; i_6 < 12; i_6 += 3) 
                    {
                        arr_20 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (short)3968)) == (((/* implicit */int) (signed char)-18))));
                        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((max((((/* implicit */unsigned int) (_Bool)1)), (2176007005U))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_15)))))) != (((((/* implicit */long long int) ((/* implicit */int) var_12))) - (9223372036854775803LL))))))))))));
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((+(((/* implicit */int) var_1)))) * (((/* implicit */int) var_15))))) ? ((+(min((((/* implicit */unsigned long long int) arr_10 [i_6 - 1] [i_2] [i_2] [i_1] [i_0])), (11610217498995984037ULL))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */int) var_15)) * (((/* implicit */int) var_14)))), (((/* implicit */int) var_11)))))));
                        var_26 = ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18791))) : (var_2));
                    }
                    /* vectorizable */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((/* implicit */int) arr_23 [12U] [i_0] [i_0 + 4] [i_0 + 1] [i_0] [i_0 + 4])) & (((/* implicit */int) arr_23 [i_0 + 2] [i_0 + 4] [i_0 + 3] [i_0 + 2] [i_0 + 2] [i_0 + 4])))))));
                        var_28 = ((/* implicit */short) ((((/* implicit */int) var_14)) == (((/* implicit */int) arr_17 [i_0 + 4]))));
                    }
                    var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_14)), (max((-8263588779385193120LL), (-8900781545464360459LL)))))) ? ((+(((/* implicit */int) min((var_5), (var_5)))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((short) var_9)))) == (min((((/* implicit */long long int) var_12)), (var_4)))))))))));
                    arr_24 [i_1] [i_1] [i_1] = ((unsigned int) arr_23 [i_0 + 2] [i_0] [i_1] [i_0 + 2] [i_2] [i_2]);
                    /* LoopSeq 2 */
                    for (long long int i_8 = 2; i_8 < 12; i_8 += 3) 
                    {
                        arr_27 [i_1] [i_1] = ((/* implicit */unsigned short) (~(((max((var_4), (var_2))) / (min((var_4), (var_10)))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_9 = 0; i_9 < 13; i_9 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned int) var_4);
                            var_31 = ((long long int) 549755812864ULL);
                            var_32 = ((/* implicit */long long int) (+(((/* implicit */int) arr_9 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8] [i_0 + 3]))));
                            var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) arr_13 [i_0 + 4] [i_1] [i_2] [i_8] [i_1] [i_2]))));
                        }
                    }
                    for (signed char i_10 = 0; i_10 < 13; i_10 += 2) 
                    {
                        var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) -919824440899093858LL))));
                        /* LoopSeq 2 */
                        for (unsigned int i_11 = 1; i_11 < 11; i_11 += 2) 
                        {
                            var_35 |= ((/* implicit */signed char) var_4);
                            var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) var_4))));
                            var_37 = ((/* implicit */signed char) max((var_37), (var_12)));
                            var_38 = ((/* implicit */short) ((var_7) ? (((/* implicit */int) var_13)) : (((/* implicit */int) max((((/* implicit */short) ((var_4) < (((/* implicit */long long int) ((/* implicit */int) var_15)))))), (var_1))))));
                            var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (signed char)92)), (var_11))))) != (var_4))))) : (max((((/* implicit */long long int) (unsigned char)1)), (-6130732177743567551LL)))));
                        }
                        for (signed char i_12 = 3; i_12 < 12; i_12 += 1) 
                        {
                            var_40 ^= ((/* implicit */long long int) (_Bool)1);
                            arr_39 [i_0] [i_1] [i_1] [i_10] [i_1] = ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_10))) / (((/* implicit */long long int) ((((/* implicit */int) arr_35 [i_2])) + (((/* implicit */int) var_5))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_13 = 4; i_13 < 10; i_13 += 4) 
                        {
                            arr_42 [i_13 - 4] [1U] [i_10] [i_1] [i_2] [i_1] [i_0 + 1] = ((/* implicit */unsigned long long int) min((-417162408998953767LL), (((9223372036854775807LL) + (((/* implicit */long long int) ((/* implicit */int) (short)0)))))));
                            var_41 ^= ((/* implicit */signed char) var_15);
                        }
                        var_42 = ((/* implicit */signed char) ((_Bool) (~((~(((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_2] [i_10])))))));
                        arr_43 [i_1] [i_1] [i_1] [(unsigned char)4] [i_1] = ((/* implicit */short) min((((unsigned long long int) 3912761193421750472ULL)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0 + 2] [i_0 + 4] [i_0 + 4] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_14 [i_0 + 2] [i_0 + 4] [i_0 + 4] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_14 [i_0 + 2] [i_0 + 4] [i_0 + 4] [i_0 - 1] [i_0 - 1])))))));
                    }
                }
            } 
        } 
    } 
}
