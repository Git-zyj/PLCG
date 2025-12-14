/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111157
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 -= ((/* implicit */unsigned int) ((((/* implicit */int) max((arr_6 [i_0] [i_1] [i_2]), (arr_6 [i_2] [i_0] [i_0])))) & (((((/* implicit */int) arr_6 [i_2] [i_1] [i_0])) << (((/* implicit */int) arr_6 [i_2] [i_1 - 1] [i_0]))))));
                    var_21 = ((/* implicit */_Bool) var_19);
                    var_22 += ((/* implicit */signed char) (unsigned short)18816);
                    var_23 += ((/* implicit */long long int) max((max((((var_8) ? (((/* implicit */int) (signed char)-105)) : (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) arr_6 [i_0] [i_1 + 1] [i_0])))), (((/* implicit */int) arr_8 [i_0] [i_0]))));
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned int i_3 = 1; i_3 < 19; i_3 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_4 = 0; i_4 < 21; i_4 += 1) 
        {
            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */_Bool) ((long long int) 2666363263022015178LL))) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-48))))))));
            var_25 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)21))));
            /* LoopNest 2 */
            for (unsigned short i_5 = 1; i_5 < 20; i_5 += 1) 
            {
                for (long long int i_6 = 1; i_6 < 20; i_6 += 3) 
                {
                    {
                        var_26 += ((/* implicit */signed char) max((((((/* implicit */_Bool) (signed char)-47)) ? (((/* implicit */unsigned long long int) 35184237871104LL)) : (4633504814493460645ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_18))) - (8868191587816073974LL))))));
                        var_27 += ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) % (((/* implicit */int) arr_11 [i_4]))));
                        var_28 = ((/* implicit */unsigned long long int) arr_10 [i_4] [i_5]);
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (short i_7 = 0; i_7 < 21; i_7 += 4) /* same iter space */
            {
                var_29 += ((/* implicit */short) ((min((((/* implicit */unsigned long long int) arr_15 [i_3 + 2] [i_3 - 1] [i_3] [i_3 + 2])), (18170857068674430080ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (+(((/* implicit */int) arr_22 [i_3 - 1] [i_4] [i_4] [i_7])))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_8 = 3; i_8 < 18; i_8 += 2) 
                {
                    arr_26 [i_3] [i_7] [i_7] [i_8] &= ((/* implicit */short) (~(((/* implicit */int) arr_15 [i_3] [i_4] [i_7] [i_8 + 1]))));
                    var_30 = ((/* implicit */signed char) min((var_30), ((signed char)31)));
                    var_31 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_3 - 1] [i_4])) ? (((/* implicit */int) arr_21 [i_3 - 1] [i_3 + 1])) : (((/* implicit */int) arr_21 [i_3] [i_3 + 2]))));
                }
            }
            /* vectorizable */
            for (short i_9 = 0; i_9 < 21; i_9 += 4) /* same iter space */
            {
                var_32 += ((/* implicit */unsigned int) (!(arr_20 [i_3] [i_3 + 1] [i_3 - 1] [i_3 - 1])));
                arr_29 [i_4] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (unsigned short)11084)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
                /* LoopSeq 2 */
                for (unsigned char i_10 = 3; i_10 < 19; i_10 += 2) /* same iter space */
                {
                    var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) (((~(((/* implicit */int) var_2)))) != ((~(((/* implicit */int) arr_30 [i_3] [i_3 + 2] [i_3] [i_9] [i_10 + 2] [i_10 - 1])))))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_11 = 0; i_11 < 21; i_11 += 2) 
                    {
                        var_34 -= ((/* implicit */_Bool) var_9);
                        arr_36 [i_4] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_35 [i_3] [i_4] [i_4] [i_4] [i_10] [i_10] [i_10]))) > (5LL))))));
                        var_35 -= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)55320)) >> (((-3434769403791673767LL) + (3434769403791673773LL)))));
                        var_36 *= ((/* implicit */unsigned int) var_10);
                    }
                    for (signed char i_12 = 0; i_12 < 21; i_12 += 1) 
                    {
                        var_37 = ((/* implicit */signed char) var_18);
                        var_38 = ((/* implicit */_Bool) min((var_38), (((((/* implicit */_Bool) arr_34 [i_10] [i_10 - 3] [i_10 - 3] [i_10] [i_10 - 2])) && (((/* implicit */_Bool) arr_34 [i_10] [i_10 - 1] [i_10] [i_10 + 2] [i_10 + 2]))))));
                        var_39 = arr_9 [(unsigned char)20];
                    }
                    for (signed char i_13 = 2; i_13 < 18; i_13 += 4) 
                    {
                        var_40 = 8681403318231180500ULL;
                        var_41 ^= ((/* implicit */unsigned char) ((signed char) (_Bool)1));
                        var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [i_4] [i_4] [i_4] [i_13] [i_13])) || (((/* implicit */_Bool) arr_33 [i_3 + 1] [i_4] [i_9] [i_9] [i_9]))));
                    }
                }
                for (unsigned char i_14 = 3; i_14 < 19; i_14 += 2) /* same iter space */
                {
                    arr_44 [i_4] [i_4] = ((/* implicit */_Bool) (-(((/* implicit */int) var_14))));
                    var_43 ^= ((/* implicit */signed char) ((((((/* implicit */int) ((short) arr_30 [i_3] [i_3 + 2] [i_3] [i_3 + 2] [i_3] [i_3]))) + (2147483647))) >> (((/* implicit */int) arr_43 [i_3] [i_3 + 2] [i_9] [i_14 + 2] [i_3 - 1] [i_9]))));
                    var_44 = ((/* implicit */unsigned short) ((var_19) != (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_3] [i_3] [i_3 + 2] [i_3 + 1] [i_14 - 2] [i_3])))));
                    var_45 = ((/* implicit */short) max((var_45), (((/* implicit */short) (+(15653400645589265800ULL))))));
                }
            }
            for (short i_15 = 4; i_15 < 18; i_15 += 1) 
            {
                arr_47 [i_4] [i_4] [i_15] = ((/* implicit */unsigned char) ((arr_20 [7LL] [i_4] [i_15 + 2] [i_15 + 3]) ? (((/* implicit */int) arr_35 [i_3] [i_3] [i_3 + 1] [i_4] [i_15] [i_15] [i_15 - 3])) : (((((/* implicit */int) (signed char)-95)) - (((/* implicit */int) (unsigned char)240))))));
                var_46 = ((/* implicit */unsigned short) ((unsigned int) 2487417722U));
                var_47 += ((/* implicit */unsigned long long int) (unsigned short)6221);
                /* LoopSeq 3 */
                for (unsigned int i_16 = 0; i_16 < 21; i_16 += 4) 
                {
                    var_48 = ((/* implicit */unsigned int) min((var_48), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (unsigned char)149)))))));
                    var_49 *= ((/* implicit */signed char) arr_28 [i_16] [i_3 + 2] [i_3 + 2]);
                }
                for (signed char i_17 = 0; i_17 < 21; i_17 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_18 = 0; i_18 < 21; i_18 += 4) /* same iter space */
                    {
                        var_50 -= ((/* implicit */unsigned short) max((3191795483805293034LL), (((/* implicit */long long int) (unsigned char)68))));
                        var_51 = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) (unsigned short)33346)))), (((((/* implicit */_Bool) max((var_16), (arr_9 [i_18])))) ? (((/* implicit */int) arr_51 [i_15 + 2] [i_15] [i_15 + 2] [i_3 + 2] [i_3])) : (((/* implicit */int) max((var_7), (var_4))))))));
                    }
                    for (unsigned char i_19 = 0; i_19 < 21; i_19 += 4) /* same iter space */
                    {
                        arr_58 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */long long int) (unsigned short)61400);
                        var_52 = ((/* implicit */unsigned long long int) max((var_52), (((/* implicit */unsigned long long int) var_9))));
                    }
                    var_53 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) ((((/* implicit */int) (short)-6042)) == (((/* implicit */int) arr_32 [i_3] [i_3] [(unsigned short)1] [i_3 - 1])))))));
                    var_54 *= ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned short) var_13))))) ? (var_19) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))))));
                    arr_59 [i_4] [i_4] = ((/* implicit */signed char) arr_16 [i_15] [i_4] [i_15] [i_17]);
                }
                for (signed char i_20 = 0; i_20 < 21; i_20 += 3) /* same iter space */
                {
                    arr_62 [i_4] [i_20] [i_15] [i_20] [i_20] = ((/* implicit */unsigned short) (+((~(((/* implicit */int) var_3))))));
                    arr_63 [i_20] [i_4] [i_4] [i_20] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? ((~(((var_1) & (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_3] [i_3 + 2] [i_3] [i_3 + 1] [i_3]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_20] [i_15] [i_3 + 2] [i_3 + 2] [i_3 + 2])))));
                }
                arr_64 [i_3] [i_3] [i_4] [i_3] = ((signed char) ((((/* implicit */_Bool) (unsigned short)7)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) 2026288893U)) >= (15003378219282960083ULL)))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)31232))))));
            }
            var_55 ^= ((/* implicit */unsigned short) ((unsigned int) (((+(((/* implicit */int) var_2)))) <= ((+(((/* implicit */int) var_4)))))));
        }
        arr_65 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-6)) & (((/* implicit */int) (signed char)-46))));
    }
    for (signed char i_21 = 0; i_21 < 20; i_21 += 4) 
    {
        var_56 += ((/* implicit */signed char) arr_22 [i_21] [i_21] [i_21] [i_21]);
        var_57 = ((/* implicit */long long int) var_14);
    }
    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) /* same iter space */
    {
        var_58 = ((/* implicit */short) min((var_58), (((/* implicit */short) ((((/* implicit */_Bool) arr_52 [i_22] [i_22] [(_Bool)1] [i_22] [i_22])) ? (arr_60 [i_22] [i_22]) : (((((/* implicit */_Bool) (~(2038854939U)))) ? (((((/* implicit */_Bool) var_2)) ? (arr_7 [i_22] [i_22] [0U]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_22]))))) : (((/* implicit */long long int) ((/* implicit */int) max((var_4), (((/* implicit */unsigned short) var_13)))))))))))));
        var_59 = ((/* implicit */long long int) (~(((/* implicit */int) arr_22 [i_22] [i_22] [i_22] [i_22]))));
        arr_72 [i_22] [(short)2] = ((/* implicit */signed char) (-(((/* implicit */int) ((((((/* implicit */int) arr_50 [i_22] [i_22] [i_22] [(short)7] [i_22])) >> (((((/* implicit */int) var_0)) - (57))))) != (((/* implicit */int) (signed char)(-127 - 1))))))));
    }
    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) /* same iter space */
    {
        var_60 -= ((/* implicit */signed char) (unsigned char)91);
        var_61 -= ((/* implicit */long long int) arr_51 [i_23] [i_23] [i_23] [i_23] [i_23]);
        var_62 = ((/* implicit */unsigned short) max((var_62), (((/* implicit */unsigned short) ((max((arr_24 [i_23] [i_23] [i_23] [i_23]), (((/* implicit */long long int) arr_15 [i_23] [i_23] [i_23] [i_23])))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_23] [i_23] [i_23] [i_23]))))))))));
        var_63 = ((/* implicit */_Bool) ((signed char) (unsigned short)58405));
    }
    var_64 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) && (((/* implicit */_Bool) ((unsigned long long int) var_3))))))));
    var_65 = ((/* implicit */unsigned char) min((var_65), (((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1)))))));
}
