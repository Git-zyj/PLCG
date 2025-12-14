/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154508
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_5 [7U] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_2);
                arr_6 [(unsigned char)2] [(unsigned char)2] |= ((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_1])) : (1422089466572658952ULL))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_0])) ? (arr_3 [i_0] [7LL] [i_0]) : (((/* implicit */long long int) (-2147483647 - 1))))))));
                var_16 = ((/* implicit */unsigned long long int) max((arr_3 [i_1] [(short)12] [i_0]), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)99)) >> (((arr_0 [i_0]) + (903044012113900219LL))))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_8 [i_2]))))));
        arr_10 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((/* implicit */int) arr_7 [i_2] [i_2])) : (((((/* implicit */_Bool) 2364757121U)) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) arr_8 [i_2]))))));
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (+(((/* implicit */int) arr_7 [i_2] [(unsigned char)0])))))));
        arr_11 [(short)2] [0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */int) arr_7 [i_2] [0LL])) : (((/* implicit */int) arr_8 [i_2]))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_3])) ? (min((((((/* implicit */_Bool) arr_13 [(signed char)21] [(short)8])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)55))) : (arr_12 [i_3]))), (((((/* implicit */_Bool) arr_12 [(unsigned char)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3]))) : (arr_12 [i_3]))))) : (((((((/* implicit */_Bool) arr_12 [i_3])) || (((/* implicit */_Bool) var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned char)55)))) : (arr_12 [i_3])))));
        /* LoopNest 3 */
        for (short i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            for (long long int i_5 = 0; i_5 < 22; i_5 += 2) 
            {
                for (short i_6 = 0; i_6 < 22; i_6 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_7 = 0; i_7 < 22; i_7 += 1) 
                        {
                            var_18 *= ((/* implicit */long long int) ((((/* implicit */int) arr_7 [(short)14] [i_6])) > ((((~(((/* implicit */int) var_4)))) >> (((arr_19 [i_3] [i_3] [(unsigned char)14]) + (4703087415854979287LL)))))));
                            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) var_9))));
                            arr_27 [i_4] [i_7] = ((/* implicit */unsigned int) arr_7 [i_3] [i_6]);
                            var_20 &= ((/* implicit */signed char) min((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)40778))))), (var_0)));
                        }
                        for (unsigned char i_8 = 4; i_8 < 19; i_8 += 3) 
                        {
                            arr_32 [i_8] [(short)17] = ((/* implicit */unsigned long long int) var_10);
                            arr_33 [i_8] = ((/* implicit */short) (+(max((16016767391325734055ULL), (((/* implicit */unsigned long long int) arr_31 [i_4] [i_6] [i_6] [i_6] [i_8] [i_4] [i_5]))))));
                        }
                        for (short i_9 = 0; i_9 < 22; i_9 += 1) 
                        {
                            var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 7583257015438790177ULL)) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)24266))))) : ((+((-9223372036854775807LL - 1LL))))));
                            var_22 = ((/* implicit */unsigned char) ((long long int) 7583257015438790177ULL));
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_25 [i_6] [i_6])))) ? (((((/* implicit */_Bool) ((unsigned short) (unsigned char)200))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (unsigned char)250)) : (arr_34 [i_3] [i_3] [i_3] [i_3] [(short)2])))) : (max((arr_20 [i_4] [i_4] [i_4]), (((/* implicit */long long int) arr_30 [4LL] [i_6] [i_6] [i_3])))))) : (((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (unsigned char)201)) ? (arr_17 [i_9] [(signed char)9] [i_5] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)55))))) : (((/* implicit */long long int) ((/* implicit */int) (short)-1)))))));
                            arr_36 [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_3] [i_4] [i_5] [i_6] [i_9] [i_9] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_3] [i_4] [i_6] [i_6]))) : (var_5)))) : (arr_13 [i_3] [i_3])));
                        }
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [6U] [i_5])) + (((/* implicit */int) arr_7 [i_3] [i_5]))))) ? ((-(((/* implicit */int) arr_7 [i_3] [i_5])))) : (((/* implicit */int) max((arr_7 [i_3] [i_6]), (arr_7 [i_3] [i_6]))))));
                        arr_37 [i_3] [3ULL] [i_5] [i_3] [i_3] = ((/* implicit */unsigned long long int) (~(max((((((/* implicit */_Bool) (unsigned short)57836)) ? (((/* implicit */long long int) ((/* implicit */int) (short)1))) : (arr_25 [i_3] [i_4]))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((10863487058270761439ULL) - (10863487058270761427ULL))))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_10 = 0; i_10 < 22; i_10 += 3) 
        {
            for (short i_11 = 1; i_11 < 20; i_11 += 3) 
            {
                {
                    var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_3] [i_3] [i_11])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_3] [(unsigned char)6] [20LL] [i_11]))) : (arr_19 [(short)15] [(short)15] [(short)15])))) : (var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : ((-(((((/* implicit */_Bool) var_8)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)56))))))))))));
                    arr_43 [i_3] [15U] [i_11] = (~((~(((/* implicit */int) var_8)))));
                    arr_44 [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((10863487058270761438ULL) & (6944949400339995865ULL)));
                    arr_45 [i_3] [i_3] = ((/* implicit */_Bool) arr_42 [i_3]);
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_12 = 0; i_12 < 10; i_12 += 2) 
    {
        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) 14872176070438439431ULL))));
        /* LoopNest 3 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            for (unsigned int i_14 = 0; i_14 < 10; i_14 += 1) 
            {
                for (unsigned short i_15 = 2; i_15 < 9; i_15 += 1) 
                {
                    {
                        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_39 [(signed char)13])))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_16 = 0; i_16 < 10; i_16 += 1) 
                        {
                            var_28 = ((/* implicit */long long int) -481380656);
                            arr_59 [i_14] [i_14] [i_14] = ((/* implicit */unsigned char) arr_38 [i_15 - 1] [i_12]);
                            var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) arr_41 [i_15 - 1] [i_15 - 2] [i_15 - 2] [i_16]))));
                        }
                        var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (arr_40 [i_12] [0] [i_12] [i_15]) : (((/* implicit */long long int) 0U))))) ? (((((((/* implicit */int) arr_8 [i_13])) + (2147483647))) >> (((arr_46 [i_14] [i_13]) + (4115553227255138476LL))))) : (((/* implicit */int) (unsigned char)246)))))));
                    }
                } 
            } 
        } 
        var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_30 [(_Bool)1] [i_12] [i_12] [i_12])) + (-2147483634)))) + (arr_50 [i_12]))))));
        arr_60 [i_12] = ((/* implicit */short) arr_3 [i_12] [16LL] [i_12]);
        var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_12] [i_12] [i_12] [i_12])) ? (var_15) : (((/* implicit */long long int) 19U)))))));
    }
    for (unsigned int i_17 = 0; i_17 < 14; i_17 += 2) 
    {
        arr_64 [i_17] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (~(((int) 10863487058270761438ULL))))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_23 [i_17] [5LL] [i_17]))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)55)), (var_15)))) : (6944949400339995868ULL)))));
        var_33 ^= ((/* implicit */short) var_0);
    }
    var_34 = ((/* implicit */int) var_5);
}
