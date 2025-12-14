/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164758
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
    var_12 = ((/* implicit */unsigned int) (signed char)-18);
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */int) ((unsigned short) (~(((/* implicit */int) arr_4 [i_1 - 2])))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) (((+(((/* implicit */int) (_Bool)1)))) + ((+(((/* implicit */int) (_Bool)1))))));
                                arr_15 [i_1 + 1] [(signed char)11] [i_3] [(_Bool)1] [i_4] = ((/* implicit */unsigned short) (((((_Bool)1) ? (((/* implicit */long long int) 2084450452U)) : (-5463486733732991331LL))) & (((/* implicit */long long int) ((/* implicit */int) ((2084450452U) < (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))));
                                var_15 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_2] [i_4])) + (arr_10 [i_0] [i_1 - 3] [i_2] [i_3] [i_4] [i_1 - 2])))) ? (((var_8) & (((/* implicit */long long int) ((/* implicit */int) arr_4 [(_Bool)1]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(arr_7 [i_3] [i_3] [i_3]))))))));
                                var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */long long int) 3319895423U)) > (-1LL)))))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned long long int) ((_Bool) arr_4 [i_2]));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) ((((((((/* implicit */_Bool) (short)20711)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)232)))) - (((/* implicit */int) ((var_5) <= (((/* implicit */int) var_0))))))) - (((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) (unsigned short)33199)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 23; i_5 += 2) 
    {
        var_19 += ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (short i_7 = 0; i_7 < 23; i_7 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_25 [i_8] [(unsigned short)15] [i_5] [i_7] [i_6] [i_7] = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_7] [i_8])) - ((-(((/* implicit */int) arr_13 [i_5] [(short)7] [i_6] [1LL] [(short)7] [i_8]))))));
                        arr_26 [i_5] [i_6] [i_7] [i_8] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_0)))))));
                        /* LoopSeq 3 */
                        for (long long int i_9 = 0; i_9 < 23; i_9 += 1) 
                        {
                            var_20 = ((/* implicit */long long int) (-(arr_9 [i_5] [i_5] [i_7] [i_8] [i_9])));
                            arr_29 [i_9] [i_7] [i_9] [i_9] [i_9] [i_5] = ((/* implicit */short) (-(((/* implicit */int) var_0))));
                            arr_30 [(unsigned char)8] [(unsigned short)3] [i_7] [i_8] [22] [i_5] = ((/* implicit */signed char) (_Bool)1);
                            arr_31 [(signed char)19] = ((((/* implicit */int) (!(arr_18 [2U] [18ULL] [14LL])))) != (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (arr_9 [9] [9] [9] [i_8] [(_Bool)1]))));
                            var_21 += ((/* implicit */_Bool) ((((/* implicit */_Bool) 8234964145977612301ULL)) ? (2084450459U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                        }
                        for (unsigned int i_10 = 0; i_10 < 23; i_10 += 4) 
                        {
                            arr_34 [i_5] [i_6] [12LL] [20ULL] [i_10] [12LL] = ((/* implicit */short) var_5);
                            var_22 += ((/* implicit */signed char) ((((((/* implicit */int) arr_4 [i_10])) >> (((9223372036854775807LL) - (9223372036854775788LL))))) << (((((((/* implicit */_Bool) var_3)) ? (var_6) : (1251202055))) + (1524381611)))));
                            arr_35 [i_8] [i_7] [i_8] [i_10] [19] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */unsigned long long int) 0U)))) < (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0)))))));
                        }
                        for (unsigned char i_11 = 0; i_11 < 23; i_11 += 3) 
                        {
                            var_23 = ((/* implicit */int) min((var_23), (((((((/* implicit */int) var_9)) >> (((var_8) + (4442304941425521594LL))))) ^ (((((((/* implicit */int) (signed char)-127)) + (2147483647))) >> (((arr_3 [i_5]) - (9427056515502512995ULL)))))))));
                            arr_38 [i_11] [i_5] = ((/* implicit */unsigned int) ((arr_18 [20U] [i_6] [i_7]) ? (19ULL) : (((/* implicit */unsigned long long int) (-(4063232U))))));
                            var_24 *= ((/* implicit */_Bool) (~(var_6)));
                            var_25 = ((/* implicit */short) (+(((/* implicit */int) arr_19 [i_8] [i_11]))));
                        }
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [(_Bool)1] [i_6]))) / (arr_6 [i_6] [i_8])));
                    }
                    for (short i_12 = 1; i_12 < 20; i_12 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_13 = 2; i_13 < 20; i_13 += 3) 
                        {
                            arr_43 [i_5] [18LL] [(_Bool)1] [18LL] [18LL] [11LL] [(unsigned char)5] = ((/* implicit */int) (_Bool)1);
                            var_27 += ((/* implicit */_Bool) (unsigned short)32336);
                            arr_44 [i_5] [i_5] [i_7] [i_7] [(signed char)6] [(signed char)6] = arr_37 [i_5] [i_6] [i_7] [i_7] [i_12 + 2] [i_12 + 2] [i_13 + 2];
                        }
                        for (int i_14 = 2; i_14 < 20; i_14 += 1) 
                        {
                            var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) (unsigned char)219))));
                            var_29 = ((/* implicit */unsigned char) ((arr_24 [(_Bool)0] [(_Bool)0] [i_14 - 2] [(_Bool)1] [i_14 + 3]) - (arr_24 [i_12 + 2] [i_12 + 1] [i_14 - 2] [(short)6] [(signed char)18])));
                            var_30 = ((/* implicit */unsigned short) (((~(((/* implicit */int) var_0)))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_5] [2] [i_7] [i_12 - 1] [i_5])))))));
                        }
                        var_31 = ((/* implicit */signed char) (+(((var_5) + (((/* implicit */int) arr_8 [i_5] [i_6] [(_Bool)1] [(_Bool)1]))))));
                        var_32 = (!(var_4));
                    }
                    var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_22 [i_5])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                    /* LoopNest 2 */
                    for (long long int i_15 = 0; i_15 < 23; i_15 += 4) 
                    {
                        for (long long int i_16 = 0; i_16 < 23; i_16 += 3) 
                        {
                            {
                                arr_54 [2U] [21LL] = ((/* implicit */int) ((4294967292U) - (934698218U)));
                                var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_55 [i_5] = ((/* implicit */int) var_3);
    }
}
