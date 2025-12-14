/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109289
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
    for (int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) + (((/* implicit */int) var_10))))) ? (arr_0 [i_0 + 3]) : (((((/* implicit */int) (signed char)108)) | (var_8)))));
            arr_4 [i_0] = ((unsigned short) ((unsigned char) -5514927727695349223LL));
        }
        for (unsigned short i_2 = 2; i_2 < 19; i_2 += 1) 
        {
            arr_8 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((/* implicit */int) arr_1 [i_0 + 1])) : ((-(((/* implicit */int) arr_1 [i_0 - 1]))))));
            arr_9 [i_0] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)49)) ? (94022729) : (((/* implicit */int) (signed char)-49)))))));
        }
        var_13 *= ((/* implicit */unsigned char) max(((+(((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) + (arr_7 [i_0] [i_0] [i_0]))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */short) (signed char)14)), ((short)9742)))))))));
    }
    for (int i_3 = 2; i_3 < 16; i_3 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_4 = 1; i_4 < 19; i_4 += 3) 
        {
            arr_15 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) var_5)) << (((arr_7 [i_3 - 2] [i_3 + 2] [i_4 + 1]) - (7816904401505465988LL)))));
            var_14 ^= (_Bool)1;
        }
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_3 [i_5] [i_5 + 1]))) ? (((/* implicit */int) var_9)) : (max((((/* implicit */int) arr_17 [i_3] [i_3 - 2])), (((((/* implicit */int) var_3)) - (((/* implicit */int) (signed char)95))))))));
            var_16 = ((((((/* implicit */_Bool) max((var_0), (((/* implicit */int) var_9))))) && (((/* implicit */_Bool) ((int) (_Bool)1))))) ? (((/* implicit */int) max(((unsigned short)36015), (((/* implicit */unsigned short) var_6))))) : (((((/* implicit */int) var_5)) - (((/* implicit */int) var_2)))));
            var_17 += ((/* implicit */long long int) max((arr_13 [i_3] [i_3] [i_3]), ((+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)5)) && (((/* implicit */_Bool) -94022739)))))))));
        }
        for (int i_6 = 0; i_6 < 20; i_6 += 1) 
        {
            var_18 ^= ((/* implicit */_Bool) arr_5 [i_3] [i_3]);
            var_19 ^= ((/* implicit */short) (~(((((/* implicit */_Bool) (signed char)78)) ? (299293119) : (-743465077)))));
            arr_22 [i_3] = ((/* implicit */int) var_1);
            /* LoopSeq 1 */
            for (short i_7 = 0; i_7 < 20; i_7 += 2) 
            {
                var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)-4301))));
                arr_25 [i_6] [i_6] &= ((/* implicit */unsigned char) arr_21 [i_6] [i_6]);
                arr_26 [i_3 + 2] [i_6] [i_6] = ((/* implicit */unsigned short) ((int) ((unsigned short) arr_19 [i_3 + 3] [i_3 + 3])));
                arr_27 [i_7] [i_6] [i_3] &= ((/* implicit */int) max(((unsigned char)61), (((/* implicit */unsigned char) (signed char)-45))));
                var_21 = ((/* implicit */int) (signed char)48);
            }
        }
        arr_28 [i_3] = ((/* implicit */long long int) arr_6 [i_3] [i_3]);
        var_22 = ((((max((((/* implicit */int) (short)-1)), (arr_11 [i_3 + 1]))) + (2147483647))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3 - 2])) ? (((/* implicit */int) (short)28892)) : (((/* implicit */int) (unsigned short)61503))))) ? ((+(((/* implicit */int) arr_23 [i_3] [i_3 + 1] [i_3] [i_3])))) : (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-16)), (arr_19 [i_3] [i_3])))))) - (157))));
    }
    var_23 |= ((/* implicit */unsigned short) var_1);
    /* LoopSeq 4 */
    for (short i_8 = 0; i_8 < 10; i_8 += 4) 
    {
        arr_33 [i_8] = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)16478))));
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_8] [i_8]))))) ? (((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) arr_12 [i_8] [i_8] [i_8]))))) : (max((var_0), (((/* implicit */int) arr_12 [i_8] [i_8] [i_8]))))));
        arr_34 [i_8] [i_8] = ((/* implicit */signed char) arr_17 [i_8] [i_8]);
        arr_35 [i_8] = ((/* implicit */unsigned short) (short)-4275);
    }
    for (int i_9 = 0; i_9 < 19; i_9 += 4) 
    {
        var_25 = ((/* implicit */signed char) var_2);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_10 = 4; i_10 < 18; i_10 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_11 = 0; i_11 < 19; i_11 += 1) 
            {
                var_26 = ((/* implicit */int) arr_3 [i_10 - 2] [i_10 - 1]);
                arr_42 [i_11] [i_10] [i_11] = ((/* implicit */unsigned short) ((long long int) arr_14 [i_10 + 1]));
            }
            /* LoopNest 2 */
            for (unsigned char i_12 = 0; i_12 < 19; i_12 += 1) 
            {
                for (long long int i_13 = 0; i_13 < 19; i_13 += 1) 
                {
                    {
                        var_27 = (~(((/* implicit */int) (unsigned short)64296)));
                        var_28 = ((/* implicit */unsigned short) ((unsigned char) (~(((/* implicit */int) (signed char)53)))));
                        arr_48 [i_13] [i_10] [i_10] [i_10] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) arr_44 [i_10 - 4] [i_10] [i_9])) ? (((/* implicit */long long int) ((int) (short)-4301))) : (arr_7 [i_9] [i_10 + 1] [i_12])));
                    }
                } 
            } 
        }
    }
    for (int i_14 = 0; i_14 < 21; i_14 += 2) /* same iter space */
    {
        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((((((/* implicit */int) (unsigned short)28621)) + (((/* implicit */int) arr_51 [i_14])))) << (((((/* implicit */int) max((arr_51 [i_14]), (arr_51 [i_14])))) - (24))))))));
        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((arr_50 [i_14]) < (arr_50 [i_14]))) ? (max((arr_50 [i_14]), (((/* implicit */int) (_Bool)1)))) : (((arr_50 [i_14]) >> (((arr_50 [i_14]) - (2069557922))))))))));
    }
    for (int i_15 = 0; i_15 < 21; i_15 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (signed char i_16 = 0; i_16 < 21; i_16 += 4) 
        {
            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)96)) / (((/* implicit */int) (short)-5530))))) ? (((((/* implicit */int) var_6)) / (arr_52 [i_15]))) : (arr_52 [i_15])));
            var_32 -= ((/* implicit */_Bool) max((((max((arr_52 [i_15]), (((/* implicit */int) var_4)))) / ((~(((/* implicit */int) var_5)))))), (((/* implicit */int) (unsigned short)10623))));
            arr_58 [i_15] [i_16] = ((/* implicit */unsigned short) ((long long int) max((arr_52 [i_15]), (((/* implicit */int) ((unsigned short) var_1))))));
        }
        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
        {
            arr_63 [i_17] [i_17 - 1] = ((/* implicit */unsigned char) ((unsigned short) arr_49 [i_17]));
            var_33 = ((/* implicit */signed char) max((647966355), (((/* implicit */int) (_Bool)0))));
            /* LoopSeq 4 */
            for (short i_18 = 1; i_18 < 20; i_18 += 3) 
            {
                var_34 = arr_54 [i_17 - 1] [i_17 - 1];
                var_35 = ((/* implicit */_Bool) max((max((arr_65 [i_17] [i_17] [i_17 - 1] [i_17 - 1]), (arr_65 [i_15] [i_17] [i_17 - 1] [i_17]))), (((/* implicit */long long int) (unsigned char)253))));
            }
            for (int i_19 = 0; i_19 < 21; i_19 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_20 = 1; i_20 < 19; i_20 += 2) 
                {
                    for (signed char i_21 = 2; i_21 < 19; i_21 += 4) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((short) var_9))) ? (((/* implicit */int) ((signed char) arr_55 [i_15] [i_15] [i_15]))) : (((/* implicit */int) arr_60 [i_15])))))))));
                            var_37 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_60 [i_17])) ? (arr_54 [i_15] [i_15]) : (((((/* implicit */int) arr_73 [i_21] [i_17])) + (arr_72 [i_15] [i_15] [i_15] [i_17] [i_19] [i_20] [i_15]))))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)10136))))))))));
                        }
                    } 
                } 
                arr_74 [i_19] [i_17] [i_15] = ((/* implicit */unsigned short) max(((+(((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) arr_66 [15] [i_17] [i_15])))))), ((~(((((/* implicit */_Bool) arr_73 [i_19] [i_17])) ? (((/* implicit */int) arr_60 [i_17])) : (arr_71 [i_15] [i_17] [i_15] [i_19])))))));
                var_38 -= ((/* implicit */short) arr_67 [i_15] [i_17] [i_15] [i_19]);
                /* LoopNest 2 */
                for (short i_22 = 3; i_22 < 18; i_22 += 3) 
                {
                    for (int i_23 = 0; i_23 < 21; i_23 += 1) 
                    {
                        {
                            var_39 += ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)130)) || (((/* implicit */_Bool) arr_57 [i_22]))))), (((((/* implicit */_Bool) arr_76 [i_17] [i_22])) ? (arr_72 [i_19] [i_22 + 1] [i_19] [i_22 - 2] [i_23] [i_22 + 1] [i_17]) : (((/* implicit */int) (unsigned short)3692))))))) && (((/* implicit */_Bool) max((((/* implicit */int) var_2)), (((((/* implicit */int) var_1)) - (((/* implicit */int) arr_77 [i_17] [i_17] [i_15])))))))));
                            arr_81 [i_15] [i_15] [i_17] [i_19] [i_22 + 1] [i_22] [i_17] = ((/* implicit */unsigned short) ((max((arr_78 [i_23] [i_17 - 1] [i_19]), (arr_78 [i_22] [i_17 - 1] [i_19]))) ? (((/* implicit */int) max((var_2), (((/* implicit */unsigned short) arr_70 [i_15] [i_17 - 1] [i_19] [i_22] [i_23]))))) : (((((/* implicit */_Bool) arr_65 [i_23] [i_17 - 1] [i_19] [i_17 - 1])) ? (((/* implicit */int) arr_70 [i_15] [i_17 - 1] [i_22] [i_22 - 1] [i_22])) : (((/* implicit */int) arr_78 [i_15] [i_17 - 1] [i_15]))))));
                            var_40 += ((/* implicit */_Bool) max((((/* implicit */short) ((((/* implicit */int) arr_56 [i_15] [i_19])) < (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9))))))), (((short) arr_71 [i_15] [i_17] [i_22 + 1] [i_17 - 1]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_24 = 0; i_24 < 21; i_24 += 4) 
                {
                    for (int i_25 = 2; i_25 < 19; i_25 += 1) 
                    {
                        {
                            var_41 = ((/* implicit */unsigned short) max((var_41), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_70 [i_19] [i_25 + 2] [i_19] [i_25 + 1] [i_24])))) ? (((/* implicit */int) ((short) arr_72 [i_15] [i_25 - 2] [i_19] [i_24] [i_25] [i_19] [i_17]))) : (((/* implicit */int) ((var_7) || (var_7)))))))));
                            arr_88 [i_15] [i_17] = ((/* implicit */unsigned char) max(((short)4321), (((/* implicit */short) ((((/* implicit */int) (short)5518)) >= (443619183))))));
                        }
                    } 
                } 
            }
            for (signed char i_26 = 4; i_26 < 18; i_26 += 3) /* same iter space */
            {
                var_42 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned short) var_9)))));
                var_43 -= ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) ((0LL) * (arr_67 [i_15] [i_15] [i_15] [i_15])))))));
            }
            for (signed char i_27 = 4; i_27 < 18; i_27 += 3) /* same iter space */
            {
                var_44 ^= ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) max((((/* implicit */signed char) var_3)), ((signed char)104)))) ? ((-(((/* implicit */int) (short)-18278)))) : ((-(arr_54 [i_15] [i_17]))))));
                var_45 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_70 [i_15] [i_15] [i_15] [i_15] [i_15])) * (((((/* implicit */int) var_11)) * (((/* implicit */int) arr_82 [i_15] [8LL] [i_27 + 2])))))))));
                arr_94 [i_15] |= ((/* implicit */signed char) (short)4300);
            }
            arr_95 [i_17] [i_17] = (~(((/* implicit */int) ((((/* implicit */int) arr_77 [i_17 - 1] [i_17 - 1] [i_17 - 1])) > (((/* implicit */int) var_9))))));
            var_46 = ((/* implicit */long long int) max((var_46), (((/* implicit */long long int) max((((/* implicit */int) arr_60 [i_15])), ((-(((/* implicit */int) arr_73 [i_17 - 1] [i_17])))))))));
        }
        for (long long int i_28 = 0; i_28 < 21; i_28 += 3) 
        {
            arr_100 [i_15] [i_15] [i_15] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_52 [i_28])) ? (((arr_92 [i_15] [i_28] [i_28]) + (((/* implicit */int) arr_57 [i_15])))) : (arr_52 [i_15]))) < (((/* implicit */int) arr_60 [i_15]))));
            arr_101 [i_15] [i_15] = (signed char)125;
        }
        var_47 = ((/* implicit */unsigned short) max((max((arr_62 [i_15] [i_15]), (var_7))), (((((((/* implicit */int) (unsigned short)5651)) | (((/* implicit */int) (_Bool)0)))) != (((arr_71 [i_15] [i_15] [i_15] [i_15]) * (((/* implicit */int) var_3))))))));
    }
    var_48 = ((/* implicit */_Bool) var_8);
}
