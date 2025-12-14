/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189466
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
    var_20 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (-(((/* implicit */int) (short)-30352))))) ? (((/* implicit */int) var_12)) : ((-(var_17)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [(unsigned short)10])) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) arr_0 [(unsigned char)19]))));
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 8787503087616LL)) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) arr_0 [13ULL]))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 19; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    for (short i_4 = 3; i_4 < 20; i_4 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned long long int) arr_13 [i_2 - 1] [i_3] [i_2 - 1] [i_0] [i_0]);
                            var_24 = ((/* implicit */int) ((short) arr_13 [i_4] [(signed char)8] [i_4 - 3] [i_4] [(unsigned char)2]));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned char i_5 = 0; i_5 < 21; i_5 += 4) 
            {
                for (unsigned int i_6 = 0; i_6 < 21; i_6 += 4) 
                {
                    for (unsigned char i_7 = 0; i_7 < 21; i_7 += 1) 
                    {
                        {
                            arr_26 [i_0] [(signed char)11] [i_5] [i_6] [i_0] = ((/* implicit */_Bool) var_12);
                            var_25 = ((/* implicit */unsigned short) -6195842482164626821LL);
                        }
                    } 
                } 
            } 
            var_26 = ((/* implicit */unsigned int) arr_16 [i_0] [i_0] [i_0] [(short)20] [i_0]);
        }
        for (signed char i_8 = 0; i_8 < 21; i_8 += 4) 
        {
            var_27 = ((/* implicit */unsigned int) arr_2 [i_0] [i_0]);
            arr_30 [i_8] [i_8] [(_Bool)1] = ((/* implicit */short) arr_28 [i_0]);
        }
    }
    for (long long int i_9 = 0; i_9 < 20; i_9 += 2) 
    {
        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((~(var_15)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_9] [i_9] [i_9] [i_9] [(signed char)14])) ? (((/* implicit */int) arr_21 [i_9] [i_9] [i_9] [i_9])) : (((/* implicit */int) arr_21 [i_9] [i_9] [i_9] [i_9]))))) : (-4498053470368189202LL)));
        arr_35 [i_9] |= (+((-(((/* implicit */int) arr_5 [i_9])))));
    }
    for (unsigned int i_10 = 0; i_10 < 22; i_10 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_11 = 0; i_11 < 22; i_11 += 1) 
        {
            arr_41 [i_11] [12] = ((/* implicit */short) (((!(((/* implicit */_Bool) -890088003)))) ? (((/* implicit */long long int) max((arr_40 [i_11] [i_11]), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)220)))))))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_37 [i_10])) ? (arr_40 [i_11] [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)192)))))), (((((/* implicit */_Bool) arr_40 [i_11] [i_11])) ? (-8787503087616LL) : (arr_38 [i_10] [i_10])))))));
            arr_42 [i_11] [i_11] = ((/* implicit */unsigned char) arr_40 [i_11] [i_11]);
        }
        var_29 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_40 [i_10] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_10]))) : (arr_40 [i_10] [i_10]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_37 [i_10])))))));
        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) arr_39 [i_10])) ? (((/* implicit */long long int) max((((/* implicit */int) arr_39 [i_10])), (arr_36 [i_10] [i_10])))) : (((long long int) -8787503087620LL))));
        /* LoopSeq 1 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_14 = 0; i_14 < 22; i_14 += 1) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        {
                            var_31 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(2067187850)))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) 2149598152U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-88))) : (arr_40 [i_10] [i_12])))), (max((((/* implicit */long long int) (signed char)-86)), (arr_49 [5LL] [i_10] [i_13]))))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                            arr_52 [i_10] [10U] [i_13] [i_10] [(unsigned short)12] [(unsigned short)12] |= ((/* implicit */unsigned int) arr_50 [i_10]);
                            arr_53 [(unsigned short)7] [i_12] = ((/* implicit */unsigned short) (_Bool)1);
                        }
                    } 
                } 
                var_32 = ((/* implicit */unsigned int) arr_38 [i_12] [i_10]);
                var_33 = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-10956)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_44 [i_10]))))), (var_16)));
                /* LoopNest 2 */
                for (signed char i_16 = 0; i_16 < 22; i_16 += 4) 
                {
                    for (int i_17 = 3; i_17 < 19; i_17 += 2) 
                    {
                        {
                            arr_59 [i_10] [i_10] [i_12] [i_16] [i_17] = ((/* implicit */int) var_6);
                            arr_60 [i_10] [i_12] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (+(-5732077713137455864LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_12]))) : (arr_55 [(short)10] [(short)10] [i_17 - 1] [i_12] [i_12]))), (((/* implicit */long long int) ((short) arr_43 [i_10] [3LL])))));
                            var_34 *= ((/* implicit */_Bool) arr_49 [i_13] [i_13] [i_13]);
                            arr_61 [3LL] [i_12] [i_13] [i_16] [i_17 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_40 [i_12] [i_12]), (((/* implicit */unsigned int) arr_48 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17 + 2]))))) ? ((~(((/* implicit */int) var_14)))) : (((((/* implicit */_Bool) arr_38 [i_13] [i_13])) ? ((~(((/* implicit */int) (signed char)-86)))) : (((((/* implicit */_Bool) arr_40 [i_12] [i_16])) ? (((/* implicit */int) arr_37 [i_10])) : (((/* implicit */int) arr_48 [i_12] [i_17] [i_16] [i_13] [i_12] [i_10]))))))));
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (short i_18 = 0; i_18 < 22; i_18 += 2) 
            {
                for (short i_19 = 1; i_19 < 19; i_19 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
                        {
                            arr_70 [i_10] [i_12] [(unsigned char)10] = ((/* implicit */_Bool) arr_68 [i_10]);
                            var_35 = ((/* implicit */int) min((((/* implicit */long long int) -398881105)), ((~(-8787503087592LL)))));
                        }
                        var_36 = ((/* implicit */unsigned long long int) var_1);
                        var_37 = ((/* implicit */unsigned int) 890088019);
                        /* LoopSeq 1 */
                        for (unsigned short i_21 = 1; i_21 < 21; i_21 += 3) 
                        {
                            var_38 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_40 [i_12] [i_21 - 1])) ? (arr_40 [i_12] [i_21 + 1]) : (arr_40 [i_12] [i_21 + 1]))));
                            arr_74 [i_10] [i_12] [i_12] [i_12] [12LL] [(short)7] [i_12] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (~(((/* implicit */int) arr_51 [i_10] [i_12] [i_12] [i_12] [i_12] [i_21] [i_12]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_67 [i_10] [i_12] [i_12] [i_12] [10LL] [10LL]))) : (((((/* implicit */_Bool) 1765055374U)) ? (625180321672663934LL) : (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_19] [i_19] [i_18] [13LL] [8LL] [i_10])))))))));
                        }
                    }
                } 
            } 
            /* LoopNest 3 */
            for (short i_22 = 1; i_22 < 21; i_22 += 4) 
            {
                for (short i_23 = 1; i_23 < 19; i_23 += 3) 
                {
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        {
                            arr_82 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [(short)18] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_64 [i_24] [9] [i_12] [i_10]))));
                            arr_83 [(signed char)15] [i_12] [i_12] [i_12] [i_12] [i_12] = ((((/* implicit */_Bool) (~(arr_65 [i_23 + 1] [(short)21] [i_12] [i_12] [i_22] [i_22])))) ? (((((/* implicit */_Bool) arr_65 [i_23 + 1] [i_23] [i_12] [i_12] [18U] [i_12])) ? (17529139998844141002ULL) : (((/* implicit */unsigned long long int) arr_65 [i_23 + 1] [i_22] [i_12] [i_12] [i_12] [i_12])))) : (((/* implicit */unsigned long long int) (~(arr_65 [i_23 + 1] [i_12] [i_12] [i_12] [i_12] [i_12])))));
                            var_39 = ((/* implicit */unsigned long long int) var_6);
                            var_40 += arr_51 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10];
                            var_41 |= arr_79 [i_10] [i_23] [(unsigned short)16] [i_10] [i_10];
                        }
                    } 
                } 
            } 
            arr_84 [i_10] [i_12] = ((/* implicit */unsigned char) (+((-(arr_49 [i_10] [i_10] [i_12])))));
            var_42 = ((/* implicit */unsigned int) min(((+((+(((/* implicit */int) arr_69 [i_10] [i_12] [(signed char)16] [i_10] [i_10])))))), ((~(((/* implicit */int) (signed char)86))))));
        }
        arr_85 [i_10] = ((/* implicit */long long int) var_16);
    }
    /* LoopSeq 1 */
    for (int i_25 = 0; i_25 < 23; i_25 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_26 = 0; i_26 < 23; i_26 += 2) 
        {
            for (int i_27 = 0; i_27 < 23; i_27 += 3) 
            {
                {
                    var_43 += ((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_89 [i_25] [i_26] [i_27]))))));
                    arr_94 [i_25] [i_27] [(unsigned char)5] = ((/* implicit */long long int) arr_89 [i_25] [i_26] [i_27]);
                }
            } 
        } 
        var_44 = ((/* implicit */short) arr_90 [i_25]);
        /* LoopNest 2 */
        for (unsigned long long int i_28 = 0; i_28 < 23; i_28 += 3) 
        {
            for (signed char i_29 = 0; i_29 < 23; i_29 += 2) 
            {
                {
                    var_45 = ((/* implicit */unsigned int) max((var_45), (((/* implicit */unsigned int) (~((~(var_0))))))));
                    arr_100 [i_25] [(short)11] [i_25] [i_25] = ((/* implicit */int) (-(8787503087592LL)));
                }
            } 
        } 
        var_46 = ((/* implicit */signed char) arr_86 [i_25]);
    }
}
