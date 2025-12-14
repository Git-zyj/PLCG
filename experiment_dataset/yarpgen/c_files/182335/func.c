/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182335
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            var_13 &= ((/* implicit */short) (+(max((((358669972155282949ULL) / (((/* implicit */unsigned long long int) var_5)))), (18088074101554268662ULL)))));
            var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) arr_3 [i_0]))));
            arr_7 [i_0] [i_1] [i_0] = arr_3 [i_1];
        }
        for (short i_2 = 0; i_2 < 25; i_2 += 4) /* same iter space */
        {
            var_15 = ((/* implicit */unsigned int) ((((arr_0 [i_0] [i_2]) ? (((/* implicit */unsigned long long int) var_5)) : (min((((/* implicit */unsigned long long int) arr_2 [i_0] [i_2])), (var_2))))) >= (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)65530)))))));
            var_16 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_2])) + (((/* implicit */int) ((1004869706U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))) ? (((/* implicit */int) ((((/* implicit */int) ((short) var_7))) < (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)6)))))))) : (((int) arr_8 [i_0]))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_17 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_0]))));
                var_18 |= ((/* implicit */short) ((((/* implicit */int) arr_1 [i_2])) >> (((((/* implicit */int) ((unsigned char) 3290097589U))) - (169)))));
                var_19 = ((/* implicit */short) ((_Bool) arr_10 [i_3] [i_2] [i_2]));
                var_20 = ((/* implicit */unsigned char) ((unsigned long long int) arr_11 [i_3] [i_3] [i_3] [i_0]));
            }
            for (unsigned int i_4 = 3; i_4 < 23; i_4 += 2) 
            {
                /* LoopSeq 3 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_21 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_14 [i_4 - 3] [i_4] [i_4] [i_4 + 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_2])) ? (2097151U) : (((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_0]))))) : (((((/* implicit */_Bool) 18088074101554268679ULL)) ? (((/* implicit */unsigned long long int) arr_5 [i_0])) : (19ULL)))))));
                    arr_17 [i_5] = ((/* implicit */_Bool) arr_9 [i_0] [i_5] [i_0]);
                }
                for (short i_6 = 2; i_6 < 24; i_6 += 4) 
                {
                    var_22 = ((/* implicit */unsigned int) arr_2 [i_0] [i_4]);
                    var_23 = ((/* implicit */short) ((((/* implicit */unsigned int) (-(max((arr_19 [i_0] [i_0] [i_0] [i_0]), (arr_9 [i_0] [i_2] [i_4])))))) == (var_6)));
                }
                for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 4) 
                {
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)54223)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6))) + (5942703687680470015ULL))) : (((/* implicit */unsigned long long int) 3521060216U))))) ? (936967951) : (((/* implicit */int) (_Bool)0))));
                    var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((unsigned char) (((~(18088074101554268645ULL))) >> (((/* implicit */int) arr_12 [i_0] [i_2] [i_0] [i_7]))))))));
                    arr_22 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) (-(((((((/* implicit */int) (short)-9128)) + (2147483647))) << ((((((~(((/* implicit */int) arr_2 [i_0] [i_2])))) + (24262))) - (17)))))));
                }
                var_26 = ((/* implicit */int) var_6);
                var_27 = ((/* implicit */unsigned char) (+(1814869261U)));
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 25; i_8 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 4) 
                {
                    arr_31 [i_0] [i_2] [i_0] [i_9] = ((/* implicit */_Bool) (short)-12595);
                    /* LoopSeq 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_35 [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_16 [i_10] [i_8] [i_9] [i_10]))))) ? (((/* implicit */int) ((short) var_7))) : (((((/* implicit */int) (unsigned char)207)) << (((((/* implicit */int) (unsigned char)203)) - (193)))))));
                        arr_36 [i_0] [i_0] [i_2] [i_2] [i_2] &= ((/* implicit */short) ((((/* implicit */int) ((short) 2757449643U))) & (arr_26 [i_2] [i_8] [i_9] [i_10])));
                        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_10] [i_9] [i_8] [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_25 [i_0] [i_0] [i_8] [i_9])))))));
                    }
                    for (int i_11 = 1; i_11 < 24; i_11 += 2) 
                    {
                        var_29 = ((/* implicit */int) var_10);
                        arr_39 [i_2] [i_9] [i_9] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */int) ((short) ((var_6) >> (((536870911U) - (536870905U))))));
                        var_30 = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) | (3290097605U))) + (((/* implicit */unsigned int) ((/* implicit */int) ((short) 3758096378U))))));
                    }
                }
                for (short i_12 = 4; i_12 < 24; i_12 += 4) 
                {
                    var_31 &= ((/* implicit */short) arr_42 [i_12] [i_12]);
                    var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) arr_40 [i_12]))));
                }
                for (unsigned short i_13 = 1; i_13 < 23; i_13 += 2) 
                {
                    var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(2480098038U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (short)12572)))) : (((((/* implicit */_Bool) arr_2 [i_2] [i_13])) ? (arr_14 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                    var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_2] [i_13 - 1] [i_13 + 1] [i_13 - 1])) ? (arr_14 [i_8] [i_13 - 1] [i_13 + 1] [i_13 - 1]) : (arr_14 [i_13] [i_13 - 1] [i_13 + 1] [i_13 - 1]))))));
                    var_35 ^= ((/* implicit */unsigned int) arr_26 [i_0] [i_0] [i_0] [i_0]);
                }
                arr_46 [i_8] [i_8] [i_2] [i_0] = ((/* implicit */_Bool) var_1);
            }
        }
        for (short i_14 = 0; i_14 < 25; i_14 += 4) /* same iter space */
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (short i_15 = 3; i_15 < 21; i_15 += 2) /* same iter space */
            {
                var_36 ^= ((/* implicit */short) 18088074101554268647ULL);
                /* LoopSeq 4 */
                for (int i_16 = 1; i_16 < 24; i_16 += 2) 
                {
                    var_37 = ((/* implicit */int) arr_10 [i_15] [i_15] [i_16]);
                    arr_53 [i_0] [i_15] = ((/* implicit */unsigned char) 1201148116U);
                    var_38 += (~(var_3));
                }
                for (int i_17 = 1; i_17 < 23; i_17 += 4) 
                {
                    arr_56 [i_15] = ((/* implicit */_Bool) (~((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_3 [i_14])) : (arr_52 [i_0] [i_14] [i_14] [i_0] [i_17])))));
                    arr_57 [i_14] |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)224))));
                    var_39 &= ((/* implicit */unsigned short) (((_Bool)1) ? (((3290097587U) - (var_6))) : (var_5)));
                }
                for (unsigned long long int i_18 = 0; i_18 < 25; i_18 += 4) /* same iter space */
                {
                    var_40 = arr_40 [i_15];
                    arr_61 [i_0] [i_14] [i_15] [i_15] [i_18] = ((/* implicit */unsigned int) arr_19 [i_0] [i_14] [i_18] [i_18]);
                }
                for (unsigned long long int i_19 = 0; i_19 < 25; i_19 += 4) /* same iter space */
                {
                    var_41 = ((/* implicit */unsigned short) 1073741824U);
                    arr_64 [i_15] = ((/* implicit */unsigned int) (((((_Bool)1) && (((/* implicit */_Bool) 3290097596U)))) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_0] [i_14] [i_15 + 3])))));
                }
                /* LoopNest 2 */
                for (unsigned int i_20 = 3; i_20 < 23; i_20 += 4) 
                {
                    for (unsigned int i_21 = 0; i_21 < 25; i_21 += 4) 
                    {
                        {
                            var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 18088074101554268645ULL)) ? (((/* implicit */int) arr_63 [i_15 - 2] [i_15] [i_15 + 2] [i_15])) : (((((/* implicit */_Bool) arr_27 [i_0] [i_14])) ? (((/* implicit */int) arr_4 [i_14])) : (((/* implicit */int) var_7))))));
                            var_43 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_38 [i_0] [i_14] [i_14] [i_15 + 4] [i_0] [i_14] [i_21])) + (((/* implicit */int) arr_38 [i_0] [i_14] [i_15] [i_20] [i_21] [i_15] [i_15]))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (short i_22 = 3; i_22 < 21; i_22 += 2) /* same iter space */
            {
                var_44 ^= (~(arr_43 [i_22] [i_22 + 1] [i_22 + 3] [i_22] [i_22 - 2] [i_22 - 2]));
                arr_73 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_67 [i_22] [i_22 + 4] [i_22] [i_22 + 3] [i_22 - 1] [i_22 - 1]))));
                arr_74 [i_22] [i_22] [i_22] [i_22] = ((/* implicit */short) ((358669972155282973ULL) >= (((/* implicit */unsigned long long int) 2147483647))));
                var_45 *= ((/* implicit */short) ((((/* implicit */int) arr_37 [i_22] [i_22] [i_22] [i_22] [i_22 - 2] [i_22] [i_22 + 1])) * (((/* implicit */int) arr_37 [i_22] [i_22] [i_22] [i_22] [i_22 - 3] [i_22] [i_22 - 1]))));
            }
            /* vectorizable */
            for (unsigned int i_23 = 0; i_23 < 25; i_23 += 2) 
            {
                var_46 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1004869697U)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_27 [i_0] [i_14]))));
                arr_77 [i_0] [i_14] [i_14] [i_23] = ((/* implicit */_Bool) (((((-(((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((((/* implicit */_Bool) 1083992436U)) ? (((/* implicit */int) arr_48 [i_0] [i_14] [i_23])) : (((/* implicit */int) (short)-12619))))));
            }
            arr_78 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
            var_47 = ((/* implicit */_Bool) min((var_47), (((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_0] [i_14] [i_14] [i_14] [i_0])) >> (((((var_4) * (((((/* implicit */_Bool) 3210974845U)) ? (3891988568U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) - (1510775522U))))))));
        }
        var_48 = ((/* implicit */unsigned int) (short)228);
        var_49 += ((/* implicit */unsigned long long int) 1083992465U);
        var_50 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-224))) * (arr_51 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
    }
    var_51 *= ((/* implicit */short) min((((/* implicit */unsigned int) var_8)), (min((((/* implicit */unsigned int) ((((/* implicit */int) var_1)) + (((/* implicit */int) (short)224))))), (min((1083992474U), (((/* implicit */unsigned int) var_9))))))));
}
