/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139816
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
    var_16 += ((/* implicit */short) (signed char)-48);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    var_17 += (+(((/* implicit */int) (signed char)-1)));
                    var_18 = ((/* implicit */unsigned short) min((((((/* implicit */int) (short)-18971)) + (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min((((/* implicit */short) arr_3 [i_0 - 2] [i_1])), ((short)18971))))));
                    var_19 += ((/* implicit */signed char) ((unsigned int) max((arr_2 [i_0 + 1] [i_1 + 1] [8U]), (((/* implicit */long long int) arr_5 [(unsigned char)6])))));
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) var_2)))))) ? (max((((var_12) - (((/* implicit */unsigned long long int) arr_4 [i_1] [i_1] [i_1])))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 1792828192U)) / (-6092452346130314397LL)))))) : (((/* implicit */unsigned long long int) var_15))));
                }
                /* vectorizable */
                for (long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    var_21 = ((/* implicit */_Bool) max((var_21), (var_10)));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 3; i_4 < 15; i_4 += 3) 
                    {
                        arr_10 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) : (arr_7 [i_0 - 2] [i_1] [i_3] [i_1])));
                        var_22 = ((/* implicit */unsigned char) ((unsigned long long int) (_Bool)0));
                    }
                    for (long long int i_5 = 3; i_5 < 17; i_5 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 1; i_6 < 17; i_6 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) arr_7 [(_Bool)1] [i_1 - 1] [1U] [i_1]))));
                            var_24 = ((/* implicit */long long int) ((unsigned int) (~(((/* implicit */int) var_8)))));
                            var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_9 [i_1] [i_6]))));
                            var_26 = (!(((/* implicit */_Bool) arr_12 [i_0] [i_0 + 1] [i_1] [i_6 + 2])));
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)0)) ? (((((/* implicit */_Bool) (signed char)8)) ? (var_12) : (7721798432398613960ULL))) : (var_12)));
                        }
                        /* LoopSeq 4 */
                        for (short i_7 = 2; i_7 < 18; i_7 += 3) 
                        {
                            var_28 = ((((/* implicit */int) arr_14 [i_7] [i_5 - 2] [i_3] [i_0 + 3] [i_1] [i_0 + 3] [i_0 + 3])) << (((/* implicit */int) arr_14 [i_7] [i_5] [i_5 - 2] [i_3] [i_1 - 3] [i_0] [i_0 - 2])));
                            var_29 = ((((/* implicit */int) var_11)) ^ ((~(((/* implicit */int) arr_15 [i_0] [6U] [6U] [i_0] [i_5 + 1] [i_0] [i_1 - 3])))));
                            var_30 = ((/* implicit */unsigned short) arr_5 [i_1]);
                        }
                        for (unsigned char i_8 = 2; i_8 < 16; i_8 += 3) 
                        {
                            var_31 = ((/* implicit */int) ((var_12) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)66)))));
                            var_32 -= ((/* implicit */long long int) (+(((/* implicit */int) ((short) arr_6 [9LL] [i_1 - 2] [i_3] [i_5])))));
                            arr_20 [i_8] [i_1] [i_3] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (short)18971)) : (-728684925))));
                            var_33 = ((/* implicit */signed char) ((2576773031018462310LL) != (((/* implicit */long long int) ((/* implicit */int) (short)18971)))));
                        }
                        for (long long int i_9 = 3; i_9 < 15; i_9 += 1) 
                        {
                            arr_25 [i_0] [i_1 + 1] [i_3] [i_5] [i_9 - 2] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-24638))));
                            var_34 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) > (var_2))) ? (((/* implicit */int) ((_Bool) var_2))) : (((((/* implicit */int) var_4)) % (((/* implicit */int) (unsigned char)66)))));
                            var_35 = ((((/* implicit */int) arr_3 [i_1] [i_1])) << (((/* implicit */int) arr_3 [i_1] [i_1])));
                            arr_26 [(short)14] [i_1 - 3] [i_1 - 3] [(short)14] |= ((/* implicit */unsigned int) (((~(((/* implicit */int) (short)-1752)))) << ((((-(-2576773031018462311LL))) - (2576773031018462296LL)))));
                        }
                        for (unsigned long long int i_10 = 1; i_10 < 18; i_10 += 3) 
                        {
                            arr_30 [i_0 + 2] [i_1] [i_3] = ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_5 + 2]))) != (9223372036854775807LL));
                            var_36 ^= ((/* implicit */long long int) (-(((/* implicit */int) (short)18971))));
                            arr_31 [i_1] [i_0 + 2] [i_1 - 1] [i_3] [i_5] [i_10] = ((/* implicit */_Bool) (-(arr_13 [i_0 + 3] [i_10 + 1])));
                            var_37 ^= ((/* implicit */_Bool) arr_1 [i_5 - 3]);
                            arr_32 [i_0 + 4] [(signed char)13] [i_1] [(_Bool)1] [(short)9] = ((/* implicit */unsigned short) (signed char)-96);
                        }
                        arr_33 [(signed char)16] [(unsigned short)2] [(_Bool)0] [(signed char)16] |= ((/* implicit */_Bool) -6823119122124188835LL);
                        var_38 ^= ((/* implicit */long long int) ((short) ((unsigned short) var_14)));
                    }
                    var_39 *= ((/* implicit */unsigned long long int) ((long long int) ((unsigned char) arr_1 [i_1])));
                }
                for (unsigned long long int i_11 = 3; i_11 < 17; i_11 += 1) 
                {
                    var_40 = ((/* implicit */unsigned short) max((((/* implicit */int) arr_14 [i_0] [i_0 + 3] [i_0 + 3] [i_1] [i_1 - 1] [i_11] [i_11 + 2])), ((~(((/* implicit */int) (short)-18971))))));
                    var_41 *= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_12 [i_0 + 3] [i_1 - 2] [(short)12] [i_11 - 3])) ? (((/* implicit */int) arr_12 [i_0 + 1] [i_1 - 1] [(unsigned short)18] [i_11 - 2])) : (((/* implicit */int) (short)-18971)))), (((/* implicit */int) ((signed char) arr_12 [i_0 + 3] [i_1 - 3] [18ULL] [i_11 + 1])))));
                }
                var_42 ^= ((/* implicit */short) ((arr_14 [i_1 + 1] [i_1] [i_1 - 1] [i_0 - 2] [4ULL] [9LL] [8]) ? (max((((long long int) var_8)), (((/* implicit */long long int) min((arr_12 [i_0 + 4] [i_0] [14ULL] [i_0 + 2]), (((/* implicit */unsigned short) arr_3 [i_0] [(short)16]))))))) : (max((min((((/* implicit */long long int) (_Bool)1)), (arr_22 [i_0] [i_1 + 1] [i_0] [i_1] [i_1 - 3] [8LL] [i_1 + 1]))), (((/* implicit */long long int) ((_Bool) var_9)))))));
            }
        } 
    } 
    var_43 ^= ((unsigned long long int) (short)-18971);
    var_44 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) (signed char)32))) && ((!(((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) 2147483647))))))));
}
