/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105997
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */short) (+(((((/* implicit */_Bool) (unsigned short)35814)) ? (arr_6 [i_1 + 1] [i_2]) : (arr_6 [i_1 + 2] [i_2])))));
                    var_18 *= var_8;
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_19 ^= ((/* implicit */_Bool) (-(arr_5 [i_1 + 1])));
                        arr_10 [i_2] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)29723)) ? (((/* implicit */int) arr_1 [i_1 - 1])) : (((/* implicit */int) (short)-18087))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_14 [i_0] [i_1] [i_2] = ((/* implicit */long long int) var_5);
                        arr_15 [i_0] [i_2] [i_0] = ((/* implicit */short) ((((((/* implicit */int) arr_9 [i_0] [i_1 + 2] [i_2] [i_4] [i_1 - 3] [i_1 - 3])) > (((((/* implicit */int) arr_4 [i_0])) >> (((((/* implicit */int) (unsigned short)35819)) - (35806))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [i_1 - 2] [i_1 - 1] [i_1 - 2] [i_1 - 2] [i_1 - 3] [i_1 - 3]))))) : (18446744073709551606ULL)));
                    }
                    /* vectorizable */
                    for (short i_5 = 1; i_5 < 10; i_5 += 2) 
                    {
                        var_20 ^= ((/* implicit */short) 1693708521U);
                        arr_18 [i_0] [i_2] [i_5] = ((/* implicit */signed char) (unsigned short)29721);
                        var_21 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_1 [i_5 + 1])) ? (928969560U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                        arr_19 [i_2] = ((((((/* implicit */int) var_0)) % (((/* implicit */int) (unsigned char)14)))) * (((/* implicit */int) var_2)));
                    }
                    arr_20 [i_2] [i_2] [i_0] = ((short) (((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (0ULL))) < (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)29719)) * (((/* implicit */int) var_1)))))));
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        for (short i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            {
                                arr_29 [i_1] [i_1] [i_2] [i_1] [i_1 - 1] = ((/* implicit */unsigned long long int) var_7);
                                arr_30 [i_0] [i_0] [i_7] [i_2] [i_2] [i_2] [i_0] = var_6;
                                arr_31 [i_7] [i_7] [i_6] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */short) (unsigned char)0);
                                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_6 [i_0] [i_2])))) ? (((/* implicit */long long int) ((((/* implicit */int) var_3)) * (((/* implicit */int) (unsigned short)29699))))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (arr_8 [i_0] [i_2] [i_2] [i_6])))))) ? (((/* implicit */int) (signed char)58)) : ((+(((/* implicit */int) (unsigned short)29719))))));
                                var_23 = ((/* implicit */_Bool) ((short) ((unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (0ULL) : (13204107038470348891ULL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_32 [i_0] = ((/* implicit */long long int) ((unsigned short) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]));
    }
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 2) 
        {
            var_24 = arr_34 [i_8] [i_9];
            var_25 ^= ((((/* implicit */long long int) ((/* implicit */int) (short)-14478))) ^ (arr_33 [i_9]));
            var_26 += ((/* implicit */short) (+((+(arr_36 [i_9])))));
            arr_38 [i_8] = ((/* implicit */short) (+(((/* implicit */int) var_12))));
        }
        for (unsigned char i_10 = 3; i_10 < 14; i_10 += 4) 
        {
            var_27 &= ((/* implicit */_Bool) arr_34 [6] [6]);
            /* LoopNest 2 */
            for (short i_11 = 0; i_11 < 17; i_11 += 2) 
            {
                for (int i_12 = 0; i_12 < 17; i_12 += 4) 
                {
                    {
                        var_28 = ((/* implicit */short) (_Bool)1);
                        arr_47 [i_8] [i_8] [i_8] [i_8] [4] [i_8] = ((/* implicit */unsigned long long int) ((var_13) ? (((/* implicit */int) (unsigned short)35817)) : (((/* implicit */int) arr_43 [i_10 - 1] [i_10 + 2] [i_10 + 2] [i_10]))));
                        arr_48 [i_8] [i_8] [i_8] [i_11] [i_11] [i_12] = ((/* implicit */int) (unsigned short)35820);
                    }
                } 
            } 
        }
        for (int i_13 = 0; i_13 < 17; i_13 += 4) 
        {
            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_45 [(short)11] [(short)11] [i_13] [(short)11] [i_13]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (short)-18840)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) var_5)) - (((/* implicit */int) var_5)))))))));
            /* LoopSeq 2 */
            for (signed char i_14 = 0; i_14 < 17; i_14 += 2) 
            {
                arr_54 [i_8] [i_13] [i_14] = ((/* implicit */short) arr_42 [i_8] [i_13] [i_13]);
                var_30 = ((/* implicit */_Bool) ((short) arr_52 [i_8] [i_8] [i_14]));
                arr_55 [i_8] [i_13] [i_8] [i_13] = arr_37 [i_8] [i_13] [i_14];
            }
            for (long long int i_15 = 1; i_15 < 15; i_15 += 3) 
            {
                arr_59 [i_8] [(signed char)6] [i_8] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_36 [i_8]))));
                var_31 -= ((/* implicit */long long int) ((short) ((_Bool) var_6)));
                var_32 = ((/* implicit */unsigned int) arr_40 [i_8] [i_8] [i_8]);
            }
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 17; i_16 += 1) 
            {
                for (long long int i_17 = 0; i_17 < 17; i_17 += 2) 
                {
                    {
                        var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)200)) ? (arr_35 [i_8] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) (short)-16269)))));
                        var_34 ^= ((/* implicit */long long int) arr_44 [i_17] [i_17]);
                        var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) ((((/* implicit */int) var_4)) >= (((/* implicit */int) arr_58 [i_8] [i_8] [i_8])))))));
                    }
                } 
            } 
            arr_66 [i_8] [i_13] [i_8] = ((/* implicit */short) (unsigned char)214);
            arr_67 [i_8] [i_13] = (((!((_Bool)1))) ? (((/* implicit */int) arr_61 [i_13] [i_8])) : (((/* implicit */int) arr_60 [2])));
        }
        arr_68 [i_8] [i_8] = ((/* implicit */unsigned long long int) ((arr_45 [i_8] [i_8] [i_8] [i_8] [i_8]) ? (((/* implicit */int) arr_45 [i_8] [i_8] [(_Bool)1] [i_8] [(_Bool)1])) : (((/* implicit */int) arr_45 [i_8] [i_8] [i_8] [i_8] [i_8]))));
        /* LoopNest 3 */
        for (signed char i_18 = 0; i_18 < 17; i_18 += 1) 
        {
            for (unsigned long long int i_19 = 2; i_19 < 15; i_19 += 4) 
            {
                for (signed char i_20 = 0; i_20 < 17; i_20 += 4) 
                {
                    {
                        var_36 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((705835648) / (((/* implicit */int) (short)-17843)))) : (((/* implicit */int) arr_63 [i_8] [i_19 - 2] [i_19] [i_20]))));
                        var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) (~((-(((/* implicit */int) (_Bool)1)))))))));
                    }
                } 
            } 
        } 
    }
    var_38 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) - (((/* implicit */int) var_2))))) ? (3U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
    /* LoopSeq 2 */
    for (long long int i_21 = 4; i_21 < 14; i_21 += 4) 
    {
        /* LoopNest 3 */
        for (short i_22 = 0; i_22 < 16; i_22 += 1) 
        {
            for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
            {
                for (long long int i_24 = 0; i_24 < 16; i_24 += 4) 
                {
                    {
                        arr_85 [i_22] [i_22] = ((/* implicit */unsigned char) (short)15480);
                        arr_86 [i_21 - 1] [i_21] [i_22] [i_21] [i_21] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_42 [i_22] [i_21 + 1] [i_22]) - (arr_42 [i_22] [i_21 - 3] [i_22])))) ? (((((/* implicit */_Bool) arr_42 [i_22] [i_21 - 1] [i_22])) ? (((/* implicit */int) (_Bool)1)) : (arr_42 [i_22] [i_21 - 1] [i_22]))) : (((((/* implicit */int) var_3)) * (((/* implicit */int) (_Bool)1))))));
                        arr_87 [i_22] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_76 [i_22] [i_23] [i_22])) ? (((/* implicit */int) (signed char)-22)) : (((/* implicit */int) (unsigned char)0)))) - (((/* implicit */int) var_8))))) ? ((+((+(((/* implicit */int) var_8)))))) : (((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned int) (_Bool)1)), (0U)))))));
                        var_39 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_81 [i_21 - 4] [i_22] [i_23] [i_24])) * (((/* implicit */int) (_Bool)1))))) ? (((((17747682130554023485ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17864))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned long long int) ((int) arr_49 [i_24] [i_22] [i_24])))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (short i_25 = 4; i_25 < 13; i_25 += 4) 
        {
            for (unsigned char i_26 = 0; i_26 < 16; i_26 += 4) 
            {
                for (unsigned long long int i_27 = 0; i_27 < 16; i_27 += 1) 
                {
                    {
                        arr_97 [i_21] [i_21] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_13)) : ((+(((/* implicit */int) arr_34 [i_21] [i_26]))))))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_76 [i_25] [i_25 - 3] [i_25])))))));
                        arr_98 [i_21] [i_25] [i_25] [i_25] |= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 4294967282U)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_70 [i_25 - 4] [i_25]))))));
                    }
                } 
            } 
        } 
        arr_99 [i_21] [i_21] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_57 [i_21 - 3]) : (arr_57 [i_21 - 4])))) || (((((/* implicit */_Bool) (((_Bool)0) ? (arr_72 [i_21 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) || (((((/* implicit */_Bool) (short)16254)) || (var_8)))))));
        var_40 = ((/* implicit */int) min((var_40), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_70 [i_21 - 2] [i_21])) & (((/* implicit */int) var_16))))) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) 3248856714481209363LL)) ? (((/* implicit */int) (unsigned char)76)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_16))))))))));
    }
    for (signed char i_28 = 4; i_28 < 15; i_28 += 4) 
    {
        arr_104 [i_28] [i_28] = ((/* implicit */unsigned int) min((min(((~(((/* implicit */int) (short)17863)))), ((~(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) var_7))));
        var_41 = ((/* implicit */_Bool) arr_51 [i_28]);
        arr_105 [i_28] = var_16;
    }
}
