/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147894
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_18 = ((/* implicit */long long int) var_7);
        arr_3 [i_0] = ((int) (+(arr_1 [i_0])));
    }
    for (short i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */short) ((unsigned int) min((((/* implicit */unsigned short) arr_0 [i_1])), (var_3))));
        var_19 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) (_Bool)1))))), (min((12941170911768634543ULL), (var_13)))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 11; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_20 -= ((/* implicit */short) ((((((/* implicit */int) ((unsigned short) var_11))) ^ (((/* implicit */int) (short)-22316)))) & (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */int) arr_10 [i_2] [i_3])) & (((/* implicit */int) (short)-22316)))) : (((((/* implicit */int) (unsigned char)56)) >> (((var_11) - (3515351736562152283ULL)))))))));
                    var_21 ^= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */int) var_3)) >> (((((/* implicit */int) var_1)) + (1695)))))) ? (((((/* implicit */int) var_2)) & (((/* implicit */int) arr_9 [i_1] [i_1] [i_1])))) : (((((/* implicit */_Bool) 8387584U)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (short)-22316))))))));
                }
            } 
        } 
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_22 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) arr_13 [i_4])) ? (arr_13 [i_4]) : (arr_13 [i_4]))));
        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (~(min((((((/* implicit */_Bool) (short)22298)) ? (((/* implicit */unsigned long long int) var_15)) : (arr_14 [i_4] [i_4]))), (((arr_14 [i_4] [i_4]) & (((/* implicit */unsigned long long int) var_17)))))))))));
        var_24 ^= ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) 53715592U)) * (((16686077988722980859ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22315))))))) + (((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13498))) + (9601862333401070863ULL))) * (((arr_14 [i_4] [i_4]) - (((/* implicit */unsigned long long int) var_17))))))));
        arr_15 [3U] [i_4] = ((/* implicit */short) max((((/* implicit */long long int) ((short) (((_Bool)0) ? (var_8) : (((/* implicit */int) (short)28421)))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [(unsigned char)9] [i_4])))))) : (min((((/* implicit */long long int) 765594039)), (var_4)))))));
    }
    /* vectorizable */
    for (long long int i_5 = 1; i_5 < 21; i_5 += 3) 
    {
        arr_20 [i_5] [i_5] &= ((/* implicit */short) ((((/* implicit */_Bool) 4038736157913445317ULL)) && (((/* implicit */_Bool) ((11290908710787071008ULL) / (var_11))))));
        var_25 = ((/* implicit */_Bool) min((var_25), (((((/* implicit */_Bool) (short)-28437)) && (((/* implicit */_Bool) arr_19 [i_5 - 1]))))));
        arr_21 [i_5] [i_5 + 3] = ((/* implicit */signed char) ((((/* implicit */int) var_16)) ^ (((/* implicit */int) var_5))));
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 3) 
            {
                {
                    var_26 = ((/* implicit */_Bool) ((4038736157913445316ULL) >> (((4038736157913445297ULL) - (4038736157913445243ULL)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 2; i_8 < 23; i_8 += 4) 
                    {
                        var_27 = (~((+(3114408957539996221LL))));
                        var_28 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_22 [i_5 + 4] [i_5]))));
                        var_29 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_22 [i_5 - 1] [i_5 - 1])) - (((/* implicit */int) var_5))));
                        arr_32 [i_7] [i_6] [i_7] [i_8] = ((/* implicit */long long int) ((signed char) var_15));
                    }
                    var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) (~(((var_11) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)28437))))))))));
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 25; i_9 += 4) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                arr_38 [i_7] = ((/* implicit */long long int) ((var_0) ^ (((((/* implicit */_Bool) 9223369837831520256LL)) ? (var_14) : (var_13)))));
                                arr_39 [i_5] [i_7] [i_7] [23] [i_10] = ((/* implicit */_Bool) (short)13489);
                                arr_40 [i_7] [i_7] [i_7] [(unsigned char)15] [i_7] = ((/* implicit */short) ((int) (unsigned short)38371));
                                arr_41 [i_7] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) -1593794586091008085LL)) ? (var_6) : (((/* implicit */int) (short)21915))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_11 = 1; i_11 < 23; i_11 += 4) 
                    {
                        for (short i_12 = 0; i_12 < 25; i_12 += 4) 
                        {
                            {
                                arr_49 [i_5] [i_5] [i_7] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */int) (unsigned short)16383)) : (((/* implicit */int) (signed char)118))));
                                arr_50 [i_5] [i_7] [i_7] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_35 [i_5 - 1] [i_11 + 1] [i_7] [i_7] [i_12]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_31 &= ((/* implicit */short) (+(((/* implicit */int) ((short) var_15)))));
    var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((max((var_11), (((/* implicit */unsigned long long int) -9223369837831520256LL)))) ^ (((/* implicit */unsigned long long int) ((0LL) ^ (((/* implicit */long long int) 1196293180U)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 4095)) && (((/* implicit */_Bool) 18014398492704768ULL))))) : (min(((+(((/* implicit */int) var_7)))), (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) 4135122391110059768LL)))))))));
    var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */int) ((unsigned char) ((unsigned short) 14408007915796106300ULL)))) : (((((/* implicit */_Bool) min((var_14), (((/* implicit */unsigned long long int) (short)23599))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) max(((unsigned char)131), (((/* implicit */unsigned char) var_5)))))))));
}
