/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119921
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
    var_16 = ((/* implicit */long long int) ((4503599627370495LL) == (((/* implicit */long long int) ((/* implicit */int) min((min((((/* implicit */unsigned short) (signed char)-4)), ((unsigned short)28724))), (var_10)))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_4 [i_0] = min((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_9)) >= (var_7)))) << (((arr_0 [i_0]) - (1393416645)))))), (((((/* implicit */_Bool) ((unsigned int) 0ULL))) ? (arr_3 [i_0] [i_0]) : (((/* implicit */long long int) ((arr_1 [i_0]) & (((/* implicit */unsigned int) arr_0 [i_0]))))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned char i_1 = 4; i_1 < 20; i_1 += 3) 
        {
            arr_7 [i_0] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 201326592)))))));
            /* LoopSeq 2 */
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                /* LoopSeq 1 */
                for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        var_17 -= ((/* implicit */unsigned long long int) ((int) arr_13 [i_1 - 4] [i_1] [i_1] [i_1 - 3]));
                        var_18 = ((var_1) | ((+(-1LL))));
                        arr_14 [i_0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_4)) ? (4054324098U) : (4054324098U)))));
                        arr_15 [14] [i_1] [i_2] [6LL] [6LL] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) 2664625575U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2))))) : ((~(17592169267200ULL)))));
                    }
                    arr_16 [i_0] [i_1] [i_0] [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) (-(15478583097556228907ULL)));
                    var_19 = ((/* implicit */int) arr_6 [i_0]);
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 2; i_5 < 20; i_5 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((unsigned short) arr_8 [i_1 + 2] [(signed char)18] [i_1 - 2] [i_5 - 2]))));
                        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_5 + 1] [(unsigned char)14])) && (((/* implicit */_Bool) arr_3 [i_5 + 2] [(signed char)10])))))));
                    }
                    for (long long int i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((unsigned char) -201326615);
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 7345455520084640393LL)))))));
                        arr_24 [i_0] [(signed char)6] [i_0] [i_2] [(unsigned short)2] [i_6] = ((/* implicit */int) (((!(((/* implicit */_Bool) 18446726481540284417ULL)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_12)) | (((/* implicit */int) var_15))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_3] [i_2] [i_3]))) - (arr_18 [i_0] [i_1] [i_2] [i_3] [i_6])))));
                    }
                }
                /* LoopSeq 2 */
                for (long long int i_7 = 0; i_7 < 22; i_7 += 1) 
                {
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)22921)) ? (7343639140852222074ULL) : (((/* implicit */unsigned long long int) 387346641701838181LL))));
                    arr_28 [i_0] [i_1] [i_2] [i_7] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 2006366935652703151LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)166))) : (arr_1 [i_1 + 2])));
                    /* LoopSeq 3 */
                    for (signed char i_8 = 1; i_8 < 18; i_8 += 2) /* same iter space */
                    {
                        arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 17592169267200ULL)) || (((/* implicit */_Bool) arr_30 [i_1 + 2] [i_8 - 1]))));
                        arr_33 [(unsigned short)7] [i_1 - 2] [i_0] [(unsigned short)7] [2ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((3308653446U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_7] [i_7])))))) == (((/* implicit */int) ((_Bool) var_6)))));
                    }
                    for (signed char i_9 = 1; i_9 < 18; i_9 += 2) /* same iter space */
                    {
                        var_23 = ((/* implicit */signed char) (+(arr_5 [i_1 - 4])));
                        arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_10 [i_0] [1ULL]);
                        var_24 = ((-1LL) & (((/* implicit */long long int) arr_1 [i_9 + 3])));
                        var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned int) 18446744073709551598ULL)))));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 1) 
                    {
                        var_26 = ((((/* implicit */unsigned long long int) arr_13 [i_0] [i_2] [i_7] [i_10])) + (13085569517002745719ULL));
                        var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) var_9))));
                        var_28 -= ((/* implicit */long long int) ((unsigned short) arr_27 [i_0] [i_1 - 1] [i_2] [i_7]));
                        arr_41 [i_0] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) 3743033899U)) || (((/* implicit */_Bool) arr_3 [i_0] [i_0])))));
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 17592169267198ULL)) ? (3703364839919412525ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1)))))))));
                    }
                }
                for (long long int i_11 = 0; i_11 < 22; i_11 += 1) 
                {
                    var_30 = ((/* implicit */_Bool) (+(arr_43 [i_1 - 2] [i_1 + 2] [i_0] [i_1 + 1])));
                    /* LoopSeq 1 */
                    for (int i_12 = 0; i_12 < 22; i_12 += 3) 
                    {
                        var_31 = ((/* implicit */unsigned short) ((short) arr_20 [i_1 - 1] [i_1 - 1] [1ULL]));
                        arr_46 [i_0] [i_0] [i_0] [i_0] [i_0] [10LL] [i_0] = ((/* implicit */unsigned char) ((short) arr_3 [i_11] [i_0]));
                    }
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_14 = 3; i_14 < 19; i_14 += 1) 
                    {
                        var_32 = var_11;
                        var_33 ^= ((/* implicit */signed char) ((((unsigned int) var_0)) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_43 [i_0] [(unsigned char)20] [i_13] [i_14]))))))));
                    }
                    var_34 = ((/* implicit */long long int) var_3);
                }
                /* LoopSeq 1 */
                for (unsigned char i_15 = 0; i_15 < 22; i_15 += 3) 
                {
                    var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_25 [i_1 - 2] [i_1] [14LL])) ? (((/* implicit */int) arr_25 [i_1 + 1] [i_1] [18])) : (((/* implicit */int) arr_25 [i_1 - 3] [(_Bool)1] [20])))))));
                    var_36 = ((/* implicit */unsigned short) (unsigned char)152);
                    arr_55 [i_15] [21LL] [i_0] [i_15] = ((/* implicit */unsigned char) (-(18446744073709551615ULL)));
                }
            }
            for (long long int i_16 = 0; i_16 < 22; i_16 += 1) 
            {
                arr_60 [(_Bool)1] [i_0] [i_16] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))));
                var_37 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_59 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)90))) : (4607182418800017408ULL))) | (((/* implicit */unsigned long long int) ((unsigned int) var_14)))));
                /* LoopSeq 1 */
                for (unsigned short i_17 = 0; i_17 < 22; i_17 += 2) 
                {
                    arr_63 [i_0] [i_0] [i_16] [i_17] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */long long int) 4195201505U)) > (arr_62 [i_0] [i_1 + 1] [i_16]))));
                    var_38 = ((/* implicit */int) max((var_38), ((((_Bool)1) ? (((/* implicit */int) arr_9 [i_1 - 1] [i_17] [i_1 - 2])) : (((/* implicit */int) (unsigned short)18598))))));
                    var_39 = ((/* implicit */signed char) ((unsigned long long int) (~(551933408U))));
                }
            }
            arr_64 [i_0] [i_1 - 3] [i_0] = ((/* implicit */long long int) (((+(18446744073709551600ULL))) | (((/* implicit */unsigned long long int) 1905853385456100208LL))));
        }
        for (long long int i_18 = 0; i_18 < 22; i_18 += 4) 
        {
            var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) min((min((((/* implicit */long long int) ((((/* implicit */int) arr_49 [i_0] [i_0] [i_0] [i_18])) ^ (var_14)))), (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_13))))), (((/* implicit */long long int) (!(((1532399068) >= (((/* implicit */int) (_Bool)1))))))))))));
            arr_68 [i_0] = max((((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21468))) : (arr_20 [i_18] [i_18] [i_18]))))), (min((min((((/* implicit */long long int) 4195201508U)), (-1905853385456100208LL))), (((/* implicit */long long int) (((_Bool)1) || (((/* implicit */_Bool) var_3))))))));
            arr_69 [i_0] = ((/* implicit */unsigned short) min(((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_54 [i_0] [i_0] [i_0] [8U] [i_18])) : (((arr_35 [i_0] [i_0] [i_0] [i_18] [i_18] [i_18] [i_18]) + (((/* implicit */unsigned long long int) arr_50 [i_0] [10U] [i_0] [i_0] [i_18] [i_0] [i_18])))))), (((/* implicit */unsigned long long int) ((long long int) (signed char)-99)))));
        }
        for (unsigned long long int i_19 = 3; i_19 < 20; i_19 += 3) 
        {
            var_41 ^= ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_19 + 2] [i_19] [i_0] [(unsigned short)10] [i_0])) != (((/* implicit */int) arr_17 [i_19 - 1] [i_19 - 1] [i_0] [(unsigned short)10] [i_19]))))), (-1118093279122604657LL)));
            arr_73 [i_0] [i_0] = ((long long int) min((arr_6 [i_0]), ((_Bool)1)));
        }
        for (int i_20 = 0; i_20 < 22; i_20 += 3) 
        {
            var_42 = ((/* implicit */unsigned long long int) min((var_42), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((3306201363665695858LL), (((/* implicit */long long int) ((arr_66 [i_20] [i_20] [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8475))))))))))))));
            /* LoopSeq 1 */
            for (short i_21 = 0; i_21 < 22; i_21 += 1) 
            {
                var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */long long int) (unsigned char)232)), (2056246007128163452LL))))) ? (((/* implicit */unsigned long long int) (+(min((-5), (-1532399096)))))) : (((unsigned long long int) 9625610245253779516ULL))));
                var_44 -= ((/* implicit */int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)24658))))), (min((var_4), (6271318780695973846LL)))));
                arr_80 [i_0] = ((/* implicit */int) 4222869952U);
                var_45 = ((/* implicit */long long int) var_11);
            }
        }
    }
    for (signed char i_22 = 1; i_22 < 13; i_22 += 1) 
    {
        var_46 += ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) > (((/* implicit */int) (unsigned short)0))))), (((((/* implicit */_Bool) 12139399893699940209ULL)) ? (((/* implicit */unsigned long long int) 4222869952U)) : (13839561654909534213ULL))))) != (((/* implicit */unsigned long long int) (-(2481141310U))))));
        /* LoopSeq 1 */
        for (short i_23 = 0; i_23 < 14; i_23 += 3) 
        {
            var_47 = ((unsigned short) (!(((/* implicit */_Bool) (+(32767U))))));
            var_48 += ((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_26 [(unsigned char)5] [i_22] [i_22 - 1] [(signed char)4])) << (((((/* implicit */int) (unsigned short)40878)) - (40873))))));
            var_49 = ((((/* implicit */unsigned int) ((/* implicit */int) ((short) max((27ULL), (((/* implicit */unsigned long long int) -3257492105860829942LL))))))) - (((((63207283U) << (15ULL))) & (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)17))) - (arr_13 [i_22 - 1] [(unsigned short)11] [i_23] [i_23]))))));
            var_50 = ((/* implicit */unsigned short) min(((signed char)-125), (((signed char) (!(((/* implicit */_Bool) var_6)))))));
        }
        var_51 -= ((/* implicit */_Bool) (((((!(((/* implicit */_Bool) arr_17 [i_22] [2LL] [i_22] [10LL] [i_22])))) || (((/* implicit */_Bool) 6307344180009611404ULL)))) ? (((((/* implicit */_Bool) arr_29 [i_22 + 1] [i_22 + 1] [i_22] [i_22] [i_22 + 1] [i_22] [i_22])) ? (((var_8) + (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_87 [i_22])))))) : (((/* implicit */long long int) ((/* implicit */int) ((((5528988217637618322ULL) & (((/* implicit */unsigned long long int) 3809089814076170695LL)))) <= (((((/* implicit */_Bool) arr_59 [i_22 - 1])) ? (((/* implicit */unsigned long long int) -1)) : (6307344180009611407ULL)))))))));
    }
}
