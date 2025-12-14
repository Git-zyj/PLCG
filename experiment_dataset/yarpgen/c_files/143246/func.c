/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143246
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
    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) 1769953013)) ? (910920569U) : (3384046727U))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */int) ((((/* implicit */unsigned long long int) min((arr_2 [i_0] [i_0] [i_0]), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) <= (-1769953009))))))) % (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65520))) + (arr_5 [i_0])))));
                    var_16 = ((/* implicit */_Bool) ((1769953009) | (((/* implicit */int) min(((unsigned short)65520), (((/* implicit */unsigned short) (unsigned char)60)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        arr_10 [i_3] [i_2] [i_2] [2U] [i_2] [i_0] = ((/* implicit */long long int) ((var_4) + (((/* implicit */unsigned int) arr_1 [i_0] [i_0]))));
                        arr_11 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)13))) & (arr_2 [i_2] [(signed char)10] [(_Bool)1])));
                        /* LoopSeq 4 */
                        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (~(arr_1 [i_0] [i_1]))))));
                            arr_16 [8U] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */int) ((arr_5 [i_1]) >> (((arr_5 [i_0]) - (12766977836991944594ULL)))));
                            var_18 = ((/* implicit */int) ((arr_8 [i_0] [i_3] [i_2] [i_0]) != (arr_8 [i_4] [6LL] [i_2] [i_0])));
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_2])) ? (6034315599585871798LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_3] [i_2])))));
                            arr_17 [i_2] [i_3] [i_2] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2] [i_1] [i_2]))) ^ (arr_6 [i_2] [i_2])));
                        }
                        for (unsigned int i_5 = 2; i_5 < 10; i_5 += 1) 
                        {
                            arr_20 [i_2] [i_1] [i_2] [i_2] [i_1] = ((/* implicit */int) ((unsigned int) arr_14 [i_0] [i_0] [i_2] [i_2] [i_3] [i_2]));
                            var_20 = ((/* implicit */unsigned char) ((long long int) arr_4 [(short)3] [(unsigned char)0] [i_2]));
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (arr_19 [i_3] [i_2] [(unsigned short)9]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_2])))));
                        }
                        for (signed char i_6 = 1; i_6 < 8; i_6 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned char) ((_Bool) arr_9 [i_6 + 2] [i_6 + 1] [i_2] [(unsigned char)6] [i_6]));
                            var_23 += ((/* implicit */_Bool) ((((/* implicit */_Bool) -6034315599585871783LL)) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)85)) >> (((((/* implicit */int) arr_4 [i_0] [4LL] [8ULL])) - (3227)))))) : (var_5)));
                        }
                        for (long long int i_7 = 1; i_7 < 10; i_7 += 2) 
                        {
                            var_24 = var_7;
                            arr_25 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_0)));
                            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_7 + 1] [i_7 + 1] [1LL] [(short)0] [i_7 - 1])) ? (((/* implicit */unsigned long long int) arr_21 [i_7 - 1] [i_7 - 1] [i_7 - 1] [(unsigned short)4] [i_7 + 1])) : (var_3)));
                            arr_26 [i_2] [i_1] [9LL] [1U] = ((/* implicit */unsigned long long int) arr_2 [i_1] [9ULL] [i_7]);
                        }
                        arr_27 [i_2] [i_2] [i_2] = ((/* implicit */long long int) arr_7 [i_2] [i_1] [(short)8]);
                    }
                    /* vectorizable */
                    for (signed char i_8 = 2; i_8 < 10; i_8 += 4) 
                    {
                        arr_30 [i_2] [i_2] [i_2] [(signed char)7] = ((/* implicit */unsigned int) ((arr_29 [6U] [i_8 + 1] [i_2] [(_Bool)1] [i_8 - 1]) + (arr_29 [(short)3] [i_8 + 1] [i_2] [i_8] [i_8 - 1])));
                        arr_31 [i_2] [i_2] [i_2] [10LL] [i_8] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)187)) >> (((((/* implicit */int) (unsigned char)255)) - (237)))));
                        arr_32 [i_0] [i_8] [i_1] [10ULL] [i_8 - 2] &= ((/* implicit */signed char) arr_24 [i_8 + 1] [(signed char)0] [i_1] [i_0] [i_1] [i_0] [i_0]);
                        var_26 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) 3U)) ? (8984144991418960784ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))));
                    }
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned int) ((((/* implicit */long long int) 1769953009)) != (6034315599585871798LL)));
    var_28 = ((/* implicit */unsigned int) ((_Bool) var_8));
}
