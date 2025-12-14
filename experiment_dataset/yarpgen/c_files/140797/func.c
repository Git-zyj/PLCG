/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140797
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
    for (int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 161845307)) ? (-3276110241693676082LL) : (((/* implicit */long long int) 2147483647)))) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 1])) >= (((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 1]))))))));
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_3 [(short)9] [i_0 - 1])) ? (((/* implicit */int) arr_3 [(unsigned char)7] [i_0 - 2])) : (((/* implicit */int) arr_3 [2U] [i_0 + 2])))) < (((/* implicit */int) arr_3 [10ULL] [i_0 - 1])))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        var_21 |= ((/* implicit */unsigned int) min((((/* implicit */long long int) ((_Bool) arr_0 [i_1] [i_1]))), (((long long int) arr_1 [i_1] [i_1]))));
        arr_7 [(signed char)16] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -473120275)) ? (1120490601680927493ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned short)64931))))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), (arr_3 [i_2] [i_2])))) ? (((((/* implicit */_Bool) arr_3 [16U] [i_2])) ? (((/* implicit */int) arr_3 [i_2] [i_2])) : (((/* implicit */int) arr_3 [i_2] [i_2])))) : (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_3 [i_2] [i_2]))))));
        /* LoopNest 3 */
        for (long long int i_3 = 3; i_3 < 8; i_3 += 3) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (int i_5 = 0; i_5 < 10; i_5 += 4) 
                {
                    {
                        arr_20 [i_2] [(signed char)9] [i_2] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~((((_Bool)1) ? (((/* implicit */int) (unsigned char)61)) : (((/* implicit */int) (short)16864))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_11 [(short)1] [i_3])))) : (max(((-(2597586764U))), (((/* implicit */unsigned int) min((((/* implicit */short) arr_6 [(_Bool)1])), ((short)-6801))))))));
                        var_23 |= ((/* implicit */short) ((((arr_10 [(short)9] [i_3 + 2] [i_3 - 3]) / (arr_10 [1ULL] [1ULL] [i_3 - 3]))) < (((/* implicit */long long int) (+(((/* implicit */int) (short)-10094)))))));
                        var_24 = ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) arr_14 [i_5] [i_3 + 1] [(unsigned short)0] [i_3 + 1])))));
                        var_25 = ((/* implicit */int) min((var_25), (((((/* implicit */_Bool) (~((~(((/* implicit */int) arr_4 [i_5]))))))) ? (max((-1883257845), (((/* implicit */int) (unsigned short)22951)))) : (((/* implicit */int) ((((/* implicit */int) arr_13 [i_2] [i_2] [i_4] [i_2])) <= (((/* implicit */int) (_Bool)1)))))))));
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned short)39291)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-59))) : ((+(5302563182218752892LL))))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 4) 
        {
            arr_24 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_23 [i_2] [i_2])) != (((/* implicit */int) (unsigned char)79)))) ? (((/* implicit */int) (((~(-5302563182218752892LL))) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (unsigned char)177))));
            /* LoopNest 2 */
            for (short i_7 = 0; i_7 < 10; i_7 += 1) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) 4294967294U))) ? (arr_10 [(unsigned short)2] [i_6] [i_7]) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_2 [i_8])))) ? (((/* implicit */int) arr_18 [i_2] [(signed char)5] [i_2] [i_2])) : (((/* implicit */int) (!(arr_16 [i_2] [i_2])))))))));
                        var_28 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_13 [i_8] [i_7] [i_6] [i_2]))));
                        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) max((((((/* implicit */_Bool) (((_Bool)1) ? (1935339028U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1)))))) ? ((-(5302563182218752875LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [8ULL] [i_6] [i_8] [(_Bool)1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (((/* implicit */int) arr_8 [i_2] [i_2])) : (((/* implicit */int) arr_8 [9] [(_Bool)1]))))))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (int i_9 = 0; i_9 < 10; i_9 += 1) 
            {
                var_30 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_18 [i_2] [i_2] [i_9] [i_2]))));
                /* LoopSeq 1 */
                for (unsigned short i_10 = 0; i_10 < 10; i_10 += 4) 
                {
                    arr_35 [i_6] [(unsigned short)3] [(_Bool)1] [i_6] [i_6] [i_2] = ((/* implicit */_Bool) min((max((((/* implicit */long long int) arr_6 [i_6])), (-5302563182218752893LL))), (((/* implicit */long long int) arr_16 [(_Bool)1] [9U]))));
                    var_31 &= ((/* implicit */int) (+(max((((/* implicit */long long int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)37949)))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)171))) | (9223372036854775807LL)))))));
                    var_32 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (_Bool)0))))) - (18446744073709551615ULL)));
                    arr_36 [i_2] [i_10] &= ((/* implicit */short) (((-(((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_27 [i_2] [i_6] [i_9] [i_10])))))) <= ((~((~(((/* implicit */int) arr_34 [i_9] [i_6] [i_9] [i_2]))))))));
                }
            }
            /* vectorizable */
            for (unsigned short i_11 = 0; i_11 < 10; i_11 += 1) 
            {
                var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_11] [i_11] [i_6] [i_2])) ? (((/* implicit */int) ((4294967295U) <= (3U)))) : (((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) || (((/* implicit */_Bool) 4278231745266497330LL)))))));
                var_34 = ((((/* implicit */unsigned int) 1193590976)) & (1020420938U));
            }
        }
        for (long long int i_12 = 2; i_12 < 7; i_12 += 4) 
        {
            var_35 = ((/* implicit */unsigned short) ((int) ((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_34 [i_12] [i_12] [i_2] [i_2])))) & (arr_42 [i_2]))));
            var_36 = ((/* implicit */unsigned long long int) arr_40 [i_2] [i_2] [i_2]);
        }
    }
    var_37 ^= ((/* implicit */long long int) (+(max((((/* implicit */unsigned int) ((var_4) >> (((var_9) - (3062063271U)))))), (((unsigned int) (_Bool)0))))));
    var_38 = ((/* implicit */int) var_18);
    /* LoopNest 3 */
    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
    {
        for (int i_14 = 0; i_14 < 14; i_14 += 3) 
        {
            for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
            {
                {
                    var_39 = ((/* implicit */unsigned char) 2812892157U);
                    var_40 &= ((/* implicit */unsigned long long int) (_Bool)1);
                    var_41 = ((/* implicit */unsigned short) min((((/* implicit */long long int) 2259444547U)), (arr_49 [i_13 + 1] [i_13 + 1])));
                }
            } 
        } 
    } 
}
