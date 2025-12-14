/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176046
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */long long int) (+(var_15)))) & (((var_6) ^ (((/* implicit */long long int) ((((/* implicit */int) var_4)) << (((/* implicit */int) var_14)))))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_19 = ((/* implicit */long long int) ((((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [10ULL]))))) << (((((((/* implicit */_Bool) -1709917897)) ? (((/* implicit */int) (unsigned short)39505)) : (((/* implicit */int) var_9)))) - (39500))))) % (((/* implicit */int) ((signed char) arr_1 [i_0])))));
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) max((((/* implicit */int) (unsigned short)39505)), (((int) arr_1 [i_0])))))));
        var_21 = ((/* implicit */unsigned long long int) ((unsigned char) (!(((/* implicit */_Bool) ((arr_2 [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)117)))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */_Bool) (unsigned char)42);
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_3 = 1; i_3 < 18; i_3 += 2) 
            {
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    for (unsigned int i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        {
                            arr_20 [i_1] [i_4] [i_3] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_5] [i_1] [i_3] [i_4] [i_5])) ? (var_8) : (((/* implicit */int) arr_16 [i_1]))));
                            arr_21 [i_1] [i_1] [i_1] [i_4] = ((/* implicit */long long int) ((var_10) > (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned short)16522))))));
                        }
                    } 
                } 
                arr_22 [i_1] [i_1] [i_3 + 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) / (((/* implicit */int) arr_17 [i_1] [i_1]))))) ? (((int) (unsigned short)26028)) : (((((/* implicit */_Bool) 31ULL)) ? (((/* implicit */int) (unsigned short)26026)) : (((/* implicit */int) (signed char)0))))));
                arr_23 [i_1] [i_2] [i_1] = ((/* implicit */_Bool) (unsigned short)39505);
                var_22 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) arr_10 [i_1] [i_2])) >= (((/* implicit */int) arr_13 [i_1] [i_2] [i_3] [i_2])))))));
            }
            var_23 = arr_8 [1LL] [i_1];
            /* LoopSeq 1 */
            for (unsigned int i_6 = 2; i_6 < 18; i_6 += 1) 
            {
                /* LoopSeq 2 */
                for (short i_7 = 0; i_7 < 20; i_7 += 2) 
                {
                    arr_29 [i_1] [i_7] [i_6 - 2] [i_7] = ((/* implicit */long long int) arr_8 [i_2] [i_1]);
                    var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_12))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)0)) & (var_8)))) : (arr_18 [i_6 + 1] [i_2] [i_6] [i_7] [i_6])))) ? ((~(((/* implicit */int) arr_14 [i_1] [i_6 + 1] [i_6] [i_6])))) : ((~(((/* implicit */int) ((short) (unsigned short)65535)))))));
                }
                for (short i_8 = 0; i_8 < 20; i_8 += 3) 
                {
                    var_25 = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)26646)), ((unsigned short)26031)))) ? (((/* implicit */unsigned int) ((arr_12 [i_1]) ? (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_24 [i_1] [i_2] [i_1]))))) : ((-(arr_4 [i_1]))))) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) ((2147483647) > (((/* implicit */int) (_Bool)1)))))) - (((unsigned long long int) (unsigned short)26058)))) - (18446744073709525547ULL)))));
                    arr_32 [i_8] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((2147483640) << (((((/* implicit */int) (unsigned short)57503)) - (57503)))))) ? (1696791836U) : (arr_18 [i_1] [i_1] [i_1] [i_1] [i_1])))) ? (-7496478053412812070LL) : (-3662425369790751323LL)));
                    arr_33 [i_1] [i_1] [i_1] [i_6 - 2] [i_8] = ((/* implicit */unsigned long long int) var_15);
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 4) 
                {
                    arr_37 [i_1] [i_1] [i_1] [i_9] = ((/* implicit */unsigned char) max((((/* implicit */int) arr_27 [i_1])), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (-7893667837751490008LL)))) ? (((/* implicit */int) (signed char)-110)) : (((/* implicit */int) (unsigned short)256))))));
                    arr_38 [i_1] [i_1] = ((/* implicit */unsigned short) arr_12 [i_2]);
                    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */int) (unsigned short)65532)) << (((((/* implicit */int) (unsigned short)26030)) - (26030)))))))) ? (((unsigned int) var_8)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max((2296409449U), (var_3)))) && (((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned int) (short)1984)))))))))));
                    var_27 ^= ((/* implicit */unsigned int) max((((((/* implicit */int) (signed char)-83)) - (((/* implicit */int) arr_31 [i_1])))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)-22325)))))));
                }
            }
            /* LoopNest 3 */
            for (long long int i_10 = 0; i_10 < 20; i_10 += 3) 
            {
                for (unsigned char i_11 = 0; i_11 < 20; i_11 += 4) 
                {
                    for (unsigned int i_12 = 0; i_12 < 20; i_12 += 4) 
                    {
                        {
                            var_28 -= ((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_11 [i_1] [i_1] [i_11] [i_1]))))) * ((+(arr_5 [i_1] [i_2])))));
                            var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) (unsigned short)26030)), (((arr_25 [i_1] [i_10]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_1] [i_2] [(short)13] [i_2] [i_12]))))))), (((/* implicit */unsigned long long int) ((var_13) ? (((/* implicit */int) (unsigned short)24025)) : (((/* implicit */int) arr_15 [i_11] [i_2] [i_2] [i_1]))))))))));
                            var_30 = 9223372036854775807LL;
                        }
                    } 
                } 
            } 
        }
    }
}
