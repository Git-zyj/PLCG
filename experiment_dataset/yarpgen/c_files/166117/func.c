/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166117
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
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (min((((/* implicit */int) var_10)), (var_9))) : (((/* implicit */int) (!(((/* implicit */_Bool) -1)))))))) : (min((((/* implicit */long long int) -17)), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_1)) : (var_2)))))));
    var_12 = ((/* implicit */_Bool) var_8);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    {
                        arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_5 [i_0] [i_0] [i_0]);
                        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) var_9))));
                        arr_10 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) -136835780)) ? (((/* implicit */int) (unsigned char)100)) : (((/* implicit */int) (short)-24180)));
                        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0 + 1] [i_0]))));
        arr_12 [i_0] = ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))))) ? (-136835776) : (38));
    }
    for (unsigned short i_4 = 4; i_4 < 20; i_4 += 4) 
    {
        /* LoopSeq 4 */
        for (int i_5 = 0; i_5 < 23; i_5 += 3) 
        {
            arr_18 [i_4] [i_4] = max((((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (short)-26835)) ? (arr_17 [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7))))) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_4 + 3] [i_5]))))), (((/* implicit */long long int) (-(1487732214)))));
            /* LoopSeq 3 */
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
            {
                arr_21 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((_Bool) (unsigned short)2282)) ? (var_7) : (arr_19 [i_4] [i_4] [i_4] [i_4]))))));
                arr_22 [i_4] [i_6] [i_6] [i_6] = ((/* implicit */long long int) ((min((-1487732207), (((/* implicit */int) arr_13 [i_6 - 1] [i_4 + 3])))) / ((+((+(-3)))))));
            }
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 23; i_8 += 4) 
                {
                    for (long long int i_9 = 0; i_9 < 23; i_9 += 1) 
                    {
                        {
                            arr_31 [i_4] [i_4] [i_4] [i_4] [i_4] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((-(((/* implicit */int) arr_16 [i_5] [i_5] [i_5]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)20008))))) : (((int) arr_16 [i_4] [i_7 - 1] [i_4]))));
                            var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_4] [i_4] [i_7] [i_4])) ? (arr_23 [i_4] [i_4] [i_7] [i_7]) : (arr_23 [i_4] [i_4] [i_7] [i_4])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -4)) ? (-136835780) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) arr_23 [i_4] [i_4] [i_7] [i_4])) ? (arr_23 [i_4] [i_4] [i_7] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20008)))))));
                            arr_32 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = arr_26 [i_4] [i_4] [i_4] [i_4];
                            arr_33 [i_4] [i_4] [i_4] [i_4] [i_4] [i_7] [i_4] = ((/* implicit */unsigned short) ((max((arr_19 [i_4] [i_5] [i_4] [i_5]), (arr_29 [i_4] [i_4] [i_4] [i_7] [i_4]))) > (var_7)));
                        }
                    } 
                } 
                arr_34 [i_7] [i_7] [i_7] = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 23; i_10 += 2) 
                {
                    for (short i_11 = 0; i_11 < 23; i_11 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) arr_26 [i_4] [i_4] [i_4] [i_4]);
                            arr_40 [i_7] [i_7] [i_7] = ((/* implicit */int) max((((/* implicit */long long int) -136835799)), (((((/* implicit */_Bool) (unsigned char)229)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -30)))))) : ((-9223372036854775807LL - 1LL))))));
                            var_17 = ((/* implicit */short) max((-6389248300980432825LL), (((/* implicit */long long int) -136835780))));
                            arr_41 [i_4] [i_4] [i_4] [i_4] [i_7] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 144115188075855871LL)) ? (-144115188075855872LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)184))))) - (arr_23 [i_7] [i_7] [i_7] [i_4 - 2])));
                        }
                    } 
                } 
                var_18 *= ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_23 [i_4 - 3] [i_4] [i_4] [i_4 - 3])))) && (((/* implicit */_Bool) -2147483645))));
            }
            /* vectorizable */
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) /* same iter space */
            {
                arr_44 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_36 [i_4] [i_4] [i_4] [i_4]))));
                arr_45 [i_5] [i_5] = ((/* implicit */int) ((arr_26 [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12 - 1]) % (((/* implicit */long long int) arr_30 [i_4 + 2]))));
            }
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 23; i_13 += 4) 
            {
                for (short i_14 = 0; i_14 < 23; i_14 += 3) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_13])) ? (((/* implicit */int) arr_48 [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_38 [i_4] [i_4] [i_4] [i_4] [i_4]))))) ? ((+(3))) : (arr_30 [i_4])))));
                            var_20 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_47 [i_4] [i_4] [i_13]) / (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_4 + 2] [i_4] [i_4] [i_4 - 1] [i_4])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_30 [i_4 + 1])))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_42 [i_4])) && (((/* implicit */_Bool) var_1))))), (arr_49 [i_4] [i_4] [i_4] [i_4] [i_4 - 2])))));
                            arr_52 [i_15] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_37 [i_4] [i_15] [i_15] [i_4] [i_15]))) - (((((((/* implicit */_Bool) arr_17 [i_4] [i_4])) ? (var_3) : (((/* implicit */long long int) var_1)))) + (((((/* implicit */long long int) ((/* implicit */int) var_0))) ^ (-2039825913533568809LL)))))));
                        }
                    } 
                } 
            } 
            arr_53 [i_4] [i_4] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (short)3585)) ? ((-(arr_49 [i_4] [i_4] [i_4] [i_4] [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) ((short) (_Bool)0)))))), ((+(max((arr_47 [i_4] [i_4] [i_4]), (arr_26 [i_4] [i_4] [i_4] [i_4])))))));
        }
        for (int i_16 = 0; i_16 < 23; i_16 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_17 = 2; i_17 < 20; i_17 += 4) 
            {
                for (long long int i_18 = 0; i_18 < 23; i_18 += 4) 
                {
                    {
                        arr_61 [i_4] [i_4] [i_4] [i_4] [i_4] |= (+(min((max((((/* implicit */long long int) var_8)), (arr_23 [i_4] [i_4] [i_17] [i_4]))), (((/* implicit */long long int) arr_56 [i_4] [i_4])))));
                        /* LoopSeq 2 */
                        for (unsigned short i_19 = 0; i_19 < 23; i_19 += 2) /* same iter space */
                        {
                            arr_66 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_4] [i_4] [i_17] [i_4 - 3])) ? (arr_23 [i_4] [i_4] [i_17] [i_4 - 3]) : (min((((/* implicit */long long int) var_4)), (arr_55 [i_4] [i_4] [i_4])))));
                            arr_67 [i_16] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -17)) ? (((/* implicit */int) (short)8192)) : (((/* implicit */int) (_Bool)1))));
                            var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_59 [i_17 - 2] [i_17 - 2] [i_17 - 2] [i_17 - 2] [i_17 - 2])) ? (((int) var_1)) : (-136835780)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)5)) ? (((/* implicit */int) (unsigned char)230)) : (38)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) ((short) -19)))))) : (max((((/* implicit */long long int) 38)), (arr_51 [i_17 - 2] [i_4 - 3] [i_4 - 3]))));
                        }
                        for (unsigned short i_20 = 0; i_20 < 23; i_20 += 2) /* same iter space */
                        {
                            arr_70 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */int) ((2305838611167182848LL) - (((/* implicit */long long int) ((/* implicit */int) (short)30192)))));
                            var_22 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) ((arr_29 [i_4] [i_4] [i_4] [i_16] [i_4]) & (var_7)))) ? (min((((/* implicit */long long int) -2128678303)), (var_3))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)247))))))));
                        }
                    }
                } 
            } 
            var_23 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (short)-32179)) - (((/* implicit */int) (unsigned short)36952))));
            var_24 = ((/* implicit */unsigned short) var_7);
            arr_71 [i_16] = 136835783;
        }
        for (long long int i_21 = 1; i_21 < 20; i_21 += 1) 
        {
            arr_74 [i_21] = ((/* implicit */int) arr_38 [i_4] [i_4] [i_4] [i_4] [i_4]);
            /* LoopSeq 1 */
            for (unsigned short i_22 = 0; i_22 < 23; i_22 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        {
                            var_25 = (((!(((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)249)), ((short)-9412)))))) ? (((/* implicit */long long int) min((-1), (arr_30 [i_4])))) : (max((((/* implicit */long long int) var_9)), (arr_49 [i_4] [i_4] [i_4 - 2] [i_4] [i_4]))));
                            var_26 = arr_55 [i_21] [i_21] [i_21];
                            var_27 = ((/* implicit */_Bool) (((-(((((/* implicit */_Bool) 3)) ? (arr_17 [i_4] [i_4]) : (arr_51 [i_4] [i_4] [i_4]))))) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        }
                    } 
                } 
                arr_81 [i_4] [i_21] [i_21] [i_4] = ((/* implicit */short) min((((/* implicit */int) (unsigned char)249)), (((((/* implicit */_Bool) ((4294967295LL) * (((/* implicit */long long int) 2147483645))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_54 [i_4 + 3] [i_4 + 3]))))));
                /* LoopNest 2 */
                for (int i_25 = 0; i_25 < 23; i_25 += 3) 
                {
                    for (int i_26 = 0; i_26 < 23; i_26 += 2) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned char) var_1);
                            arr_87 [i_4] [i_4] [i_4] [i_21] = ((/* implicit */long long int) arr_27 [i_4] [i_4] [i_4] [i_4]);
                            var_29 = max((max((arr_65 [i_4 - 3] [i_4 - 1] [i_4 + 1]), (arr_65 [i_4 - 3] [i_4 - 1] [i_4 + 1]))), (((/* implicit */int) min(((short)-9412), (((/* implicit */short) max(((_Bool)1), ((_Bool)1))))))));
                        }
                    } 
                } 
                var_30 = (-(3804495098006116340LL));
            }
            var_31 |= ((/* implicit */_Bool) var_6);
        }
        for (long long int i_27 = 0; i_27 < 23; i_27 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_28 = 0; i_28 < 23; i_28 += 2) 
            {
                var_32 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_85 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])) ? (arr_46 [i_4] [i_4] [i_4] [i_4]) : (((/* implicit */int) var_0))))) ? (arr_26 [i_4] [i_4] [i_4] [i_4]) : (var_3)))) ? (((((/* implicit */_Bool) (short)-32163)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)150))) : (2382511411526232486LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_24 [i_4] [i_4])) && (((/* implicit */_Bool) var_7))))))));
                arr_92 [i_28] [i_28] [i_28] = ((/* implicit */short) ((int) max((((/* implicit */int) arr_69 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1])), (((((/* implicit */_Bool) 3804495098006116340LL)) ? (((/* implicit */int) (unsigned short)62299)) : (136835779))))));
                var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) arr_68 [i_4] [i_4] [i_4] [i_4] [i_4]))));
                /* LoopNest 2 */
                for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                {
                    for (int i_30 = 4; i_30 < 22; i_30 += 1) 
                    {
                        {
                            var_34 = ((/* implicit */long long int) var_9);
                            var_35 = ((/* implicit */_Bool) arr_78 [i_4] [i_29] [i_29] [i_4] [i_4]);
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (unsigned short i_31 = 0; i_31 < 23; i_31 += 1) 
            {
                for (int i_32 = 0; i_32 < 23; i_32 += 2) 
                {
                    {
                        var_36 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) ((unsigned char) var_0))) * ((-(((/* implicit */int) (short)3609)))))));
                        var_37 = max((((((/* implicit */_Bool) ((var_1) | (((/* implicit */int) arr_86 [i_4] [i_4] [i_4] [i_4] [i_32] [i_4] [i_4]))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)21232)) << (((((/* implicit */int) (unsigned short)44304)) - (44304)))))) : (var_2))), (var_2));
                    }
                } 
            } 
            var_38 = ((/* implicit */int) ((long long int) ((short) arr_47 [i_4] [i_4] [i_4 - 4])));
            var_39 ^= ((/* implicit */short) ((_Bool) ((arr_97 [i_4 - 2] [i_4] [i_4] [i_4] [i_4 + 3] [i_4]) / (arr_97 [i_4 + 1] [i_4 + 2] [i_4] [i_4] [i_4 + 2] [i_4]))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_33 = 0; i_33 < 23; i_33 += 4) 
        {
            var_40 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -5446242014439245547LL))));
            arr_109 [i_4] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)21231)) - (((/* implicit */int) arr_99 [i_4] [i_4] [i_4] [i_4 + 1] [i_4]))));
            arr_110 [i_33] [i_33] = ((/* implicit */unsigned char) ((short) var_0));
        }
        /* vectorizable */
        for (long long int i_34 = 1; i_34 < 20; i_34 += 4) 
        {
            arr_113 [i_34] [i_34] = ((/* implicit */int) (!(((((/* implicit */int) var_10)) != (arr_101 [i_4] [i_4] [i_4])))));
            /* LoopNest 2 */
            for (short i_35 = 0; i_35 < 23; i_35 += 4) 
            {
                for (long long int i_36 = 0; i_36 < 23; i_36 += 1) 
                {
                    {
                        var_41 = ((/* implicit */long long int) ((unsigned char) ((((arr_58 [i_4] [i_4]) + (9223372036854775807LL))) << (((((/* implicit */int) (short)3566)) - (3566))))));
                        var_42 = ((/* implicit */short) 0LL);
                        var_43 *= ((_Bool) arr_72 [i_4]);
                    }
                } 
            } 
            var_44 = ((/* implicit */unsigned short) min((var_44), (((/* implicit */unsigned short) (-(arr_84 [i_4] [i_4] [i_4] [i_4] [i_4]))))));
            arr_118 [i_4] [i_34] = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_69 [i_4 + 3] [i_4 + 3] [i_4 + 3] [i_4 + 3] [i_34 + 1] [i_4 + 3] [i_4 + 3])) : (((/* implicit */int) ((short) -1LL)))));
        }
        arr_119 [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) (short)-3575)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28585))) : (-6639764642637695078LL)));
    }
}
