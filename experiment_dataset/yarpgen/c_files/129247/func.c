/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129247
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))) ? ((+(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_0 [i_0])) : (var_5))))) : (((/* implicit */int) var_6))));
        arr_2 [i_0] = ((((/* implicit */_Bool) min((var_12), (((((/* implicit */unsigned long long int) -1795905470)) ^ (4157496408886339377ULL)))))) ? (((/* implicit */unsigned long long int) 2147483647)) : (((unsigned long long int) (signed char)77)));
        var_18 = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            var_19 = ((/* implicit */short) arr_4 [i_1] [i_0]);
            var_20 += ((/* implicit */short) min((((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_1 [i_0] [i_1])) & (((/* implicit */int) var_16))))))), (4157496408886339376ULL)));
            arr_5 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) max((var_9), (((/* implicit */short) arr_1 [i_1 + 1] [i_1 + 1]))))) && (((/* implicit */_Bool) -2147483622))));
        }
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_21 += ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2] [i_2]))));
        var_22 = ((/* implicit */short) ((((arr_7 [i_2]) ^ (9223372036854775807LL))) / (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_2] [i_2])))))));
        arr_9 [i_2] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) var_8))));
        var_23 = ((/* implicit */unsigned long long int) ((signed char) 4407056878570032877LL));
        arr_10 [i_2] = (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)112))) ^ (var_15))));
    }
    for (unsigned short i_3 = 4; i_3 < 20; i_3 += 4) 
    {
        var_24 += ((/* implicit */_Bool) ((((/* implicit */int) var_4)) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_3 + 1])))))));
        var_25 = ((/* implicit */unsigned long long int) arr_12 [i_3 - 2]);
        /* LoopSeq 2 */
        for (signed char i_4 = 0; i_4 < 21; i_4 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) 
            {
                arr_18 [i_3 + 1] [i_4] [i_5] [i_3 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) arr_16 [i_5] [i_4] [i_3 - 3])) : (4157496408886339377ULL)));
                arr_19 [(signed char)18] [i_4] [i_5] = (-(((/* implicit */int) (unsigned char)44)));
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 2; i_6 < 20; i_6 += 2) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            arr_25 [i_6] [i_6] [(short)9] [17] = ((/* implicit */unsigned long long int) (~(var_8)));
                            var_26 = ((/* implicit */_Bool) ((arr_11 [i_3 - 4] [i_6 + 1]) * (((/* implicit */unsigned long long int) ((((-716166441) + (2147483647))) >> (((/* implicit */int) arr_21 [3ULL] [i_4] [i_4] [i_3 - 1])))))));
                            var_27 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_4] [7ULL] [i_5]))) + (var_15))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_7] [i_3 - 3] [i_5])))));
                            arr_26 [i_7] [i_6] [i_5] [3LL] [i_3] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_13)) ? (arr_13 [(signed char)0]) : (((/* implicit */int) arr_15 [i_3] [i_3] [i_3])))) >> (((10995054889233060141ULL) - (10995054889233060125ULL)))));
                        }
                    } 
                } 
                arr_27 [(unsigned short)3] [(unsigned short)3] [i_5] [i_5] = ((/* implicit */signed char) arr_13 [i_5]);
                /* LoopSeq 2 */
                for (int i_8 = 1; i_8 < 19; i_8 += 3) 
                {
                    var_28 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) (unsigned char)33)))))));
                    var_29 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_22 [i_8 + 1] [i_8 - 1] [i_3 - 3]))));
                    var_30 = ((arr_29 [i_8 + 2] [i_5] [i_3 - 1] [i_3] [i_3]) ^ (((/* implicit */unsigned long long int) var_5)));
                    arr_30 [i_8] [(_Bool)1] = ((/* implicit */signed char) var_15);
                }
                for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 4) 
                {
                    arr_33 [i_5] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) var_16)) - (2147483647)));
                    /* LoopSeq 2 */
                    for (int i_10 = 3; i_10 < 19; i_10 += 4) 
                    {
                        var_31 += ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)211)) || (((/* implicit */_Bool) (unsigned short)5568))))) ^ (((/* implicit */int) (unsigned short)65535)));
                        var_32 = ((/* implicit */long long int) ((13192592914598689756ULL) > (((/* implicit */unsigned long long int) arr_14 [i_10 - 1]))));
                        arr_37 [i_3 - 2] [i_4] [i_5] [i_10] [9] = ((/* implicit */unsigned short) ((var_2) || ((!(((/* implicit */_Bool) var_3))))));
                    }
                    for (short i_11 = 0; i_11 < 21; i_11 += 1) 
                    {
                        var_33 = (((+(((/* implicit */int) arr_17 [i_11] [i_9] [i_3 + 1])))) >= (((/* implicit */int) arr_15 [i_5] [i_4] [i_3])));
                        arr_40 [i_11] [i_9] [i_5] [i_4] [i_3] = ((/* implicit */_Bool) var_12);
                        arr_41 [i_9] = ((/* implicit */unsigned char) var_2);
                    }
                    /* LoopSeq 1 */
                    for (short i_12 = 3; i_12 < 20; i_12 += 3) 
                    {
                        var_34 = 1609584114;
                        arr_45 [(_Bool)1] [i_4] [i_5] [i_5] [i_12] = ((/* implicit */unsigned long long int) ((var_13) >= (((/* implicit */unsigned long long int) var_14))));
                    }
                }
            }
            var_35 += ((/* implicit */unsigned long long int) arr_35 [i_4] [i_4] [i_4] [i_3] [i_3]);
        }
        for (short i_13 = 3; i_13 < 18; i_13 += 3) 
        {
            var_36 = ((/* implicit */signed char) (+((~(((/* implicit */int) arr_32 [i_3 - 4] [i_13 + 3]))))));
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 21; i_14 += 1) 
            {
                for (unsigned long long int i_15 = 0; i_15 < 21; i_15 += 2) 
                {
                    {
                        arr_55 [i_13] [i_13] [i_15] = min(((+(max((((/* implicit */unsigned long long int) (unsigned short)5568)), (5254151159110861861ULL))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_1)), ((~(var_14)))))));
                        arr_56 [i_13] [i_14] [i_13] = ((/* implicit */unsigned long long int) (~((-(arr_16 [i_3 - 4] [i_13 + 1] [i_13 - 1])))));
                        arr_57 [i_3] [i_3] [i_13] [i_13] [i_3] = ((/* implicit */long long int) ((arr_29 [i_3 + 1] [i_13 + 3] [i_13 + 3] [i_3] [i_3 + 1]) / (((((/* implicit */_Bool) 2044754649542913153LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)33))) : (arr_29 [i_15] [i_14] [i_13 - 1] [(unsigned short)4] [i_3 - 2])))));
                        arr_58 [i_14] [i_13] = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) 1226609012)), (2371726103353302768ULL))) ^ (min((16075017970356248818ULL), (1ULL)))));
                        arr_59 [i_3] [i_13] [i_13] [i_3] = ((/* implicit */signed char) (unsigned char)201);
                    }
                } 
            } 
        }
    }
    var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (var_8) : (var_11)));
    var_38 = var_14;
}
