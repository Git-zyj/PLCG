/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109667
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
    var_16 = ((/* implicit */long long int) max((var_16), (((((((/* implicit */_Bool) ((((/* implicit */int) var_2)) * (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) var_9)) ? (9223372036854775807LL) : (((/* implicit */long long int) var_13)))))) * (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
    var_17 = ((/* implicit */unsigned int) ((max((((/* implicit */int) max((((/* implicit */short) (unsigned char)27)), ((short)9188)))), (var_10))) | (((/* implicit */int) min((var_14), (var_0))))));
    var_18 = ((/* implicit */unsigned char) min((max(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_11)))), (((/* implicit */int) (_Bool)1))));
    var_19 = ((/* implicit */unsigned long long int) var_14);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_20 &= ((/* implicit */long long int) var_10);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) arr_6 [i_0] [i_1 - 1] [i_2] [i_2 - 2]))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_22 += min(((_Bool)1), (((((/* implicit */_Bool) 4957827349945107958ULL)) && (((/* implicit */_Bool) arr_1 [i_2 - 2] [i_1 + 1])))));
                                var_23 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [i_2 - 1] [i_1 + 1]))))) % (max((arr_12 [i_3] [i_3] [i_2 + 1] [i_1 - 1] [i_1 - 1]), (((/* implicit */unsigned int) arr_6 [i_2] [i_2 - 1] [i_1 - 1] [i_1]))))));
                                arr_13 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2] [i_4])) ? (arr_10 [i_0] [i_0] [i_2 - 1] [(unsigned short)8] [0ULL]) : (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */int) min((arr_6 [i_0] [(unsigned char)0] [(unsigned char)0] [i_4]), (((/* implicit */signed char) (_Bool)1))))) : (arr_1 [i_0] [i_1 - 1])))) : ((+(min((13488916723764443632ULL), (((/* implicit */unsigned long long int) 4294967295U))))))));
                                var_24 = ((/* implicit */unsigned short) var_1);
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_12 [i_0] [i_2 + 1] [(unsigned char)10] [i_1 - 1] [i_0])) ? (((/* implicit */unsigned int) arr_1 [i_0] [i_2 + 1])) : (arr_12 [i_0] [i_2 + 1] [i_2] [i_1 - 1] [i_0]))), (((((/* implicit */_Bool) arr_1 [i_0] [i_2 + 1])) ? (((/* implicit */unsigned int) arr_1 [i_2] [i_2 + 1])) : (arr_12 [i_0] [i_2 + 1] [i_2] [i_1 - 1] [i_1 - 1])))));
                    var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_9 [i_2] [i_0] [i_0]))));
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_5 = 2; i_5 < 12; i_5 += 1) 
        {
            var_27 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (arr_12 [i_5] [i_5] [i_0] [i_0] [i_0]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [(_Bool)1])) == (((/* implicit */int) (signed char)-94))))))));
            /* LoopSeq 2 */
            for (signed char i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                var_28 = ((/* implicit */int) arr_7 [i_0]);
                var_29 += ((/* implicit */signed char) arr_1 [i_6] [i_0]);
                var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_5 - 2] [i_5])) ? (arr_0 [i_5 - 2] [i_5]) : (arr_0 [i_5 - 2] [i_5])));
            }
            for (signed char i_7 = 1; i_7 < 11; i_7 += 3) 
            {
                var_31 &= ((/* implicit */unsigned short) var_7);
                arr_21 [i_0] [i_0] [i_7] [3U] = ((/* implicit */_Bool) (-(arr_15 [i_0] [i_5] [i_5])));
                var_32 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_10 [3LL] [3LL] [9ULL] [i_7] [i_7 + 1]))));
            }
            var_33 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_0] [i_5]))));
            var_34 *= ((/* implicit */signed char) (((~(((/* implicit */int) arr_19 [i_0] [i_0])))) ^ (536870912)));
            var_35 = ((/* implicit */signed char) (((-(((/* implicit */int) (unsigned short)11528)))) | (((/* implicit */int) arr_6 [i_5] [i_5] [i_5 - 2] [i_5 + 1]))));
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_36 = ((/* implicit */_Bool) arr_11 [i_8] [i_8] [i_8] [i_8] [i_8] [(unsigned char)0] [i_8]);
            arr_24 [(unsigned char)2] [(unsigned char)2] = ((/* implicit */int) var_4);
        }
    }
    /* vectorizable */
    for (signed char i_9 = 0; i_9 < 18; i_9 += 1) 
    {
        arr_27 [(unsigned char)16] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)11528))));
        var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))));
        arr_28 [i_9] = ((/* implicit */short) arr_26 [i_9] [i_9]);
    }
    for (signed char i_10 = 0; i_10 < 16; i_10 += 3) 
    {
        var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) var_6))));
        arr_32 [i_10] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) -536870895)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_10] [i_10])) && (((/* implicit */_Bool) (short)-9220)))))))) > (min((13ULL), (16769994428482221923ULL)))));
        arr_33 [i_10] [i_10] = ((/* implicit */long long int) ((min((min((var_6), (-536870909))), ((~(((/* implicit */int) var_9)))))) + ((-(((/* implicit */int) arr_31 [i_10]))))));
    }
}
