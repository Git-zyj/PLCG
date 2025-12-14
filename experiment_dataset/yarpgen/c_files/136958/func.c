/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136958
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
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        var_10 = ((/* implicit */long long int) max((((((/* implicit */_Bool) min((arr_1 [(signed char)2]), (((/* implicit */int) arr_0 [i_0]))))) ? (max((arr_1 [i_0]), (((/* implicit */int) (unsigned short)6)))) : (((/* implicit */int) arr_0 [i_0 - 2])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)-20112)) : (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_0 [(_Bool)1]))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) max((((((/* implicit */int) var_5)) == (arr_1 [i_0 + 1]))), (((((/* implicit */int) var_9)) >= (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [(unsigned char)19])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_6 [i_0] [i_0 + 1] [i_0])))))))))));
                    var_12 = (i_1 % 2 == 0) ? (((/* implicit */unsigned short) ((((((/* implicit */unsigned int) max((((/* implicit */int) var_3)), (arr_1 [i_0])))) < (((arr_2 [i_1]) << (((arr_2 [i_1]) - (1701782683U))))))) ? (max((((/* implicit */unsigned long long int) max((((/* implicit */short) arr_6 [i_1] [i_2] [i_2])), ((short)-20093)))), (max((((/* implicit */unsigned long long int) var_8)), (2ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-28306), ((short)28293)))))))) : (((/* implicit */unsigned short) ((((((/* implicit */unsigned int) max((((/* implicit */int) var_3)), (arr_1 [i_0])))) < (((arr_2 [i_1]) << (((((arr_2 [i_1]) - (1701782683U))) - (2965697623U))))))) ? (max((((/* implicit */unsigned long long int) max((((/* implicit */short) arr_6 [i_1] [i_2] [i_2])), ((short)-20093)))), (max((((/* implicit */unsigned long long int) var_8)), (2ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-28306), ((short)28293))))))));
                }
            } 
        } 
    }
    for (short i_3 = 0; i_3 < 17; i_3 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) min((min((((/* implicit */int) ((arr_7 [i_3]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))), (((((/* implicit */_Bool) 489068299U)) ? (var_2) : (((/* implicit */int) (_Bool)0)))))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_4 [i_3] [i_3])), ((unsigned short)65535))))));
        arr_9 [i_3] = ((/* implicit */long long int) max((min((((((/* implicit */_Bool) (short)20105)) ? (arr_5 [(short)19] [i_3] [14LL] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) max((var_0), (var_3)))))), (((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (arr_1 [i_3])))) ? (arr_7 [i_3]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-28306)) : (arr_1 [i_3]))))))));
    }
    for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 1) 
        {
            /* LoopSeq 3 */
            for (short i_6 = 0; i_6 < 24; i_6 += 3) 
            {
                var_14 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_14 [i_6]))));
                arr_19 [i_4] [i_5] [i_4] [(unsigned short)18] = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_10 [15U])))) ? (((((/* implicit */_Bool) var_1)) ? (arr_10 [10U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-103))))) : (((/* implicit */unsigned long long int) 489068294U))));
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_17 [i_4] [i_5]))))) ? (arr_10 [i_4]) : (((/* implicit */unsigned long long int) arr_15 [i_6]))));
            }
            for (signed char i_7 = 0; i_7 < 24; i_7 += 3) 
            {
                var_16 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_18 [i_4] [i_4] [i_5] [i_7])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9)))) / (((/* implicit */int) var_8))));
                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)215)) ? (((/* implicit */int) (signed char)82)) : (((((/* implicit */_Bool) 2017365326568816960ULL)) ? (((/* implicit */int) (short)-28317)) : (((/* implicit */int) (unsigned char)39))))));
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 24; i_8 += 1) 
                {
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_18 -= ((/* implicit */_Bool) (+(((/* implicit */int) var_3))));
                            var_19 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-1))))) | (((/* implicit */int) arr_13 [i_9 - 1]))));
                            arr_27 [i_4] [i_8] [9ULL] [i_4] [9ULL] [i_9 - 1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-64)))))));
                        }
                    } 
                } 
            }
            for (unsigned char i_10 = 4; i_10 < 22; i_10 += 1) 
            {
                arr_30 [7U] [i_5] [i_5] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (18446744073709551601ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (arr_23 [(unsigned char)18] [(unsigned char)4] [i_10 - 4] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [(short)5] [i_10] [i_10 - 1] [i_10]))))))));
                /* LoopSeq 4 */
                for (long long int i_11 = 0; i_11 < 24; i_11 += 1) 
                {
                    var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0))));
                    arr_33 [i_11] [(_Bool)1] [i_5] [i_4] = ((/* implicit */short) (((~(((/* implicit */int) (unsigned char)39)))) * (((/* implicit */int) (signed char)-1))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_12 = 2; i_12 < 23; i_12 += 3) 
                    {
                        var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(18446744073709551615ULL))))));
                        var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)58068)) ? (((/* implicit */long long int) 1000268403)) : (5605581683984711766LL))))));
                        arr_37 [12U] [i_5] [(unsigned char)18] [12U] [12U] [(unsigned short)15] [1LL] = ((/* implicit */signed char) (~((~(((/* implicit */int) (signed char)-79))))));
                        var_23 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (13897391527181014304ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20112)))));
                    }
                }
                for (unsigned int i_13 = 1; i_13 < 22; i_13 += 3) 
                {
                    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((arr_31 [i_10 - 1] [i_5] [i_13] [22LL]) < (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
                    arr_41 [i_10] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (arr_36 [i_10 - 4] [i_10 + 1] [i_13] [22LL] [22LL] [i_13 - 1]) : (((/* implicit */int) (unsigned char)166))));
                }
                for (unsigned short i_14 = 0; i_14 < 24; i_14 += 3) 
                {
                    arr_44 [i_5] = ((/* implicit */int) ((((/* implicit */int) (signed char)72)) < (((/* implicit */int) (unsigned char)1))));
                    var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */int) (short)32767)) << (((((/* implicit */int) var_5)) - (137))))))));
                    arr_45 [i_10 - 2] [i_5] [i_4] = ((((/* implicit */_Bool) arr_23 [i_4] [i_4] [i_4] [i_10 + 2])) ? (arr_23 [i_5] [i_5] [i_5] [i_10 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_4] [10LL] [i_10 - 1] [i_10 - 2] [i_10] [10LL]))));
                }
                for (short i_15 = 2; i_15 < 21; i_15 += 3) 
                {
                    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_15 + 3] [i_10] [i_5] [i_4]))) : (arr_15 [16U])))) ? (((/* implicit */int) arr_29 [i_10 - 1] [i_15 - 1] [i_15])) : (((/* implicit */int) (unsigned short)29619))));
                    arr_48 [i_4] [i_5] [i_15] [i_15] [(signed char)6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)10182)) ? (((/* implicit */int) (unsigned char)155)) : (((/* implicit */int) (unsigned short)35916))));
                }
                var_27 += ((/* implicit */signed char) (-(((/* implicit */int) var_6))));
                var_28 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_38 [i_10] [i_10 + 2] [i_10 + 2] [i_4] [9]))));
            }
            arr_49 [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) var_9)) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) >= (arr_46 [i_4] [i_5] [i_4] [i_4] [i_5] [i_4]))))));
        }
        /* LoopSeq 3 */
        for (short i_16 = 3; i_16 < 23; i_16 += 3) 
        {
            arr_52 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */short) arr_40 [i_16] [i_16 - 3] [i_16 + 1] [i_16] [i_16 - 1] [i_16 - 1])), (var_7)))) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_16] [i_16 - 3] [i_16 - 3] [i_16 - 3] [i_16 - 1] [i_16 - 1])))))));
            arr_53 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_47 [(unsigned char)10] [i_16])) * (((/* implicit */int) var_3)))) * ((((_Bool)0) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-109))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)45)) ? (arr_23 [i_4] [i_16] [i_16] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((((/* implicit */_Bool) arr_10 [i_4])) ? (((/* implicit */int) (unsigned char)253)) : (((/* implicit */int) arr_16 [i_4] [i_16 + 1] [i_16 + 1] [(unsigned short)3])))) : (((((/* implicit */_Bool) arr_18 [i_4] [i_4] [i_16 - 2] [(unsigned char)1])) ? (((/* implicit */int) (unsigned short)34457)) : (((/* implicit */int) arr_43 [i_4] [i_4] [i_4] [i_16])))))) : (((((/* implicit */_Bool) (unsigned char)205)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) var_6))))));
        }
        for (unsigned long long int i_17 = 4; i_17 < 22; i_17 += 1) 
        {
            var_29 = ((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_26 [i_17] [i_17 - 3] [i_17] [i_17] [i_17 - 4])) : (min((-808945378), (((/* implicit */int) (signed char)-61)))))) >= (((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (min((((/* implicit */int) (unsigned short)2760)), (arr_36 [i_4] [i_4] [i_4] [i_17] [i_17 + 1] [i_17]))) : (((/* implicit */int) var_7))))));
            arr_58 [i_4] [i_17 - 4] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_4)) ? ((+(1155486405988503947LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [i_4] [(unsigned short)23]))))))))));
            var_30 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_26 [i_17 + 1] [i_17 + 1] [i_4] [i_4] [i_17 - 2])) ? (((/* implicit */int) (unsigned short)41239)) : (((/* implicit */int) arr_43 [i_4] [i_17] [i_17] [i_4])))) | (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_38 [i_17] [i_17] [i_17] [i_17] [i_17]))))) && (((/* implicit */_Bool) var_5)))))));
        }
        /* vectorizable */
        for (unsigned char i_18 = 1; i_18 < 23; i_18 += 3) 
        {
            var_31 = ((/* implicit */unsigned int) ((((((/* implicit */int) (short)-31450)) + (2147483647))) >> (((((((/* implicit */_Bool) (short)-12746)) ? (34634616274944LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10701))))) - (34634616274914LL)))));
            var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((((/* implicit */long long int) (-(((/* implicit */int) arr_47 [i_4] [i_18]))))) > (((((/* implicit */_Bool) arr_57 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_4] [i_4]))) : (-3604838575533111747LL))))))));
        }
    }
    for (unsigned int i_19 = 1; i_19 < 19; i_19 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_20 = 1; i_20 < 17; i_20 += 1) 
        {
            for (unsigned long long int i_21 = 0; i_21 < 20; i_21 += 1) 
            {
                for (unsigned char i_22 = 0; i_22 < 20; i_22 += 1) 
                {
                    {
                        arr_70 [i_19] [i_19] [i_19 - 1] [i_21] [i_19 - 1] [i_19] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_51 [i_19] [i_19] [i_19])) ? (8692536080456176325LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_19] [(unsigned char)6])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)227))) : (max((4294967269U), (((/* implicit */unsigned int) (signed char)-73)))))), (((/* implicit */unsigned int) max((max(((unsigned short)1230), (((/* implicit */unsigned short) var_9)))), (((/* implicit */unsigned short) ((((/* implicit */int) (short)32758)) >= (((/* implicit */int) var_8))))))))));
                        var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)24269))))))) ? (((/* implicit */long long int) ((((arr_59 [i_19]) ? (((/* implicit */int) (unsigned short)53265)) : (((/* implicit */int) var_8)))) * (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_19] [20U]))))) ? (((((/* implicit */_Bool) (unsigned short)12280)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1594))) : (3344716465787201350LL))) : (((/* implicit */long long int) max((arr_1 [i_19]), (((/* implicit */int) (short)-1))))))))))));
                    }
                } 
            } 
        } 
        var_34 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)65529)) ? (arr_31 [i_19 - 1] [i_19 + 1] [i_19] [i_19 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))));
    }
    var_35 *= ((/* implicit */unsigned short) var_9);
}
