/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162382
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
    var_15 = ((/* implicit */int) ((_Bool) var_1));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        arr_11 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1 - 1])) ? (arr_10 [i_1 + 1]) : (arr_10 [i_1 + 1]))))));
                        arr_12 [i_1] [i_1 + 1] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_6)))))) : (arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 1])))) ? ((((+(405606621U))) * (((/* implicit */unsigned int) ((var_11) | (var_5)))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_3 [i_1 + 1] [i_1] [i_2]), (arr_5 [i_0] [i_0] [i_0] [i_1 - 1])))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 14; i_4 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 1) 
                        {
                            arr_17 [i_0] [i_1] [i_2] [i_0] [i_2] [i_5] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0] [i_1 + 1]))));
                            var_16 -= ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 - 1] [i_1 - 1]))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            var_17 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_4])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_7 [i_1] [i_1] [i_4] [i_4]))))) >= (arr_16 [i_1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1])));
                            arr_22 [i_0] [i_1] [i_2] [i_1] [i_6] = ((/* implicit */unsigned short) ((_Bool) arr_20 [i_0] [i_1 - 1] [i_1 - 1] [i_4] [i_6] [i_1] [i_0]));
                            var_18 = ((/* implicit */unsigned long long int) ((3889360674U) | (((/* implicit */unsigned int) (-2147483647 - 1)))));
                            var_19 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 405606624U)) ? (((/* implicit */int) arr_5 [i_1] [i_1] [(unsigned char)4] [i_6])) : (var_11)))) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_1 + 1] [i_1 - 1])) : (((/* implicit */int) var_12)));
                        }
                        arr_23 [i_1] [i_1] [i_2] [(signed char)5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1] [i_4]))))) && (((/* implicit */_Bool) arr_1 [i_1 - 1]))));
                        /* LoopSeq 3 */
                        for (unsigned int i_7 = 0; i_7 < 14; i_7 += 2) 
                        {
                            var_20 = (+(((((/* implicit */_Bool) arr_19 [i_4] [i_2] [i_1 + 1] [4])) ? (var_3) : (var_3))));
                            arr_26 [i_0] [i_0] [i_1] [i_4] [i_7] = ((/* implicit */unsigned long long int) arr_25 [i_7] [i_1] [i_2] [i_1] [i_0]);
                            arr_27 [i_7] [i_1] [i_1] [i_1] [i_7] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_21 [i_2]))));
                            var_21 = ((/* implicit */unsigned int) arr_20 [i_7] [i_1] [i_4] [i_2] [i_1 + 1] [i_1] [i_0]);
                            arr_28 [i_0] [i_0] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) (~(arr_15 [i_0] [i_1] [i_2] [i_1 - 1] [i_1 - 1] [i_2])));
                        }
                        for (signed char i_8 = 0; i_8 < 14; i_8 += 2) 
                        {
                            arr_31 [i_1] = ((/* implicit */int) ((unsigned int) (unsigned char)109));
                            arr_32 [i_0] [i_0] [i_1] [i_4] [i_8] = ((/* implicit */unsigned int) var_6);
                            arr_33 [i_1] [i_1] [i_1] [i_4] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (arr_19 [i_0] [i_4] [i_4] [i_4]) : (((/* implicit */unsigned int) var_11))));
                            arr_34 [i_0] [i_1 + 1] [i_1] [i_4] [i_8] [i_4] [i_0] = ((((/* implicit */_Bool) (~(arr_8 [i_0] [i_1] [i_0] [i_0])))) ? (arr_21 [i_1 + 1]) : (((((/* implicit */int) arr_20 [i_0] [i_8] [i_2] [i_4] [i_8] [i_1] [i_0])) << (((var_4) - (323992108U))))));
                        }
                        for (unsigned int i_9 = 1; i_9 < 13; i_9 += 1) 
                        {
                            arr_39 [i_0] [i_1 + 1] [i_1 + 1] [i_1] [i_9] [i_1 + 1] = ((/* implicit */unsigned int) 1390464275);
                            arr_40 [i_1] [i_4] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) 4602678819172646912LL)) ? (0LL) : (((/* implicit */long long int) 405606624U))));
                            var_22 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_1 [i_0]))));
                        }
                    }
                    for (int i_10 = 2; i_10 < 12; i_10 += 2) 
                    {
                        arr_43 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((8983285331768096822LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)13)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) var_0)) * (arr_30 [i_1] [i_1] [i_2]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_12)), (arr_18 [i_0] [3] [i_10] [i_10] [i_10]))))))))) : ((+(((((/* implicit */_Bool) arr_30 [i_1] [i_1 + 1] [i_0])) ? (arr_14 [i_0] [i_1] [i_1]) : (((/* implicit */unsigned int) var_10))))))));
                        arr_44 [i_1] = ((/* implicit */unsigned char) (+((~(((/* implicit */int) var_9))))));
                        var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_38 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                    }
                    arr_45 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */long long int) 1447740776)) / (-8983285331768096822LL)))) ? (((-8983285331768096824LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)227))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_20 [i_0] [i_0] [i_2] [i_1 - 1] [i_0] [i_1] [i_0])) > (((/* implicit */int) arr_20 [i_0] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_2] [i_1] [i_2])))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_6))) ? (min((max((((/* implicit */unsigned int) 181279340)), (4294967295U))), (((/* implicit */unsigned int) (unsigned short)32768)))) : (var_13)));
    var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) max((8983285331768096823LL), (((/* implicit */long long int) 267911168))))) ? (min((max((4294967284U), (((/* implicit */unsigned int) var_6)))), (((/* implicit */unsigned int) var_8)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 8983285331768096821LL)) ? (((((/* implicit */_Bool) (signed char)-122)) ? (-1031213315) : (((/* implicit */int) (unsigned char)1)))) : (((/* implicit */int) var_7))))))))));
}
