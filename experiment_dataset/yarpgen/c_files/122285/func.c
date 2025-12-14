/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122285
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
    var_15 = ((/* implicit */short) (((~(9223372036854775807LL))) ^ (((/* implicit */long long int) ((/* implicit */int) ((-4405828781627026957LL) > (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_1 [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (arr_4 [i_0] [i_1 + 2])))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_1 + 3])) : (((/* implicit */int) arr_4 [i_0] [i_1 + 3]))))));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */short) min((((((/* implicit */long long int) ((/* implicit */int) var_10))) % (max((((/* implicit */long long int) var_6)), (arr_1 [i_0]))))), (min((-9223372036854775807LL), (((3959509139488183527LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        arr_9 [i_2] = ((/* implicit */long long int) ((short) min((((((/* implicit */_Bool) 9223372036854775807LL)) ? (1152921504606846975LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-1591))))), (-1152921504606846976LL))));
        arr_10 [i_2] = var_4;
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            /* LoopSeq 4 */
            for (long long int i_4 = 4; i_4 < 18; i_4 += 4) 
            {
                arr_15 [i_4] [i_4] = ((/* implicit */long long int) (+(((/* implicit */int) var_11))));
                /* LoopSeq 1 */
                for (long long int i_5 = 1; i_5 < 16; i_5 += 4) 
                {
                    arr_18 [i_2] = ((/* implicit */long long int) ((arr_8 [i_4 - 4]) != (arr_16 [i_2] [18LL])));
                    arr_19 [i_2] [i_2] [i_2] [i_2] [7LL] [i_2] = ((((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3]))) >= (9223372036854775807LL))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (9223372036854775807LL));
                    arr_20 [i_2 - 1] [i_2 - 1] [i_2] [i_2] = -1152921504606846968LL;
                }
                arr_21 [i_2] [i_4] [(short)16] [0LL] &= ((((long long int) var_11)) >= (((((/* implicit */_Bool) arr_1 [i_4])) ? (arr_12 [i_2] [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_11))))));
                arr_22 [i_3] [i_3] [6LL] [i_2] = (-(((long long int) arr_16 [i_2] [i_2 - 1])));
            }
            for (long long int i_6 = 0; i_6 < 20; i_6 += 4) 
            {
                arr_26 [i_2] [i_2] = -2729476421937322980LL;
                arr_27 [i_2] [i_6] = ((/* implicit */long long int) arr_0 [i_2 - 1]);
                arr_28 [i_2] [i_2] [i_2] = ((/* implicit */short) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)4095))) <= (-2729476421937322952LL))));
                arr_29 [i_2] [i_2] [i_2] = ((((/* implicit */_Bool) ((1769040100216546504LL) | (arr_1 [i_2])))) ? ((((_Bool)1) ? (2620238546501590345LL) : (4986593868109783020LL))) : (arr_17 [i_2 - 1] [i_2] [i_2] [i_2 - 1] [i_2 - 1] [i_2]));
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                arr_33 [i_2] [i_2] [16LL] [i_7] = ((/* implicit */long long int) ((arr_12 [i_2 - 1] [i_2 - 1] [i_2 - 1]) <= (-9223372036854775807LL)));
                arr_34 [i_2] [i_3] [i_3] [i_7] = (~(9223372036854775807LL));
                arr_35 [i_2] [(short)12] [(short)12] [i_2] = ((((/* implicit */_Bool) var_1)) ? (arr_30 [i_2 - 1] [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) ((16LL) > (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
            }
            for (long long int i_8 = 0; i_8 < 20; i_8 += 4) 
            {
                arr_38 [i_8] = ((/* implicit */long long int) ((arr_13 [i_2 - 1] [i_2 - 1] [i_2]) || (arr_13 [i_2 - 1] [i_2 - 1] [i_2 - 1])));
                arr_39 [i_2] [i_2] [i_8] [i_8] = ((/* implicit */long long int) ((short) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2] [i_3] [i_3]))) + (9223372036854775807LL))));
            }
            arr_40 [i_3] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2 - 1] [(short)6] [i_2 - 1])) ? (arr_12 [i_2 - 1] [i_2 - 1] [i_2 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_13)))));
            /* LoopSeq 1 */
            for (long long int i_9 = 0; i_9 < 20; i_9 += 2) 
            {
                arr_44 [i_2] [i_3] [i_9] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) (short)4095)) ? (-6530584550838093207LL) : (((/* implicit */long long int) ((/* implicit */int) (short)22))))));
                arr_45 [i_2] [i_2] [i_9] [i_9] = (-((~(arr_11 [i_2]))));
            }
            arr_46 [i_2] = ((((/* implicit */_Bool) arr_12 [i_2 - 1] [i_3] [i_3])) ? (arr_12 [i_2 - 1] [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_10))));
        }
    }
    /* LoopNest 3 */
    for (long long int i_10 = 1; i_10 < 13; i_10 += 2) 
    {
        for (short i_11 = 2; i_11 < 14; i_11 += 2) 
        {
            for (long long int i_12 = 3; i_12 < 14; i_12 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (long long int i_13 = 0; i_13 < 15; i_13 += 2) 
                    {
                        arr_59 [i_10] [i_12] [i_10] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_52 [i_10 + 1]))))) ? (((((/* implicit */int) arr_52 [i_10 + 2])) * (((/* implicit */int) arr_52 [i_10 + 1])))) : (((/* implicit */int) (!(arr_52 [i_10 + 1]))))));
                        arr_60 [i_10] [i_10] [i_11] [2LL] [i_12] [i_12] = ((((((((/* implicit */_Bool) arr_41 [i_10] [i_10 + 2] [i_10 + 2] [i_12])) ? (arr_55 [i_12] [i_12]) : (arr_37 [i_12] [i_12] [i_12] [i_12 + 1]))) + (arr_54 [10LL] [i_11 - 2]))) | (((((/* implicit */_Bool) ((long long int) arr_42 [i_12 + 1] [i_13]))) ? (min((arr_55 [i_12] [i_12]), (-3440697498924577970LL))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (short)11045)))))));
                        arr_61 [i_10] [i_11] [i_12] [i_12] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(arr_49 [i_11 - 1]))))));
                        arr_62 [i_12] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_51 [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32762))) : (arr_58 [i_10] [i_10] [1LL] [i_10] [i_10])))) ? ((+(arr_2 [i_12]))) : (min((-4701019961993275815LL), (-1152921504606846971LL)))))) ? ((+(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32758))) : (-4701019961993275815LL))))) : (((long long int) 2729476421937322979LL)));
                        arr_63 [i_12] [0LL] [13LL] [i_12] [i_13] = ((/* implicit */short) arr_13 [i_11] [(short)0] [i_11 - 2]);
                    }
                    for (short i_14 = 0; i_14 < 15; i_14 += 2) 
                    {
                        arr_66 [i_11] [i_11] [i_11] [i_14] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) arr_36 [i_11] [i_11] [(_Bool)1])) >> ((((((_Bool)0) ? (9223372036854775807LL) : (arr_30 [i_11] [i_12] [i_11]))) - (7109558397599256031LL)))))) == (((((/* implicit */_Bool) ((long long int) -1416310010498262560LL))) ? (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (_Bool)0)))) : (((((/* implicit */_Bool) (short)21924)) ? (-9223372036854775805LL) : (1152921504606846975LL)))))));
                        arr_67 [i_10 + 2] [i_10 + 2] [i_10 + 2] [12LL] [i_12] = ((long long int) ((((/* implicit */_Bool) arr_11 [i_11 + 1])) ? (arr_11 [i_11 - 1]) : (arr_11 [i_10 - 1])));
                    }
                    for (long long int i_15 = 0; i_15 < 15; i_15 += 2) 
                    {
                        arr_71 [9LL] [i_12] [i_12] [i_15] = ((((arr_37 [i_12 - 2] [i_12 + 1] [i_12] [i_12 + 1]) > (((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_10] [i_11 + 1] [i_15]))))))) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_10 - 1] [i_11] [i_15])))))) + (((((var_9) + (9223372036854775807LL))) << (((9223372036854775807LL) - (9223372036854775807LL)))))))));
                        arr_72 [i_10] [i_10] [i_11 - 1] [i_12] [i_12 - 3] [i_15] = ((long long int) ((((-9223372036854775805LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        arr_73 [i_10] [i_12] = ((/* implicit */long long int) ((_Bool) 1152921504606846977LL));
                    }
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        arr_76 [i_12] [i_12] = ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-8192))))) ? (arr_54 [i_16] [i_16]) : (((arr_7 [i_12]) << (((((/* implicit */int) var_2)) - (19520))))));
                        arr_77 [i_10] [i_10] [i_12] [i_12] = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) ((_Bool) -9223372036854775799LL)))) != (((var_3) ^ (((/* implicit */long long int) ((/* implicit */int) var_2))))))) ? (((((/* implicit */_Bool) ((long long int) var_2))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((((var_9) + (9223372036854775807LL))) << (((arr_69 [i_10] [i_11 - 1] [i_12] [(_Bool)1]) - (8119931274485909944LL))))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) -2607063883013558416LL))))));
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        arr_82 [i_10] [i_11 - 1] [i_12] [i_17] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) 7417699335269810997LL)) ? (((/* implicit */int) arr_52 [i_10 - 1])) : (((/* implicit */int) arr_36 [i_10 + 1] [(short)10] [i_17])))), (((arr_3 [i_10 - 1] [12LL] [i_12]) ? (((/* implicit */int) arr_36 [i_10 - 1] [i_12] [i_12])) : (((/* implicit */int) arr_36 [i_10 + 2] [i_11] [i_11]))))));
                        arr_83 [i_10] [i_11] [i_11] [i_17] = (~(((long long int) arr_3 [i_12 + 1] [i_12 - 2] [i_12 + 1])));
                    }
                    for (short i_18 = 0; i_18 < 15; i_18 += 4) 
                    {
                        arr_86 [i_10] [i_12] [i_10] [i_18] = ((/* implicit */long long int) (~((-(((/* implicit */int) var_13))))));
                        arr_87 [i_12] = ((/* implicit */long long int) min((arr_13 [i_10 + 1] [i_11] [i_12]), ((!(((/* implicit */_Bool) arr_70 [i_10 - 1] [i_11 + 1]))))));
                    }
                    for (short i_19 = 4; i_19 < 13; i_19 += 4) 
                    {
                        arr_91 [i_10] [i_10] [i_12 + 1] [i_12] [i_19] = ((/* implicit */long long int) ((_Bool) min((((/* implicit */long long int) ((_Bool) -7991791317917866163LL))), (((arr_84 [i_10 - 1] [i_11 - 1] [i_12] [i_19]) + ((-9223372036854775807LL - 1LL)))))));
                        arr_92 [i_10 + 2] [i_12] [i_12 - 1] [i_12] [10LL] = ((/* implicit */short) min((arr_89 [i_10] [i_11] [i_12] [i_19 - 4]), (((((/* implicit */_Bool) arr_24 [i_10 - 1] [i_10 - 1])) ? (arr_24 [i_10] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))));
                        arr_93 [i_11] [i_11] [i_11 + 1] [i_11 + 1] [i_19] = ((/* implicit */long long int) (((+(((/* implicit */int) (short)-6)))) > (((/* implicit */int) ((min((9223372036854775807LL), (var_12))) > (((long long int) var_0)))))));
                        arr_94 [i_12] [i_11] [i_12 + 1] [i_19 - 4] = ((/* implicit */long long int) (!((_Bool)1)));
                        arr_95 [i_10] [i_10] [i_10] [i_10 + 1] [i_10 + 2] [i_12] = var_5;
                    }
                    arr_96 [i_12] [i_11] [i_12] = ((((long long int) (_Bool)1)) & (((long long int) arr_65 [i_10 - 1] [i_12] [i_11 - 1] [i_11 + 1])));
                }
            } 
        } 
    } 
    var_16 = ((((/* implicit */_Bool) 8727373545472LL)) ? (-6455741338158752543LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
}
