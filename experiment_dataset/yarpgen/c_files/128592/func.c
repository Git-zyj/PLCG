/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128592
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
    var_10 = ((/* implicit */short) min((var_10), (var_9)));
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (short i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (short i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                /* LoopNest 2 */
                for (short i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    for (short i_4 = 2; i_4 < 22; i_4 += 3) 
                    {
                        {
                            var_11 = (short)29408;
                            var_12 = ((short) min((((/* implicit */int) (short)29424)), (((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) (short)24184))))));
                            var_13 -= ((short) ((((/* implicit */_Bool) arr_1 [i_2 - 1])) ? (((/* implicit */int) (short)21173)) : (((/* implicit */int) arr_1 [i_2 + 1]))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */short) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)16780))))) : (((/* implicit */int) var_9)))) * (min((((((/* implicit */_Bool) (short)3953)) ? (((/* implicit */int) (short)-17134)) : (((/* implicit */int) arr_9 [i_1] [(short)6] [i_1] [i_1] [i_1] [i_1])))), (((/* implicit */int) (short)3940))))));
            }
            /* vectorizable */
            for (short i_5 = 4; i_5 < 23; i_5 += 4) 
            {
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (short)-29408))) && (((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0 - 2]))));
                var_16 = ((/* implicit */short) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_9))));
            }
            var_17 = ((/* implicit */short) (-(((/* implicit */int) var_8))));
        }
        for (short i_6 = 0; i_6 < 24; i_6 += 2) 
        {
            /* LoopNest 3 */
            for (short i_7 = 0; i_7 < 24; i_7 += 4) 
            {
                for (short i_8 = 0; i_8 < 24; i_8 += 4) 
                {
                    for (short i_9 = 0; i_9 < 24; i_9 += 4) 
                    {
                        {
                            arr_24 [i_0] [i_0] = arr_17 [i_0] [i_0] [i_0];
                            var_18 = var_6;
                            var_19 = ((/* implicit */short) max((((/* implicit */int) (short)17422)), (((((/* implicit */int) min((arr_18 [i_0] [i_0] [i_0 - 1]), ((short)-20262)))) * ((-(((/* implicit */int) (short)-26444))))))));
                            var_20 = (short)31;
                            arr_25 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (short)4039))) ? (((((/* implicit */int) (short)-31246)) ^ (((/* implicit */int) (short)-32764)))) : (((/* implicit */int) ((short) (short)-17423)))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 4 */
            for (short i_10 = 3; i_10 < 20; i_10 += 3) /* same iter space */
            {
                arr_28 [i_0] [i_0 + 1] [i_0] [i_0 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (short)8304))) || ((!(((/* implicit */_Bool) ((((/* implicit */int) (short)3945)) + (((/* implicit */int) (short)-17423)))))))));
                var_21 = ((/* implicit */short) (+(((/* implicit */int) arr_3 [i_10] [i_10 + 3]))));
                var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_10 - 3])))))));
                var_23 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (short)32764)) > (((/* implicit */int) (short)17136))))) >= (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_13 [i_10])) : (((/* implicit */int) arr_21 [i_6] [i_6] [i_6] [i_6]))))))) | (((((((/* implicit */int) var_8)) + (2147483647))) << (((((((/* implicit */int) (short)-17423)) + (17431))) - (8)))))));
                var_24 = ((/* implicit */short) ((((/* implicit */int) (short)29408)) | (((/* implicit */int) (short)-18318))));
            }
            for (short i_11 = 3; i_11 < 20; i_11 += 3) /* same iter space */
            {
                var_25 = var_6;
                /* LoopNest 2 */
                for (short i_12 = 1; i_12 < 22; i_12 += 2) 
                {
                    for (short i_13 = 0; i_13 < 24; i_13 += 2) 
                    {
                        {
                            arr_37 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-32761)) ? (((/* implicit */int) (short)-13489)) : (((/* implicit */int) (short)16384))));
                            var_26 = ((short) (short)-31405);
                            var_27 = ((short) (short)(-32767 - 1));
                            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) var_2)) | (((/* implicit */int) min(((short)25805), ((short)11521)))))) : (((/* implicit */int) (short)-17365))));
                            var_29 = ((/* implicit */short) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (short)-21832)) : (((/* implicit */int) (short)12288))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (short i_14 = 0; i_14 < 24; i_14 += 2) /* same iter space */
            {
                arr_40 [i_0] [i_0 + 3] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_12 [i_0] [i_0] [i_0 - 1] [i_0 - 2])) <= (((/* implicit */int) (short)11566))));
                arr_41 [i_14] [i_14] [i_14] [i_14] = ((/* implicit */short) (-(((/* implicit */int) (short)29383))));
            }
            for (short i_15 = 0; i_15 < 24; i_15 += 2) /* same iter space */
            {
                var_30 = ((/* implicit */short) ((((/* implicit */int) min((arr_34 [i_0 + 2] [i_0 + 3] [i_0] [i_0]), ((short)1023)))) | ((-(((/* implicit */int) (short)27901))))));
                arr_45 [i_0] [i_0 + 1] = (short)7656;
                var_31 = var_4;
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_16 = 0; i_16 < 24; i_16 += 4) 
                {
                    /* LoopSeq 4 */
                    for (short i_17 = 0; i_17 < 24; i_17 += 4) 
                    {
                        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_16])) ? (((/* implicit */int) arr_13 [i_0 + 3])) : (((/* implicit */int) arr_0 [i_6]))));
                        var_33 = arr_42 [i_0 + 2];
                        var_34 = (short)24072;
                        var_35 = ((short) arr_32 [i_0 - 2] [i_0 + 2]);
                    }
                    for (short i_18 = 4; i_18 < 21; i_18 += 4) 
                    {
                        arr_53 [i_0] [i_0] [i_0 + 3] [i_0] [i_0] = (short)-32765;
                        var_36 = ((short) (short)(-32767 - 1));
                    }
                    for (short i_19 = 0; i_19 < 24; i_19 += 2) 
                    {
                        var_37 *= var_8;
                        var_38 -= arr_35 [i_0] [i_0] [i_0] [i_0 + 3] [i_0] [i_0 + 1];
                    }
                    for (short i_20 = 0; i_20 < 24; i_20 += 2) 
                    {
                        var_39 = ((short) (!(((/* implicit */_Bool) (short)16747))));
                        arr_61 [i_20] [i_20] [i_20] [i_20] [i_20] = ((/* implicit */short) ((((/* implicit */int) (short)12)) & (((((/* implicit */int) arr_0 [i_0 + 3])) ^ (((/* implicit */int) (short)-17365))))));
                        var_40 = ((short) (short)(-32767 - 1));
                    }
                    var_41 = ((/* implicit */short) ((((/* implicit */int) (short)-4822)) | (((/* implicit */int) (short)9))));
                    arr_62 [i_0 - 1] [i_0] [i_0] [i_0] &= arr_58 [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 2];
                    arr_63 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_52 [i_0] [i_0 + 3] [i_0 + 1] [i_0 + 1] [i_0] [i_0] [i_0]))));
                }
                for (short i_21 = 1; i_21 < 23; i_21 += 3) 
                {
                    /* LoopSeq 2 */
                    for (short i_22 = 0; i_22 < 24; i_22 += 2) 
                    {
                        var_42 = ((short) (short)48);
                        var_43 = ((short) max((arr_17 [i_0 - 1] [i_0] [i_0 + 3]), (arr_17 [i_0 - 2] [i_0] [i_0 + 2])));
                    }
                    for (short i_23 = 2; i_23 < 22; i_23 += 4) 
                    {
                        var_44 = ((short) arr_56 [i_23] [i_23] [i_23] [i_23] [i_23] [i_23] [i_23]);
                        var_45 = arr_70 [i_0] [i_0] [i_0 - 1] [i_0 - 2];
                        var_46 *= ((short) (((!(((/* implicit */_Bool) (short)60)))) ? (((/* implicit */int) (short)-29408)) : (((/* implicit */int) ((short) arr_33 [i_6] [i_6] [i_6] [i_6])))));
                        var_47 -= ((/* implicit */short) (+(min((((((/* implicit */int) (short)1068)) << (((((/* implicit */int) (short)4834)) - (4817))))), (((/* implicit */int) arr_14 [i_0] [i_0 + 3] [i_0 + 1]))))));
                        var_48 = ((/* implicit */short) ((((((/* implicit */_Bool) (short)-5414)) ? (((/* implicit */int) arr_50 [i_23] [i_23] [i_23] [i_23 - 2] [i_23 + 2])) : (((/* implicit */int) ((((/* implicit */int) (short)-18881)) != (((/* implicit */int) (short)-27738))))))) / (((((((/* implicit */int) (short)-6172)) + (2147483647))) << (((((((/* implicit */int) arr_3 [i_6] [i_6])) + (6816))) - (17)))))));
                    }
                    var_49 = ((/* implicit */short) max((((((/* implicit */_Bool) (short)7279)) ? ((~(((/* implicit */int) arr_2 [i_6])))) : (((/* implicit */int) ((short) (short)21726))))), ((~(((/* implicit */int) arr_1 [i_21 - 1]))))));
                    var_50 &= ((short) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (short)-32757)) : (((/* implicit */int) (short)9156))));
                }
            }
            arr_71 [i_0 - 1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)32099)) ? (((((/* implicit */_Bool) max(((short)32754), ((short)9347)))) ? (((/* implicit */int) ((short) var_3))) : (((/* implicit */int) (short)21444)))) : (((/* implicit */int) min((((short) var_9)), ((short)4840))))));
        }
        for (short i_24 = 0; i_24 < 24; i_24 += 3) 
        {
            var_51 = ((/* implicit */short) (-(((/* implicit */int) min((arr_36 [i_0] [i_0] [i_0] [i_0 - 2]), (arr_36 [i_0 + 2] [i_0] [i_0 + 2] [i_0]))))));
            arr_74 [i_24] [i_24] [i_24] &= ((short) ((((/* implicit */_Bool) ((short) (short)-10119))) ? (((/* implicit */int) (short)24498)) : (((/* implicit */int) (short)-28620))));
            /* LoopNest 2 */
            for (short i_25 = 1; i_25 < 21; i_25 += 4) 
            {
                for (short i_26 = 2; i_26 < 20; i_26 += 4) 
                {
                    {
                        var_52 = arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0];
                        arr_79 [i_24] = ((/* implicit */short) ((((/* implicit */_Bool) min((var_0), (var_9)))) ? ((-(((/* implicit */int) (short)(-32767 - 1))))) : (((/* implicit */int) arr_76 [i_25 + 3] [i_25 + 3] [i_25]))));
                    }
                } 
            } 
            arr_80 [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_60 [i_0] [i_0]))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_27 = 2; i_27 < 23; i_27 += 2) 
        {
            /* LoopNest 2 */
            for (short i_28 = 1; i_28 < 23; i_28 += 4) 
            {
                for (short i_29 = 0; i_29 < 24; i_29 += 2) 
                {
                    {
                        var_53 = var_6;
                        var_54 = (short)-354;
                        /* LoopSeq 2 */
                        for (short i_30 = 2; i_30 < 22; i_30 += 2) 
                        {
                            arr_90 [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_28] [i_0] [i_0] = arr_7 [i_0 - 2];
                            arr_91 [i_0] [i_28] [i_0] [i_0 - 1] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_10 [i_0 + 3] [i_0 - 1] [i_0])) | (((/* implicit */int) (short)-18733))));
                            var_55 = ((short) (short)-27687);
                        }
                        for (short i_31 = 1; i_31 < 22; i_31 += 3) 
                        {
                            var_56 = ((/* implicit */short) (!(((/* implicit */_Bool) ((short) arr_52 [i_29] [i_29] [i_29] [i_29] [i_29] [i_29] [i_29])))));
                            arr_94 [i_29] [i_29] [i_29] [i_29] [i_28] [i_29] [i_29] = arr_0 [i_0];
                            var_57 = ((/* implicit */short) min((var_57), ((short)-31709)));
                            arr_95 [i_0] [i_28] [i_0 - 2] [i_0] = ((/* implicit */short) (~(((/* implicit */int) arr_51 [i_0 - 1] [i_0 + 3]))));
                        }
                    }
                } 
            } 
            arr_96 [i_0] [i_0] = ((short) (short)-21807);
            arr_97 [i_0] [i_0 - 2] = arr_69 [i_0] [i_0] [i_0] [i_0 - 2] [i_0] [i_0];
            arr_98 [i_0] [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) arr_72 [i_0 + 2]))));
        }
        var_58 = arr_56 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0];
    }
    for (short i_32 = 0; i_32 < 18; i_32 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_33 = 0; i_33 < 18; i_33 += 1) 
        {
            arr_103 [i_32] [i_32] = arr_67 [i_32] [i_32] [i_32] [i_32] [i_32];
            arr_104 [i_33] = ((short) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_19 [i_32] [i_32]))));
        }
        arr_105 [i_32] [i_32] = ((short) (+(((/* implicit */int) arr_3 [i_32] [i_32]))));
    }
    for (short i_34 = 0; i_34 < 18; i_34 += 3) /* same iter space */
    {
        arr_109 [i_34] [i_34] = ((/* implicit */short) ((((/* implicit */int) ((short) (short)-14738))) | (((/* implicit */int) ((short) arr_65 [i_34] [i_34] [i_34])))));
        var_59 = ((short) ((((/* implicit */int) arr_30 [i_34] [i_34])) ^ (((((((/* implicit */int) var_8)) + (2147483647))) >> (((((/* implicit */int) var_3)) + (4021)))))));
        arr_110 [i_34] = (short)9156;
    }
}
