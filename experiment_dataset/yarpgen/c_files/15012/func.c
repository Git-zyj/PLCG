/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15012
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
    var_20 = ((/* implicit */short) min((((/* implicit */long long int) (-(((int) 2138210336U))))), (var_11)));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] |= ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0] [i_0])) - (((/* implicit */int) arr_0 [i_0] [i_0]))));
        var_21 = ((/* implicit */int) arr_0 [i_0] [i_0]);
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0] [i_0]))))) : (((((/* implicit */unsigned long long int) 8405810493066732839LL)) * (18446744073709551602ULL)))));
    }
    for (int i_1 = 0; i_1 < 25; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? ((+(((/* implicit */int) ((short) (short)32744))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (16092672506153319430ULL) : (2354071567556232192ULL)))) ? (min((arr_3 [i_1]), (((/* implicit */int) arr_5 [i_1])))) : (arr_3 [i_1])))));
        var_23 = ((/* implicit */long long int) arr_4 [21LL]);
        arr_7 [i_1] [i_1] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((665160690302191823ULL) * (22ULL)))))))));
        arr_8 [21U] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)13607))) | (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_3)) > (1914183152U)))), (max((11090723185238482682ULL), (((/* implicit */unsigned long long int) arr_5 [i_1]))))))));
    }
    for (int i_2 = 0; i_2 < 25; i_2 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (int i_3 = 3; i_3 < 23; i_3 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_4 = 0; i_4 < 25; i_4 += 1) 
            {
                arr_17 [i_4] [i_4] [i_3] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) (short)32754)))));
                /* LoopSeq 3 */
                for (long long int i_5 = 0; i_5 < 25; i_5 += 1) 
                {
                    var_24 &= ((/* implicit */unsigned int) arr_19 [i_2] [i_3] [i_2]);
                    arr_21 [i_5] [i_2] [i_2] [i_2] |= ((/* implicit */int) ((arr_20 [i_3 + 2] [i_2] [i_3 + 2] [i_3 - 3] [i_4]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8442)))));
                }
                for (int i_6 = 1; i_6 < 24; i_6 += 2) /* same iter space */
                {
                    arr_26 [i_6 - 1] [i_6] [7] [i_3] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_2])) ? (arr_16 [i_4] [i_6 + 1] [i_3 - 2]) : (((16777184) & (var_3)))));
                    arr_27 [i_2] [i_3] [i_3] [(_Bool)1] [(_Bool)1] [16] = 14322502822251515727ULL;
                }
                for (int i_7 = 1; i_7 < 24; i_7 += 2) /* same iter space */
                {
                    arr_31 [i_4] [i_3] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */short) (~(((/* implicit */int) arr_11 [i_2] [i_2] [16]))));
                    var_25 -= ((((/* implicit */_Bool) arr_30 [(_Bool)1] [i_2] [i_7] [i_2] [i_7 - 1] [i_7])) && (((/* implicit */_Bool) arr_30 [i_4] [i_4] [i_4] [i_2] [i_7 + 1] [i_7])));
                }
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                var_26 = ((/* implicit */unsigned long long int) arr_23 [i_3]);
                var_27 -= ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)11901)) >= (((/* implicit */int) (short)1))))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (576425567931334656ULL))))), (((/* implicit */unsigned long long int) ((_Bool) (unsigned short)30446)))));
                /* LoopSeq 2 */
                for (signed char i_9 = 0; i_9 < 25; i_9 += 3) /* same iter space */
                {
                    var_28 = ((/* implicit */int) max((((long long int) arr_25 [i_2] [i_3])), (((/* implicit */long long int) (+(((/* implicit */int) arr_23 [i_3])))))));
                    var_29 = ((short) ((((/* implicit */_Bool) arr_28 [i_2] [i_2] [i_8] [i_9])) ? (((/* implicit */int) arr_28 [i_9] [i_8] [i_8] [i_9])) : (((/* implicit */int) arr_28 [i_2] [i_3] [i_8] [i_9]))));
                    var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) arr_3 [i_2]))) || (((/* implicit */_Bool) ((int) (~(1849522264U)))))));
                }
                /* vectorizable */
                for (signed char i_10 = 0; i_10 < 25; i_10 += 3) /* same iter space */
                {
                    arr_41 [i_10] [i_3] [i_3] [i_2] = ((/* implicit */int) (-(((((/* implicit */_Bool) (short)2455)) ? (arr_30 [i_10] [i_10] [i_10] [i_3] [i_10] [i_10]) : (((/* implicit */unsigned int) var_1))))));
                    /* LoopSeq 3 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_45 [i_2] [i_3] [i_8] [i_3] [i_11] = ((/* implicit */int) (-(2354071567556232160ULL)));
                        arr_46 [i_2] [i_2] [i_8] [i_10] [i_3] = ((/* implicit */unsigned long long int) ((_Bool) arr_44 [i_3] [i_3] [i_3 - 2] [i_3] [i_3] [i_3]));
                        var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_2] [i_10] [i_8] [i_3 - 2] [i_2] [i_2]))) % (((((/* implicit */_Bool) (short)-5814)) ? (9ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2450))))))))));
                        var_32 = ((/* implicit */_Bool) arr_15 [i_3 - 1] [i_8] [i_8] [1]);
                    }
                    for (int i_12 = 0; i_12 < 25; i_12 += 1) 
                    {
                        var_33 = ((/* implicit */int) ((unsigned int) (unsigned char)177));
                        arr_49 [i_3] [i_10] [i_8] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) (+(2354071567556232189ULL)))) && (((/* implicit */_Bool) arr_32 [i_8] [i_12]))));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 25; i_13 += 3) 
                    {
                        arr_53 [i_3] = ((/* implicit */unsigned char) ((((var_19) % (arr_30 [i_2] [i_2] [i_8] [i_3] [i_13] [i_3]))) << (((/* implicit */int) arr_38 [i_2] [i_2] [i_2] [i_2] [i_10] [i_13]))));
                        var_34 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) -587207395)) ? (65535) : (((/* implicit */int) (short)-16360))))));
                        arr_54 [i_3] [i_8] [i_8] [i_10] [i_13] [i_8] [i_13] = ((/* implicit */short) ((unsigned short) arr_25 [i_3 + 1] [i_3 - 2]));
                        arr_55 [i_8] [i_8] [i_8] [i_3] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_3 - 3] [i_3 + 1])) << (((/* implicit */int) arr_9 [i_3 - 3] [i_3 + 1]))));
                    }
                    /* LoopSeq 3 */
                    for (int i_14 = 0; i_14 < 25; i_14 += 1) /* same iter space */
                    {
                        var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_3 + 1] [i_3 + 1] [(short)10])))))));
                        var_36 = ((/* implicit */unsigned int) arr_15 [1] [i_10] [i_8] [i_2]);
                        arr_59 [i_3] [i_3] = ((/* implicit */int) var_12);
                    }
                    for (int i_15 = 0; i_15 < 25; i_15 += 1) /* same iter space */
                    {
                        var_37 = ((/* implicit */unsigned int) var_14);
                        var_38 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_47 [i_3 - 3]))));
                    }
                    for (int i_16 = 0; i_16 < 25; i_16 += 1) /* same iter space */
                    {
                        arr_65 [i_2] [i_2] [i_8] [i_3] [i_16] = ((/* implicit */signed char) ((short) ((260096U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [(short)14] [i_10]))))));
                        arr_66 [i_3] [i_3] [i_8] [1ULL] [i_8] [i_2] [i_8] = ((/* implicit */int) var_17);
                        var_39 |= ((/* implicit */unsigned short) var_11);
                        var_40 = ((/* implicit */unsigned long long int) max((var_40), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)5609)) : (arr_12 [i_2]))))))));
                    }
                }
            }
            var_41 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) (short)19947))) ? (((/* implicit */int) ((short) arr_32 [i_2] [i_3]))) : (((((/* implicit */int) arr_23 [i_3])) % (((/* implicit */int) arr_58 [i_2] [i_2] [i_3] [i_2] [i_3] [i_3] [i_3]))))))) == (((min((3495822633937522667ULL), (((/* implicit */unsigned long long int) arr_63 [i_2] [i_3] [i_2] [i_2] [i_3] [i_3] [i_3])))) & (((/* implicit */unsigned long long int) ((int) arr_43 [i_2] [i_3] [i_3] [i_2] [i_3] [i_3] [i_3])))))));
            var_42 |= ((/* implicit */int) min((((unsigned int) arr_39 [i_2] [i_3 + 1])), (((/* implicit */unsigned int) var_18))));
            arr_67 [i_3] = ((/* implicit */signed char) arr_36 [i_2] [i_2] [i_2]);
            arr_68 [i_3] [i_3 - 1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_14)) : (arr_18 [i_3 + 1] [i_3 - 2] [i_3] [i_3 - 2] [i_3 - 2])))) ? ((-(var_2))) : ((+(((/* implicit */int) ((unsigned char) arr_23 [i_3])))))));
        }
        /* vectorizable */
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            var_43 = ((/* implicit */_Bool) ((long long int) arr_34 [i_17] [i_2] [i_17] [i_17]));
            var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) 18439216434805641205ULL))));
            arr_71 [i_2] [i_17] [i_17] = ((/* implicit */signed char) ((var_15) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2])))));
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 25; i_18 += 2) 
            {
                for (int i_19 = 0; i_19 < 25; i_19 += 1) 
                {
                    {
                        var_45 = (~(arr_76 [i_2] [i_17] [(signed char)20] [i_2] [i_19]));
                        arr_79 [i_19] [i_18] [i_17] [i_17] [i_2] = arr_13 [i_17] [i_19] [i_18];
                        var_46 = ((/* implicit */_Bool) arr_30 [i_2] [i_17] [i_17] [i_18] [i_18] [i_19]);
                    }
                } 
            } 
        }
        arr_80 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_39 [i_2] [i_2])), (var_7)))) >> (((min((((/* implicit */unsigned int) var_0)), (arr_30 [i_2] [i_2] [i_2] [i_2] [2] [i_2]))) - (24562U)))))) || (((/* implicit */_Bool) 65565))));
    }
    var_47 = ((/* implicit */int) (-9223372036854775807LL - 1LL));
    var_48 = ((/* implicit */unsigned long long int) min((((unsigned int) min((4317948459528407795ULL), (((/* implicit */unsigned long long int) (signed char)-40))))), (((/* implicit */unsigned int) var_7))));
}
