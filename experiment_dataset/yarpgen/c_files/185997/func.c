/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185997
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1])) ? (arr_2 [i_0 + 1] [i_0 - 1]) : (arr_2 [i_0 - 1] [i_0 + 1])));
        var_19 |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) -1345325080)) / (arr_2 [i_0 + 2] [i_0 + 1])));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) var_12)) << (((((/* implicit */int) var_7)) - (58847)))));
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) && (((/* implicit */_Bool) var_7))));
    }
    /* vectorizable */
    for (short i_1 = 2; i_1 < 15; i_1 += 3) 
    {
        /* LoopSeq 3 */
        for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (~(163985028686448478ULL))))));
            var_22 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) ^ (((/* implicit */int) arr_9 [i_1 - 1] [i_1 + 1] [i_1 + 2]))));
            var_23 = ((/* implicit */short) arr_5 [i_2] [i_2]);
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_24 = ((/* implicit */signed char) (-((~(arr_11 [i_1 - 1] [i_1] [i_3])))));
            arr_12 [(signed char)16] [i_3] |= ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_3] [i_3])) ? ((-(18446744073709551615ULL))) : (((((/* implicit */_Bool) arr_9 [i_1 + 3] [i_1] [i_1 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63))) : (18446744073709551615ULL)))));
        }
        for (long long int i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            arr_15 [i_4] [i_4] [i_1 + 2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_8 [i_1 - 1]))));
            var_25 |= ((/* implicit */unsigned int) -6762464934684839754LL);
        }
        var_26 |= (+(((/* implicit */int) arr_5 [i_1 + 3] [i_1 + 3])));
        /* LoopNest 3 */
        for (short i_5 = 1; i_5 < 16; i_5 += 3) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned int i_7 = 0; i_7 < 18; i_7 += 1) 
                {
                    {
                        var_27 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_16 [i_1 + 3] [i_5 - 1])) >> (((arr_21 [i_1] [i_1]) - (3521696561577129027ULL))))) != (((/* implicit */int) (short)9174))));
                        /* LoopSeq 3 */
                        for (short i_8 = 0; i_8 < 18; i_8 += 1) 
                        {
                            var_28 |= ((/* implicit */long long int) ((signed char) -9223372036854775807LL));
                            arr_28 [i_7] [16LL] [16LL] [i_1 - 1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_1 - 2])) && (((/* implicit */_Bool) arr_1 [i_1 + 3]))));
                            var_29 &= ((/* implicit */long long int) (~(((/* implicit */int) arr_9 [i_5 + 2] [i_1 - 2] [i_1 - 2]))));
                            var_30 = ((/* implicit */unsigned int) var_9);
                        }
                        for (short i_9 = 1; i_9 < 16; i_9 += 3) /* same iter space */
                        {
                            var_31 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_14 [i_1 - 2] [i_1 + 2]))));
                            var_32 = ((/* implicit */short) ((((/* implicit */int) arr_23 [i_9 + 1] [i_1 - 1] [i_1 + 2])) <= (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_9 + 2] [i_6])) && (((/* implicit */_Bool) var_7)))))));
                        }
                        for (short i_10 = 1; i_10 < 16; i_10 += 3) /* same iter space */
                        {
                            var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_10 - 1] [i_7] [i_6] [i_5 - 1] [i_1 + 3])) ? (5346295895607299143LL) : (((/* implicit */long long int) arr_24 [i_1] [i_5 - 1] [i_6] [i_10]))))) ? (((-9223372036854775782LL) / (-7530501488220163118LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1 + 3] [i_1])) ? (((/* implicit */int) (unsigned short)29)) : (((/* implicit */int) (unsigned short)13)))))));
                            arr_35 [i_1 - 2] [i_1 - 1] [(short)0] [i_1] &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) arr_7 [i_6] [i_5 + 2])))));
                            var_34 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_29 [i_1 - 1] [i_5 - 1] [i_5 - 1] [i_6] [i_7] [i_10 - 1])) % (((((/* implicit */int) arr_8 [i_1 + 1])) | (((/* implicit */int) var_4))))));
                            var_35 = arr_20 [i_5] [i_5];
                            var_36 |= ((((((/* implicit */int) arr_8 [i_1 + 2])) > (((/* implicit */int) var_6)))) ? (((((/* implicit */_Bool) arr_24 [i_1 + 1] [i_5] [i_6] [i_7])) ? (((/* implicit */long long int) arr_32 [i_10] [i_10] [i_7] [i_6] [i_5 - 1] [i_1])) : (-6762464934684839754LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65524))));
                        }
                        var_37 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_4 [i_5]))) ? (10ULL) : (((((/* implicit */_Bool) 1354012373U)) ? (25ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11)))))));
                        var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_5 + 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)50192)) ? (((/* implicit */int) (unsigned short)20)) : (arr_14 [i_5 + 2] [i_7])))) : (arr_4 [i_1 - 1]))))));
                    }
                } 
            } 
        } 
        var_39 = ((/* implicit */signed char) (((_Bool)0) ? (((/* implicit */int) arr_26 [i_1 + 1] [i_1] [i_1] [i_1] [i_1] [i_1 - 2] [(short)6])) : (((/* implicit */int) (!(arr_33 [i_1] [12LL] [i_1]))))));
    }
    var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) min((4294967295U), (((/* implicit */unsigned int) (_Bool)1)))))));
    var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))))), (((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))) : ((+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)24))) : (var_5)))))));
}
